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
CMAKE_SOURCE_DIR = /home/host-pc/O-JRC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/host-pc/O-JRC/build

# Utility rule file for pygen_python_74bcb.

# Include any custom commands dependencies for this target.
include python/CMakeFiles/pygen_python_74bcb.dir/compiler_depend.make

# Include the progress variables for this target.
include python/CMakeFiles/pygen_python_74bcb.dir/progress.make

python/CMakeFiles/pygen_python_74bcb: python/__init__.pyc
python/CMakeFiles/pygen_python_74bcb: python/__init__.pyo

python/__init__.pyc: ../python/__init__.py
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/host-pc/O-JRC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating __init__.pyc"
	cd /home/host-pc/O-JRC/build/python && /usr/bin/python3 /home/host-pc/O-JRC/build/python_compile_helper.py /home/host-pc/O-JRC/python/__init__.py /home/host-pc/O-JRC/build/python/__init__.pyc

python/__init__.pyo: ../python/__init__.py
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/host-pc/O-JRC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating __init__.pyo"
	cd /home/host-pc/O-JRC/build/python && /usr/bin/python3 -O /home/host-pc/O-JRC/build/python_compile_helper.py /home/host-pc/O-JRC/python/__init__.py /home/host-pc/O-JRC/build/python/__init__.pyo

pygen_python_74bcb: python/CMakeFiles/pygen_python_74bcb
pygen_python_74bcb: python/__init__.pyc
pygen_python_74bcb: python/__init__.pyo
pygen_python_74bcb: python/CMakeFiles/pygen_python_74bcb.dir/build.make
.PHONY : pygen_python_74bcb

# Rule to build all files generated by this target.
python/CMakeFiles/pygen_python_74bcb.dir/build: pygen_python_74bcb
.PHONY : python/CMakeFiles/pygen_python_74bcb.dir/build

python/CMakeFiles/pygen_python_74bcb.dir/clean:
	cd /home/host-pc/O-JRC/build/python && $(CMAKE_COMMAND) -P CMakeFiles/pygen_python_74bcb.dir/cmake_clean.cmake
.PHONY : python/CMakeFiles/pygen_python_74bcb.dir/clean

python/CMakeFiles/pygen_python_74bcb.dir/depend:
	cd /home/host-pc/O-JRC/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/host-pc/O-JRC /home/host-pc/O-JRC/python /home/host-pc/O-JRC/build /home/host-pc/O-JRC/build/python /home/host-pc/O-JRC/build/python/CMakeFiles/pygen_python_74bcb.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : python/CMakeFiles/pygen_python_74bcb.dir/depend

