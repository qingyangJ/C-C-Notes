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
CMAKE_SOURCE_DIR = D:\C++Demo\C++Primer\points\STL

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\C++Demo\C++Primer\points\STL\build

# Include any dependencies generated for this target.
include CMakeFiles/demo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/demo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/demo.dir/flags.make

CMakeFiles/demo.dir/main.cpp.obj: CMakeFiles/demo.dir/flags.make
CMakeFiles/demo.dir/main.cpp.obj: CMakeFiles/demo.dir/includes_CXX.rsp
CMakeFiles/demo.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++Demo\C++Primer\points\STL\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/demo.dir/main.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\demo.dir\main.cpp.obj -c D:\C++Demo\C++Primer\points\STL\main.cpp

CMakeFiles/demo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo.dir/main.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++Demo\C++Primer\points\STL\main.cpp > CMakeFiles\demo.dir\main.cpp.i

CMakeFiles/demo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo.dir/main.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++Demo\C++Primer\points\STL\main.cpp -o CMakeFiles\demo.dir\main.cpp.s

CMakeFiles/demo.dir/src/CDeque.cpp.obj: CMakeFiles/demo.dir/flags.make
CMakeFiles/demo.dir/src/CDeque.cpp.obj: CMakeFiles/demo.dir/includes_CXX.rsp
CMakeFiles/demo.dir/src/CDeque.cpp.obj: ../src/CDeque.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++Demo\C++Primer\points\STL\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/demo.dir/src/CDeque.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\demo.dir\src\CDeque.cpp.obj -c D:\C++Demo\C++Primer\points\STL\src\CDeque.cpp

CMakeFiles/demo.dir/src/CDeque.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo.dir/src/CDeque.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++Demo\C++Primer\points\STL\src\CDeque.cpp > CMakeFiles\demo.dir\src\CDeque.cpp.i

CMakeFiles/demo.dir/src/CDeque.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo.dir/src/CDeque.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++Demo\C++Primer\points\STL\src\CDeque.cpp -o CMakeFiles\demo.dir\src\CDeque.cpp.s

CMakeFiles/demo.dir/src/CList.cpp.obj: CMakeFiles/demo.dir/flags.make
CMakeFiles/demo.dir/src/CList.cpp.obj: CMakeFiles/demo.dir/includes_CXX.rsp
CMakeFiles/demo.dir/src/CList.cpp.obj: ../src/CList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++Demo\C++Primer\points\STL\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/demo.dir/src/CList.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\demo.dir\src\CList.cpp.obj -c D:\C++Demo\C++Primer\points\STL\src\CList.cpp

CMakeFiles/demo.dir/src/CList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo.dir/src/CList.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++Demo\C++Primer\points\STL\src\CList.cpp > CMakeFiles\demo.dir\src\CList.cpp.i

CMakeFiles/demo.dir/src/CList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo.dir/src/CList.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++Demo\C++Primer\points\STL\src\CList.cpp -o CMakeFiles\demo.dir\src\CList.cpp.s

CMakeFiles/demo.dir/src/CMap.cpp.obj: CMakeFiles/demo.dir/flags.make
CMakeFiles/demo.dir/src/CMap.cpp.obj: CMakeFiles/demo.dir/includes_CXX.rsp
CMakeFiles/demo.dir/src/CMap.cpp.obj: ../src/CMap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++Demo\C++Primer\points\STL\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/demo.dir/src/CMap.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\demo.dir\src\CMap.cpp.obj -c D:\C++Demo\C++Primer\points\STL\src\CMap.cpp

CMakeFiles/demo.dir/src/CMap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo.dir/src/CMap.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++Demo\C++Primer\points\STL\src\CMap.cpp > CMakeFiles\demo.dir\src\CMap.cpp.i

CMakeFiles/demo.dir/src/CMap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo.dir/src/CMap.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++Demo\C++Primer\points\STL\src\CMap.cpp -o CMakeFiles\demo.dir\src\CMap.cpp.s

CMakeFiles/demo.dir/src/CQueue.cpp.obj: CMakeFiles/demo.dir/flags.make
CMakeFiles/demo.dir/src/CQueue.cpp.obj: CMakeFiles/demo.dir/includes_CXX.rsp
CMakeFiles/demo.dir/src/CQueue.cpp.obj: ../src/CQueue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++Demo\C++Primer\points\STL\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/demo.dir/src/CQueue.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\demo.dir\src\CQueue.cpp.obj -c D:\C++Demo\C++Primer\points\STL\src\CQueue.cpp

CMakeFiles/demo.dir/src/CQueue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo.dir/src/CQueue.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++Demo\C++Primer\points\STL\src\CQueue.cpp > CMakeFiles\demo.dir\src\CQueue.cpp.i

CMakeFiles/demo.dir/src/CQueue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo.dir/src/CQueue.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++Demo\C++Primer\points\STL\src\CQueue.cpp -o CMakeFiles\demo.dir\src\CQueue.cpp.s

CMakeFiles/demo.dir/src/CSet.cpp.obj: CMakeFiles/demo.dir/flags.make
CMakeFiles/demo.dir/src/CSet.cpp.obj: CMakeFiles/demo.dir/includes_CXX.rsp
CMakeFiles/demo.dir/src/CSet.cpp.obj: ../src/CSet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++Demo\C++Primer\points\STL\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/demo.dir/src/CSet.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\demo.dir\src\CSet.cpp.obj -c D:\C++Demo\C++Primer\points\STL\src\CSet.cpp

CMakeFiles/demo.dir/src/CSet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo.dir/src/CSet.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++Demo\C++Primer\points\STL\src\CSet.cpp > CMakeFiles\demo.dir\src\CSet.cpp.i

CMakeFiles/demo.dir/src/CSet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo.dir/src/CSet.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++Demo\C++Primer\points\STL\src\CSet.cpp -o CMakeFiles\demo.dir\src\CSet.cpp.s

CMakeFiles/demo.dir/src/CStack.cpp.obj: CMakeFiles/demo.dir/flags.make
CMakeFiles/demo.dir/src/CStack.cpp.obj: CMakeFiles/demo.dir/includes_CXX.rsp
CMakeFiles/demo.dir/src/CStack.cpp.obj: ../src/CStack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++Demo\C++Primer\points\STL\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/demo.dir/src/CStack.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\demo.dir\src\CStack.cpp.obj -c D:\C++Demo\C++Primer\points\STL\src\CStack.cpp

CMakeFiles/demo.dir/src/CStack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo.dir/src/CStack.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++Demo\C++Primer\points\STL\src\CStack.cpp > CMakeFiles\demo.dir\src\CStack.cpp.i

CMakeFiles/demo.dir/src/CStack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo.dir/src/CStack.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++Demo\C++Primer\points\STL\src\CStack.cpp -o CMakeFiles\demo.dir\src\CStack.cpp.s

CMakeFiles/demo.dir/src/CString.cpp.obj: CMakeFiles/demo.dir/flags.make
CMakeFiles/demo.dir/src/CString.cpp.obj: CMakeFiles/demo.dir/includes_CXX.rsp
CMakeFiles/demo.dir/src/CString.cpp.obj: ../src/CString.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++Demo\C++Primer\points\STL\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/demo.dir/src/CString.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\demo.dir\src\CString.cpp.obj -c D:\C++Demo\C++Primer\points\STL\src\CString.cpp

CMakeFiles/demo.dir/src/CString.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo.dir/src/CString.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++Demo\C++Primer\points\STL\src\CString.cpp > CMakeFiles\demo.dir\src\CString.cpp.i

CMakeFiles/demo.dir/src/CString.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo.dir/src/CString.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++Demo\C++Primer\points\STL\src\CString.cpp -o CMakeFiles\demo.dir\src\CString.cpp.s

CMakeFiles/demo.dir/src/CVector.cpp.obj: CMakeFiles/demo.dir/flags.make
CMakeFiles/demo.dir/src/CVector.cpp.obj: CMakeFiles/demo.dir/includes_CXX.rsp
CMakeFiles/demo.dir/src/CVector.cpp.obj: ../src/CVector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++Demo\C++Primer\points\STL\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/demo.dir/src/CVector.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\demo.dir\src\CVector.cpp.obj -c D:\C++Demo\C++Primer\points\STL\src\CVector.cpp

CMakeFiles/demo.dir/src/CVector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo.dir/src/CVector.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++Demo\C++Primer\points\STL\src\CVector.cpp > CMakeFiles\demo.dir\src\CVector.cpp.i

CMakeFiles/demo.dir/src/CVector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo.dir/src/CVector.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++Demo\C++Primer\points\STL\src\CVector.cpp -o CMakeFiles\demo.dir\src\CVector.cpp.s

CMakeFiles/demo.dir/src/Example.cpp.obj: CMakeFiles/demo.dir/flags.make
CMakeFiles/demo.dir/src/Example.cpp.obj: CMakeFiles/demo.dir/includes_CXX.rsp
CMakeFiles/demo.dir/src/Example.cpp.obj: ../src/Example.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\C++Demo\C++Primer\points\STL\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/demo.dir/src/Example.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\demo.dir\src\Example.cpp.obj -c D:\C++Demo\C++Primer\points\STL\src\Example.cpp

CMakeFiles/demo.dir/src/Example.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo.dir/src/Example.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\C++Demo\C++Primer\points\STL\src\Example.cpp > CMakeFiles\demo.dir\src\Example.cpp.i

CMakeFiles/demo.dir/src/Example.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo.dir/src/Example.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\C++Demo\C++Primer\points\STL\src\Example.cpp -o CMakeFiles\demo.dir\src\Example.cpp.s

# Object files for target demo
demo_OBJECTS = \
"CMakeFiles/demo.dir/main.cpp.obj" \
"CMakeFiles/demo.dir/src/CDeque.cpp.obj" \
"CMakeFiles/demo.dir/src/CList.cpp.obj" \
"CMakeFiles/demo.dir/src/CMap.cpp.obj" \
"CMakeFiles/demo.dir/src/CQueue.cpp.obj" \
"CMakeFiles/demo.dir/src/CSet.cpp.obj" \
"CMakeFiles/demo.dir/src/CStack.cpp.obj" \
"CMakeFiles/demo.dir/src/CString.cpp.obj" \
"CMakeFiles/demo.dir/src/CVector.cpp.obj" \
"CMakeFiles/demo.dir/src/Example.cpp.obj"

# External object files for target demo
demo_EXTERNAL_OBJECTS =

demo.exe: CMakeFiles/demo.dir/main.cpp.obj
demo.exe: CMakeFiles/demo.dir/src/CDeque.cpp.obj
demo.exe: CMakeFiles/demo.dir/src/CList.cpp.obj
demo.exe: CMakeFiles/demo.dir/src/CMap.cpp.obj
demo.exe: CMakeFiles/demo.dir/src/CQueue.cpp.obj
demo.exe: CMakeFiles/demo.dir/src/CSet.cpp.obj
demo.exe: CMakeFiles/demo.dir/src/CStack.cpp.obj
demo.exe: CMakeFiles/demo.dir/src/CString.cpp.obj
demo.exe: CMakeFiles/demo.dir/src/CVector.cpp.obj
demo.exe: CMakeFiles/demo.dir/src/Example.cpp.obj
demo.exe: CMakeFiles/demo.dir/build.make
demo.exe: CMakeFiles/demo.dir/linklibs.rsp
demo.exe: CMakeFiles/demo.dir/objects1.rsp
demo.exe: CMakeFiles/demo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\C++Demo\C++Primer\points\STL\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable demo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\demo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/demo.dir/build: demo.exe

.PHONY : CMakeFiles/demo.dir/build

CMakeFiles/demo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\demo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/demo.dir/clean

CMakeFiles/demo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\C++Demo\C++Primer\points\STL D:\C++Demo\C++Primer\points\STL D:\C++Demo\C++Primer\points\STL\build D:\C++Demo\C++Primer\points\STL\build D:\C++Demo\C++Primer\points\STL\build\CMakeFiles\demo.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/demo.dir/depend

