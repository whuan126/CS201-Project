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
include unittests/TextAPI/CMakeFiles/TextAPITests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include unittests/TextAPI/CMakeFiles/TextAPITests.dir/compiler_depend.make

# Include the progress variables for this target.
include unittests/TextAPI/CMakeFiles/TextAPITests.dir/progress.make

# Include the compile flags for this target's objects.
include unittests/TextAPI/CMakeFiles/TextAPITests.dir/flags.make

unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV1Tests.cpp.o: unittests/TextAPI/CMakeFiles/TextAPITests.dir/flags.make
unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV1Tests.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/unittests/TextAPI/TextStubV1Tests.cpp
unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV1Tests.cpp.o: unittests/TextAPI/CMakeFiles/TextAPITests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV1Tests.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV1Tests.cpp.o -MF CMakeFiles/TextAPITests.dir/TextStubV1Tests.cpp.o.d -o CMakeFiles/TextAPITests.dir/TextStubV1Tests.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/unittests/TextAPI/TextStubV1Tests.cpp

unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV1Tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TextAPITests.dir/TextStubV1Tests.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/unittests/TextAPI/TextStubV1Tests.cpp > CMakeFiles/TextAPITests.dir/TextStubV1Tests.cpp.i

unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV1Tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TextAPITests.dir/TextStubV1Tests.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/unittests/TextAPI/TextStubV1Tests.cpp -o CMakeFiles/TextAPITests.dir/TextStubV1Tests.cpp.s

unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV2Tests.cpp.o: unittests/TextAPI/CMakeFiles/TextAPITests.dir/flags.make
unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV2Tests.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/unittests/TextAPI/TextStubV2Tests.cpp
unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV2Tests.cpp.o: unittests/TextAPI/CMakeFiles/TextAPITests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV2Tests.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV2Tests.cpp.o -MF CMakeFiles/TextAPITests.dir/TextStubV2Tests.cpp.o.d -o CMakeFiles/TextAPITests.dir/TextStubV2Tests.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/unittests/TextAPI/TextStubV2Tests.cpp

unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV2Tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TextAPITests.dir/TextStubV2Tests.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/unittests/TextAPI/TextStubV2Tests.cpp > CMakeFiles/TextAPITests.dir/TextStubV2Tests.cpp.i

unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV2Tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TextAPITests.dir/TextStubV2Tests.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/unittests/TextAPI/TextStubV2Tests.cpp -o CMakeFiles/TextAPITests.dir/TextStubV2Tests.cpp.s

unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV3Tests.cpp.o: unittests/TextAPI/CMakeFiles/TextAPITests.dir/flags.make
unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV3Tests.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/unittests/TextAPI/TextStubV3Tests.cpp
unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV3Tests.cpp.o: unittests/TextAPI/CMakeFiles/TextAPITests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV3Tests.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV3Tests.cpp.o -MF CMakeFiles/TextAPITests.dir/TextStubV3Tests.cpp.o.d -o CMakeFiles/TextAPITests.dir/TextStubV3Tests.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/unittests/TextAPI/TextStubV3Tests.cpp

unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV3Tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TextAPITests.dir/TextStubV3Tests.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/unittests/TextAPI/TextStubV3Tests.cpp > CMakeFiles/TextAPITests.dir/TextStubV3Tests.cpp.i

unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV3Tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TextAPITests.dir/TextStubV3Tests.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/unittests/TextAPI/TextStubV3Tests.cpp -o CMakeFiles/TextAPITests.dir/TextStubV3Tests.cpp.s

unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV4Tests.cpp.o: unittests/TextAPI/CMakeFiles/TextAPITests.dir/flags.make
unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV4Tests.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/unittests/TextAPI/TextStubV4Tests.cpp
unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV4Tests.cpp.o: unittests/TextAPI/CMakeFiles/TextAPITests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV4Tests.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV4Tests.cpp.o -MF CMakeFiles/TextAPITests.dir/TextStubV4Tests.cpp.o.d -o CMakeFiles/TextAPITests.dir/TextStubV4Tests.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/unittests/TextAPI/TextStubV4Tests.cpp

unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV4Tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TextAPITests.dir/TextStubV4Tests.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/unittests/TextAPI/TextStubV4Tests.cpp > CMakeFiles/TextAPITests.dir/TextStubV4Tests.cpp.i

unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV4Tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TextAPITests.dir/TextStubV4Tests.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/unittests/TextAPI/TextStubV4Tests.cpp -o CMakeFiles/TextAPITests.dir/TextStubV4Tests.cpp.s

# Object files for target TextAPITests
TextAPITests_OBJECTS = \
"CMakeFiles/TextAPITests.dir/TextStubV1Tests.cpp.o" \
"CMakeFiles/TextAPITests.dir/TextStubV2Tests.cpp.o" \
"CMakeFiles/TextAPITests.dir/TextStubV3Tests.cpp.o" \
"CMakeFiles/TextAPITests.dir/TextStubV4Tests.cpp.o"

# External object files for target TextAPITests
TextAPITests_EXTERNAL_OBJECTS =

unittests/TextAPI/TextAPITests: unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV1Tests.cpp.o
unittests/TextAPI/TextAPITests: unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV2Tests.cpp.o
unittests/TextAPI/TextAPITests: unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV3Tests.cpp.o
unittests/TextAPI/TextAPITests: unittests/TextAPI/CMakeFiles/TextAPITests.dir/TextStubV4Tests.cpp.o
unittests/TextAPI/TextAPITests: unittests/TextAPI/CMakeFiles/TextAPITests.dir/build.make
unittests/TextAPI/TextAPITests: lib/libLLVMTextAPI.a
unittests/TextAPI/TextAPITests: lib/libLLVMSupport.a
unittests/TextAPI/TextAPITests: lib/libgtest_main.a
unittests/TextAPI/TextAPITests: lib/libgtest.a
unittests/TextAPI/TextAPITests: lib/libLLVMTestingSupport.a
unittests/TextAPI/TextAPITests: lib/libLLVMBinaryFormat.a
unittests/TextAPI/TextAPITests: lib/libgtest.a
unittests/TextAPI/TextAPITests: lib/libLLVMSupport.a
unittests/TextAPI/TextAPITests: lib/libLLVMDemangle.a
unittests/TextAPI/TextAPITests: unittests/TextAPI/CMakeFiles/TextAPITests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable TextAPITests"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/TextAPI && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TextAPITests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittests/TextAPI/CMakeFiles/TextAPITests.dir/build: unittests/TextAPI/TextAPITests
.PHONY : unittests/TextAPI/CMakeFiles/TextAPITests.dir/build

unittests/TextAPI/CMakeFiles/TextAPITests.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/unittests/TextAPI && $(CMAKE_COMMAND) -P CMakeFiles/TextAPITests.dir/cmake_clean.cmake
.PHONY : unittests/TextAPI/CMakeFiles/TextAPITests.dir/clean

unittests/TextAPI/CMakeFiles/TextAPITests.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/unittests/TextAPI /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/unittests/TextAPI /root/CS201/CS201-Project/LLVM/build/unittests/TextAPI/CMakeFiles/TextAPITests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittests/TextAPI/CMakeFiles/TextAPITests.dir/depend

