# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gls/Raft

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gls/Raft/build

# Include any dependencies generated for this target.
include src/CMakeFiles/raft.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/raft.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/raft.dir/flags.make

src/CMakeFiles/raft.dir/RaftServer.cpp.o: src/CMakeFiles/raft.dir/flags.make
src/CMakeFiles/raft.dir/RaftServer.cpp.o: ../src/RaftServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gls/Raft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/raft.dir/RaftServer.cpp.o"
	cd /home/gls/Raft/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raft.dir/RaftServer.cpp.o -c /home/gls/Raft/src/RaftServer.cpp

src/CMakeFiles/raft.dir/RaftServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raft.dir/RaftServer.cpp.i"
	cd /home/gls/Raft/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gls/Raft/src/RaftServer.cpp > CMakeFiles/raft.dir/RaftServer.cpp.i

src/CMakeFiles/raft.dir/RaftServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raft.dir/RaftServer.cpp.s"
	cd /home/gls/Raft/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gls/Raft/src/RaftServer.cpp -o CMakeFiles/raft.dir/RaftServer.cpp.s

src/CMakeFiles/raft.dir/RaftServer.cpp.o.requires:

.PHONY : src/CMakeFiles/raft.dir/RaftServer.cpp.o.requires

src/CMakeFiles/raft.dir/RaftServer.cpp.o.provides: src/CMakeFiles/raft.dir/RaftServer.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/raft.dir/build.make src/CMakeFiles/raft.dir/RaftServer.cpp.o.provides.build
.PHONY : src/CMakeFiles/raft.dir/RaftServer.cpp.o.provides

src/CMakeFiles/raft.dir/RaftServer.cpp.o.provides.build: src/CMakeFiles/raft.dir/RaftServer.cpp.o


src/CMakeFiles/raft.dir/RaftServerInfo.cpp.o: src/CMakeFiles/raft.dir/flags.make
src/CMakeFiles/raft.dir/RaftServerInfo.cpp.o: ../src/RaftServerInfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gls/Raft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/raft.dir/RaftServerInfo.cpp.o"
	cd /home/gls/Raft/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raft.dir/RaftServerInfo.cpp.o -c /home/gls/Raft/src/RaftServerInfo.cpp

src/CMakeFiles/raft.dir/RaftServerInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raft.dir/RaftServerInfo.cpp.i"
	cd /home/gls/Raft/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gls/Raft/src/RaftServerInfo.cpp > CMakeFiles/raft.dir/RaftServerInfo.cpp.i

src/CMakeFiles/raft.dir/RaftServerInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raft.dir/RaftServerInfo.cpp.s"
	cd /home/gls/Raft/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gls/Raft/src/RaftServerInfo.cpp -o CMakeFiles/raft.dir/RaftServerInfo.cpp.s

src/CMakeFiles/raft.dir/RaftServerInfo.cpp.o.requires:

.PHONY : src/CMakeFiles/raft.dir/RaftServerInfo.cpp.o.requires

src/CMakeFiles/raft.dir/RaftServerInfo.cpp.o.provides: src/CMakeFiles/raft.dir/RaftServerInfo.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/raft.dir/build.make src/CMakeFiles/raft.dir/RaftServerInfo.cpp.o.provides.build
.PHONY : src/CMakeFiles/raft.dir/RaftServerInfo.cpp.o.provides

src/CMakeFiles/raft.dir/RaftServerInfo.cpp.o.provides.build: src/CMakeFiles/raft.dir/RaftServerInfo.cpp.o


src/CMakeFiles/raft.dir/Rpc/RaftRpcClient.cpp.o: src/CMakeFiles/raft.dir/flags.make
src/CMakeFiles/raft.dir/Rpc/RaftRpcClient.cpp.o: ../src/Rpc/RaftRpcClient.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gls/Raft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/raft.dir/Rpc/RaftRpcClient.cpp.o"
	cd /home/gls/Raft/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raft.dir/Rpc/RaftRpcClient.cpp.o -c /home/gls/Raft/src/Rpc/RaftRpcClient.cpp

src/CMakeFiles/raft.dir/Rpc/RaftRpcClient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raft.dir/Rpc/RaftRpcClient.cpp.i"
	cd /home/gls/Raft/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gls/Raft/src/Rpc/RaftRpcClient.cpp > CMakeFiles/raft.dir/Rpc/RaftRpcClient.cpp.i

src/CMakeFiles/raft.dir/Rpc/RaftRpcClient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raft.dir/Rpc/RaftRpcClient.cpp.s"
	cd /home/gls/Raft/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gls/Raft/src/Rpc/RaftRpcClient.cpp -o CMakeFiles/raft.dir/Rpc/RaftRpcClient.cpp.s

src/CMakeFiles/raft.dir/Rpc/RaftRpcClient.cpp.o.requires:

.PHONY : src/CMakeFiles/raft.dir/Rpc/RaftRpcClient.cpp.o.requires

src/CMakeFiles/raft.dir/Rpc/RaftRpcClient.cpp.o.provides: src/CMakeFiles/raft.dir/Rpc/RaftRpcClient.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/raft.dir/build.make src/CMakeFiles/raft.dir/Rpc/RaftRpcClient.cpp.o.provides.build
.PHONY : src/CMakeFiles/raft.dir/Rpc/RaftRpcClient.cpp.o.provides

src/CMakeFiles/raft.dir/Rpc/RaftRpcClient.cpp.o.provides.build: src/CMakeFiles/raft.dir/Rpc/RaftRpcClient.cpp.o


src/CMakeFiles/raft.dir/Rpc/RaftRpcServer.cpp.o: src/CMakeFiles/raft.dir/flags.make
src/CMakeFiles/raft.dir/Rpc/RaftRpcServer.cpp.o: ../src/Rpc/RaftRpcServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gls/Raft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/raft.dir/Rpc/RaftRpcServer.cpp.o"
	cd /home/gls/Raft/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raft.dir/Rpc/RaftRpcServer.cpp.o -c /home/gls/Raft/src/Rpc/RaftRpcServer.cpp

src/CMakeFiles/raft.dir/Rpc/RaftRpcServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raft.dir/Rpc/RaftRpcServer.cpp.i"
	cd /home/gls/Raft/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gls/Raft/src/Rpc/RaftRpcServer.cpp > CMakeFiles/raft.dir/Rpc/RaftRpcServer.cpp.i

src/CMakeFiles/raft.dir/Rpc/RaftRpcServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raft.dir/Rpc/RaftRpcServer.cpp.s"
	cd /home/gls/Raft/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gls/Raft/src/Rpc/RaftRpcServer.cpp -o CMakeFiles/raft.dir/Rpc/RaftRpcServer.cpp.s

src/CMakeFiles/raft.dir/Rpc/RaftRpcServer.cpp.o.requires:

.PHONY : src/CMakeFiles/raft.dir/Rpc/RaftRpcServer.cpp.o.requires

src/CMakeFiles/raft.dir/Rpc/RaftRpcServer.cpp.o.provides: src/CMakeFiles/raft.dir/Rpc/RaftRpcServer.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/raft.dir/build.make src/CMakeFiles/raft.dir/Rpc/RaftRpcServer.cpp.o.provides.build
.PHONY : src/CMakeFiles/raft.dir/Rpc/RaftRpcServer.cpp.o.provides

src/CMakeFiles/raft.dir/Rpc/RaftRpcServer.cpp.o.provides.build: src/CMakeFiles/raft.dir/Rpc/RaftRpcServer.cpp.o


src/CMakeFiles/raft.dir/Timer.cpp.o: src/CMakeFiles/raft.dir/flags.make
src/CMakeFiles/raft.dir/Timer.cpp.o: ../src/Timer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gls/Raft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/raft.dir/Timer.cpp.o"
	cd /home/gls/Raft/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raft.dir/Timer.cpp.o -c /home/gls/Raft/src/Timer.cpp

src/CMakeFiles/raft.dir/Timer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raft.dir/Timer.cpp.i"
	cd /home/gls/Raft/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gls/Raft/src/Timer.cpp > CMakeFiles/raft.dir/Timer.cpp.i

src/CMakeFiles/raft.dir/Timer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raft.dir/Timer.cpp.s"
	cd /home/gls/Raft/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gls/Raft/src/Timer.cpp -o CMakeFiles/raft.dir/Timer.cpp.s

src/CMakeFiles/raft.dir/Timer.cpp.o.requires:

.PHONY : src/CMakeFiles/raft.dir/Timer.cpp.o.requires

src/CMakeFiles/raft.dir/Timer.cpp.o.provides: src/CMakeFiles/raft.dir/Timer.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/raft.dir/build.make src/CMakeFiles/raft.dir/Timer.cpp.o.provides.build
.PHONY : src/CMakeFiles/raft.dir/Timer.cpp.o.provides

src/CMakeFiles/raft.dir/Timer.cpp.o.provides.build: src/CMakeFiles/raft.dir/Timer.cpp.o


src/CMakeFiles/raft.dir/main.cpp.o: src/CMakeFiles/raft.dir/flags.make
src/CMakeFiles/raft.dir/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gls/Raft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/raft.dir/main.cpp.o"
	cd /home/gls/Raft/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raft.dir/main.cpp.o -c /home/gls/Raft/src/main.cpp

src/CMakeFiles/raft.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raft.dir/main.cpp.i"
	cd /home/gls/Raft/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gls/Raft/src/main.cpp > CMakeFiles/raft.dir/main.cpp.i

src/CMakeFiles/raft.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raft.dir/main.cpp.s"
	cd /home/gls/Raft/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gls/Raft/src/main.cpp -o CMakeFiles/raft.dir/main.cpp.s

src/CMakeFiles/raft.dir/main.cpp.o.requires:

.PHONY : src/CMakeFiles/raft.dir/main.cpp.o.requires

src/CMakeFiles/raft.dir/main.cpp.o.provides: src/CMakeFiles/raft.dir/main.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/raft.dir/build.make src/CMakeFiles/raft.dir/main.cpp.o.provides.build
.PHONY : src/CMakeFiles/raft.dir/main.cpp.o.provides

src/CMakeFiles/raft.dir/main.cpp.o.provides.build: src/CMakeFiles/raft.dir/main.cpp.o


src/CMakeFiles/raft.dir/Rpc/RaftRpc.grpc.pb.cc.o: src/CMakeFiles/raft.dir/flags.make
src/CMakeFiles/raft.dir/Rpc/RaftRpc.grpc.pb.cc.o: ../src/Rpc/RaftRpc.grpc.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gls/Raft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/raft.dir/Rpc/RaftRpc.grpc.pb.cc.o"
	cd /home/gls/Raft/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raft.dir/Rpc/RaftRpc.grpc.pb.cc.o -c /home/gls/Raft/src/Rpc/RaftRpc.grpc.pb.cc

src/CMakeFiles/raft.dir/Rpc/RaftRpc.grpc.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raft.dir/Rpc/RaftRpc.grpc.pb.cc.i"
	cd /home/gls/Raft/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gls/Raft/src/Rpc/RaftRpc.grpc.pb.cc > CMakeFiles/raft.dir/Rpc/RaftRpc.grpc.pb.cc.i

src/CMakeFiles/raft.dir/Rpc/RaftRpc.grpc.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raft.dir/Rpc/RaftRpc.grpc.pb.cc.s"
	cd /home/gls/Raft/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gls/Raft/src/Rpc/RaftRpc.grpc.pb.cc -o CMakeFiles/raft.dir/Rpc/RaftRpc.grpc.pb.cc.s

src/CMakeFiles/raft.dir/Rpc/RaftRpc.grpc.pb.cc.o.requires:

.PHONY : src/CMakeFiles/raft.dir/Rpc/RaftRpc.grpc.pb.cc.o.requires

src/CMakeFiles/raft.dir/Rpc/RaftRpc.grpc.pb.cc.o.provides: src/CMakeFiles/raft.dir/Rpc/RaftRpc.grpc.pb.cc.o.requires
	$(MAKE) -f src/CMakeFiles/raft.dir/build.make src/CMakeFiles/raft.dir/Rpc/RaftRpc.grpc.pb.cc.o.provides.build
.PHONY : src/CMakeFiles/raft.dir/Rpc/RaftRpc.grpc.pb.cc.o.provides

src/CMakeFiles/raft.dir/Rpc/RaftRpc.grpc.pb.cc.o.provides.build: src/CMakeFiles/raft.dir/Rpc/RaftRpc.grpc.pb.cc.o


src/CMakeFiles/raft.dir/Rpc/RaftRpc.pb.cc.o: src/CMakeFiles/raft.dir/flags.make
src/CMakeFiles/raft.dir/Rpc/RaftRpc.pb.cc.o: ../src/Rpc/RaftRpc.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gls/Raft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/CMakeFiles/raft.dir/Rpc/RaftRpc.pb.cc.o"
	cd /home/gls/Raft/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/raft.dir/Rpc/RaftRpc.pb.cc.o -c /home/gls/Raft/src/Rpc/RaftRpc.pb.cc

src/CMakeFiles/raft.dir/Rpc/RaftRpc.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/raft.dir/Rpc/RaftRpc.pb.cc.i"
	cd /home/gls/Raft/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gls/Raft/src/Rpc/RaftRpc.pb.cc > CMakeFiles/raft.dir/Rpc/RaftRpc.pb.cc.i

src/CMakeFiles/raft.dir/Rpc/RaftRpc.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/raft.dir/Rpc/RaftRpc.pb.cc.s"
	cd /home/gls/Raft/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gls/Raft/src/Rpc/RaftRpc.pb.cc -o CMakeFiles/raft.dir/Rpc/RaftRpc.pb.cc.s

src/CMakeFiles/raft.dir/Rpc/RaftRpc.pb.cc.o.requires:

.PHONY : src/CMakeFiles/raft.dir/Rpc/RaftRpc.pb.cc.o.requires

src/CMakeFiles/raft.dir/Rpc/RaftRpc.pb.cc.o.provides: src/CMakeFiles/raft.dir/Rpc/RaftRpc.pb.cc.o.requires
	$(MAKE) -f src/CMakeFiles/raft.dir/build.make src/CMakeFiles/raft.dir/Rpc/RaftRpc.pb.cc.o.provides.build
.PHONY : src/CMakeFiles/raft.dir/Rpc/RaftRpc.pb.cc.o.provides

src/CMakeFiles/raft.dir/Rpc/RaftRpc.pb.cc.o.provides.build: src/CMakeFiles/raft.dir/Rpc/RaftRpc.pb.cc.o


# Object files for target raft
raft_OBJECTS = \
"CMakeFiles/raft.dir/RaftServer.cpp.o" \
"CMakeFiles/raft.dir/RaftServerInfo.cpp.o" \
"CMakeFiles/raft.dir/Rpc/RaftRpcClient.cpp.o" \
"CMakeFiles/raft.dir/Rpc/RaftRpcServer.cpp.o" \
"CMakeFiles/raft.dir/Timer.cpp.o" \
"CMakeFiles/raft.dir/main.cpp.o" \
"CMakeFiles/raft.dir/Rpc/RaftRpc.grpc.pb.cc.o" \
"CMakeFiles/raft.dir/Rpc/RaftRpc.pb.cc.o"

# External object files for target raft
raft_EXTERNAL_OBJECTS =

../bin/raft: src/CMakeFiles/raft.dir/RaftServer.cpp.o
../bin/raft: src/CMakeFiles/raft.dir/RaftServerInfo.cpp.o
../bin/raft: src/CMakeFiles/raft.dir/Rpc/RaftRpcClient.cpp.o
../bin/raft: src/CMakeFiles/raft.dir/Rpc/RaftRpcServer.cpp.o
../bin/raft: src/CMakeFiles/raft.dir/Timer.cpp.o
../bin/raft: src/CMakeFiles/raft.dir/main.cpp.o
../bin/raft: src/CMakeFiles/raft.dir/Rpc/RaftRpc.grpc.pb.cc.o
../bin/raft: src/CMakeFiles/raft.dir/Rpc/RaftRpc.pb.cc.o
../bin/raft: src/CMakeFiles/raft.dir/build.make
../bin/raft: /usr/lib/libboost_thread.so
../bin/raft: /usr/lib/libboost_chrono.so
../bin/raft: /usr/lib/libboost_system.so
../bin/raft: /usr/lib/libboost_date_time.so
../bin/raft: /usr/lib/libboost_atomic.so
../bin/raft: /usr/lib/x86_64-linux-gnu/libpthread.so
../bin/raft: /usr/local/lib/libprotobuf.so
../bin/raft: /usr/local/lib/libgrpc++.so
../bin/raft: /usr/local/lib/libgrpc.so
../bin/raft: /usr/local/lib/libgpr.so
../bin/raft: src/CMakeFiles/raft.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gls/Raft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable ../../bin/raft"
	cd /home/gls/Raft/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/raft.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/raft.dir/build: ../bin/raft

.PHONY : src/CMakeFiles/raft.dir/build

src/CMakeFiles/raft.dir/requires: src/CMakeFiles/raft.dir/RaftServer.cpp.o.requires
src/CMakeFiles/raft.dir/requires: src/CMakeFiles/raft.dir/RaftServerInfo.cpp.o.requires
src/CMakeFiles/raft.dir/requires: src/CMakeFiles/raft.dir/Rpc/RaftRpcClient.cpp.o.requires
src/CMakeFiles/raft.dir/requires: src/CMakeFiles/raft.dir/Rpc/RaftRpcServer.cpp.o.requires
src/CMakeFiles/raft.dir/requires: src/CMakeFiles/raft.dir/Timer.cpp.o.requires
src/CMakeFiles/raft.dir/requires: src/CMakeFiles/raft.dir/main.cpp.o.requires
src/CMakeFiles/raft.dir/requires: src/CMakeFiles/raft.dir/Rpc/RaftRpc.grpc.pb.cc.o.requires
src/CMakeFiles/raft.dir/requires: src/CMakeFiles/raft.dir/Rpc/RaftRpc.pb.cc.o.requires

.PHONY : src/CMakeFiles/raft.dir/requires

src/CMakeFiles/raft.dir/clean:
	cd /home/gls/Raft/build/src && $(CMAKE_COMMAND) -P CMakeFiles/raft.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/raft.dir/clean

src/CMakeFiles/raft.dir/depend:
	cd /home/gls/Raft/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gls/Raft /home/gls/Raft/src /home/gls/Raft/build /home/gls/Raft/build/src /home/gls/Raft/build/src/CMakeFiles/raft.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/raft.dir/depend

