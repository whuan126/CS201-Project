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
include tools/llvm-strings/CMakeFiles/llvm-strings.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tools/llvm-strings/CMakeFiles/llvm-strings.dir/compiler_depend.make

# Include the progress variables for this target.
include tools/llvm-strings/CMakeFiles/llvm-strings.dir/progress.make

# Include the compile flags for this target's objects.
include tools/llvm-strings/CMakeFiles/llvm-strings.dir/flags.make

tools/llvm-strings/CMakeFiles/llvm-strings.dir/llvm-strings.cpp.o: tools/llvm-strings/CMakeFiles/llvm-strings.dir/flags.make
tools/llvm-strings/CMakeFiles/llvm-strings.dir/llvm-strings.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-strings/llvm-strings.cpp
tools/llvm-strings/CMakeFiles/llvm-strings.dir/llvm-strings.cpp.o: tools/llvm-strings/CMakeFiles/llvm-strings.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/llvm-strings/CMakeFiles/llvm-strings.dir/llvm-strings.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-strings && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tools/llvm-strings/CMakeFiles/llvm-strings.dir/llvm-strings.cpp.o -MF CMakeFiles/llvm-strings.dir/llvm-strings.cpp.o.d -o CMakeFiles/llvm-strings.dir/llvm-strings.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-strings/llvm-strings.cpp

tools/llvm-strings/CMakeFiles/llvm-strings.dir/llvm-strings.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-strings.dir/llvm-strings.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-strings && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-strings/llvm-strings.cpp > CMakeFiles/llvm-strings.dir/llvm-strings.cpp.i

tools/llvm-strings/CMakeFiles/llvm-strings.dir/llvm-strings.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-strings.dir/llvm-strings.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-strings && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-strings/llvm-strings.cpp -o CMakeFiles/llvm-strings.dir/llvm-strings.cpp.s

# Object files for target llvm-strings
llvm__strings_OBJECTS = \
"CMakeFiles/llvm-strings.dir/llvm-strings.cpp.o"

# External object files for target llvm-strings
llvm__strings_EXTERNAL_OBJECTS =

bin/llvm-strings: tools/llvm-strings/CMakeFiles/llvm-strings.dir/llvm-strings.cpp.o
bin/llvm-strings: tools/llvm-strings/CMakeFiles/llvm-strings.dir/build.make
bin/llvm-strings: lib/libLLVMCore.a
bin/llvm-strings: lib/libLLVMObject.a
bin/llvm-strings: lib/libLLVMSupport.a
bin/llvm-strings: lib/libLLVMBitReader.a
bin/llvm-strings: lib/libLLVMCore.a
bin/llvm-strings: lib/libLLVMRemarks.a
bin/llvm-strings: lib/libLLVMBitstreamReader.a
bin/llvm-strings: lib/libLLVMMCParser.a
bin/llvm-strings: lib/libLLVMMC.a
bin/llvm-strings: lib/libLLVMDebugInfoCodeView.a
bin/llvm-strings: lib/libLLVMDebugInfoMSF.a
bin/llvm-strings: lib/libLLVMTextAPI.a
bin/llvm-strings: lib/libLLVMBinaryFormat.a
bin/llvm-strings: lib/libLLVMSupport.a
bin/llvm-strings: lib/libLLVMDemangle.a
bin/llvm-strings: tools/llvm-strings/CMakeFiles/llvm-strings.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/llvm-strings"
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-strings && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/llvm-strings.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/llvm-strings/CMakeFiles/llvm-strings.dir/build: bin/llvm-strings
.PHONY : tools/llvm-strings/CMakeFiles/llvm-strings.dir/build

tools/llvm-strings/CMakeFiles/llvm-strings.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-strings && $(CMAKE_COMMAND) -P CMakeFiles/llvm-strings.dir/cmake_clean.cmake
.PHONY : tools/llvm-strings/CMakeFiles/llvm-strings.dir/clean

tools/llvm-strings/CMakeFiles/llvm-strings.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-strings /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/tools/llvm-strings /root/CS201/CS201-Project/LLVM/build/tools/llvm-strings/CMakeFiles/llvm-strings.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-strings/CMakeFiles/llvm-strings.dir/depend
