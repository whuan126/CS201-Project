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

# Utility rule file for install-sancov-stripped.

# Include any custom commands dependencies for this target.
include tools/sancov/CMakeFiles/install-sancov-stripped.dir/compiler_depend.make

# Include the progress variables for this target.
include tools/sancov/CMakeFiles/install-sancov-stripped.dir/progress.make

tools/sancov/CMakeFiles/install-sancov-stripped:
	cd /root/CS201/CS201-Project/LLVM/build/tools/sancov && /usr/bin/cmake -DCMAKE_INSTALL_COMPONENT="sancov" -DCMAKE_INSTALL_DO_STRIP=1 -P /root/CS201/CS201-Project/LLVM/build/cmake_install.cmake

install-sancov-stripped: tools/sancov/CMakeFiles/install-sancov-stripped
install-sancov-stripped: tools/sancov/CMakeFiles/install-sancov-stripped.dir/build.make
.PHONY : install-sancov-stripped

# Rule to build all files generated by this target.
tools/sancov/CMakeFiles/install-sancov-stripped.dir/build: install-sancov-stripped
.PHONY : tools/sancov/CMakeFiles/install-sancov-stripped.dir/build

tools/sancov/CMakeFiles/install-sancov-stripped.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/tools/sancov && $(CMAKE_COMMAND) -P CMakeFiles/install-sancov-stripped.dir/cmake_clean.cmake
.PHONY : tools/sancov/CMakeFiles/install-sancov-stripped.dir/clean

tools/sancov/CMakeFiles/install-sancov-stripped.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/tools/sancov /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/tools/sancov /root/CS201/CS201-Project/LLVM/build/tools/sancov/CMakeFiles/install-sancov-stripped.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/sancov/CMakeFiles/install-sancov-stripped.dir/depend
