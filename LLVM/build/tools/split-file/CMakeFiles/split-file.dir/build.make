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
include tools/split-file/CMakeFiles/split-file.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tools/split-file/CMakeFiles/split-file.dir/compiler_depend.make

# Include the progress variables for this target.
include tools/split-file/CMakeFiles/split-file.dir/progress.make

# Include the compile flags for this target's objects.
include tools/split-file/CMakeFiles/split-file.dir/flags.make

tools/split-file/CMakeFiles/split-file.dir/split-file.cpp.o: tools/split-file/CMakeFiles/split-file.dir/flags.make
tools/split-file/CMakeFiles/split-file.dir/split-file.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/tools/split-file/split-file.cpp
tools/split-file/CMakeFiles/split-file.dir/split-file.cpp.o: tools/split-file/CMakeFiles/split-file.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/split-file/CMakeFiles/split-file.dir/split-file.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/tools/split-file && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tools/split-file/CMakeFiles/split-file.dir/split-file.cpp.o -MF CMakeFiles/split-file.dir/split-file.cpp.o.d -o CMakeFiles/split-file.dir/split-file.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/tools/split-file/split-file.cpp

tools/split-file/CMakeFiles/split-file.dir/split-file.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/split-file.dir/split-file.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/tools/split-file && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/tools/split-file/split-file.cpp > CMakeFiles/split-file.dir/split-file.cpp.i

tools/split-file/CMakeFiles/split-file.dir/split-file.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/split-file.dir/split-file.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/tools/split-file && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/tools/split-file/split-file.cpp -o CMakeFiles/split-file.dir/split-file.cpp.s

# Object files for target split-file
split__file_OBJECTS = \
"CMakeFiles/split-file.dir/split-file.cpp.o"

# External object files for target split-file
split__file_EXTERNAL_OBJECTS =

bin/split-file: tools/split-file/CMakeFiles/split-file.dir/split-file.cpp.o
bin/split-file: tools/split-file/CMakeFiles/split-file.dir/build.make
bin/split-file: lib/libLLVMSupport.a
bin/split-file: lib/libLLVMDemangle.a
bin/split-file: tools/split-file/CMakeFiles/split-file.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/split-file"
	cd /root/CS201/CS201-Project/LLVM/build/tools/split-file && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/split-file.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/split-file/CMakeFiles/split-file.dir/build: bin/split-file
.PHONY : tools/split-file/CMakeFiles/split-file.dir/build

tools/split-file/CMakeFiles/split-file.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/tools/split-file && $(CMAKE_COMMAND) -P CMakeFiles/split-file.dir/cmake_clean.cmake
.PHONY : tools/split-file/CMakeFiles/split-file.dir/clean

tools/split-file/CMakeFiles/split-file.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/tools/split-file /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/tools/split-file /root/CS201/CS201-Project/LLVM/build/tools/split-file/CMakeFiles/split-file.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/split-file/CMakeFiles/split-file.dir/depend

