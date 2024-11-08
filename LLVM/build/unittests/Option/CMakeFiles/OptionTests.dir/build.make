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
include unittests/Option/CMakeFiles/OptionTests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include unittests/Option/CMakeFiles/OptionTests.dir/compiler_depend.make

# Include the progress variables for this target.
include unittests/Option/CMakeFiles/OptionTests.dir/progress.make

# Include the compile flags for this target's objects.
include unittests/Option/CMakeFiles/OptionTests.dir/flags.make

unittests/Option/CMakeFiles/OptionTests.dir/OptionParsingTest.cpp.o: unittests/Option/CMakeFiles/OptionTests.dir/flags.make
unittests/Option/CMakeFiles/OptionTests.dir/OptionParsingTest.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/unittests/Option/OptionParsingTest.cpp
unittests/Option/CMakeFiles/OptionTests.dir/OptionParsingTest.cpp.o: unittests/Option/CMakeFiles/OptionTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object unittests/Option/CMakeFiles/OptionTests.dir/OptionParsingTest.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/Option && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT unittests/Option/CMakeFiles/OptionTests.dir/OptionParsingTest.cpp.o -MF CMakeFiles/OptionTests.dir/OptionParsingTest.cpp.o.d -o CMakeFiles/OptionTests.dir/OptionParsingTest.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/unittests/Option/OptionParsingTest.cpp

unittests/Option/CMakeFiles/OptionTests.dir/OptionParsingTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OptionTests.dir/OptionParsingTest.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/Option && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/unittests/Option/OptionParsingTest.cpp > CMakeFiles/OptionTests.dir/OptionParsingTest.cpp.i

unittests/Option/CMakeFiles/OptionTests.dir/OptionParsingTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OptionTests.dir/OptionParsingTest.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/Option && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/unittests/Option/OptionParsingTest.cpp -o CMakeFiles/OptionTests.dir/OptionParsingTest.cpp.s

unittests/Option/CMakeFiles/OptionTests.dir/OptionMarshallingTest.cpp.o: unittests/Option/CMakeFiles/OptionTests.dir/flags.make
unittests/Option/CMakeFiles/OptionTests.dir/OptionMarshallingTest.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/unittests/Option/OptionMarshallingTest.cpp
unittests/Option/CMakeFiles/OptionTests.dir/OptionMarshallingTest.cpp.o: unittests/Option/CMakeFiles/OptionTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object unittests/Option/CMakeFiles/OptionTests.dir/OptionMarshallingTest.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/Option && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT unittests/Option/CMakeFiles/OptionTests.dir/OptionMarshallingTest.cpp.o -MF CMakeFiles/OptionTests.dir/OptionMarshallingTest.cpp.o.d -o CMakeFiles/OptionTests.dir/OptionMarshallingTest.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/unittests/Option/OptionMarshallingTest.cpp

unittests/Option/CMakeFiles/OptionTests.dir/OptionMarshallingTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OptionTests.dir/OptionMarshallingTest.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/Option && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/unittests/Option/OptionMarshallingTest.cpp > CMakeFiles/OptionTests.dir/OptionMarshallingTest.cpp.i

unittests/Option/CMakeFiles/OptionTests.dir/OptionMarshallingTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OptionTests.dir/OptionMarshallingTest.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/Option && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/unittests/Option/OptionMarshallingTest.cpp -o CMakeFiles/OptionTests.dir/OptionMarshallingTest.cpp.s

# Object files for target OptionTests
OptionTests_OBJECTS = \
"CMakeFiles/OptionTests.dir/OptionParsingTest.cpp.o" \
"CMakeFiles/OptionTests.dir/OptionMarshallingTest.cpp.o"

# External object files for target OptionTests
OptionTests_EXTERNAL_OBJECTS =

unittests/Option/OptionTests: unittests/Option/CMakeFiles/OptionTests.dir/OptionParsingTest.cpp.o
unittests/Option/OptionTests: unittests/Option/CMakeFiles/OptionTests.dir/OptionMarshallingTest.cpp.o
unittests/Option/OptionTests: unittests/Option/CMakeFiles/OptionTests.dir/build.make
unittests/Option/OptionTests: lib/libLLVMOption.a
unittests/Option/OptionTests: lib/libLLVMSupport.a
unittests/Option/OptionTests: lib/libLLVMSupport.a
unittests/Option/OptionTests: lib/libgtest_main.a
unittests/Option/OptionTests: lib/libgtest.a
unittests/Option/OptionTests: lib/libLLVMSupport.a
unittests/Option/OptionTests: lib/libLLVMDemangle.a
unittests/Option/OptionTests: unittests/Option/CMakeFiles/OptionTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable OptionTests"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/Option && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OptionTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittests/Option/CMakeFiles/OptionTests.dir/build: unittests/Option/OptionTests
.PHONY : unittests/Option/CMakeFiles/OptionTests.dir/build

unittests/Option/CMakeFiles/OptionTests.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/unittests/Option && $(CMAKE_COMMAND) -P CMakeFiles/OptionTests.dir/cmake_clean.cmake
.PHONY : unittests/Option/CMakeFiles/OptionTests.dir/clean

unittests/Option/CMakeFiles/OptionTests.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/unittests/Option /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/unittests/Option /root/CS201/CS201-Project/LLVM/build/unittests/Option/CMakeFiles/OptionTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittests/Option/CMakeFiles/OptionTests.dir/depend

