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
include tools/llvm-extract/CMakeFiles/llvm-extract.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tools/llvm-extract/CMakeFiles/llvm-extract.dir/compiler_depend.make

# Include the progress variables for this target.
include tools/llvm-extract/CMakeFiles/llvm-extract.dir/progress.make

# Include the compile flags for this target's objects.
include tools/llvm-extract/CMakeFiles/llvm-extract.dir/flags.make

tools/llvm-extract/CMakeFiles/llvm-extract.dir/llvm-extract.cpp.o: tools/llvm-extract/CMakeFiles/llvm-extract.dir/flags.make
tools/llvm-extract/CMakeFiles/llvm-extract.dir/llvm-extract.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-extract/llvm-extract.cpp
tools/llvm-extract/CMakeFiles/llvm-extract.dir/llvm-extract.cpp.o: tools/llvm-extract/CMakeFiles/llvm-extract.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/llvm-extract/CMakeFiles/llvm-extract.dir/llvm-extract.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-extract && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tools/llvm-extract/CMakeFiles/llvm-extract.dir/llvm-extract.cpp.o -MF CMakeFiles/llvm-extract.dir/llvm-extract.cpp.o.d -o CMakeFiles/llvm-extract.dir/llvm-extract.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-extract/llvm-extract.cpp

tools/llvm-extract/CMakeFiles/llvm-extract.dir/llvm-extract.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-extract.dir/llvm-extract.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-extract && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-extract/llvm-extract.cpp > CMakeFiles/llvm-extract.dir/llvm-extract.cpp.i

tools/llvm-extract/CMakeFiles/llvm-extract.dir/llvm-extract.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-extract.dir/llvm-extract.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-extract && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-extract/llvm-extract.cpp -o CMakeFiles/llvm-extract.dir/llvm-extract.cpp.s

# Object files for target llvm-extract
llvm__extract_OBJECTS = \
"CMakeFiles/llvm-extract.dir/llvm-extract.cpp.o"

# External object files for target llvm-extract
llvm__extract_EXTERNAL_OBJECTS =

bin/llvm-extract: tools/llvm-extract/CMakeFiles/llvm-extract.dir/llvm-extract.cpp.o
bin/llvm-extract: tools/llvm-extract/CMakeFiles/llvm-extract.dir/build.make
bin/llvm-extract: lib/libLLVMBitWriter.a
bin/llvm-extract: lib/libLLVMCore.a
bin/llvm-extract: lib/libLLVMipo.a
bin/llvm-extract: lib/libLLVMIRReader.a
bin/llvm-extract: lib/libLLVMSupport.a
bin/llvm-extract: lib/libLLVMBitWriter.a
bin/llvm-extract: lib/libLLVMAsmParser.a
bin/llvm-extract: lib/libLLVMFrontendOpenMP.a
bin/llvm-extract: lib/libLLVMLinker.a
bin/llvm-extract: lib/libLLVMScalarOpts.a
bin/llvm-extract: lib/libLLVMAggressiveInstCombine.a
bin/llvm-extract: lib/libLLVMInstCombine.a
bin/llvm-extract: lib/libLLVMVectorize.a
bin/llvm-extract: lib/libLLVMInstrumentation.a
bin/llvm-extract: lib/libLLVMTransformUtils.a
bin/llvm-extract: lib/libLLVMAnalysis.a
bin/llvm-extract: lib/libLLVMObject.a
bin/llvm-extract: lib/libLLVMBitReader.a
bin/llvm-extract: lib/libLLVMMCParser.a
bin/llvm-extract: lib/libLLVMMC.a
bin/llvm-extract: lib/libLLVMDebugInfoCodeView.a
bin/llvm-extract: lib/libLLVMDebugInfoMSF.a
bin/llvm-extract: lib/libLLVMTextAPI.a
bin/llvm-extract: lib/libLLVMProfileData.a
bin/llvm-extract: lib/libLLVMCore.a
bin/llvm-extract: lib/libLLVMBinaryFormat.a
bin/llvm-extract: lib/libLLVMRemarks.a
bin/llvm-extract: lib/libLLVMBitstreamReader.a
bin/llvm-extract: lib/libLLVMSupport.a
bin/llvm-extract: lib/libLLVMDemangle.a
bin/llvm-extract: tools/llvm-extract/CMakeFiles/llvm-extract.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/llvm-extract"
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-extract && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/llvm-extract.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/llvm-extract/CMakeFiles/llvm-extract.dir/build: bin/llvm-extract
.PHONY : tools/llvm-extract/CMakeFiles/llvm-extract.dir/build

tools/llvm-extract/CMakeFiles/llvm-extract.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-extract && $(CMAKE_COMMAND) -P CMakeFiles/llvm-extract.dir/cmake_clean.cmake
.PHONY : tools/llvm-extract/CMakeFiles/llvm-extract.dir/clean

tools/llvm-extract/CMakeFiles/llvm-extract.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-extract /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/tools/llvm-extract /root/CS201/CS201-Project/LLVM/build/tools/llvm-extract/CMakeFiles/llvm-extract.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-extract/CMakeFiles/llvm-extract.dir/depend
