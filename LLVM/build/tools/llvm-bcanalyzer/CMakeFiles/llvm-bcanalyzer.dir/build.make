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
include tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/compiler_depend.make

# Include the progress variables for this target.
include tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/progress.make

# Include the compile flags for this target's objects.
include tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/flags.make

tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/llvm-bcanalyzer.cpp.o: tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/flags.make
tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/llvm-bcanalyzer.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-bcanalyzer/llvm-bcanalyzer.cpp
tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/llvm-bcanalyzer.cpp.o: tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/llvm-bcanalyzer.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-bcanalyzer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/llvm-bcanalyzer.cpp.o -MF CMakeFiles/llvm-bcanalyzer.dir/llvm-bcanalyzer.cpp.o.d -o CMakeFiles/llvm-bcanalyzer.dir/llvm-bcanalyzer.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-bcanalyzer/llvm-bcanalyzer.cpp

tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/llvm-bcanalyzer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-bcanalyzer.dir/llvm-bcanalyzer.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-bcanalyzer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-bcanalyzer/llvm-bcanalyzer.cpp > CMakeFiles/llvm-bcanalyzer.dir/llvm-bcanalyzer.cpp.i

tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/llvm-bcanalyzer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-bcanalyzer.dir/llvm-bcanalyzer.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-bcanalyzer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-bcanalyzer/llvm-bcanalyzer.cpp -o CMakeFiles/llvm-bcanalyzer.dir/llvm-bcanalyzer.cpp.s

# Object files for target llvm-bcanalyzer
llvm__bcanalyzer_OBJECTS = \
"CMakeFiles/llvm-bcanalyzer.dir/llvm-bcanalyzer.cpp.o"

# External object files for target llvm-bcanalyzer
llvm__bcanalyzer_EXTERNAL_OBJECTS =

bin/llvm-bcanalyzer: tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/llvm-bcanalyzer.cpp.o
bin/llvm-bcanalyzer: tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/build.make
bin/llvm-bcanalyzer: lib/libLLVMBitReader.a
bin/llvm-bcanalyzer: lib/libLLVMBitstreamReader.a
bin/llvm-bcanalyzer: lib/libLLVMSupport.a
bin/llvm-bcanalyzer: lib/libLLVMCore.a
bin/llvm-bcanalyzer: lib/libLLVMBinaryFormat.a
bin/llvm-bcanalyzer: lib/libLLVMRemarks.a
bin/llvm-bcanalyzer: lib/libLLVMBitstreamReader.a
bin/llvm-bcanalyzer: lib/libLLVMSupport.a
bin/llvm-bcanalyzer: lib/libLLVMDemangle.a
bin/llvm-bcanalyzer: tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/llvm-bcanalyzer"
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-bcanalyzer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/llvm-bcanalyzer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/build: bin/llvm-bcanalyzer
.PHONY : tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/build

tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-bcanalyzer && $(CMAKE_COMMAND) -P CMakeFiles/llvm-bcanalyzer.dir/cmake_clean.cmake
.PHONY : tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/clean

tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-bcanalyzer /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/tools/llvm-bcanalyzer /root/CS201/CS201-Project/LLVM/build/tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-bcanalyzer/CMakeFiles/llvm-bcanalyzer.dir/depend
