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
CMAKE_SOURCE_DIR = /home/xichuz/workspace/ruminations/classes

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xichuz/workspace/ruminations/classes/build

# Include any dependencies generated for this target.
include CMakeFiles/point.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/point.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/point.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/point.dir/flags.make

CMakeFiles/point.dir/point.cpp.o: CMakeFiles/point.dir/flags.make
CMakeFiles/point.dir/point.cpp.o: ../point.cpp
CMakeFiles/point.dir/point.cpp.o: CMakeFiles/point.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xichuz/workspace/ruminations/classes/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/point.dir/point.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/point.dir/point.cpp.o -MF CMakeFiles/point.dir/point.cpp.o.d -o CMakeFiles/point.dir/point.cpp.o -c /home/xichuz/workspace/ruminations/classes/point.cpp

CMakeFiles/point.dir/point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/point.dir/point.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xichuz/workspace/ruminations/classes/point.cpp > CMakeFiles/point.dir/point.cpp.i

CMakeFiles/point.dir/point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/point.dir/point.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xichuz/workspace/ruminations/classes/point.cpp -o CMakeFiles/point.dir/point.cpp.s

# Object files for target point
point_OBJECTS = \
"CMakeFiles/point.dir/point.cpp.o"

# External object files for target point
point_EXTERNAL_OBJECTS =

point: CMakeFiles/point.dir/point.cpp.o
point: CMakeFiles/point.dir/build.make
point: CMakeFiles/point.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xichuz/workspace/ruminations/classes/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable point"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/point.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/point.dir/build: point
.PHONY : CMakeFiles/point.dir/build

CMakeFiles/point.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/point.dir/cmake_clean.cmake
.PHONY : CMakeFiles/point.dir/clean

CMakeFiles/point.dir/depend:
	cd /home/xichuz/workspace/ruminations/classes/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xichuz/workspace/ruminations/classes /home/xichuz/workspace/ruminations/classes /home/xichuz/workspace/ruminations/classes/build /home/xichuz/workspace/ruminations/classes/build /home/xichuz/workspace/ruminations/classes/build/CMakeFiles/point.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/point.dir/depend

