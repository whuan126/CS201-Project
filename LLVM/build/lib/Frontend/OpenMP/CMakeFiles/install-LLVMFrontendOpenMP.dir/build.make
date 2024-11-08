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

# Utility rule file for install-LLVMFrontendOpenMP.

# Include any custom commands dependencies for this target.
include lib/Frontend/OpenMP/CMakeFiles/install-LLVMFrontendOpenMP.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/Frontend/OpenMP/CMakeFiles/install-LLVMFrontendOpenMP.dir/progress.make

lib/Frontend/OpenMP/CMakeFiles/install-LLVMFrontendOpenMP:
	cd /root/CS201/CS201-Project/LLVM/build/lib/Frontend/OpenMP && /usr/bin/cmake -DCMAKE_INSTALL_COMPONENT="LLVMFrontendOpenMP" -P /root/CS201/CS201-Project/LLVM/build/cmake_install.cmake

install-LLVMFrontendOpenMP: lib/Frontend/OpenMP/CMakeFiles/install-LLVMFrontendOpenMP
install-LLVMFrontendOpenMP: lib/Frontend/OpenMP/CMakeFiles/install-LLVMFrontendOpenMP.dir/build.make
.PHONY : install-LLVMFrontendOpenMP

# Rule to build all files generated by this target.
lib/Frontend/OpenMP/CMakeFiles/install-LLVMFrontendOpenMP.dir/build: install-LLVMFrontendOpenMP
.PHONY : lib/Frontend/OpenMP/CMakeFiles/install-LLVMFrontendOpenMP.dir/build

lib/Frontend/OpenMP/CMakeFiles/install-LLVMFrontendOpenMP.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/lib/Frontend/OpenMP && $(CMAKE_COMMAND) -P CMakeFiles/install-LLVMFrontendOpenMP.dir/cmake_clean.cmake
.PHONY : lib/Frontend/OpenMP/CMakeFiles/install-LLVMFrontendOpenMP.dir/clean

lib/Frontend/OpenMP/CMakeFiles/install-LLVMFrontendOpenMP.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/lib/Frontend/OpenMP /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/lib/Frontend/OpenMP /root/CS201/CS201-Project/LLVM/build/lib/Frontend/OpenMP/CMakeFiles/install-LLVMFrontendOpenMP.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Frontend/OpenMP/CMakeFiles/install-LLVMFrontendOpenMP.dir/depend

