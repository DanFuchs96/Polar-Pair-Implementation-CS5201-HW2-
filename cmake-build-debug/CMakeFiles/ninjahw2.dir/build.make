# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.3.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.3.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Exper\Desktop\ninjahw2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Exper\Desktop\ninjahw2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ninjahw2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ninjahw2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ninjahw2.dir/flags.make

CMakeFiles/ninjahw2.dir/driver.cpp.obj: CMakeFiles/ninjahw2.dir/flags.make
CMakeFiles/ninjahw2.dir/driver.cpp.obj: ../driver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Exper\Desktop\ninjahw2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ninjahw2.dir/driver.cpp.obj"
	C:\Users\Exper\Desktop\Programs\Winbuilds\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ninjahw2.dir\driver.cpp.obj -c C:\Users\Exper\Desktop\ninjahw2\driver.cpp

CMakeFiles/ninjahw2.dir/driver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ninjahw2.dir/driver.cpp.i"
	C:\Users\Exper\Desktop\Programs\Winbuilds\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Exper\Desktop\ninjahw2\driver.cpp > CMakeFiles\ninjahw2.dir\driver.cpp.i

CMakeFiles/ninjahw2.dir/driver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ninjahw2.dir/driver.cpp.s"
	C:\Users\Exper\Desktop\Programs\Winbuilds\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Exper\Desktop\ninjahw2\driver.cpp -o CMakeFiles\ninjahw2.dir\driver.cpp.s

CMakeFiles/ninjahw2.dir/driver.cpp.obj.requires:

.PHONY : CMakeFiles/ninjahw2.dir/driver.cpp.obj.requires

CMakeFiles/ninjahw2.dir/driver.cpp.obj.provides: CMakeFiles/ninjahw2.dir/driver.cpp.obj.requires
	$(MAKE) -f CMakeFiles\ninjahw2.dir\build.make CMakeFiles/ninjahw2.dir/driver.cpp.obj.provides.build
.PHONY : CMakeFiles/ninjahw2.dir/driver.cpp.obj.provides

CMakeFiles/ninjahw2.dir/driver.cpp.obj.provides.build: CMakeFiles/ninjahw2.dir/driver.cpp.obj


# Object files for target ninjahw2
ninjahw2_OBJECTS = \
"CMakeFiles/ninjahw2.dir/driver.cpp.obj"

# External object files for target ninjahw2
ninjahw2_EXTERNAL_OBJECTS =

ninjahw2.exe: CMakeFiles/ninjahw2.dir/driver.cpp.obj
ninjahw2.exe: CMakeFiles/ninjahw2.dir/build.make
ninjahw2.exe: CMakeFiles/ninjahw2.dir/linklibs.rsp
ninjahw2.exe: CMakeFiles/ninjahw2.dir/objects1.rsp
ninjahw2.exe: CMakeFiles/ninjahw2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Exper\Desktop\ninjahw2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ninjahw2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ninjahw2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ninjahw2.dir/build: ninjahw2.exe

.PHONY : CMakeFiles/ninjahw2.dir/build

CMakeFiles/ninjahw2.dir/requires: CMakeFiles/ninjahw2.dir/driver.cpp.obj.requires

.PHONY : CMakeFiles/ninjahw2.dir/requires

CMakeFiles/ninjahw2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ninjahw2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ninjahw2.dir/clean

CMakeFiles/ninjahw2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Exper\Desktop\ninjahw2 C:\Users\Exper\Desktop\ninjahw2 C:\Users\Exper\Desktop\ninjahw2\cmake-build-debug C:\Users\Exper\Desktop\ninjahw2\cmake-build-debug C:\Users\Exper\Desktop\ninjahw2\cmake-build-debug\CMakeFiles\ninjahw2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ninjahw2.dir/depend

