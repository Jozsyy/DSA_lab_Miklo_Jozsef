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


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Github(C)\Clion_feladatok\DSA_lab_Miklo_Jozsef\Lab7\feladat1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Github(C)\Clion_feladatok\DSA_lab_Miklo_Jozsef\Lab7\feladat1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/feladat1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/feladat1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/feladat1.dir/flags.make

CMakeFiles/feladat1.dir/main.c.obj: CMakeFiles/feladat1.dir/flags.make
CMakeFiles/feladat1.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Github(C)\Clion_feladatok\DSA_lab_Miklo_Jozsef\Lab7\feladat1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/feladat1.dir/main.c.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\feladat1.dir\main.c.obj   -c D:\Github(C)\Clion_feladatok\DSA_lab_Miklo_Jozsef\Lab7\feladat1\main.c

CMakeFiles/feladat1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/feladat1.dir/main.c.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Github(C)\Clion_feladatok\DSA_lab_Miklo_Jozsef\Lab7\feladat1\main.c > CMakeFiles\feladat1.dir\main.c.i

CMakeFiles/feladat1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/feladat1.dir/main.c.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Github(C)\Clion_feladatok\DSA_lab_Miklo_Jozsef\Lab7\feladat1\main.c -o CMakeFiles\feladat1.dir\main.c.s

CMakeFiles/feladat1.dir/functions.c.obj: CMakeFiles/feladat1.dir/flags.make
CMakeFiles/feladat1.dir/functions.c.obj: ../functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Github(C)\Clion_feladatok\DSA_lab_Miklo_Jozsef\Lab7\feladat1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/feladat1.dir/functions.c.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\feladat1.dir\functions.c.obj   -c D:\Github(C)\Clion_feladatok\DSA_lab_Miklo_Jozsef\Lab7\feladat1\functions.c

CMakeFiles/feladat1.dir/functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/feladat1.dir/functions.c.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Github(C)\Clion_feladatok\DSA_lab_Miklo_Jozsef\Lab7\feladat1\functions.c > CMakeFiles\feladat1.dir\functions.c.i

CMakeFiles/feladat1.dir/functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/feladat1.dir/functions.c.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Github(C)\Clion_feladatok\DSA_lab_Miklo_Jozsef\Lab7\feladat1\functions.c -o CMakeFiles\feladat1.dir\functions.c.s

# Object files for target feladat1
feladat1_OBJECTS = \
"CMakeFiles/feladat1.dir/main.c.obj" \
"CMakeFiles/feladat1.dir/functions.c.obj"

# External object files for target feladat1
feladat1_EXTERNAL_OBJECTS =

feladat1.exe: CMakeFiles/feladat1.dir/main.c.obj
feladat1.exe: CMakeFiles/feladat1.dir/functions.c.obj
feladat1.exe: CMakeFiles/feladat1.dir/build.make
feladat1.exe: CMakeFiles/feladat1.dir/linklibs.rsp
feladat1.exe: CMakeFiles/feladat1.dir/objects1.rsp
feladat1.exe: CMakeFiles/feladat1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Github(C)\Clion_feladatok\DSA_lab_Miklo_Jozsef\Lab7\feladat1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable feladat1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\feladat1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/feladat1.dir/build: feladat1.exe

.PHONY : CMakeFiles/feladat1.dir/build

CMakeFiles/feladat1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\feladat1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/feladat1.dir/clean

CMakeFiles/feladat1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Github(C)\Clion_feladatok\DSA_lab_Miklo_Jozsef\Lab7\feladat1 D:\Github(C)\Clion_feladatok\DSA_lab_Miklo_Jozsef\Lab7\feladat1 D:\Github(C)\Clion_feladatok\DSA_lab_Miklo_Jozsef\Lab7\feladat1\cmake-build-debug D:\Github(C)\Clion_feladatok\DSA_lab_Miklo_Jozsef\Lab7\feladat1\cmake-build-debug D:\Github(C)\Clion_feladatok\DSA_lab_Miklo_Jozsef\Lab7\feladat1\cmake-build-debug\CMakeFiles\feladat1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/feladat1.dir/depend

