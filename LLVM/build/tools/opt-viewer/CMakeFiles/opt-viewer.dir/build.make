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

# Utility rule file for opt-viewer.

# Include any custom commands dependencies for this target.
include tools/opt-viewer/CMakeFiles/opt-viewer.dir/compiler_depend.make

# Include the progress variables for this target.
include tools/opt-viewer/CMakeFiles/opt-viewer.dir/progress.make

tools/opt-viewer/CMakeFiles/opt-viewer: /root/CS201/CS201-Project/LLVM/llvm/tools/opt-viewer/opt-diff.py
tools/opt-viewer/CMakeFiles/opt-viewer: /root/CS201/CS201-Project/LLVM/llvm/tools/opt-viewer/opt-stats.py
tools/opt-viewer/CMakeFiles/opt-viewer: /root/CS201/CS201-Project/LLVM/llvm/tools/opt-viewer/opt-viewer.py
tools/opt-viewer/CMakeFiles/opt-viewer: /root/CS201/CS201-Project/LLVM/llvm/tools/opt-viewer/optpmap.py
tools/opt-viewer/CMakeFiles/opt-viewer: /root/CS201/CS201-Project/LLVM/llvm/tools/opt-viewer/optrecord.py
tools/opt-viewer/CMakeFiles/opt-viewer: /root/CS201/CS201-Project/LLVM/llvm/tools/opt-viewer/style.css

opt-viewer: tools/opt-viewer/CMakeFiles/opt-viewer
opt-viewer: tools/opt-viewer/CMakeFiles/opt-viewer.dir/build.make
.PHONY : opt-viewer

# Rule to build all files generated by this target.
tools/opt-viewer/CMakeFiles/opt-viewer.dir/build: opt-viewer
.PHONY : tools/opt-viewer/CMakeFiles/opt-viewer.dir/build

tools/opt-viewer/CMakeFiles/opt-viewer.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/tools/opt-viewer && $(CMAKE_COMMAND) -P CMakeFiles/opt-viewer.dir/cmake_clean.cmake
.PHONY : tools/opt-viewer/CMakeFiles/opt-viewer.dir/clean

tools/opt-viewer/CMakeFiles/opt-viewer.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/tools/opt-viewer /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/tools/opt-viewer /root/CS201/CS201-Project/LLVM/build/tools/opt-viewer/CMakeFiles/opt-viewer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/opt-viewer/CMakeFiles/opt-viewer.dir/depend
