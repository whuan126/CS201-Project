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
include examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/compiler_depend.make

# Include the progress variables for this target.
include examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/progress.make

# Include the compile flags for this target's objects.
include examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/flags.make

examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/SpeculativeJIT.cpp.o: examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/flags.make
examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/SpeculativeJIT.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/examples/SpeculativeJIT/SpeculativeJIT.cpp
examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/SpeculativeJIT.cpp.o: examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/SpeculativeJIT.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/examples/SpeculativeJIT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/SpeculativeJIT.cpp.o -MF CMakeFiles/SpeculativeJIT.dir/SpeculativeJIT.cpp.o.d -o CMakeFiles/SpeculativeJIT.dir/SpeculativeJIT.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/examples/SpeculativeJIT/SpeculativeJIT.cpp

examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/SpeculativeJIT.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpeculativeJIT.dir/SpeculativeJIT.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/examples/SpeculativeJIT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/examples/SpeculativeJIT/SpeculativeJIT.cpp > CMakeFiles/SpeculativeJIT.dir/SpeculativeJIT.cpp.i

examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/SpeculativeJIT.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpeculativeJIT.dir/SpeculativeJIT.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/examples/SpeculativeJIT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/examples/SpeculativeJIT/SpeculativeJIT.cpp -o CMakeFiles/SpeculativeJIT.dir/SpeculativeJIT.cpp.s

# Object files for target SpeculativeJIT
SpeculativeJIT_OBJECTS = \
"CMakeFiles/SpeculativeJIT.dir/SpeculativeJIT.cpp.o"

# External object files for target SpeculativeJIT
SpeculativeJIT_EXTERNAL_OBJECTS =

bin/SpeculativeJIT: examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/SpeculativeJIT.cpp.o
bin/SpeculativeJIT: examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/build.make
bin/SpeculativeJIT: lib/libLLVMCore.a
bin/SpeculativeJIT: lib/libLLVMIRReader.a
bin/SpeculativeJIT: lib/libLLVMOrcJIT.a
bin/SpeculativeJIT: lib/libLLVMOrcTargetProcess.a
bin/SpeculativeJIT: lib/libLLVMExecutionEngine.a
bin/SpeculativeJIT: lib/libLLVMSupport.a
bin/SpeculativeJIT: lib/libLLVMX86CodeGen.a
bin/SpeculativeJIT: lib/libLLVMX86Desc.a
bin/SpeculativeJIT: lib/libLLVMX86Info.a
bin/SpeculativeJIT: lib/libLLVMAnalysis.a
bin/SpeculativeJIT: lib/libLLVMPasses.a
bin/SpeculativeJIT: lib/libLLVMCoroutines.a
bin/SpeculativeJIT: lib/libLLVMHelloNew.a
bin/SpeculativeJIT: lib/libLLVMipo.a
bin/SpeculativeJIT: lib/libLLVMIRReader.a
bin/SpeculativeJIT: lib/libLLVMAsmParser.a
bin/SpeculativeJIT: lib/libLLVMFrontendOpenMP.a
bin/SpeculativeJIT: lib/libLLVMLinker.a
bin/SpeculativeJIT: lib/libLLVMObjCARCOpts.a
bin/SpeculativeJIT: lib/libLLVMVectorize.a
bin/SpeculativeJIT: lib/libLLVMInstrumentation.a
bin/SpeculativeJIT: lib/libLLVMJITLink.a
bin/SpeculativeJIT: lib/libLLVMOrcTargetProcess.a
bin/SpeculativeJIT: lib/libLLVMOrcShared.a
bin/SpeculativeJIT: lib/libLLVMRuntimeDyld.a
bin/SpeculativeJIT: lib/libLLVMMCDisassembler.a
bin/SpeculativeJIT: lib/libLLVMAsmPrinter.a
bin/SpeculativeJIT: lib/libLLVMDebugInfoDWARF.a
bin/SpeculativeJIT: lib/libLLVMGlobalISel.a
bin/SpeculativeJIT: lib/libLLVMSelectionDAG.a
bin/SpeculativeJIT: lib/libLLVMCodeGen.a
bin/SpeculativeJIT: lib/libLLVMBitWriter.a
bin/SpeculativeJIT: lib/libLLVMTarget.a
bin/SpeculativeJIT: lib/libLLVMScalarOpts.a
bin/SpeculativeJIT: lib/libLLVMAggressiveInstCombine.a
bin/SpeculativeJIT: lib/libLLVMInstCombine.a
bin/SpeculativeJIT: lib/libLLVMTransformUtils.a
bin/SpeculativeJIT: lib/libLLVMAnalysis.a
bin/SpeculativeJIT: lib/libLLVMObject.a
bin/SpeculativeJIT: lib/libLLVMBitReader.a
bin/SpeculativeJIT: lib/libLLVMMCParser.a
bin/SpeculativeJIT: lib/libLLVMMC.a
bin/SpeculativeJIT: lib/libLLVMDebugInfoCodeView.a
bin/SpeculativeJIT: lib/libLLVMDebugInfoMSF.a
bin/SpeculativeJIT: lib/libLLVMTextAPI.a
bin/SpeculativeJIT: lib/libLLVMProfileData.a
bin/SpeculativeJIT: lib/libLLVMCFGuard.a
bin/SpeculativeJIT: lib/libLLVMCore.a
bin/SpeculativeJIT: lib/libLLVMBinaryFormat.a
bin/SpeculativeJIT: lib/libLLVMRemarks.a
bin/SpeculativeJIT: lib/libLLVMBitstreamReader.a
bin/SpeculativeJIT: lib/libLLVMSupport.a
bin/SpeculativeJIT: lib/libLLVMDemangle.a
bin/SpeculativeJIT: examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/SpeculativeJIT"
	cd /root/CS201/CS201-Project/LLVM/build/examples/SpeculativeJIT && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SpeculativeJIT.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/build: bin/SpeculativeJIT
.PHONY : examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/build

examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/examples/SpeculativeJIT && $(CMAKE_COMMAND) -P CMakeFiles/SpeculativeJIT.dir/cmake_clean.cmake
.PHONY : examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/clean

examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/examples/SpeculativeJIT /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/examples/SpeculativeJIT /root/CS201/CS201-Project/LLVM/build/examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/SpeculativeJIT/CMakeFiles/SpeculativeJIT.dir/depend
