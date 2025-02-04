# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/CS201/CS201-Project/LLVM/llvm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/CS201/CS201-Project/LLVM/build

# Include any dependencies generated for this target.
include lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/progress.make

# Include the compile flags for this target's objects.
include lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/flags.make

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLink.cpp.o: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/flags.make
lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLink.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/JITLink.cpp
lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLink.cpp.o: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLink.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLink.cpp.o -MF CMakeFiles/LLVMJITLink.dir/JITLink.cpp.o.d -o CMakeFiles/LLVMJITLink.dir/JITLink.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/JITLink.cpp

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLink.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMJITLink.dir/JITLink.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/JITLink.cpp > CMakeFiles/LLVMJITLink.dir/JITLink.cpp.i

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLink.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMJITLink.dir/JITLink.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/JITLink.cpp -o CMakeFiles/LLVMJITLink.dir/JITLink.cpp.s

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLinkGeneric.cpp.o: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/flags.make
lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLinkGeneric.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/JITLinkGeneric.cpp
lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLinkGeneric.cpp.o: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLinkGeneric.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLinkGeneric.cpp.o -MF CMakeFiles/LLVMJITLink.dir/JITLinkGeneric.cpp.o.d -o CMakeFiles/LLVMJITLink.dir/JITLinkGeneric.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/JITLinkGeneric.cpp

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLinkGeneric.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMJITLink.dir/JITLinkGeneric.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/JITLinkGeneric.cpp > CMakeFiles/LLVMJITLink.dir/JITLinkGeneric.cpp.i

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLinkGeneric.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMJITLink.dir/JITLinkGeneric.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/JITLinkGeneric.cpp -o CMakeFiles/LLVMJITLink.dir/JITLinkGeneric.cpp.s

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLinkMemoryManager.cpp.o: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/flags.make
lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLinkMemoryManager.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/JITLinkMemoryManager.cpp
lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLinkMemoryManager.cpp.o: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLinkMemoryManager.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLinkMemoryManager.cpp.o -MF CMakeFiles/LLVMJITLink.dir/JITLinkMemoryManager.cpp.o.d -o CMakeFiles/LLVMJITLink.dir/JITLinkMemoryManager.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/JITLinkMemoryManager.cpp

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLinkMemoryManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMJITLink.dir/JITLinkMemoryManager.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/JITLinkMemoryManager.cpp > CMakeFiles/LLVMJITLink.dir/JITLinkMemoryManager.cpp.i

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLinkMemoryManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMJITLink.dir/JITLinkMemoryManager.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/JITLinkMemoryManager.cpp -o CMakeFiles/LLVMJITLink.dir/JITLinkMemoryManager.cpp.s

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/EHFrameSupport.cpp.o: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/flags.make
lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/EHFrameSupport.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/EHFrameSupport.cpp
lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/EHFrameSupport.cpp.o: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/EHFrameSupport.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/EHFrameSupport.cpp.o -MF CMakeFiles/LLVMJITLink.dir/EHFrameSupport.cpp.o.d -o CMakeFiles/LLVMJITLink.dir/EHFrameSupport.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/EHFrameSupport.cpp

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/EHFrameSupport.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMJITLink.dir/EHFrameSupport.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/EHFrameSupport.cpp > CMakeFiles/LLVMJITLink.dir/EHFrameSupport.cpp.i

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/EHFrameSupport.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMJITLink.dir/EHFrameSupport.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/EHFrameSupport.cpp -o CMakeFiles/LLVMJITLink.dir/EHFrameSupport.cpp.s

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO.cpp.o: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/flags.make
lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/MachO.cpp
lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO.cpp.o: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO.cpp.o -MF CMakeFiles/LLVMJITLink.dir/MachO.cpp.o.d -o CMakeFiles/LLVMJITLink.dir/MachO.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/MachO.cpp

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMJITLink.dir/MachO.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/MachO.cpp > CMakeFiles/LLVMJITLink.dir/MachO.cpp.i

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMJITLink.dir/MachO.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/MachO.cpp -o CMakeFiles/LLVMJITLink.dir/MachO.cpp.s

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO_arm64.cpp.o: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/flags.make
lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO_arm64.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/MachO_arm64.cpp
lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO_arm64.cpp.o: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO_arm64.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO_arm64.cpp.o -MF CMakeFiles/LLVMJITLink.dir/MachO_arm64.cpp.o.d -o CMakeFiles/LLVMJITLink.dir/MachO_arm64.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/MachO_arm64.cpp

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO_arm64.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMJITLink.dir/MachO_arm64.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/MachO_arm64.cpp > CMakeFiles/LLVMJITLink.dir/MachO_arm64.cpp.i

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO_arm64.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMJITLink.dir/MachO_arm64.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/MachO_arm64.cpp -o CMakeFiles/LLVMJITLink.dir/MachO_arm64.cpp.s

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO_x86_64.cpp.o: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/flags.make
lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO_x86_64.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/MachO_x86_64.cpp
lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO_x86_64.cpp.o: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO_x86_64.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO_x86_64.cpp.o -MF CMakeFiles/LLVMJITLink.dir/MachO_x86_64.cpp.o.d -o CMakeFiles/LLVMJITLink.dir/MachO_x86_64.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/MachO_x86_64.cpp

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO_x86_64.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMJITLink.dir/MachO_x86_64.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/MachO_x86_64.cpp > CMakeFiles/LLVMJITLink.dir/MachO_x86_64.cpp.i

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO_x86_64.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMJITLink.dir/MachO_x86_64.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/MachO_x86_64.cpp -o CMakeFiles/LLVMJITLink.dir/MachO_x86_64.cpp.s

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachOLinkGraphBuilder.cpp.o: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/flags.make
lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachOLinkGraphBuilder.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/MachOLinkGraphBuilder.cpp
lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachOLinkGraphBuilder.cpp.o: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachOLinkGraphBuilder.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachOLinkGraphBuilder.cpp.o -MF CMakeFiles/LLVMJITLink.dir/MachOLinkGraphBuilder.cpp.o.d -o CMakeFiles/LLVMJITLink.dir/MachOLinkGraphBuilder.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/MachOLinkGraphBuilder.cpp

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachOLinkGraphBuilder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMJITLink.dir/MachOLinkGraphBuilder.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/MachOLinkGraphBuilder.cpp > CMakeFiles/LLVMJITLink.dir/MachOLinkGraphBuilder.cpp.i

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachOLinkGraphBuilder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMJITLink.dir/MachOLinkGraphBuilder.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/MachOLinkGraphBuilder.cpp -o CMakeFiles/LLVMJITLink.dir/MachOLinkGraphBuilder.cpp.s

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/ELF.cpp.o: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/flags.make
lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/ELF.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/ELF.cpp
lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/ELF.cpp.o: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/ELF.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/ELF.cpp.o -MF CMakeFiles/LLVMJITLink.dir/ELF.cpp.o.d -o CMakeFiles/LLVMJITLink.dir/ELF.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/ELF.cpp

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/ELF.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMJITLink.dir/ELF.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/ELF.cpp > CMakeFiles/LLVMJITLink.dir/ELF.cpp.i

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/ELF.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMJITLink.dir/ELF.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/ELF.cpp -o CMakeFiles/LLVMJITLink.dir/ELF.cpp.s

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/ELF_x86_64.cpp.o: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/flags.make
lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/ELF_x86_64.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/ELF_x86_64.cpp
lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/ELF_x86_64.cpp.o: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/ELF_x86_64.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/ELF_x86_64.cpp.o -MF CMakeFiles/LLVMJITLink.dir/ELF_x86_64.cpp.o.d -o CMakeFiles/LLVMJITLink.dir/ELF_x86_64.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/ELF_x86_64.cpp

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/ELF_x86_64.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMJITLink.dir/ELF_x86_64.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/ELF_x86_64.cpp > CMakeFiles/LLVMJITLink.dir/ELF_x86_64.cpp.i

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/ELF_x86_64.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMJITLink.dir/ELF_x86_64.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink/ELF_x86_64.cpp -o CMakeFiles/LLVMJITLink.dir/ELF_x86_64.cpp.s

# Object files for target LLVMJITLink
LLVMJITLink_OBJECTS = \
"CMakeFiles/LLVMJITLink.dir/JITLink.cpp.o" \
"CMakeFiles/LLVMJITLink.dir/JITLinkGeneric.cpp.o" \
"CMakeFiles/LLVMJITLink.dir/JITLinkMemoryManager.cpp.o" \
"CMakeFiles/LLVMJITLink.dir/EHFrameSupport.cpp.o" \
"CMakeFiles/LLVMJITLink.dir/MachO.cpp.o" \
"CMakeFiles/LLVMJITLink.dir/MachO_arm64.cpp.o" \
"CMakeFiles/LLVMJITLink.dir/MachO_x86_64.cpp.o" \
"CMakeFiles/LLVMJITLink.dir/MachOLinkGraphBuilder.cpp.o" \
"CMakeFiles/LLVMJITLink.dir/ELF.cpp.o" \
"CMakeFiles/LLVMJITLink.dir/ELF_x86_64.cpp.o"

# External object files for target LLVMJITLink
LLVMJITLink_EXTERNAL_OBJECTS =

lib/libLLVMJITLink.a: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLink.cpp.o
lib/libLLVMJITLink.a: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLinkGeneric.cpp.o
lib/libLLVMJITLink.a: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/JITLinkMemoryManager.cpp.o
lib/libLLVMJITLink.a: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/EHFrameSupport.cpp.o
lib/libLLVMJITLink.a: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO.cpp.o
lib/libLLVMJITLink.a: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO_arm64.cpp.o
lib/libLLVMJITLink.a: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachO_x86_64.cpp.o
lib/libLLVMJITLink.a: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/MachOLinkGraphBuilder.cpp.o
lib/libLLVMJITLink.a: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/ELF.cpp.o
lib/libLLVMJITLink.a: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/ELF_x86_64.cpp.o
lib/libLLVMJITLink.a: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/build.make
lib/libLLVMJITLink.a: lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX static library ../../libLLVMJITLink.a"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && $(CMAKE_COMMAND) -P CMakeFiles/LLVMJITLink.dir/cmake_clean_target.cmake
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMJITLink.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/build: lib/libLLVMJITLink.a
.PHONY : lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/build

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink && $(CMAKE_COMMAND) -P CMakeFiles/LLVMJITLink.dir/cmake_clean.cmake
.PHONY : lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/clean

lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/JITLink /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/ExecutionEngine/JITLink/CMakeFiles/LLVMJITLink.dir/depend

