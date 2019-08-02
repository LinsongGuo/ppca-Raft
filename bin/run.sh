rm -rf 127.0.0.1
rm -rf 127.0.0.2
rm -rf 127.0.0.3
rm -rf 127.0.0.4
rm -rf 127.0.0.5

mkdir 127.0.0.1
mkdir 127.0.0.2
mkdir 127.0.0.3
mkdir 127.0.0.4
mkdir 127.0.0.5

bash -c "./std <test.in >std.out"

gnome-terminal --title="Server" --window -x bash -c "./Server server1.json server2.json server3.json server4.json server5.json"

sleep 3s

bash -c "./Client <test.in >raft.out"

diff raft.out std.out

#gnome-terminal --title="Server1" --window -x bash -c "./Server server1.json"
#gnome-terminal --title="Server2" --window -x bash -c "./Server server2.json"
#gnome-terminal --title="Server3" --window -x bash -c "./Server server3.json"
