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
include lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/flags.make

lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/PowerPCTargetInfo.cpp.o: lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/flags.make
lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/PowerPCTargetInfo.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/Target/PowerPC/TargetInfo/PowerPCTargetInfo.cpp
lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/PowerPCTargetInfo.cpp.o: lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/PowerPCTargetInfo.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/PowerPC/TargetInfo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/PowerPCTargetInfo.cpp.o -MF CMakeFiles/LLVMPowerPCInfo.dir/PowerPCTargetInfo.cpp.o.d -o CMakeFiles/LLVMPowerPCInfo.dir/PowerPCTargetInfo.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/Target/PowerPC/TargetInfo/PowerPCTargetInfo.cpp

lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/PowerPCTargetInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMPowerPCInfo.dir/PowerPCTargetInfo.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/PowerPC/TargetInfo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/Target/PowerPC/TargetInfo/PowerPCTargetInfo.cpp > CMakeFiles/LLVMPowerPCInfo.dir/PowerPCTargetInfo.cpp.i

lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/PowerPCTargetInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMPowerPCInfo.dir/PowerPCTargetInfo.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/PowerPC/TargetInfo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/Target/PowerPC/TargetInfo/PowerPCTargetInfo.cpp -o CMakeFiles/LLVMPowerPCInfo.dir/PowerPCTargetInfo.cpp.s

# Object files for target LLVMPowerPCInfo
LLVMPowerPCInfo_OBJECTS = \
"CMakeFiles/LLVMPowerPCInfo.dir/PowerPCTargetInfo.cpp.o"

# External object files for target LLVMPowerPCInfo
LLVMPowerPCInfo_EXTERNAL_OBJECTS =

lib/libLLVMPowerPCInfo.a: lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/PowerPCTargetInfo.cpp.o
lib/libLLVMPowerPCInfo.a: lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/build.make
lib/libLLVMPowerPCInfo.a: lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../libLLVMPowerPCInfo.a"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/PowerPC/TargetInfo && $(CMAKE_COMMAND) -P CMakeFiles/LLVMPowerPCInfo.dir/cmake_clean_target.cmake
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/PowerPC/TargetInfo && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMPowerPCInfo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/build: lib/libLLVMPowerPCInfo.a
.PHONY : lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/build

lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/PowerPC/TargetInfo && $(CMAKE_COMMAND) -P CMakeFiles/LLVMPowerPCInfo.dir/cmake_clean.cmake
.PHONY : lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/clean

lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/lib/Target/PowerPC/TargetInfo /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/lib/Target/PowerPC/TargetInfo /root/CS201/CS201-Project/LLVM/build/lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/PowerPC/TargetInfo/CMakeFiles/LLVMPowerPCInfo.dir/depend
