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

# Utility rule file for omp_cpp.

# Include any custom commands dependencies for this target.
include lib/Frontend/OpenMP/CMakeFiles/omp_cpp.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/Frontend/OpenMP/CMakeFiles/omp_cpp.dir/progress.make

lib/Frontend/OpenMP/CMakeFiles/omp_cpp: lib/Frontend/OpenMP/OMP.cpp

lib/Frontend/OpenMP/OMP.cpp: bin/llvm-tblgen
lib/Frontend/OpenMP/OMP.cpp: bin/llvm-tblgen
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/CodeGen/SDNodeProperties.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/CodeGen/ValueTypes.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Frontend/Directive/DirectiveBase.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Frontend/OpenACC/ACC.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Frontend/OpenMP/OMP.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/Attributes.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/Intrinsics.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsAArch64.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsAMDGPU.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsARM.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsBPF.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsHexagon.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsHexagonDep.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsMips.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsNVVM.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsPowerPC.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsRISCV.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsSystemZ.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsVE.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsVEVL.gen.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsWebAssembly.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsX86.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/IR/IntrinsicsXCore.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Option/OptParser.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/TableGen/Automaton.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/TableGen/SearchableTable.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/GenericOpcodes.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/GlobalISel/Combine.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/GlobalISel/RegisterBank.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/GlobalISel/SelectionDAGCompat.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/GlobalISel/Target.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/Target.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/TargetCallingConv.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/TargetInstrPredicate.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/TargetItinerary.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/TargetPfmCounters.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/TargetSchedule.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Target/TargetSelectionDAG.td
lib/Frontend/OpenMP/OMP.cpp: /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Frontend/OpenMP/OMP.td
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building OMP.cpp..."
	cd /root/CS201/CS201-Project/LLVM/build/lib/Frontend/OpenMP && ../../../bin/llvm-tblgen --gen-directive-impl -I /root/CS201/CS201-Project/LLVM/llvm/lib/Frontend/OpenMP -I/root/CS201/CS201-Project/LLVM/build/include -I/root/CS201/CS201-Project/LLVM/llvm/include /root/CS201/CS201-Project/LLVM/llvm/include/llvm/Frontend/OpenMP/OMP.td --write-if-changed -o /root/CS201/CS201-Project/LLVM/build/lib/Frontend/OpenMP/OMP.cpp

omp_cpp: lib/Frontend/OpenMP/CMakeFiles/omp_cpp
omp_cpp: lib/Frontend/OpenMP/OMP.cpp
omp_cpp: lib/Frontend/OpenMP/CMakeFiles/omp_cpp.dir/build.make
.PHONY : omp_cpp

# Rule to build all files generated by this target.
lib/Frontend/OpenMP/CMakeFiles/omp_cpp.dir/build: omp_cpp
.PHONY : lib/Frontend/OpenMP/CMakeFiles/omp_cpp.dir/build

lib/Frontend/OpenMP/CMakeFiles/omp_cpp.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/lib/Frontend/OpenMP && $(CMAKE_COMMAND) -P CMakeFiles/omp_cpp.dir/cmake_clean.cmake
.PHONY : lib/Frontend/OpenMP/CMakeFiles/omp_cpp.dir/clean

lib/Frontend/OpenMP/CMakeFiles/omp_cpp.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/lib/Frontend/OpenMP /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/lib/Frontend/OpenMP /root/CS201/CS201-Project/LLVM/build/lib/Frontend/OpenMP/CMakeFiles/omp_cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Frontend/OpenMP/CMakeFiles/omp_cpp.dir/depend

