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
include lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/progress.make

# Include the compile flags for this target's objects.
include lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/flags.make

lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/RegisterEHFrames.cpp.o: lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/flags.make
lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/RegisterEHFrames.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/Orc/TargetProcess/RegisterEHFrames.cpp
lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/RegisterEHFrames.cpp.o: lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/RegisterEHFrames.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/Orc/TargetProcess && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/RegisterEHFrames.cpp.o -MF CMakeFiles/LLVMOrcTargetProcess.dir/RegisterEHFrames.cpp.o.d -o CMakeFiles/LLVMOrcTargetProcess.dir/RegisterEHFrames.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/Orc/TargetProcess/RegisterEHFrames.cpp

lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/RegisterEHFrames.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMOrcTargetProcess.dir/RegisterEHFrames.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/Orc/TargetProcess && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/Orc/TargetProcess/RegisterEHFrames.cpp > CMakeFiles/LLVMOrcTargetProcess.dir/RegisterEHFrames.cpp.i

lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/RegisterEHFrames.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMOrcTargetProcess.dir/RegisterEHFrames.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/Orc/TargetProcess && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/Orc/TargetProcess/RegisterEHFrames.cpp -o CMakeFiles/LLVMOrcTargetProcess.dir/RegisterEHFrames.cpp.s

lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/TargetExecutionUtils.cpp.o: lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/flags.make
lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/TargetExecutionUtils.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/Orc/TargetProcess/TargetExecutionUtils.cpp
lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/TargetExecutionUtils.cpp.o: lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/TargetExecutionUtils.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/Orc/TargetProcess && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/TargetExecutionUtils.cpp.o -MF CMakeFiles/LLVMOrcTargetProcess.dir/TargetExecutionUtils.cpp.o.d -o CMakeFiles/LLVMOrcTargetProcess.dir/TargetExecutionUtils.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/Orc/TargetProcess/TargetExecutionUtils.cpp

lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/TargetExecutionUtils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMOrcTargetProcess.dir/TargetExecutionUtils.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/Orc/TargetProcess && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/Orc/TargetProcess/TargetExecutionUtils.cpp > CMakeFiles/LLVMOrcTargetProcess.dir/TargetExecutionUtils.cpp.i

lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/TargetExecutionUtils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMOrcTargetProcess.dir/TargetExecutionUtils.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/Orc/TargetProcess && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/Orc/TargetProcess/TargetExecutionUtils.cpp -o CMakeFiles/LLVMOrcTargetProcess.dir/TargetExecutionUtils.cpp.s

# Object files for target LLVMOrcTargetProcess
LLVMOrcTargetProcess_OBJECTS = \
"CMakeFiles/LLVMOrcTargetProcess.dir/RegisterEHFrames.cpp.o" \
"CMakeFiles/LLVMOrcTargetProcess.dir/TargetExecutionUtils.cpp.o"

# External object files for target LLVMOrcTargetProcess
LLVMOrcTargetProcess_EXTERNAL_OBJECTS =

lib/libLLVMOrcTargetProcess.a: lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/RegisterEHFrames.cpp.o
lib/libLLVMOrcTargetProcess.a: lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/TargetExecutionUtils.cpp.o
lib/libLLVMOrcTargetProcess.a: lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/build.make
lib/libLLVMOrcTargetProcess.a: lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library ../../../libLLVMOrcTargetProcess.a"
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/Orc/TargetProcess && $(CMAKE_COMMAND) -P CMakeFiles/LLVMOrcTargetProcess.dir/cmake_clean_target.cmake
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/Orc/TargetProcess && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMOrcTargetProcess.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/build: lib/libLLVMOrcTargetProcess.a
.PHONY : lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/build

lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/Orc/TargetProcess && $(CMAKE_COMMAND) -P CMakeFiles/LLVMOrcTargetProcess.dir/cmake_clean.cmake
.PHONY : lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/clean

lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/Orc/TargetProcess /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/Orc/TargetProcess /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/ExecutionEngine/Orc/TargetProcess/CMakeFiles/LLVMOrcTargetProcess.dir/depend
