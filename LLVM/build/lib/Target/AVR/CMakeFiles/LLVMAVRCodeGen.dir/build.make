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
include lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/flags.make

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRAsmPrinter.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/flags.make
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRAsmPrinter.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRAsmPrinter.cpp
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRAsmPrinter.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRAsmPrinter.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRAsmPrinter.cpp.o -MF CMakeFiles/LLVMAVRCodeGen.dir/AVRAsmPrinter.cpp.o.d -o CMakeFiles/LLVMAVRCodeGen.dir/AVRAsmPrinter.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRAsmPrinter.cpp

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRAsmPrinter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMAVRCodeGen.dir/AVRAsmPrinter.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRAsmPrinter.cpp > CMakeFiles/LLVMAVRCodeGen.dir/AVRAsmPrinter.cpp.i

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRAsmPrinter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMAVRCodeGen.dir/AVRAsmPrinter.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRAsmPrinter.cpp -o CMakeFiles/LLVMAVRCodeGen.dir/AVRAsmPrinter.cpp.s

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRExpandPseudoInsts.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/flags.make
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRExpandPseudoInsts.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRExpandPseudoInsts.cpp
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRExpandPseudoInsts.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRExpandPseudoInsts.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRExpandPseudoInsts.cpp.o -MF CMakeFiles/LLVMAVRCodeGen.dir/AVRExpandPseudoInsts.cpp.o.d -o CMakeFiles/LLVMAVRCodeGen.dir/AVRExpandPseudoInsts.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRExpandPseudoInsts.cpp

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRExpandPseudoInsts.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMAVRCodeGen.dir/AVRExpandPseudoInsts.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRExpandPseudoInsts.cpp > CMakeFiles/LLVMAVRCodeGen.dir/AVRExpandPseudoInsts.cpp.i

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRExpandPseudoInsts.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMAVRCodeGen.dir/AVRExpandPseudoInsts.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRExpandPseudoInsts.cpp -o CMakeFiles/LLVMAVRCodeGen.dir/AVRExpandPseudoInsts.cpp.s

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRFrameLowering.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/flags.make
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRFrameLowering.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRFrameLowering.cpp
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRFrameLowering.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRFrameLowering.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRFrameLowering.cpp.o -MF CMakeFiles/LLVMAVRCodeGen.dir/AVRFrameLowering.cpp.o.d -o CMakeFiles/LLVMAVRCodeGen.dir/AVRFrameLowering.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRFrameLowering.cpp

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRFrameLowering.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMAVRCodeGen.dir/AVRFrameLowering.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRFrameLowering.cpp > CMakeFiles/LLVMAVRCodeGen.dir/AVRFrameLowering.cpp.i

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRFrameLowering.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMAVRCodeGen.dir/AVRFrameLowering.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRFrameLowering.cpp -o CMakeFiles/LLVMAVRCodeGen.dir/AVRFrameLowering.cpp.s

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRInstrInfo.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/flags.make
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRInstrInfo.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRInstrInfo.cpp
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRInstrInfo.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRInstrInfo.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRInstrInfo.cpp.o -MF CMakeFiles/LLVMAVRCodeGen.dir/AVRInstrInfo.cpp.o.d -o CMakeFiles/LLVMAVRCodeGen.dir/AVRInstrInfo.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRInstrInfo.cpp

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRInstrInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMAVRCodeGen.dir/AVRInstrInfo.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRInstrInfo.cpp > CMakeFiles/LLVMAVRCodeGen.dir/AVRInstrInfo.cpp.i

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRInstrInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMAVRCodeGen.dir/AVRInstrInfo.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRInstrInfo.cpp -o CMakeFiles/LLVMAVRCodeGen.dir/AVRInstrInfo.cpp.s

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRISelDAGToDAG.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/flags.make
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRISelDAGToDAG.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRISelDAGToDAG.cpp
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRISelDAGToDAG.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRISelDAGToDAG.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRISelDAGToDAG.cpp.o -MF CMakeFiles/LLVMAVRCodeGen.dir/AVRISelDAGToDAG.cpp.o.d -o CMakeFiles/LLVMAVRCodeGen.dir/AVRISelDAGToDAG.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRISelDAGToDAG.cpp

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRISelDAGToDAG.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMAVRCodeGen.dir/AVRISelDAGToDAG.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRISelDAGToDAG.cpp > CMakeFiles/LLVMAVRCodeGen.dir/AVRISelDAGToDAG.cpp.i

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRISelDAGToDAG.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMAVRCodeGen.dir/AVRISelDAGToDAG.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRISelDAGToDAG.cpp -o CMakeFiles/LLVMAVRCodeGen.dir/AVRISelDAGToDAG.cpp.s

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRISelLowering.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/flags.make
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRISelLowering.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRISelLowering.cpp
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRISelLowering.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRISelLowering.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRISelLowering.cpp.o -MF CMakeFiles/LLVMAVRCodeGen.dir/AVRISelLowering.cpp.o.d -o CMakeFiles/LLVMAVRCodeGen.dir/AVRISelLowering.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRISelLowering.cpp

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRISelLowering.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMAVRCodeGen.dir/AVRISelLowering.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRISelLowering.cpp > CMakeFiles/LLVMAVRCodeGen.dir/AVRISelLowering.cpp.i

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRISelLowering.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMAVRCodeGen.dir/AVRISelLowering.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRISelLowering.cpp -o CMakeFiles/LLVMAVRCodeGen.dir/AVRISelLowering.cpp.s

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRMCInstLower.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/flags.make
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRMCInstLower.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRMCInstLower.cpp
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRMCInstLower.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRMCInstLower.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRMCInstLower.cpp.o -MF CMakeFiles/LLVMAVRCodeGen.dir/AVRMCInstLower.cpp.o.d -o CMakeFiles/LLVMAVRCodeGen.dir/AVRMCInstLower.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRMCInstLower.cpp

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRMCInstLower.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMAVRCodeGen.dir/AVRMCInstLower.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRMCInstLower.cpp > CMakeFiles/LLVMAVRCodeGen.dir/AVRMCInstLower.cpp.i

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRMCInstLower.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMAVRCodeGen.dir/AVRMCInstLower.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRMCInstLower.cpp -o CMakeFiles/LLVMAVRCodeGen.dir/AVRMCInstLower.cpp.s

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRRelaxMemOperations.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/flags.make
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRRelaxMemOperations.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRRelaxMemOperations.cpp
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRRelaxMemOperations.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRRelaxMemOperations.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRRelaxMemOperations.cpp.o -MF CMakeFiles/LLVMAVRCodeGen.dir/AVRRelaxMemOperations.cpp.o.d -o CMakeFiles/LLVMAVRCodeGen.dir/AVRRelaxMemOperations.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRRelaxMemOperations.cpp

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRRelaxMemOperations.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMAVRCodeGen.dir/AVRRelaxMemOperations.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRRelaxMemOperations.cpp > CMakeFiles/LLVMAVRCodeGen.dir/AVRRelaxMemOperations.cpp.i

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRRelaxMemOperations.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMAVRCodeGen.dir/AVRRelaxMemOperations.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRRelaxMemOperations.cpp -o CMakeFiles/LLVMAVRCodeGen.dir/AVRRelaxMemOperations.cpp.s

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRRegisterInfo.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/flags.make
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRRegisterInfo.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRRegisterInfo.cpp
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRRegisterInfo.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRRegisterInfo.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRRegisterInfo.cpp.o -MF CMakeFiles/LLVMAVRCodeGen.dir/AVRRegisterInfo.cpp.o.d -o CMakeFiles/LLVMAVRCodeGen.dir/AVRRegisterInfo.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRRegisterInfo.cpp

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRRegisterInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMAVRCodeGen.dir/AVRRegisterInfo.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRRegisterInfo.cpp > CMakeFiles/LLVMAVRCodeGen.dir/AVRRegisterInfo.cpp.i

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRRegisterInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMAVRCodeGen.dir/AVRRegisterInfo.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRRegisterInfo.cpp -o CMakeFiles/LLVMAVRCodeGen.dir/AVRRegisterInfo.cpp.s

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRSubtarget.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/flags.make
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRSubtarget.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRSubtarget.cpp
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRSubtarget.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRSubtarget.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRSubtarget.cpp.o -MF CMakeFiles/LLVMAVRCodeGen.dir/AVRSubtarget.cpp.o.d -o CMakeFiles/LLVMAVRCodeGen.dir/AVRSubtarget.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRSubtarget.cpp

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRSubtarget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMAVRCodeGen.dir/AVRSubtarget.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRSubtarget.cpp > CMakeFiles/LLVMAVRCodeGen.dir/AVRSubtarget.cpp.i

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRSubtarget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMAVRCodeGen.dir/AVRSubtarget.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRSubtarget.cpp -o CMakeFiles/LLVMAVRCodeGen.dir/AVRSubtarget.cpp.s

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetMachine.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/flags.make
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetMachine.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRTargetMachine.cpp
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetMachine.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetMachine.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetMachine.cpp.o -MF CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetMachine.cpp.o.d -o CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetMachine.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRTargetMachine.cpp

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetMachine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetMachine.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRTargetMachine.cpp > CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetMachine.cpp.i

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetMachine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetMachine.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRTargetMachine.cpp -o CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetMachine.cpp.s

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetObjectFile.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/flags.make
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetObjectFile.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRTargetObjectFile.cpp
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetObjectFile.cpp.o: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetObjectFile.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetObjectFile.cpp.o -MF CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetObjectFile.cpp.o.d -o CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetObjectFile.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRTargetObjectFile.cpp

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetObjectFile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetObjectFile.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRTargetObjectFile.cpp > CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetObjectFile.cpp.i

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetObjectFile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetObjectFile.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR/AVRTargetObjectFile.cpp -o CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetObjectFile.cpp.s

# Object files for target LLVMAVRCodeGen
LLVMAVRCodeGen_OBJECTS = \
"CMakeFiles/LLVMAVRCodeGen.dir/AVRAsmPrinter.cpp.o" \
"CMakeFiles/LLVMAVRCodeGen.dir/AVRExpandPseudoInsts.cpp.o" \
"CMakeFiles/LLVMAVRCodeGen.dir/AVRFrameLowering.cpp.o" \
"CMakeFiles/LLVMAVRCodeGen.dir/AVRInstrInfo.cpp.o" \
"CMakeFiles/LLVMAVRCodeGen.dir/AVRISelDAGToDAG.cpp.o" \
"CMakeFiles/LLVMAVRCodeGen.dir/AVRISelLowering.cpp.o" \
"CMakeFiles/LLVMAVRCodeGen.dir/AVRMCInstLower.cpp.o" \
"CMakeFiles/LLVMAVRCodeGen.dir/AVRRelaxMemOperations.cpp.o" \
"CMakeFiles/LLVMAVRCodeGen.dir/AVRRegisterInfo.cpp.o" \
"CMakeFiles/LLVMAVRCodeGen.dir/AVRSubtarget.cpp.o" \
"CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetMachine.cpp.o" \
"CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetObjectFile.cpp.o"

# External object files for target LLVMAVRCodeGen
LLVMAVRCodeGen_EXTERNAL_OBJECTS =

lib/libLLVMAVRCodeGen.a: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRAsmPrinter.cpp.o
lib/libLLVMAVRCodeGen.a: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRExpandPseudoInsts.cpp.o
lib/libLLVMAVRCodeGen.a: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRFrameLowering.cpp.o
lib/libLLVMAVRCodeGen.a: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRInstrInfo.cpp.o
lib/libLLVMAVRCodeGen.a: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRISelDAGToDAG.cpp.o
lib/libLLVMAVRCodeGen.a: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRISelLowering.cpp.o
lib/libLLVMAVRCodeGen.a: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRMCInstLower.cpp.o
lib/libLLVMAVRCodeGen.a: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRRelaxMemOperations.cpp.o
lib/libLLVMAVRCodeGen.a: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRRegisterInfo.cpp.o
lib/libLLVMAVRCodeGen.a: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRSubtarget.cpp.o
lib/libLLVMAVRCodeGen.a: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetMachine.cpp.o
lib/libLLVMAVRCodeGen.a: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/AVRTargetObjectFile.cpp.o
lib/libLLVMAVRCodeGen.a: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/build.make
lib/libLLVMAVRCodeGen.a: lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX static library ../../libLLVMAVRCodeGen.a"
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && $(CMAKE_COMMAND) -P CMakeFiles/LLVMAVRCodeGen.dir/cmake_clean_target.cmake
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMAVRCodeGen.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/build: lib/libLLVMAVRCodeGen.a
.PHONY : lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/build

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR && $(CMAKE_COMMAND) -P CMakeFiles/LLVMAVRCodeGen.dir/cmake_clean.cmake
.PHONY : lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/clean

lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/lib/Target/AVR /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR /root/CS201/CS201-Project/LLVM/build/lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/AVR/CMakeFiles/LLVMAVRCodeGen.dir/depend
