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

# Utility rule file for check-llvm-mc-disassembler.

# Include any custom commands dependencies for this target.
include test/CMakeFiles/check-llvm-mc-disassembler.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/check-llvm-mc-disassembler.dir/progress.make

test/CMakeFiles/check-llvm-mc-disassembler:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running lit suite /root/CS201/CS201-Project/LLVM/llvm/test/MC/Disassembler"
	cd /root/CS201/CS201-Project/LLVM/build/test && /usr/bin/python3.10 /root/CS201/CS201-Project/LLVM/build/./bin/llvm-lit -sv /root/CS201/CS201-Project/LLVM/llvm/test/MC/Disassembler

check-llvm-mc-disassembler: test/CMakeFiles/check-llvm-mc-disassembler
check-llvm-mc-disassembler: test/CMakeFiles/check-llvm-mc-disassembler.dir/build.make
.PHONY : check-llvm-mc-disassembler

# Rule to build all files generated by this target.
test/CMakeFiles/check-llvm-mc-disassembler.dir/build: check-llvm-mc-disassembler
.PHONY : test/CMakeFiles/check-llvm-mc-disassembler.dir/build

test/CMakeFiles/check-llvm-mc-disassembler.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/test && $(CMAKE_COMMAND) -P CMakeFiles/check-llvm-mc-disassembler.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/check-llvm-mc-disassembler.dir/clean

test/CMakeFiles/check-llvm-mc-disassembler.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/test /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/test /root/CS201/CS201-Project/LLVM/build/test/CMakeFiles/check-llvm-mc-disassembler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/check-llvm-mc-disassembler.dir/depend
