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
CMAKE_SOURCE_DIR = /home/ulisses/Projects/masters-degree/geem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ulisses/Projects/masters-degree/geem/build

# Include any dependencies generated for this target.
include CMakeFiles/geem_tb.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/geem_tb.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/geem_tb.dir/flags.make

CMakeFiles/geem_tb.dir/src/geem_pe.c.o: CMakeFiles/geem_tb.dir/flags.make
CMakeFiles/geem_tb.dir/src/geem_pe.c.o: ../src/geem_pe.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ulisses/Projects/masters-degree/geem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/geem_tb.dir/src/geem_pe.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/geem_tb.dir/src/geem_pe.c.o   -c /home/ulisses/Projects/masters-degree/geem/src/geem_pe.c

CMakeFiles/geem_tb.dir/src/geem_pe.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/geem_tb.dir/src/geem_pe.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ulisses/Projects/masters-degree/geem/src/geem_pe.c > CMakeFiles/geem_tb.dir/src/geem_pe.c.i

CMakeFiles/geem_tb.dir/src/geem_pe.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/geem_tb.dir/src/geem_pe.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ulisses/Projects/masters-degree/geem/src/geem_pe.c -o CMakeFiles/geem_tb.dir/src/geem_pe.c.s

CMakeFiles/geem_tb.dir/src/geem_sa.c.o: CMakeFiles/geem_tb.dir/flags.make
CMakeFiles/geem_tb.dir/src/geem_sa.c.o: ../src/geem_sa.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ulisses/Projects/masters-degree/geem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/geem_tb.dir/src/geem_sa.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/geem_tb.dir/src/geem_sa.c.o   -c /home/ulisses/Projects/masters-degree/geem/src/geem_sa.c

CMakeFiles/geem_tb.dir/src/geem_sa.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/geem_tb.dir/src/geem_sa.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ulisses/Projects/masters-degree/geem/src/geem_sa.c > CMakeFiles/geem_tb.dir/src/geem_sa.c.i

CMakeFiles/geem_tb.dir/src/geem_sa.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/geem_tb.dir/src/geem_sa.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ulisses/Projects/masters-degree/geem/src/geem_sa.c -o CMakeFiles/geem_tb.dir/src/geem_sa.c.s

CMakeFiles/geem_tb.dir/src/geem_test.c.o: CMakeFiles/geem_tb.dir/flags.make
CMakeFiles/geem_tb.dir/src/geem_test.c.o: ../src/geem_test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ulisses/Projects/masters-degree/geem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/geem_tb.dir/src/geem_test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/geem_tb.dir/src/geem_test.c.o   -c /home/ulisses/Projects/masters-degree/geem/src/geem_test.c

CMakeFiles/geem_tb.dir/src/geem_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/geem_tb.dir/src/geem_test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ulisses/Projects/masters-degree/geem/src/geem_test.c > CMakeFiles/geem_tb.dir/src/geem_test.c.i

CMakeFiles/geem_tb.dir/src/geem_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/geem_tb.dir/src/geem_test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ulisses/Projects/masters-degree/geem/src/geem_test.c -o CMakeFiles/geem_tb.dir/src/geem_test.c.s

# Object files for target geem_tb
geem_tb_OBJECTS = \
"CMakeFiles/geem_tb.dir/src/geem_pe.c.o" \
"CMakeFiles/geem_tb.dir/src/geem_sa.c.o" \
"CMakeFiles/geem_tb.dir/src/geem_test.c.o"

# External object files for target geem_tb
geem_tb_EXTERNAL_OBJECTS =

geem_tb: CMakeFiles/geem_tb.dir/src/geem_pe.c.o
geem_tb: CMakeFiles/geem_tb.dir/src/geem_sa.c.o
geem_tb: CMakeFiles/geem_tb.dir/src/geem_test.c.o
geem_tb: CMakeFiles/geem_tb.dir/build.make
geem_tb: CMakeFiles/geem_tb.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ulisses/Projects/masters-degree/geem/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable geem_tb"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/geem_tb.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/geem_tb.dir/build: geem_tb

.PHONY : CMakeFiles/geem_tb.dir/build

CMakeFiles/geem_tb.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/geem_tb.dir/cmake_clean.cmake
.PHONY : CMakeFiles/geem_tb.dir/clean

CMakeFiles/geem_tb.dir/depend:
	cd /home/ulisses/Projects/masters-degree/geem/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ulisses/Projects/masters-degree/geem /home/ulisses/Projects/masters-degree/geem /home/ulisses/Projects/masters-degree/geem/build /home/ulisses/Projects/masters-degree/geem/build /home/ulisses/Projects/masters-degree/geem/build/CMakeFiles/geem_tb.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/geem_tb.dir/depend
