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

# Utility rule file for check-llvm-tools-llvm-mca-x86-haswell.

# Include any custom commands dependencies for this target.
include test/CMakeFiles/check-llvm-tools-llvm-mca-x86-haswell.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/check-llvm-tools-llvm-mca-x86-haswell.dir/progress.make

test/CMakeFiles/check-llvm-tools-llvm-mca-x86-haswell:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running lit suite /root/CS201/CS201-Project/LLVM/llvm/test/tools/llvm-mca/X86/Haswell"
	cd /root/CS201/CS201-Project/LLVM/build/test && /usr/bin/python3.10 /root/CS201/CS201-Project/LLVM/build/./bin/llvm-lit -sv /root/CS201/CS201-Project/LLVM/llvm/test/tools/llvm-mca/X86/Haswell

check-llvm-tools-llvm-mca-x86-haswell: test/CMakeFiles/check-llvm-tools-llvm-mca-x86-haswell
check-llvm-tools-llvm-mca-x86-haswell: test/CMakeFiles/check-llvm-tools-llvm-mca-x86-haswell.dir/build.make
.PHONY : check-llvm-tools-llvm-mca-x86-haswell

# Rule to build all files generated by this target.
test/CMakeFiles/check-llvm-tools-llvm-mca-x86-haswell.dir/build: check-llvm-tools-llvm-mca-x86-haswell
.PHONY : test/CMakeFiles/check-llvm-tools-llvm-mca-x86-haswell.dir/build

test/CMakeFiles/check-llvm-tools-llvm-mca-x86-haswell.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/test && $(CMAKE_COMMAND) -P CMakeFiles/check-llvm-tools-llvm-mca-x86-haswell.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/check-llvm-tools-llvm-mca-x86-haswell.dir/clean

test/CMakeFiles/check-llvm-tools-llvm-mca-x86-haswell.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/test /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/test /root/CS201/CS201-Project/LLVM/build/test/CMakeFiles/check-llvm-tools-llvm-mca-x86-haswell.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/check-llvm-tools-llvm-mca-x86-haswell.dir/depend
