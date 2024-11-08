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
include unittests/Linker/CMakeFiles/LinkerTests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include unittests/Linker/CMakeFiles/LinkerTests.dir/compiler_depend.make

# Include the progress variables for this target.
include unittests/Linker/CMakeFiles/LinkerTests.dir/progress.make

# Include the compile flags for this target's objects.
include unittests/Linker/CMakeFiles/LinkerTests.dir/flags.make

unittests/Linker/CMakeFiles/LinkerTests.dir/LinkModulesTest.cpp.o: unittests/Linker/CMakeFiles/LinkerTests.dir/flags.make
unittests/Linker/CMakeFiles/LinkerTests.dir/LinkModulesTest.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/unittests/Linker/LinkModulesTest.cpp
unittests/Linker/CMakeFiles/LinkerTests.dir/LinkModulesTest.cpp.o: unittests/Linker/CMakeFiles/LinkerTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object unittests/Linker/CMakeFiles/LinkerTests.dir/LinkModulesTest.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/Linker && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT unittests/Linker/CMakeFiles/LinkerTests.dir/LinkModulesTest.cpp.o -MF CMakeFiles/LinkerTests.dir/LinkModulesTest.cpp.o.d -o CMakeFiles/LinkerTests.dir/LinkModulesTest.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/unittests/Linker/LinkModulesTest.cpp

unittests/Linker/CMakeFiles/LinkerTests.dir/LinkModulesTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LinkerTests.dir/LinkModulesTest.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/Linker && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/unittests/Linker/LinkModulesTest.cpp > CMakeFiles/LinkerTests.dir/LinkModulesTest.cpp.i

unittests/Linker/CMakeFiles/LinkerTests.dir/LinkModulesTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LinkerTests.dir/LinkModulesTest.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/Linker && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/unittests/Linker/LinkModulesTest.cpp -o CMakeFiles/LinkerTests.dir/LinkModulesTest.cpp.s

# Object files for target LinkerTests
LinkerTests_OBJECTS = \
"CMakeFiles/LinkerTests.dir/LinkModulesTest.cpp.o"

# External object files for target LinkerTests
LinkerTests_EXTERNAL_OBJECTS =

unittests/Linker/LinkerTests: unittests/Linker/CMakeFiles/LinkerTests.dir/LinkModulesTest.cpp.o
unittests/Linker/LinkerTests: unittests/Linker/CMakeFiles/LinkerTests.dir/build.make
unittests/Linker/LinkerTests: lib/libLLVMAsmParser.a
unittests/Linker/LinkerTests: lib/libLLVMCore.a
unittests/Linker/LinkerTests: lib/libLLVMLinker.a
unittests/Linker/LinkerTests: lib/libLLVMSupport.a
unittests/Linker/LinkerTests: lib/libgtest_main.a
unittests/Linker/LinkerTests: lib/libgtest.a
unittests/Linker/LinkerTests: lib/libLLVMTransformUtils.a
unittests/Linker/LinkerTests: lib/libLLVMAnalysis.a
unittests/Linker/LinkerTests: lib/libLLVMObject.a
unittests/Linker/LinkerTests: lib/libLLVMBitReader.a
unittests/Linker/LinkerTests: lib/libLLVMMCParser.a
unittests/Linker/LinkerTests: lib/libLLVMMC.a
unittests/Linker/LinkerTests: lib/libLLVMDebugInfoCodeView.a
unittests/Linker/LinkerTests: lib/libLLVMDebugInfoMSF.a
unittests/Linker/LinkerTests: lib/libLLVMTextAPI.a
unittests/Linker/LinkerTests: lib/libLLVMProfileData.a
unittests/Linker/LinkerTests: lib/libLLVMCore.a
unittests/Linker/LinkerTests: lib/libLLVMBinaryFormat.a
unittests/Linker/LinkerTests: lib/libLLVMRemarks.a
unittests/Linker/LinkerTests: lib/libLLVMBitstreamReader.a
unittests/Linker/LinkerTests: lib/libLLVMSupport.a
unittests/Linker/LinkerTests: lib/libLLVMDemangle.a
unittests/Linker/LinkerTests: unittests/Linker/CMakeFiles/LinkerTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LinkerTests"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/Linker && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LinkerTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittests/Linker/CMakeFiles/LinkerTests.dir/build: unittests/Linker/LinkerTests
.PHONY : unittests/Linker/CMakeFiles/LinkerTests.dir/build

unittests/Linker/CMakeFiles/LinkerTests.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/unittests/Linker && $(CMAKE_COMMAND) -P CMakeFiles/LinkerTests.dir/cmake_clean.cmake
.PHONY : unittests/Linker/CMakeFiles/LinkerTests.dir/clean

unittests/Linker/CMakeFiles/LinkerTests.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/unittests/Linker /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/unittests/Linker /root/CS201/CS201-Project/LLVM/build/unittests/Linker/CMakeFiles/LinkerTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittests/Linker/CMakeFiles/LinkerTests.dir/depend

