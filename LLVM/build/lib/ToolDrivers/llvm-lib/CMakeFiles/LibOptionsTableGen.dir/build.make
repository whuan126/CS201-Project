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

# Utility rule file for LibOptionsTableGen.

# Include any custom commands dependencies for this target.
include lib/ToolDrivers/llvm-lib/CMakeFiles/LibOptionsTableGen.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/ToolDrivers/llvm-lib/CMakeFiles/LibOptionsTableGen.dir/progress.make

lib/ToolDrivers/llvm-lib/CMakeFiles/LibOptionsTableGen: lib/ToolDrivers/llvm-lib/Options.inc

lib/ToolDrivers/llvm-lib/Options.inc: bin/llvm-tblgen
lib/ToolDrivers/llvm-lib/Options.inc: bin/llvm-tblgen
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/lib/ToolDrivers/llvm-lib/Options.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/CodeGen/SDNodeProperties.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/CodeGen/ValueTypes.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Frontend/Directive/DirectiveBase.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Frontend/OpenACC/ACC.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Frontend/OpenMP/OMP.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/Attributes.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/Intrinsics.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsAArch64.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsAMDGPU.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsARM.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsBPF.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsHexagon.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsHexagonDep.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsMips.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsNVVM.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsPowerPC.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsRISCV.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsSystemZ.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsVE.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsVEVL.gen.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsWebAssembly.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsX86.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsXCore.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Option/OptParser.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/TableGen/Automaton.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/TableGen/SearchableTable.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/GenericOpcodes.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/GlobalISel/Combine.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/GlobalISel/RegisterBank.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/GlobalISel/SelectionDAGCompat.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/GlobalISel/Target.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/Target.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/TargetCallingConv.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/TargetInstrPredicate.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/TargetItinerary.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/TargetPfmCounters.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/TargetSchedule.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/TargetSelectionDAG.td
lib/ToolDrivers/llvm-lib/Options.inc: /root/CS201/CS201-Project/LLVM/llvm/lib/ToolDrivers/llvm-lib/Options.td
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building Options.inc..."
	cd /root/CS201/CS201-Project/LLVM/build/lib/ToolDrivers/llvm-lib && ../../../bin/llvm-tblgen -gen-opt-parser-defs -I /root/CS201/CS201-Project/LLVM/llvm/lib/ToolDrivers/llvm-lib -I/root/CS201/CS201-Project/LLVM/build/include -I/root/CS201/CS201-Project/LLVM/llvm/include /root/CS201/CS201-Project/LLVM/llvm/lib/ToolDrivers/llvm-lib/Options.td --write-if-changed -o /root/CS201/CS201-Project/LLVM/build/lib/ToolDrivers/llvm-lib/Options.inc

LibOptionsTableGen: lib/ToolDrivers/llvm-lib/CMakeFiles/LibOptionsTableGen
LibOptionsTableGen: lib/ToolDrivers/llvm-lib/Options.inc
LibOptionsTableGen: lib/ToolDrivers/llvm-lib/CMakeFiles/LibOptionsTableGen.dir/build.make
.PHONY : LibOptionsTableGen

# Rule to build all files generated by this target.
lib/ToolDrivers/llvm-lib/CMakeFiles/LibOptionsTableGen.dir/build: LibOptionsTableGen
.PHONY : lib/ToolDrivers/llvm-lib/CMakeFiles/LibOptionsTableGen.dir/build

lib/ToolDrivers/llvm-lib/CMakeFiles/LibOptionsTableGen.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/lib/ToolDrivers/llvm-lib && $(CMAKE_COMMAND) -P CMakeFiles/LibOptionsTableGen.dir/cmake_clean.cmake
.PHONY : lib/ToolDrivers/llvm-lib/CMakeFiles/LibOptionsTableGen.dir/clean

lib/ToolDrivers/llvm-lib/CMakeFiles/LibOptionsTableGen.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/lib/ToolDrivers/llvm-lib /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/lib/ToolDrivers/llvm-lib /root/CS201/CS201-Project/LLVM/build/lib/ToolDrivers/llvm-lib/CMakeFiles/LibOptionsTableGen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/ToolDrivers/llvm-lib/CMakeFiles/LibOptionsTableGen.dir/depend
