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
include tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/compiler_depend.make

# Include the progress variables for this target.
include tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/progress.make

# Include the compile flags for this target's objects.
include tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/flags.make

tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/Target.cpp.o: tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/flags.make
tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/Target.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-exegesis/lib/X86/Target.cpp
tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/Target.cpp.o: tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/Target.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-exegesis/lib/X86 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/Target.cpp.o -MF CMakeFiles/LLVMExegesisX86.dir/Target.cpp.o.d -o CMakeFiles/LLVMExegesisX86.dir/Target.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-exegesis/lib/X86/Target.cpp

tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/Target.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMExegesisX86.dir/Target.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-exegesis/lib/X86 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-exegesis/lib/X86/Target.cpp > CMakeFiles/LLVMExegesisX86.dir/Target.cpp.i

tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/Target.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMExegesisX86.dir/Target.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-exegesis/lib/X86 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-exegesis/lib/X86/Target.cpp -o CMakeFiles/LLVMExegesisX86.dir/Target.cpp.s

tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/X86Counter.cpp.o: tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/flags.make
tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/X86Counter.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-exegesis/lib/X86/X86Counter.cpp
tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/X86Counter.cpp.o: tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/X86Counter.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-exegesis/lib/X86 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/X86Counter.cpp.o -MF CMakeFiles/LLVMExegesisX86.dir/X86Counter.cpp.o.d -o CMakeFiles/LLVMExegesisX86.dir/X86Counter.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-exegesis/lib/X86/X86Counter.cpp

tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/X86Counter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMExegesisX86.dir/X86Counter.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-exegesis/lib/X86 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-exegesis/lib/X86/X86Counter.cpp > CMakeFiles/LLVMExegesisX86.dir/X86Counter.cpp.i

tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/X86Counter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMExegesisX86.dir/X86Counter.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-exegesis/lib/X86 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-exegesis/lib/X86/X86Counter.cpp -o CMakeFiles/LLVMExegesisX86.dir/X86Counter.cpp.s

# Object files for target LLVMExegesisX86
LLVMExegesisX86_OBJECTS = \
"CMakeFiles/LLVMExegesisX86.dir/Target.cpp.o" \
"CMakeFiles/LLVMExegesisX86.dir/X86Counter.cpp.o"

# External object files for target LLVMExegesisX86
LLVMExegesisX86_EXTERNAL_OBJECTS =

lib/libLLVMExegesisX86.a: tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/Target.cpp.o
lib/libLLVMExegesisX86.a: tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/X86Counter.cpp.o
lib/libLLVMExegesisX86.a: tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/build.make
lib/libLLVMExegesisX86.a: tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library ../../../../lib/libLLVMExegesisX86.a"
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-exegesis/lib/X86 && $(CMAKE_COMMAND) -P CMakeFiles/LLVMExegesisX86.dir/cmake_clean_target.cmake
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-exegesis/lib/X86 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMExegesisX86.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/build: lib/libLLVMExegesisX86.a
.PHONY : tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/build

tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/tools/llvm-exegesis/lib/X86 && $(CMAKE_COMMAND) -P CMakeFiles/LLVMExegesisX86.dir/cmake_clean.cmake
.PHONY : tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/clean

tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/tools/llvm-exegesis/lib/X86 /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/tools/llvm-exegesis/lib/X86 /root/CS201/CS201-Project/LLVM/build/tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/depend
