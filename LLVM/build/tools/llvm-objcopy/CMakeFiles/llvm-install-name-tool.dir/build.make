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

# Utility rule file for llvm-install-name-tool.

# Include any custom commands dependencies for this target.
include tools/llvm-objcopy/CMakeFiles/llvm-install-name-tool.dir/compiler_depend.make

# Include the progress variables for this target.
include tools/llvm-objcopy/CMakeFiles/llvm-install-name-tool.dir/progress.make

tools/llvm-objcopy/CMakeFiles/llvm-install-name-tool: bin/llvm-objcopy
tools/llvm-objcopy/CMakeFiles/llvm-install-name-tool: bin/llvm-install-name-tool

bin/llvm-install-name-tool: bin/llvm-objcopy
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ../../bin/llvm-install-name-tool"
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-objcopy && /usr/bin/cmake -E create_symlink llvm-objcopy /root/CS201/CS201-Project/LLVM/build/./bin/llvm-install-name-tool

llvm-install-name-tool: bin/llvm-install-name-tool
llvm-install-name-tool: tools/llvm-objcopy/CMakeFiles/llvm-install-name-tool
llvm-install-name-tool: tools/llvm-objcopy/CMakeFiles/llvm-install-name-tool.dir/build.make
.PHONY : llvm-install-name-tool

# Rule to build all files generated by this target.
tools/llvm-objcopy/CMakeFiles/llvm-install-name-tool.dir/build: llvm-install-name-tool
.PHONY : tools/llvm-objcopy/CMakeFiles/llvm-install-name-tool.dir/build

tools/llvm-objcopy/CMakeFiles/llvm-install-name-tool.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-objcopy && $(CMAKE_COMMAND) -P CMakeFiles/llvm-install-name-tool.dir/cmake_clean.cmake
.PHONY : tools/llvm-objcopy/CMakeFiles/llvm-install-name-tool.dir/clean

tools/llvm-objcopy/CMakeFiles/llvm-install-name-tool.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-objcopy /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/tools/llvm-objcopy /root/CS201/CS201-Project/LLVM/build/tools/llvm-objcopy/CMakeFiles/llvm-install-name-tool.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-objcopy/CMakeFiles/llvm-install-name-tool.dir/depend
