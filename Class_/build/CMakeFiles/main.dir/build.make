# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\cmake3.17\cmake-3.17.0\bin\cmake.exe

# The command to remove a file.
RM = D:\cmake3.17\cmake-3.17.0\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\C++Demo\C++Primer\points\Class_

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\C++Demo\C++Primer\points\Class_\build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/main.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/main.cpp.obj: CMakeFiles/main.dir/includes_CXX.rsp
CMakeFiles/main.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++Demo\C++Primer\points\Class_\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/main.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\main.dir\main.cpp.obj -c D:\C++Demo\C++Primer\points\Class_\main.cpp

CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++Demo\C++Primer\points\Class_\main.cpp > CMakeFiles\main.dir\main.cpp.i

CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++Demo\C++Primer\points\Class_\main.cpp -o CMakeFiles\main.dir\main.cpp.s

CMakeFiles/main.dir/src/Circle.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/Circle.cpp.obj: CMakeFiles/main.dir/includes_CXX.rsp
CMakeFiles/main.dir/src/Circle.cpp.obj: ../src/Circle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++Demo\C++Primer\points\Class_\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/src/Circle.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\main.dir\src\Circle.cpp.obj -c D:\C++Demo\C++Primer\points\Class_\src\Circle.cpp

CMakeFiles/main.dir/src/Circle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/Circle.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++Demo\C++Primer\points\Class_\src\Circle.cpp > CMakeFiles\main.dir\src\Circle.cpp.i

CMakeFiles/main.dir/src/Circle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/Circle.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++Demo\C++Primer\points\Class_\src\Circle.cpp -o CMakeFiles\main.dir\src\Circle.cpp.s

CMakeFiles/main.dir/src/ClaConst.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/ClaConst.cpp.obj: CMakeFiles/main.dir/includes_CXX.rsp
CMakeFiles/main.dir/src/ClaConst.cpp.obj: ../src/ClaConst.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++Demo\C++Primer\points\Class_\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/src/ClaConst.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\main.dir\src\ClaConst.cpp.obj -c D:\C++Demo\C++Primer\points\Class_\src\ClaConst.cpp

CMakeFiles/main.dir/src/ClaConst.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/ClaConst.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++Demo\C++Primer\points\Class_\src\ClaConst.cpp > CMakeFiles\main.dir\src\ClaConst.cpp.i

CMakeFiles/main.dir/src/ClaConst.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/ClaConst.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++Demo\C++Primer\points\Class_\src\ClaConst.cpp -o CMakeFiles\main.dir\src\ClaConst.cpp.s

CMakeFiles/main.dir/src/Cube.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/Cube.cpp.obj: CMakeFiles/main.dir/includes_CXX.rsp
CMakeFiles/main.dir/src/Cube.cpp.obj: ../src/Cube.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++Demo\C++Primer\points\Class_\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.dir/src/Cube.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\main.dir\src\Cube.cpp.obj -c D:\C++Demo\C++Primer\points\Class_\src\Cube.cpp

CMakeFiles/main.dir/src/Cube.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/Cube.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++Demo\C++Primer\points\Class_\src\Cube.cpp > CMakeFiles\main.dir\src\Cube.cpp.i

CMakeFiles/main.dir/src/Cube.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/Cube.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++Demo\C++Primer\points\Class_\src\Cube.cpp -o CMakeFiles\main.dir\src\Cube.cpp.s

CMakeFiles/main.dir/src/Friend.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/Friend.cpp.obj: CMakeFiles/main.dir/includes_CXX.rsp
CMakeFiles/main.dir/src/Friend.cpp.obj: ../src/Friend.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++Demo\C++Primer\points\Class_\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/main.dir/src/Friend.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\main.dir\src\Friend.cpp.obj -c D:\C++Demo\C++Primer\points\Class_\src\Friend.cpp

CMakeFiles/main.dir/src/Friend.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/Friend.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++Demo\C++Primer\points\Class_\src\Friend.cpp > CMakeFiles\main.dir\src\Friend.cpp.i

CMakeFiles/main.dir/src/Friend.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/Friend.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++Demo\C++Primer\points\Class_\src\Friend.cpp -o CMakeFiles\main.dir\src\Friend.cpp.s

CMakeFiles/main.dir/src/Person.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/Person.cpp.obj: CMakeFiles/main.dir/includes_CXX.rsp
CMakeFiles/main.dir/src/Person.cpp.obj: ../src/Person.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++Demo\C++Primer\points\Class_\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/main.dir/src/Person.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\main.dir\src\Person.cpp.obj -c D:\C++Demo\C++Primer\points\Class_\src\Person.cpp

CMakeFiles/main.dir/src/Person.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/Person.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++Demo\C++Primer\points\Class_\src\Person.cpp > CMakeFiles\main.dir\src\Person.cpp.i

CMakeFiles/main.dir/src/Person.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/Person.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++Demo\C++Primer\points\Class_\src\Person.cpp -o CMakeFiles\main.dir\src\Person.cpp.s

CMakeFiles/main.dir/src/Point.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/Point.cpp.obj: CMakeFiles/main.dir/includes_CXX.rsp
CMakeFiles/main.dir/src/Point.cpp.obj: ../src/Point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++Demo\C++Primer\points\Class_\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/main.dir/src/Point.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\main.dir\src\Point.cpp.obj -c D:\C++Demo\C++Primer\points\Class_\src\Point.cpp

CMakeFiles/main.dir/src/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/Point.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++Demo\C++Primer\points\Class_\src\Point.cpp > CMakeFiles\main.dir\src\Point.cpp.i

CMakeFiles/main.dir/src/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/Point.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++Demo\C++Primer\points\Class_\src\Point.cpp -o CMakeFiles\main.dir\src\Point.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.cpp.obj" \
"CMakeFiles/main.dir/src/Circle.cpp.obj" \
"CMakeFiles/main.dir/src/ClaConst.cpp.obj" \
"CMakeFiles/main.dir/src/Cube.cpp.obj" \
"CMakeFiles/main.dir/src/Friend.cpp.obj" \
"CMakeFiles/main.dir/src/Person.cpp.obj" \
"CMakeFiles/main.dir/src/Point.cpp.obj"

# External object files for target main
main_EXTERNAL_OBJECTS =

main.exe: CMakeFiles/main.dir/main.cpp.obj
main.exe: CMakeFiles/main.dir/src/Circle.cpp.obj
main.exe: CMakeFiles/main.dir/src/ClaConst.cpp.obj
main.exe: CMakeFiles/main.dir/src/Cube.cpp.obj
main.exe: CMakeFiles/main.dir/src/Friend.cpp.obj
main.exe: CMakeFiles/main.dir/src/Person.cpp.obj
main.exe: CMakeFiles/main.dir/src/Point.cpp.obj
main.exe: CMakeFiles/main.dir/build.make
main.exe: CMakeFiles/main.dir/linklibs.rsp
main.exe: CMakeFiles/main.dir/objects1.rsp
main.exe: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\C++Demo\C++Primer\points\Class_\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable main.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\main.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main.exe

.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\main.dir\cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\C++Demo\C++Primer\points\Class_ D:\C++Demo\C++Primer\points\Class_ D:\C++Demo\C++Primer\points\Class_\build D:\C++Demo\C++Primer\points\Class_\build D:\C++Demo\C++Primer\points\Class_\build\CMakeFiles\main.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

