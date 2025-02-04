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
include unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/compiler_depend.make

# Include the progress variables for this target.
include unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/progress.make

# Include the compile flags for this target's objects.
include unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/flags.make

unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/LICMTest.cpp.o: unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/flags.make
unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/LICMTest.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/unittests/Transforms/Scalar/LICMTest.cpp
unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/LICMTest.cpp.o: unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/LICMTest.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/Transforms/Scalar && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/LICMTest.cpp.o -MF CMakeFiles/ScalarTests.dir/LICMTest.cpp.o.d -o CMakeFiles/ScalarTests.dir/LICMTest.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/unittests/Transforms/Scalar/LICMTest.cpp

unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/LICMTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ScalarTests.dir/LICMTest.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/Transforms/Scalar && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/unittests/Transforms/Scalar/LICMTest.cpp > CMakeFiles/ScalarTests.dir/LICMTest.cpp.i

unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/LICMTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ScalarTests.dir/LICMTest.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/Transforms/Scalar && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/unittests/Transforms/Scalar/LICMTest.cpp -o CMakeFiles/ScalarTests.dir/LICMTest.cpp.s

unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/LoopPassManagerTest.cpp.o: unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/flags.make
unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/LoopPassManagerTest.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/unittests/Transforms/Scalar/LoopPassManagerTest.cpp
unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/LoopPassManagerTest.cpp.o: unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/LoopPassManagerTest.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/Transforms/Scalar && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/LoopPassManagerTest.cpp.o -MF CMakeFiles/ScalarTests.dir/LoopPassManagerTest.cpp.o.d -o CMakeFiles/ScalarTests.dir/LoopPassManagerTest.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/unittests/Transforms/Scalar/LoopPassManagerTest.cpp

unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/LoopPassManagerTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ScalarTests.dir/LoopPassManagerTest.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/Transforms/Scalar && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/unittests/Transforms/Scalar/LoopPassManagerTest.cpp > CMakeFiles/ScalarTests.dir/LoopPassManagerTest.cpp.i

unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/LoopPassManagerTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ScalarTests.dir/LoopPassManagerTest.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/Transforms/Scalar && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/unittests/Transforms/Scalar/LoopPassManagerTest.cpp -o CMakeFiles/ScalarTests.dir/LoopPassManagerTest.cpp.s

# Object files for target ScalarTests
ScalarTests_OBJECTS = \
"CMakeFiles/ScalarTests.dir/LICMTest.cpp.o" \
"CMakeFiles/ScalarTests.dir/LoopPassManagerTest.cpp.o"

# External object files for target ScalarTests
ScalarTests_EXTERNAL_OBJECTS =

unittests/Transforms/Scalar/ScalarTests: unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/LICMTest.cpp.o
unittests/Transforms/Scalar/ScalarTests: unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/LoopPassManagerTest.cpp.o
unittests/Transforms/Scalar/ScalarTests: unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/build.make
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMAnalysis.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMAsmParser.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMCore.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMPasses.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMSupport.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMScalarOpts.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMTransformUtils.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMSupport.a
unittests/Transforms/Scalar/ScalarTests: lib/libgtest_main.a
unittests/Transforms/Scalar/ScalarTests: lib/libgtest.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMTestingSupport.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMCoroutines.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMHelloNew.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMipo.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMScalarOpts.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMAggressiveInstCombine.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMBitWriter.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMFrontendOpenMP.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMIRReader.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMAsmParser.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMLinker.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMInstCombine.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMObjCARCOpts.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMTarget.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMVectorize.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMInstrumentation.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMTransformUtils.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMAnalysis.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMObject.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMBitReader.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMMCParser.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMTextAPI.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMProfileData.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMCore.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMRemarks.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMBitstreamReader.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMMC.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMBinaryFormat.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMDebugInfoCodeView.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMDebugInfoMSF.a
unittests/Transforms/Scalar/ScalarTests: lib/libgtest.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMSupport.a
unittests/Transforms/Scalar/ScalarTests: lib/libLLVMDemangle.a
unittests/Transforms/Scalar/ScalarTests: unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ScalarTests"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/Transforms/Scalar && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ScalarTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/build: unittests/Transforms/Scalar/ScalarTests
.PHONY : unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/build

unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/unittests/Transforms/Scalar && $(CMAKE_COMMAND) -P CMakeFiles/ScalarTests.dir/cmake_clean.cmake
.PHONY : unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/clean

unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/unittests/Transforms/Scalar /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/unittests/Transforms/Scalar /root/CS201/CS201-Project/LLVM/build/unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittests/Transforms/Scalar/CMakeFiles/ScalarTests.dir/depend

