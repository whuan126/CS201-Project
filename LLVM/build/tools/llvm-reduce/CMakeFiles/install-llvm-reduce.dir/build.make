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

# Utility rule file for install-llvm-reduce.

# Include any custom commands dependencies for this target.
include tools/llvm-reduce/CMakeFiles/install-llvm-reduce.dir/compiler_depend.make

# Include the progress variables for this target.
include tools/llvm-reduce/CMakeFiles/install-llvm-reduce.dir/progress.make

tools/llvm-reduce/CMakeFiles/install-llvm-reduce:
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-reduce && /usr/bin/cmake -DCMAKE_INSTALL_COMPONENT="llvm-reduce" -P /root/CS201/CS201-Project/LLVM/build/cmake_install.cmake

install-llvm-reduce: tools/llvm-reduce/CMakeFiles/install-llvm-reduce
install-llvm-reduce: tools/llvm-reduce/CMakeFiles/install-llvm-reduce.dir/build.make
.PHONY : install-llvm-reduce

# Rule to build all files generated by this target.
tools/llvm-reduce/CMakeFiles/install-llvm-reduce.dir/build: install-llvm-reduce
.PHONY : tools/llvm-reduce/CMakeFiles/install-llvm-reduce.dir/build

tools/llvm-reduce/CMakeFiles/install-llvm-reduce.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-reduce && $(CMAKE_COMMAND) -P CMakeFiles/install-llvm-reduce.dir/cmake_clean.cmake
.PHONY : tools/llvm-reduce/CMakeFiles/install-llvm-reduce.dir/clean

tools/llvm-reduce/CMakeFiles/install-llvm-reduce.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-reduce /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/tools/llvm-reduce /root/CS201/CS201-Project/LLVM/build/tools/llvm-reduce/CMakeFiles/install-llvm-reduce.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-reduce/CMakeFiles/install-llvm-reduce.dir/depend

