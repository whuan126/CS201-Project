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
include tools/sancov/CMakeFiles/sancov.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tools/sancov/CMakeFiles/sancov.dir/compiler_depend.make

# Include the progress variables for this target.
include tools/sancov/CMakeFiles/sancov.dir/progress.make

# Include the compile flags for this target's objects.
include tools/sancov/CMakeFiles/sancov.dir/flags.make

tools/sancov/CMakeFiles/sancov.dir/sancov.cpp.o: tools/sancov/CMakeFiles/sancov.dir/flags.make
tools/sancov/CMakeFiles/sancov.dir/sancov.cpp.o: /root/CS201/CS201-Project/LLVM/llvm/tools/sancov/sancov.cpp
tools/sancov/CMakeFiles/sancov.dir/sancov.cpp.o: tools/sancov/CMakeFiles/sancov.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/sancov/CMakeFiles/sancov.dir/sancov.cpp.o"
	cd /root/CS201/CS201-Project/LLVM/build/tools/sancov && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tools/sancov/CMakeFiles/sancov.dir/sancov.cpp.o -MF CMakeFiles/sancov.dir/sancov.cpp.o.d -o CMakeFiles/sancov.dir/sancov.cpp.o -c /root/CS201/CS201-Project/LLVM/llvm/tools/sancov/sancov.cpp

tools/sancov/CMakeFiles/sancov.dir/sancov.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sancov.dir/sancov.cpp.i"
	cd /root/CS201/CS201-Project/LLVM/build/tools/sancov && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CS201/CS201-Project/LLVM/llvm/tools/sancov/sancov.cpp > CMakeFiles/sancov.dir/sancov.cpp.i

tools/sancov/CMakeFiles/sancov.dir/sancov.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sancov.dir/sancov.cpp.s"
	cd /root/CS201/CS201-Project/LLVM/build/tools/sancov && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CS201/CS201-Project/LLVM/llvm/tools/sancov/sancov.cpp -o CMakeFiles/sancov.dir/sancov.cpp.s

# Object files for target sancov
sancov_OBJECTS = \
"CMakeFiles/sancov.dir/sancov.cpp.o"

# External object files for target sancov
sancov_EXTERNAL_OBJECTS =

bin/sancov: tools/sancov/CMakeFiles/sancov.dir/sancov.cpp.o
bin/sancov: tools/sancov/CMakeFiles/sancov.dir/build.make
bin/sancov: lib/libLLVMAArch64Desc.a
bin/sancov: lib/libLLVMAMDGPUDesc.a
bin/sancov: lib/libLLVMARMDesc.a
bin/sancov: lib/libLLVMAVRDesc.a
bin/sancov: lib/libLLVMBPFDesc.a
bin/sancov: lib/libLLVMHexagonDesc.a
bin/sancov: lib/libLLVMLanaiDesc.a
bin/sancov: lib/libLLVMMipsDesc.a
bin/sancov: lib/libLLVMMSP430Desc.a
bin/sancov: lib/libLLVMNVPTXDesc.a
bin/sancov: lib/libLLVMPowerPCDesc.a
bin/sancov: lib/libLLVMRISCVDesc.a
bin/sancov: lib/libLLVMSparcDesc.a
bin/sancov: lib/libLLVMSystemZDesc.a
bin/sancov: lib/libLLVMWebAssemblyDesc.a
bin/sancov: lib/libLLVMX86Desc.a
bin/sancov: lib/libLLVMXCoreDesc.a
bin/sancov: lib/libLLVMAArch64Disassembler.a
bin/sancov: lib/libLLVMAMDGPUDisassembler.a
bin/sancov: lib/libLLVMARMDisassembler.a
bin/sancov: lib/libLLVMAVRDisassembler.a
bin/sancov: lib/libLLVMBPFDisassembler.a
bin/sancov: lib/libLLVMHexagonDisassembler.a
bin/sancov: lib/libLLVMLanaiDisassembler.a
bin/sancov: lib/libLLVMMipsDisassembler.a
bin/sancov: lib/libLLVMMSP430Disassembler.a
bin/sancov: lib/libLLVMPowerPCDisassembler.a
bin/sancov: lib/libLLVMRISCVDisassembler.a
bin/sancov: lib/libLLVMSparcDisassembler.a
bin/sancov: lib/libLLVMSystemZDisassembler.a
bin/sancov: lib/libLLVMWebAssemblyDisassembler.a
bin/sancov: lib/libLLVMX86Disassembler.a
bin/sancov: lib/libLLVMXCoreDisassembler.a
bin/sancov: lib/libLLVMAArch64Info.a
bin/sancov: lib/libLLVMAMDGPUInfo.a
bin/sancov: lib/libLLVMARMInfo.a
bin/sancov: lib/libLLVMAVRInfo.a
bin/sancov: lib/libLLVMBPFInfo.a
bin/sancov: lib/libLLVMHexagonInfo.a
bin/sancov: lib/libLLVMLanaiInfo.a
bin/sancov: lib/libLLVMMipsInfo.a
bin/sancov: lib/libLLVMMSP430Info.a
bin/sancov: lib/libLLVMNVPTXInfo.a
bin/sancov: lib/libLLVMPowerPCInfo.a
bin/sancov: lib/libLLVMRISCVInfo.a
bin/sancov: lib/libLLVMSparcInfo.a
bin/sancov: lib/libLLVMSystemZInfo.a
bin/sancov: lib/libLLVMWebAssemblyInfo.a
bin/sancov: lib/libLLVMX86Info.a
bin/sancov: lib/libLLVMXCoreInfo.a
bin/sancov: lib/libLLVMDebugInfoDWARF.a
bin/sancov: lib/libLLVMDebugInfoPDB.a
bin/sancov: lib/libLLVMMC.a
bin/sancov: lib/libLLVMMCDisassembler.a
bin/sancov: lib/libLLVMObject.a
bin/sancov: lib/libLLVMSupport.a
bin/sancov: lib/libLLVMSymbolize.a
bin/sancov: lib/libLLVMAArch64Desc.a
bin/sancov: lib/libLLVMAArch64Info.a
bin/sancov: lib/libLLVMAArch64Utils.a
bin/sancov: lib/libLLVMAMDGPUDesc.a
bin/sancov: lib/libLLVMAMDGPUInfo.a
bin/sancov: lib/libLLVMAMDGPUUtils.a
bin/sancov: lib/libLLVMARMDesc.a
bin/sancov: lib/libLLVMARMInfo.a
bin/sancov: lib/libLLVMARMUtils.a
bin/sancov: lib/libLLVMHexagonDesc.a
bin/sancov: lib/libLLVMHexagonInfo.a
bin/sancov: lib/libLLVMLanaiDesc.a
bin/sancov: lib/libLLVMLanaiInfo.a
bin/sancov: lib/libLLVMSystemZDesc.a
bin/sancov: lib/libLLVMSystemZInfo.a
bin/sancov: lib/libLLVMWebAssemblyDesc.a
bin/sancov: lib/libLLVMWebAssemblyInfo.a
bin/sancov: lib/libLLVMMCDisassembler.a
bin/sancov: lib/libLLVMDebugInfoDWARF.a
bin/sancov: lib/libLLVMDebugInfoPDB.a
bin/sancov: lib/libLLVMObject.a
bin/sancov: lib/libLLVMBitReader.a
bin/sancov: lib/libLLVMCore.a
bin/sancov: lib/libLLVMRemarks.a
bin/sancov: lib/libLLVMBitstreamReader.a
bin/sancov: lib/libLLVMMCParser.a
bin/sancov: lib/libLLVMMC.a
bin/sancov: lib/libLLVMDebugInfoCodeView.a
bin/sancov: lib/libLLVMDebugInfoMSF.a
bin/sancov: lib/libLLVMTextAPI.a
bin/sancov: lib/libLLVMBinaryFormat.a
bin/sancov: lib/libLLVMSupport.a
bin/sancov: lib/libLLVMDemangle.a
bin/sancov: tools/sancov/CMakeFiles/sancov.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CS201/CS201-Project/LLVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/sancov"
	cd /root/CS201/CS201-Project/LLVM/build/tools/sancov && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sancov.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/sancov/CMakeFiles/sancov.dir/build: bin/sancov
.PHONY : tools/sancov/CMakeFiles/sancov.dir/build

tools/sancov/CMakeFiles/sancov.dir/clean:
	cd /root/CS201/CS201-Project/LLVM/build/tools/sancov && $(CMAKE_COMMAND) -P CMakeFiles/sancov.dir/cmake_clean.cmake
.PHONY : tools/sancov/CMakeFiles/sancov.dir/clean

tools/sancov/CMakeFiles/sancov.dir/depend:
	cd /root/CS201/CS201-Project/LLVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CS201/CS201-Project/LLVM/llvm /root/CS201/CS201-Project/LLVM/llvm/tools/sancov /root/CS201/CS201-Project/LLVM/build /root/CS201/CS201-Project/LLVM/build/tools/sancov /root/CS201/CS201-Project/LLVM/build/tools/sancov/CMakeFiles/sancov.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/sancov/CMakeFiles/sancov.dir/depend
