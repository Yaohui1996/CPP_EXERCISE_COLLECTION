# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/yaohui/Desktop/CPP_Primer_5th_Exercise

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yaohui/Desktop/CPP_Primer_5th_Exercise/cmake-build-debug

# Include any dependencies generated for this target.
include Chapter1/CMakeFiles/_01_23.dir/depend.make

# Include the progress variables for this target.
include Chapter1/CMakeFiles/_01_23.dir/progress.make

# Include the compile flags for this target's objects.
include Chapter1/CMakeFiles/_01_23.dir/flags.make

Chapter1/CMakeFiles/_01_23.dir/_01_23.cpp.o: Chapter1/CMakeFiles/_01_23.dir/flags.make
Chapter1/CMakeFiles/_01_23.dir/_01_23.cpp.o: ../Chapter1/_01_23.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yaohui/Desktop/CPP_Primer_5th_Exercise/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Chapter1/CMakeFiles/_01_23.dir/_01_23.cpp.o"
	cd /Users/yaohui/Desktop/CPP_Primer_5th_Exercise/cmake-build-debug/Chapter1 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/_01_23.dir/_01_23.cpp.o -c /Users/yaohui/Desktop/CPP_Primer_5th_Exercise/Chapter1/_01_23.cpp

Chapter1/CMakeFiles/_01_23.dir/_01_23.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_01_23.dir/_01_23.cpp.i"
	cd /Users/yaohui/Desktop/CPP_Primer_5th_Exercise/cmake-build-debug/Chapter1 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yaohui/Desktop/CPP_Primer_5th_Exercise/Chapter1/_01_23.cpp > CMakeFiles/_01_23.dir/_01_23.cpp.i

Chapter1/CMakeFiles/_01_23.dir/_01_23.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_01_23.dir/_01_23.cpp.s"
	cd /Users/yaohui/Desktop/CPP_Primer_5th_Exercise/cmake-build-debug/Chapter1 && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yaohui/Desktop/CPP_Primer_5th_Exercise/Chapter1/_01_23.cpp -o CMakeFiles/_01_23.dir/_01_23.cpp.s

# Object files for target _01_23
_01_23_OBJECTS = \
"CMakeFiles/_01_23.dir/_01_23.cpp.o"

# External object files for target _01_23
_01_23_EXTERNAL_OBJECTS =

Chapter1/_01_23: Chapter1/CMakeFiles/_01_23.dir/_01_23.cpp.o
Chapter1/_01_23: Chapter1/CMakeFiles/_01_23.dir/build.make
Chapter1/_01_23: Chapter1/CMakeFiles/_01_23.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/yaohui/Desktop/CPP_Primer_5th_Exercise/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable _01_23"
	cd /Users/yaohui/Desktop/CPP_Primer_5th_Exercise/cmake-build-debug/Chapter1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/_01_23.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Chapter1/CMakeFiles/_01_23.dir/build: Chapter1/_01_23

.PHONY : Chapter1/CMakeFiles/_01_23.dir/build

Chapter1/CMakeFiles/_01_23.dir/clean:
	cd /Users/yaohui/Desktop/CPP_Primer_5th_Exercise/cmake-build-debug/Chapter1 && $(CMAKE_COMMAND) -P CMakeFiles/_01_23.dir/cmake_clean.cmake
.PHONY : Chapter1/CMakeFiles/_01_23.dir/clean

Chapter1/CMakeFiles/_01_23.dir/depend:
	cd /Users/yaohui/Desktop/CPP_Primer_5th_Exercise/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yaohui/Desktop/CPP_Primer_5th_Exercise /Users/yaohui/Desktop/CPP_Primer_5th_Exercise/Chapter1 /Users/yaohui/Desktop/CPP_Primer_5th_Exercise/cmake-build-debug /Users/yaohui/Desktop/CPP_Primer_5th_Exercise/cmake-build-debug/Chapter1 /Users/yaohui/Desktop/CPP_Primer_5th_Exercise/cmake-build-debug/Chapter1/CMakeFiles/_01_23.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Chapter1/CMakeFiles/_01_23.dir/depend

