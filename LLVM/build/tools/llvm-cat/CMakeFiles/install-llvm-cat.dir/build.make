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

# Utility rule file for install-llvm-cat.

# Include any custom commands dependencies for this target.
include tools/llvm-cat/CMakeFiles/install-llvm-cat.dir/compiler_depend.make

# Include the progress variables for this target.
include tools/llvm-cat/CMakeFiles/install-llvm-cat.dir/progress.make

tools/llvm-cat/CMakeFiles/install-llvm-cat:
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-cat && /usr/bin/cmake -DCMAKE_INSTALL_COMPONENT="llvm-cat" -P /root/CS201/CS201-Project/LLVM/build/cmake_install.cmake

install-llvm-cat: tools/llvm-cat/CMakeFiles/install-llvm-cat
install-llvm-cat: tools/llvm-cat/CMakeFiles/install-llvm-cat.dir/build.make
.PHONY : install-llvm-cat

# Rule to build all files generated by this target.
tools/llvm-cat/CMakeFiles/install-llvm-cat.dir/build: install-llvm-cat
.PHONY : tools/llvm-cat/CMakeFiles/install-llvm-cat.dir/build

tools/llvm-cat/CMakeFiles/install-llvm-cat.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-cat && $(CMAKE_COMMAND) -P CMakeFiles/install-llvm-cat.dir/cmake_clean.cmake
.PHONY : tools/llvm-cat/CMakeFiles/install-llvm-cat.dir/clean

tools/llvm-cat/CMakeFiles/install-llvm-cat.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-cat /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/tools/llvm-cat /root/CS201/CS201-Project/LLVM/build/tools/llvm-cat/CMakeFiles/install-llvm-cat.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-cat/CMakeFiles/install-llvm-cat.dir/depend
