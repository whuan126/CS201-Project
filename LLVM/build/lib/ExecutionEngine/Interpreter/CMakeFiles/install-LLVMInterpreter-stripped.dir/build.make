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

# Utility rule file for install-LLVMInterpreter-stripped.

# Include any custom commands dependencies for this target.
include lib/ExecutionEngine/Interpreter/CMakeFiles/install-LLVMInterpreter-stripped.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/ExecutionEngine/Interpreter/CMakeFiles/install-LLVMInterpreter-stripped.dir/progress.make

lib/ExecutionEngine/Interpreter/CMakeFiles/install-LLVMInterpreter-stripped:
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/Interpreter && /usr/bin/cmake -DCMAKE_INSTALL_COMPONENT="LLVMInterpreter" -DCMAKE_INSTALL_DO_STRIP=1 -P /root/CS201/CS201-Project/LLVM/build/cmake_install.cmake

install-LLVMInterpreter-stripped: lib/ExecutionEngine/Interpreter/CMakeFiles/install-LLVMInterpreter-stripped
install-LLVMInterpreter-stripped: lib/ExecutionEngine/Interpreter/CMakeFiles/install-LLVMInterpreter-stripped.dir/build.make
.PHONY : install-LLVMInterpreter-stripped

# Rule to build all files generated by this target.
lib/ExecutionEngine/Interpreter/CMakeFiles/install-LLVMInterpreter-stripped.dir/build: install-LLVMInterpreter-stripped
.PHONY : lib/ExecutionEngine/Interpreter/CMakeFiles/install-LLVMInterpreter-stripped.dir/build

lib/ExecutionEngine/Interpreter/CMakeFiles/install-LLVMInterpreter-stripped.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/Interpreter && $(CMAKE_COMMAND) -P CMakeFiles/install-LLVMInterpreter-stripped.dir/cmake_clean.cmake
.PHONY : lib/ExecutionEngine/Interpreter/CMakeFiles/install-LLVMInterpreter-stripped.dir/clean

lib/ExecutionEngine/Interpreter/CMakeFiles/install-LLVMInterpreter-stripped.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/lib/ExecutionEngine/Interpreter /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/Interpreter /root/CS201/CS201-Project/LLVM/build/lib/ExecutionEngine/Interpreter/CMakeFiles/install-LLVMInterpreter-stripped.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/ExecutionEngine/Interpreter/CMakeFiles/install-LLVMInterpreter-stripped.dir/depend
