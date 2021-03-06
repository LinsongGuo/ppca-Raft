#include "Leader.h"

namespace Raft {
  Leader::Leader(std::shared_ptr<RaftServerInfo> _info, 
    std::shared_ptr<RaftServerCluster> _cluster, 
    std::shared_ptr<Rpc::RaftRpcClient> _rpcClient,
    std::shared_ptr<Transformer> _transformer,
    std::fstream &_logScanner):
    Role(_info, _cluster, _rpcClient, _transformer, _logScanner) {;} 
    
  bool Leader::put(const std::string &key, const std::string &args) {
    info->push(key, args, info->currentTerm);
    //fout << getTime() << " put " << key << ' ' << args << ' ' << info->lastLogIndex() << std::endl;
    size_t siz = cluster->size;
    std::vector<boost::future<AppendEntriesReply> > appendFuture;
    for(size_t i = 0; i < siz; ++i) {
      if(i == cluster->localServer) continue;
      Raft::Rpc::RpcAppendEntriesRequest rpcRequest;
      rpcRequest.set_leaderid(cluster->localId);
      rpcRequest.set_term(info->currentTerm);
      rpcRequest.set_prevlogindex(info->nextIndex[i] - 1);
      rpcRequest.set_prevlogterm(info->replicatedEntries[info->nextIndex[i] - 1].term);
      rpcRequest.set_leadercommit(info->commitIndex);
      for(size_t j = info->replicatedEntries.size() - 1; j >= info->nextIndex[i]; --j) {
        Raft::Rpc::Entry tmp;
        tmp.set_key(info->replicatedEntries[j].key);
        tmp.set_args(info->replicatedEntries[j].args);
        tmp.set_term(info->replicatedEntries[j].term);
        *rpcRequest.add_entries() = std::move(tmp);
      }

      appendFuture.push_back(boost::async(boost::launch::async, [this, i, rpcRequest]() mutable -> AppendEntriesReply {
        Timer startTime = getTime();
        do {
          std::pair<bool, AppendEntriesReply> result = rpcClient->sendAppendEntries(i, rpcRequest);
          if(result.first) {
            if(result.second.success) {
              info->nextIndex[i] = info->replicatedEntries.size();
              info->matchIndex[i] = info->nextIndex[i] - 1;
              return AppendEntriesReply(true, result.second.term);
            }
            else {
              if(result.second.term > rpcRequest.term()) {
                return AppendEntriesReply(false, result.second.term);
              } 
              if(rpcRequest.prevlogindex() > 0) {
                Index prevLogIndex = rpcRequest.prevlogindex();
                Raft::Rpc::Entry tmp;
                tmp.set_key(info->replicatedEntries[prevLogIndex].key);
                tmp.set_args(info->replicatedEntries[prevLogIndex].args);
                tmp.set_term(info->replicatedEntries[prevLogIndex].term);
                *rpcRequest.add_entries() = std::move(tmp);
                info->nextIndex[i]--;
                rpcRequest.set_prevlogindex(prevLogIndex - 1);
                rpcRequest.set_prevlogterm(info->replicatedEntries[prevLogIndex - 1].term);  
              }
            }
          }
        } while(getTime() <= startTime + cluster->appendTimeout);
        return AppendEntriesReply(false, invalidTerm);
      }));
    }

    std::vector<Index> matchIndexes;
    size_t getAppends = 1, nowId = 0;
    for(size_t i = 0; i < siz; ++i) {
      if(i == cluster->localServer) continue;
      AppendEntriesReply result = appendFuture[nowId++].get();
      if(result.success) {
        getAppends++;
        if(info->matchIndex[i] < info->replicatedEntries.size() 
          && info->replicatedEntries[info->matchIndex[i]].term == info->currentTerm) {
          matchIndexes.push_back(info->matchIndex[i]);
        }
      }
      else if(result.term > info->currentTerm) {
        heartbeatThread.interrupt();
        transformer->Transform(RaftServerRole::leader, RaftServerRole::follower, result.term);
        return false;
      }
    }
    sort(matchIndexes.begin(), matchIndexes.end(), [](Index x, Index y)->bool{return x > y;});
    if(siz == 1) {
      info->commitIndex = info->replicatedEntries.size() - 1;
    }
    else if((siz >> 1) - 1 < matchIndexes.size()) {
      info->commitIndex = matchIndexes[(siz >> 1) - 1];
    } 
    while(info->lastApplied < info->commitIndex) {
      ++info->lastApplied;
      auto &tmp = info->replicatedEntries[info->lastApplied];
      info->appliedEntries[tmp.key] = tmp.args;
      logScanner << tmp.key << ' ' << tmp.args << ' ' << tmp.term << std::endl; 
    }
    return info->replicatedEntries.size() - 1 == info->commitIndex;
  }

  std::pair<bool, std::string> Leader::get(const std::string &key) {
    if(info->appliedEntries.count(key)) return std::make_pair(true, info->appliedEntries[key]);
    return std::make_pair(true, notFound);
  }

  RequestVoteReply Leader::respondRequestVote(const RequestVoteRequest &request) {
    if(request.term > info->currentTerm) {
      heartbeatThread.interrupt();
      transformer->Transform(RaftServerRole::leader, RaftServerRole::follower, request.term);
    }
    return RequestVoteReply(false, info->currentTerm);
  }

  AppendEntriesReply Leader::respondHeartbeat(const AppendEntriesRequest &request) {
    if(request.term > info->currentTerm) {
      heartbeatThread.interrupt();
      transformer->Transform(RaftServerRole::leader, RaftServerRole::follower, request.term);
    }
    return AppendEntriesReply(false, info->currentTerm);
  }

  AppendEntriesReply Leader::respondAppendEntries(const Raft::Rpc::RpcAppendEntriesRequest *request) {
    if(request->term() > info->currentTerm) {
      heartbeatThread.interrupt();
      transformer->Transform(RaftServerRole::leader, RaftServerRole::follower, request->term());
    }
    return AppendEntriesReply(false, info->currentTerm);
  }

  void Leader::init(Term currentTerm) {
    info->currentTerm = currentTerm;
    info->votedFor = invalidServerId;
    for(size_t i = 0; i < cluster->size; ++i) {
      info->nextIndex[i] = info->replicatedEntries.size();
      info->matchIndex[i] = 0;
    }
    
    std::cerr << getTime() <<' '<<cluster->localId << " becomes a leader, currentTerm = " << info->currentTerm << std::endl;
    //fout << getTime() <<' '<<cluster->localId << " becomes a leader, currentTerm = " << info->currentTerm << std::endl;

    Timer heartbeatTimeout = cluster->heartbeatTimeout;
    heartbeatThread.interrupt();
    heartbeatThread.join();
    heartbeatThread = boost::thread([this, heartbeatTimeout]{
      while(true) {
        try{
          boost::this_thread::sleep_for(boost::chrono::milliseconds(heartbeatTimeout));
          AppendEntriesRequest request(cluster->localId, info->currentTerm, invalidTerm, invalidIndex, info->commitIndex);
          std::pair<RaftServerRole, Term> result = rpcClient->sendHeartbeats(request);
          if(result.first == RaftServerRole::follower) {
            transformer->Transform(RaftServerRole::leader, RaftServerRole::follower, result.second);
            return;
          }
        }
        catch(boost::thread_interrupted &e) {
          return;
        }       
      }
    });    
  }
}