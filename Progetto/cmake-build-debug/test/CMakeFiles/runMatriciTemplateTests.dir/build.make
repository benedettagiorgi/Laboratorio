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
CMAKE_COMMAND = /Users/admin/Desktop/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Users/admin/Desktop/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/admin/CLionProjects/Progetto

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/admin/CLionProjects/Progetto/cmake-build-debug

# Include any dependencies generated for this target.
include test/CMakeFiles/runMatriciTemplateTests.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/runMatriciTemplateTests.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/runMatriciTemplateTests.dir/flags.make

test/CMakeFiles/runMatriciTemplateTests.dir/runAllTests.cpp.o: test/CMakeFiles/runMatriciTemplateTests.dir/flags.make
test/CMakeFiles/runMatriciTemplateTests.dir/runAllTests.cpp.o: ../test/runAllTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/admin/CLionProjects/Progetto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/runMatriciTemplateTests.dir/runAllTests.cpp.o"
	cd /Users/admin/CLionProjects/Progetto/cmake-build-debug/test && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/runMatriciTemplateTests.dir/runAllTests.cpp.o -c /Users/admin/CLionProjects/Progetto/test/runAllTests.cpp

test/CMakeFiles/runMatriciTemplateTests.dir/runAllTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runMatriciTemplateTests.dir/runAllTests.cpp.i"
	cd /Users/admin/CLionProjects/Progetto/cmake-build-debug/test && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/CLionProjects/Progetto/test/runAllTests.cpp > CMakeFiles/runMatriciTemplateTests.dir/runAllTests.cpp.i

test/CMakeFiles/runMatriciTemplateTests.dir/runAllTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runMatriciTemplateTests.dir/runAllTests.cpp.s"
	cd /Users/admin/CLionProjects/Progetto/cmake-build-debug/test && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/CLionProjects/Progetto/test/runAllTests.cpp -o CMakeFiles/runMatriciTemplateTests.dir/runAllTests.cpp.s

test/CMakeFiles/runMatriciTemplateTests.dir/TestMatrici.cpp.o: test/CMakeFiles/runMatriciTemplateTests.dir/flags.make
test/CMakeFiles/runMatriciTemplateTests.dir/TestMatrici.cpp.o: ../test/TestMatrici.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/admin/CLionProjects/Progetto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/CMakeFiles/runMatriciTemplateTests.dir/TestMatrici.cpp.o"
	cd /Users/admin/CLionProjects/Progetto/cmake-build-debug/test && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/runMatriciTemplateTests.dir/TestMatrici.cpp.o -c /Users/admin/CLionProjects/Progetto/test/TestMatrici.cpp

test/CMakeFiles/runMatriciTemplateTests.dir/TestMatrici.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runMatriciTemplateTests.dir/TestMatrici.cpp.i"
	cd /Users/admin/CLionProjects/Progetto/cmake-build-debug/test && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/CLionProjects/Progetto/test/TestMatrici.cpp > CMakeFiles/runMatriciTemplateTests.dir/TestMatrici.cpp.i

test/CMakeFiles/runMatriciTemplateTests.dir/TestMatrici.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runMatriciTemplateTests.dir/TestMatrici.cpp.s"
	cd /Users/admin/CLionProjects/Progetto/cmake-build-debug/test && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/CLionProjects/Progetto/test/TestMatrici.cpp -o CMakeFiles/runMatriciTemplateTests.dir/TestMatrici.cpp.s

test/CMakeFiles/runMatriciTemplateTests.dir/TestOperatori.cpp.o: test/CMakeFiles/runMatriciTemplateTests.dir/flags.make
test/CMakeFiles/runMatriciTemplateTests.dir/TestOperatori.cpp.o: ../test/TestOperatori.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/admin/CLionProjects/Progetto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object test/CMakeFiles/runMatriciTemplateTests.dir/TestOperatori.cpp.o"
	cd /Users/admin/CLionProjects/Progetto/cmake-build-debug/test && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/runMatriciTemplateTests.dir/TestOperatori.cpp.o -c /Users/admin/CLionProjects/Progetto/test/TestOperatori.cpp

test/CMakeFiles/runMatriciTemplateTests.dir/TestOperatori.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runMatriciTemplateTests.dir/TestOperatori.cpp.i"
	cd /Users/admin/CLionProjects/Progetto/cmake-build-debug/test && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/admin/CLionProjects/Progetto/test/TestOperatori.cpp > CMakeFiles/runMatriciTemplateTests.dir/TestOperatori.cpp.i

test/CMakeFiles/runMatriciTemplateTests.dir/TestOperatori.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runMatriciTemplateTests.dir/TestOperatori.cpp.s"
	cd /Users/admin/CLionProjects/Progetto/cmake-build-debug/test && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/admin/CLionProjects/Progetto/test/TestOperatori.cpp -o CMakeFiles/runMatriciTemplateTests.dir/TestOperatori.cpp.s

# Object files for target runMatriciTemplateTests
runMatriciTemplateTests_OBJECTS = \
"CMakeFiles/runMatriciTemplateTests.dir/runAllTests.cpp.o" \
"CMakeFiles/runMatriciTemplateTests.dir/TestMatrici.cpp.o" \
"CMakeFiles/runMatriciTemplateTests.dir/TestOperatori.cpp.o"

# External object files for target runMatriciTemplateTests
runMatriciTemplateTests_EXTERNAL_OBJECTS =

test/runMatriciTemplateTests: test/CMakeFiles/runMatriciTemplateTests.dir/runAllTests.cpp.o
test/runMatriciTemplateTests: test/CMakeFiles/runMatriciTemplateTests.dir/TestMatrici.cpp.o
test/runMatriciTemplateTests: test/CMakeFiles/runMatriciTemplateTests.dir/TestOperatori.cpp.o
test/runMatriciTemplateTests: test/CMakeFiles/runMatriciTemplateTests.dir/build.make
test/runMatriciTemplateTests: test/lib/googletest/libgtest.a
test/runMatriciTemplateTests: test/lib/googletest/libgtest_main.a
test/runMatriciTemplateTests: test/lib/googletest/libgtest.a
test/runMatriciTemplateTests: test/CMakeFiles/runMatriciTemplateTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/admin/CLionProjects/Progetto/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable runMatriciTemplateTests"
	cd /Users/admin/CLionProjects/Progetto/cmake-build-debug/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/runMatriciTemplateTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/runMatriciTemplateTests.dir/build: test/runMatriciTemplateTests

.PHONY : test/CMakeFiles/runMatriciTemplateTests.dir/build

test/CMakeFiles/runMatriciTemplateTests.dir/clean:
	cd /Users/admin/CLionProjects/Progetto/cmake-build-debug/test && $(CMAKE_COMMAND) -P CMakeFiles/runMatriciTemplateTests.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/runMatriciTemplateTests.dir/clean

test/CMakeFiles/runMatriciTemplateTests.dir/depend:
	cd /Users/admin/CLionProjects/Progetto/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/admin/CLionProjects/Progetto /Users/admin/CLionProjects/Progetto/test /Users/admin/CLionProjects/Progetto/cmake-build-debug /Users/admin/CLionProjects/Progetto/cmake-build-debug/test /Users/admin/CLionProjects/Progetto/cmake-build-debug/test/CMakeFiles/runMatriciTemplateTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/runMatriciTemplateTests.dir/depend

