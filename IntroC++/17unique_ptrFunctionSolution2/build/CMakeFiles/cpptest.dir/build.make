# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/mnt/c/Users/alsahmiq/Desktop/mes documents/course/IntroC++/17unique_ptrFunctionSolution2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/c/Users/alsahmiq/Desktop/mes documents/course/IntroC++/17unique_ptrFunctionSolution2/build"

# Include any dependencies generated for this target.
include CMakeFiles/cpptest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cpptest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpptest.dir/flags.make

CMakeFiles/cpptest.dir/main.cpp.o: CMakeFiles/cpptest.dir/flags.make
CMakeFiles/cpptest.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/alsahmiq/Desktop/mes documents/course/IntroC++/17unique_ptrFunctionSolution2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpptest.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpptest.dir/main.cpp.o -c "/mnt/c/Users/alsahmiq/Desktop/mes documents/course/IntroC++/17unique_ptrFunctionSolution2/main.cpp"

CMakeFiles/cpptest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpptest.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/alsahmiq/Desktop/mes documents/course/IntroC++/17unique_ptrFunctionSolution2/main.cpp" > CMakeFiles/cpptest.dir/main.cpp.i

CMakeFiles/cpptest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpptest.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/alsahmiq/Desktop/mes documents/course/IntroC++/17unique_ptrFunctionSolution2/main.cpp" -o CMakeFiles/cpptest.dir/main.cpp.s

# Object files for target cpptest
cpptest_OBJECTS = \
"CMakeFiles/cpptest.dir/main.cpp.o"

# External object files for target cpptest
cpptest_EXTERNAL_OBJECTS =

cpptest: CMakeFiles/cpptest.dir/main.cpp.o
cpptest: CMakeFiles/cpptest.dir/build.make
cpptest: CMakeFiles/cpptest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/c/Users/alsahmiq/Desktop/mes documents/course/IntroC++/17unique_ptrFunctionSolution2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cpptest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpptest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpptest.dir/build: cpptest

.PHONY : CMakeFiles/cpptest.dir/build

CMakeFiles/cpptest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpptest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpptest.dir/clean

CMakeFiles/cpptest.dir/depend:
	cd "/mnt/c/Users/alsahmiq/Desktop/mes documents/course/IntroC++/17unique_ptrFunctionSolution2/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/c/Users/alsahmiq/Desktop/mes documents/course/IntroC++/17unique_ptrFunctionSolution2" "/mnt/c/Users/alsahmiq/Desktop/mes documents/course/IntroC++/17unique_ptrFunctionSolution2" "/mnt/c/Users/alsahmiq/Desktop/mes documents/course/IntroC++/17unique_ptrFunctionSolution2/build" "/mnt/c/Users/alsahmiq/Desktop/mes documents/course/IntroC++/17unique_ptrFunctionSolution2/build" "/mnt/c/Users/alsahmiq/Desktop/mes documents/course/IntroC++/17unique_ptrFunctionSolution2/build/CMakeFiles/cpptest.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/cpptest.dir/depend

