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
include unittests/LineEditor/CMakeFiles/LineEditorTests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include unittests/LineEditor/CMakeFiles/LineEditorTests.dir/compiler_depend.make

# Include the progress variables for this target.
include unittests/LineEditor/CMakeFiles/LineEditorTests.dir/progress.make

# Include the compile flags for this target's objects.
include unittests/LineEditor/CMakeFiles/LineEditorTests.dir/flags.make

unittests/LineEditor/CMakeFiles/LineEditorTests.dir/LineEditor.cpp.o: unittests/LineEditor/CMakeFiles/LineEditorTests.dir/flags.make
unittests/LineEditor/CMakeFiles/LineEditorTests.dir/LineEditor.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/unittests/LineEditor/LineEditor.cpp
unittests/LineEditor/CMakeFiles/LineEditorTests.dir/LineEditor.cpp.o: unittests/LineEditor/CMakeFiles/LineEditorTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object unittests/LineEditor/CMakeFiles/LineEditorTests.dir/LineEditor.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/LineEditor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT unittests/LineEditor/CMakeFiles/LineEditorTests.dir/LineEditor.cpp.o -MF CMakeFiles/LineEditorTests.dir/LineEditor.cpp.o.d -o CMakeFiles/LineEditorTests.dir/LineEditor.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/unittests/LineEditor/LineEditor.cpp

unittests/LineEditor/CMakeFiles/LineEditorTests.dir/LineEditor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LineEditorTests.dir/LineEditor.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/LineEditor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/unittests/LineEditor/LineEditor.cpp > CMakeFiles/LineEditorTests.dir/LineEditor.cpp.i

unittests/LineEditor/CMakeFiles/LineEditorTests.dir/LineEditor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LineEditorTests.dir/LineEditor.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/LineEditor && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/unittests/LineEditor/LineEditor.cpp -o CMakeFiles/LineEditorTests.dir/LineEditor.cpp.s

# Object files for target LineEditorTests
LineEditorTests_OBJECTS = \
"CMakeFiles/LineEditorTests.dir/LineEditor.cpp.o"

# External object files for target LineEditorTests
LineEditorTests_EXTERNAL_OBJECTS =

unittests/LineEditor/LineEditorTests: unittests/LineEditor/CMakeFiles/LineEditorTests.dir/LineEditor.cpp.o
unittests/LineEditor/LineEditorTests: unittests/LineEditor/CMakeFiles/LineEditorTests.dir/build.make
unittests/LineEditor/LineEditorTests: lib/libLLVMLineEditor.a
unittests/LineEditor/LineEditorTests: lib/libLLVMSupport.a
unittests/LineEditor/LineEditorTests: lib/libLLVMSupport.a
unittests/LineEditor/LineEditorTests: lib/libgtest_main.a
unittests/LineEditor/LineEditorTests: lib/libgtest.a
unittests/LineEditor/LineEditorTests: lib/libLLVMSupport.a
unittests/LineEditor/LineEditorTests: lib/libLLVMDemangle.a
unittests/LineEditor/LineEditorTests: unittests/LineEditor/CMakeFiles/LineEditorTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LineEditorTests"
	cd /root/CS201/CS201-Project/LLVM/build/unittests/LineEditor && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LineEditorTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittests/LineEditor/CMakeFiles/LineEditorTests.dir/build: unittests/LineEditor/LineEditorTests
.PHONY : unittests/LineEditor/CMakeFiles/LineEditorTests.dir/build

unittests/LineEditor/CMakeFiles/LineEditorTests.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/unittests/LineEditor && $(CMAKE_COMMAND) -P CMakeFiles/LineEditorTests.dir/cmake_clean.cmake
.PHONY : unittests/LineEditor/CMakeFiles/LineEditorTests.dir/clean

unittests/LineEditor/CMakeFiles/LineEditorTests.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/unittests/LineEditor /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/unittests/LineEditor /root/CS201/CS201-Project/LLVM/build/unittests/LineEditor/CMakeFiles/LineEditorTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittests/LineEditor/CMakeFiles/LineEditorTests.dir/depend

