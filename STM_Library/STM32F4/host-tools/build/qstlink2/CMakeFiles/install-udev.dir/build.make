# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dionysis/Documents/c/Dionysis_Project/2013-mini-smart-vehicles/group-1/sources/STM32F4/STM_Library/STM32F4/host-tools

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dionysis/Documents/c/Dionysis_Project/2013-mini-smart-vehicles/group-1/sources/STM32F4/STM_Library/STM32F4/host-tools/build

# Utility rule file for install-udev.

qstlink2/CMakeFiles/install-udev:
	cd /home/dionysis/Documents/c/Dionysis_Project/2013-mini-smart-vehicles/group-1/sources/STM32F4/STM_Library/STM32F4/host-tools/build/qstlink2 && cp /home/dionysis/Documents/c/Dionysis_Project/2013-mini-smart-vehicles/group-1/sources/STM32F4/STM_Library/STM32F4/host-tools/qstlink2/udev/49-stlinkv2.rules /etc/udev/rules.d

install-udev: qstlink2/CMakeFiles/install-udev
install-udev: qstlink2/CMakeFiles/install-udev.dir/build.make
.PHONY : install-udev

# Rule to build all files generated by this target.
qstlink2/CMakeFiles/install-udev.dir/build: install-udev
.PHONY : qstlink2/CMakeFiles/install-udev.dir/build

qstlink2/CMakeFiles/install-udev.dir/clean:
	cd /home/dionysis/Documents/c/Dionysis_Project/2013-mini-smart-vehicles/group-1/sources/STM32F4/STM_Library/STM32F4/host-tools/build/qstlink2 && $(CMAKE_COMMAND) -P CMakeFiles/install-udev.dir/cmake_clean.cmake
.PHONY : qstlink2/CMakeFiles/install-udev.dir/clean

qstlink2/CMakeFiles/install-udev.dir/depend:
	cd /home/dionysis/Documents/c/Dionysis_Project/2013-mini-smart-vehicles/group-1/sources/STM32F4/STM_Library/STM32F4/host-tools/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dionysis/Documents/c/Dionysis_Project/2013-mini-smart-vehicles/group-1/sources/STM32F4/STM_Library/STM32F4/host-tools /home/dionysis/Documents/c/Dionysis_Project/2013-mini-smart-vehicles/group-1/sources/STM32F4/STM_Library/STM32F4/host-tools/qstlink2 /home/dionysis/Documents/c/Dionysis_Project/2013-mini-smart-vehicles/group-1/sources/STM32F4/STM_Library/STM32F4/host-tools/build /home/dionysis/Documents/c/Dionysis_Project/2013-mini-smart-vehicles/group-1/sources/STM32F4/STM_Library/STM32F4/host-tools/build/qstlink2 /home/dionysis/Documents/c/Dionysis_Project/2013-mini-smart-vehicles/group-1/sources/STM32F4/STM_Library/STM32F4/host-tools/build/qstlink2/CMakeFiles/install-udev.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : qstlink2/CMakeFiles/install-udev.dir/depend

