# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/amos/Documents/GitHub/第7章

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/amos/Documents/GitHub/第7章/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/7.dir/flags.make

CMakeFiles/7.dir/exe1.cpp.o: CMakeFiles/7.dir/flags.make
CMakeFiles/7.dir/exe1.cpp.o: ../exe1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/amos/Documents/GitHub/第7章/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/7.dir/exe1.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/7.dir/exe1.cpp.o -c /Users/amos/Documents/GitHub/第7章/exe1.cpp

CMakeFiles/7.dir/exe1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/7.dir/exe1.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/amos/Documents/GitHub/第7章/exe1.cpp > CMakeFiles/7.dir/exe1.cpp.i

CMakeFiles/7.dir/exe1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/7.dir/exe1.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/amos/Documents/GitHub/第7章/exe1.cpp -o CMakeFiles/7.dir/exe1.cpp.s

CMakeFiles/7.dir/7.3.cpp.o: CMakeFiles/7.dir/flags.make
CMakeFiles/7.dir/7.3.cpp.o: ../7.3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/amos/Documents/GitHub/第7章/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/7.dir/7.3.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/7.dir/7.3.cpp.o -c /Users/amos/Documents/GitHub/第7章/7.3.cpp

CMakeFiles/7.dir/7.3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/7.dir/7.3.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/amos/Documents/GitHub/第7章/7.3.cpp > CMakeFiles/7.dir/7.3.cpp.i

CMakeFiles/7.dir/7.3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/7.dir/7.3.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/amos/Documents/GitHub/第7章/7.3.cpp -o CMakeFiles/7.dir/7.3.cpp.s

CMakeFiles/7.dir/PATA1032.cpp.o: CMakeFiles/7.dir/flags.make
CMakeFiles/7.dir/PATA1032.cpp.o: ../PATA1032.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/amos/Documents/GitHub/第7章/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/7.dir/PATA1032.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/7.dir/PATA1032.cpp.o -c /Users/amos/Documents/GitHub/第7章/PATA1032.cpp

CMakeFiles/7.dir/PATA1032.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/7.dir/PATA1032.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/amos/Documents/GitHub/第7章/PATA1032.cpp > CMakeFiles/7.dir/PATA1032.cpp.i

CMakeFiles/7.dir/PATA1032.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/7.dir/PATA1032.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/amos/Documents/GitHub/第7章/PATA1032.cpp -o CMakeFiles/7.dir/PATA1032.cpp.s

# Object files for target 7
7_OBJECTS = \
"CMakeFiles/7.dir/exe1.cpp.o" \
"CMakeFiles/7.dir/7.3.cpp.o" \
"CMakeFiles/7.dir/PATA1032.cpp.o"

# External object files for target 7
7_EXTERNAL_OBJECTS =

7 : CMakeFiles/7.dir/exe1.cpp.o
7 : CMakeFiles/7.dir/7.3.cpp.o
7 : CMakeFiles/7.dir/PATA1032.cpp.o
7 : CMakeFiles/7.dir/build.make
7 : CMakeFiles/7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/amos/Documents/GitHub/第7章/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable 7"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/7.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/7.dir/build: 7

.PHONY : CMakeFiles/7.dir/build

CMakeFiles/7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/7.dir/cmake_clean.cmake
.PHONY : CMakeFiles/7.dir/clean

CMakeFiles/7.dir/depend:
	cd /Users/amos/Documents/GitHub/第7章/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/amos/Documents/GitHub/第7章 /Users/amos/Documents/GitHub/第7章 /Users/amos/Documents/GitHub/第7章/cmake-build-debug /Users/amos/Documents/GitHub/第7章/cmake-build-debug /Users/amos/Documents/GitHub/第7章/cmake-build-debug/CMakeFiles/7.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/7.dir/depend

