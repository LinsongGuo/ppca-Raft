// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: External.proto
#ifndef GRPC_External_2eproto__INCLUDED
#define GRPC_External_2eproto__INCLUDED

#include "External.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc_impl {
class CompletionQueue;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc_impl

namespace grpc {
namespace experimental {
template <typename RequestT, typename ResponseT>
class MessageAllocator;
}  // namespace experimental
}  // namespace grpc

namespace Raft {

class External final {
 public:
  static constexpr char const* service_full_name() {
    return "Raft.External";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Put(::grpc::ClientContext* context, const ::Raft::PutRequest& request, ::Raft::PutReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Raft::PutReply>> AsyncPut(::grpc::ClientContext* context, const ::Raft::PutRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Raft::PutReply>>(AsyncPutRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Raft::PutReply>> PrepareAsyncPut(::grpc::ClientContext* context, const ::Raft::PutRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Raft::PutReply>>(PrepareAsyncPutRaw(context, request, cq));
    }
    virtual ::grpc::Status Get(::grpc::ClientContext* context, const ::Raft::GetRequest& request, ::Raft::GetReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Raft::GetReply>> AsyncGet(::grpc::ClientContext* context, const ::Raft::GetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Raft::GetReply>>(AsyncGetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Raft::GetReply>> PrepareAsyncGet(::grpc::ClientContext* context, const ::Raft::GetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::Raft::GetReply>>(PrepareAsyncGetRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void Put(::grpc::ClientContext* context, const ::Raft::PutRequest* request, ::Raft::PutReply* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Put(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Raft::PutReply* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Put(::grpc::ClientContext* context, const ::Raft::PutRequest* request, ::Raft::PutReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void Put(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Raft::PutReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void Get(::grpc::ClientContext* context, const ::Raft::GetRequest* request, ::Raft::GetReply* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Get(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Raft::GetReply* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Get(::grpc::ClientContext* context, const ::Raft::GetRequest* request, ::Raft::GetReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void Get(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Raft::GetReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Raft::PutReply>* AsyncPutRaw(::grpc::ClientContext* context, const ::Raft::PutRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Raft::PutReply>* PrepareAsyncPutRaw(::grpc::ClientContext* context, const ::Raft::PutRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Raft::GetReply>* AsyncGetRaw(::grpc::ClientContext* context, const ::Raft::GetRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::Raft::GetReply>* PrepareAsyncGetRaw(::grpc::ClientContext* context, const ::Raft::GetRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Put(::grpc::ClientContext* context, const ::Raft::PutRequest& request, ::Raft::PutReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Raft::PutReply>> AsyncPut(::grpc::ClientContext* context, const ::Raft::PutRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Raft::PutReply>>(AsyncPutRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Raft::PutReply>> PrepareAsyncPut(::grpc::ClientContext* context, const ::Raft::PutRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Raft::PutReply>>(PrepareAsyncPutRaw(context, request, cq));
    }
    ::grpc::Status Get(::grpc::ClientContext* context, const ::Raft::GetRequest& request, ::Raft::GetReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Raft::GetReply>> AsyncGet(::grpc::ClientContext* context, const ::Raft::GetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Raft::GetReply>>(AsyncGetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Raft::GetReply>> PrepareAsyncGet(::grpc::ClientContext* context, const ::Raft::GetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::Raft::GetReply>>(PrepareAsyncGetRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void Put(::grpc::ClientContext* context, const ::Raft::PutRequest* request, ::Raft::PutReply* response, std::function<void(::grpc::Status)>) override;
      void Put(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Raft::PutReply* response, std::function<void(::grpc::Status)>) override;
      void Put(::grpc::ClientContext* context, const ::Raft::PutRequest* request, ::Raft::PutReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void Put(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Raft::PutReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void Get(::grpc::ClientContext* context, const ::Raft::GetRequest* request, ::Raft::GetReply* response, std::function<void(::grpc::Status)>) override;
      void Get(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Raft::GetReply* response, std::function<void(::grpc::Status)>) override;
      void Get(::grpc::ClientContext* context, const ::Raft::GetRequest* request, ::Raft::GetReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void Get(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::Raft::GetReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::Raft::PutReply>* AsyncPutRaw(::grpc::ClientContext* context, const ::Raft::PutRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::Raft::PutReply>* PrepareAsyncPutRaw(::grpc::ClientContext* context, const ::Raft::PutRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::Raft::GetReply>* AsyncGetRaw(::grpc::ClientContext* context, const ::Raft::GetRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::Raft::GetReply>* PrepareAsyncGetRaw(::grpc::ClientContext* context, const ::Raft::GetRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Put_;
    const ::grpc::internal::RpcMethod rpcmethod_Get_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Put(::grpc::ServerContext* context, const ::Raft::PutRequest* request, ::Raft::PutReply* response);
    virtual ::grpc::Status Get(::grpc::ServerContext* context, const ::Raft::GetRequest* request, ::Raft::GetReply* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Put : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Put() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Put() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Put(::grpc::ServerContext* context, const ::Raft::PutRequest* request, ::Raft::PutReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPut(::grpc::ServerContext* context, ::Raft::PutRequest* request, ::grpc::ServerAsyncResponseWriter< ::Raft::PutReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Get() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Get(::grpc::ServerContext* context, const ::Raft::GetRequest* request, ::Raft::GetReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGet(::grpc::ServerContext* context, ::Raft::GetRequest* request, ::grpc::ServerAsyncResponseWriter< ::Raft::GetReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Put<WithAsyncMethod_Get<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_Put : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_Put() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::Raft::PutRequest, ::Raft::PutReply>(
          [this](::grpc::ServerContext* context,
                 const ::Raft::PutRequest* request,
                 ::Raft::PutReply* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->Put(context, request, response, controller);
                 }));
    }
    void SetMessageAllocatorFor_Put(
        ::grpc::experimental::MessageAllocator< ::Raft::PutRequest, ::Raft::PutReply>* allocator) {
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::Raft::PutRequest, ::Raft::PutReply>*>(
          ::grpc::Service::experimental().GetHandler(0))
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_Put() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Put(::grpc::ServerContext* context, const ::Raft::PutRequest* request, ::Raft::PutReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void Put(::grpc::ServerContext* context, const ::Raft::PutRequest* request, ::Raft::PutReply* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_Get() {
      ::grpc::Service::experimental().MarkMethodCallback(1,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::Raft::GetRequest, ::Raft::GetReply>(
          [this](::grpc::ServerContext* context,
                 const ::Raft::GetRequest* request,
                 ::Raft::GetReply* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->Get(context, request, response, controller);
                 }));
    }
    void SetMessageAllocatorFor_Get(
        ::grpc::experimental::MessageAllocator< ::Raft::GetRequest, ::Raft::GetReply>* allocator) {
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::Raft::GetRequest, ::Raft::GetReply>*>(
          ::grpc::Service::experimental().GetHandler(1))
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Get(::grpc::ServerContext* context, const ::Raft::GetRequest* request, ::Raft::GetReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void Get(::grpc::ServerContext* context, const ::Raft::GetRequest* request, ::Raft::GetReply* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_Put<ExperimentalWithCallbackMethod_Get<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Put : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Put() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Put() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Put(::grpc::ServerContext* context, const ::Raft::PutRequest* request, ::Raft::PutReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Get() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Get(::grpc::ServerContext* context, const ::Raft::GetRequest* request, ::Raft::GetReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Put : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_Put() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Put() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Put(::grpc::ServerContext* context, const ::Raft::PutRequest* request, ::Raft::PutReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPut(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_Get() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Get(::grpc::ServerContext* context, const ::Raft::GetRequest* request, ::Raft::GetReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGet(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_Put : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_Put() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->Put(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_Put() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Put(::grpc::ServerContext* context, const ::Raft::PutRequest* request, ::Raft::PutReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void Put(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_Get() {
      ::grpc::Service::experimental().MarkMethodRawCallback(1,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->Get(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Get(::grpc::ServerContext* context, const ::Raft::GetRequest* request, ::Raft::GetReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void Get(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Put : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Put() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::Raft::PutRequest, ::Raft::PutReply>(std::bind(&WithStreamedUnaryMethod_Put<BaseClass>::StreamedPut, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Put() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Put(::grpc::ServerContext* context, const ::Raft::PutRequest* request, ::Raft::PutReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedPut(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::Raft::PutRequest,::Raft::PutReply>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Get : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Get() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::Raft::GetRequest, ::Raft::GetReply>(std::bind(&WithStreamedUnaryMethod_Get<BaseClass>::StreamedGet, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Get() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Get(::grpc::ServerContext* context, const ::Raft::GetRequest* request, ::Raft::GetReply* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGet(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::Raft::GetRequest,::Raft::GetReply>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Put<WithStreamedUnaryMethod_Get<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Put<WithStreamedUnaryMethod_Get<Service > > StreamedService;
};

}  // namespace Raft


#endif  // GRPC_External_2eproto__INCLUDED
