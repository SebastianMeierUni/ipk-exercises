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
CMAKE_SOURCE_DIR = /home/smeier/Arbeitswerk/Übungen/IPK_Übung06

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/smeier/Arbeitswerk/Übungen/IPK_Übung06/build

# Include any dependencies generated for this target.
include CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/flags.make

CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/ErstenZehnRegelmaessigenNEcke.cc.o: CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/flags.make
CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/ErstenZehnRegelmaessigenNEcke.cc.o: ../ErstenZehnRegelmaessigenNEcke.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/smeier/Arbeitswerk/Übungen/IPK_Übung06/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/ErstenZehnRegelmaessigenNEcke.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/ErstenZehnRegelmaessigenNEcke.cc.o -c /home/smeier/Arbeitswerk/Übungen/IPK_Übung06/ErstenZehnRegelmaessigenNEcke.cc

CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/ErstenZehnRegelmaessigenNEcke.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/ErstenZehnRegelmaessigenNEcke.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/smeier/Arbeitswerk/Übungen/IPK_Übung06/ErstenZehnRegelmaessigenNEcke.cc > CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/ErstenZehnRegelmaessigenNEcke.cc.i

CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/ErstenZehnRegelmaessigenNEcke.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/ErstenZehnRegelmaessigenNEcke.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/smeier/Arbeitswerk/Übungen/IPK_Übung06/ErstenZehnRegelmaessigenNEcke.cc -o CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/ErstenZehnRegelmaessigenNEcke.cc.s

# Object files for target ErstenZehnRegelmaessigenNEcke
ErstenZehnRegelmaessigenNEcke_OBJECTS = \
"CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/ErstenZehnRegelmaessigenNEcke.cc.o"

# External object files for target ErstenZehnRegelmaessigenNEcke
ErstenZehnRegelmaessigenNEcke_EXTERNAL_OBJECTS =

ErstenZehnRegelmaessigenNEcke: CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/ErstenZehnRegelmaessigenNEcke.cc.o
ErstenZehnRegelmaessigenNEcke: CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/build.make
ErstenZehnRegelmaessigenNEcke: libpolypoint.a
ErstenZehnRegelmaessigenNEcke: CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/smeier/Arbeitswerk/Übungen/IPK_Übung06/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ErstenZehnRegelmaessigenNEcke"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/build: ErstenZehnRegelmaessigenNEcke

.PHONY : CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/build

CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/clean

CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/depend:
	cd /home/smeier/Arbeitswerk/Übungen/IPK_Übung06/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/smeier/Arbeitswerk/Übungen/IPK_Übung06 /home/smeier/Arbeitswerk/Übungen/IPK_Übung06 /home/smeier/Arbeitswerk/Übungen/IPK_Übung06/build /home/smeier/Arbeitswerk/Übungen/IPK_Übung06/build /home/smeier/Arbeitswerk/Übungen/IPK_Übung06/build/CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ErstenZehnRegelmaessigenNEcke.dir/depend

