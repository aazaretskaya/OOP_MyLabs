# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /opt/local/bin/cmake

# The command to remove a file.
RM = /opt/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/anastasia/MAI/OOP/Lab_4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/anastasia/MAI/OOP/Lab_4/build

# Include any dependencies generated for this target.
include CMakeFiles/app.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/app.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/app.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/app.dir/flags.make

CMakeFiles/app.dir/src/Point.cpp.o: CMakeFiles/app.dir/flags.make
CMakeFiles/app.dir/src/Point.cpp.o: /Users/anastasia/MAI/OOP/Lab_4/src/Point.cpp
CMakeFiles/app.dir/src/Point.cpp.o: CMakeFiles/app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/anastasia/MAI/OOP/Lab_4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/app.dir/src/Point.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/app.dir/src/Point.cpp.o -MF CMakeFiles/app.dir/src/Point.cpp.o.d -o CMakeFiles/app.dir/src/Point.cpp.o -c /Users/anastasia/MAI/OOP/Lab_4/src/Point.cpp

CMakeFiles/app.dir/src/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/app.dir/src/Point.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/anastasia/MAI/OOP/Lab_4/src/Point.cpp > CMakeFiles/app.dir/src/Point.cpp.i

CMakeFiles/app.dir/src/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/app.dir/src/Point.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/anastasia/MAI/OOP/Lab_4/src/Point.cpp -o CMakeFiles/app.dir/src/Point.cpp.s

CMakeFiles/app.dir/src/Trapezoid.cpp.o: CMakeFiles/app.dir/flags.make
CMakeFiles/app.dir/src/Trapezoid.cpp.o: /Users/anastasia/MAI/OOP/Lab_4/src/Trapezoid.cpp
CMakeFiles/app.dir/src/Trapezoid.cpp.o: CMakeFiles/app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/anastasia/MAI/OOP/Lab_4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/app.dir/src/Trapezoid.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/app.dir/src/Trapezoid.cpp.o -MF CMakeFiles/app.dir/src/Trapezoid.cpp.o.d -o CMakeFiles/app.dir/src/Trapezoid.cpp.o -c /Users/anastasia/MAI/OOP/Lab_4/src/Trapezoid.cpp

CMakeFiles/app.dir/src/Trapezoid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/app.dir/src/Trapezoid.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/anastasia/MAI/OOP/Lab_4/src/Trapezoid.cpp > CMakeFiles/app.dir/src/Trapezoid.cpp.i

CMakeFiles/app.dir/src/Trapezoid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/app.dir/src/Trapezoid.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/anastasia/MAI/OOP/Lab_4/src/Trapezoid.cpp -o CMakeFiles/app.dir/src/Trapezoid.cpp.s

CMakeFiles/app.dir/src/Rhombus.cpp.o: CMakeFiles/app.dir/flags.make
CMakeFiles/app.dir/src/Rhombus.cpp.o: /Users/anastasia/MAI/OOP/Lab_4/src/Rhombus.cpp
CMakeFiles/app.dir/src/Rhombus.cpp.o: CMakeFiles/app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/anastasia/MAI/OOP/Lab_4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/app.dir/src/Rhombus.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/app.dir/src/Rhombus.cpp.o -MF CMakeFiles/app.dir/src/Rhombus.cpp.o.d -o CMakeFiles/app.dir/src/Rhombus.cpp.o -c /Users/anastasia/MAI/OOP/Lab_4/src/Rhombus.cpp

CMakeFiles/app.dir/src/Rhombus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/app.dir/src/Rhombus.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/anastasia/MAI/OOP/Lab_4/src/Rhombus.cpp > CMakeFiles/app.dir/src/Rhombus.cpp.i

CMakeFiles/app.dir/src/Rhombus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/app.dir/src/Rhombus.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/anastasia/MAI/OOP/Lab_4/src/Rhombus.cpp -o CMakeFiles/app.dir/src/Rhombus.cpp.s

CMakeFiles/app.dir/src/Pentagon.cpp.o: CMakeFiles/app.dir/flags.make
CMakeFiles/app.dir/src/Pentagon.cpp.o: /Users/anastasia/MAI/OOP/Lab_4/src/Pentagon.cpp
CMakeFiles/app.dir/src/Pentagon.cpp.o: CMakeFiles/app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/anastasia/MAI/OOP/Lab_4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/app.dir/src/Pentagon.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/app.dir/src/Pentagon.cpp.o -MF CMakeFiles/app.dir/src/Pentagon.cpp.o.d -o CMakeFiles/app.dir/src/Pentagon.cpp.o -c /Users/anastasia/MAI/OOP/Lab_4/src/Pentagon.cpp

CMakeFiles/app.dir/src/Pentagon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/app.dir/src/Pentagon.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/anastasia/MAI/OOP/Lab_4/src/Pentagon.cpp > CMakeFiles/app.dir/src/Pentagon.cpp.i

CMakeFiles/app.dir/src/Pentagon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/app.dir/src/Pentagon.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/anastasia/MAI/OOP/Lab_4/src/Pentagon.cpp -o CMakeFiles/app.dir/src/Pentagon.cpp.s

CMakeFiles/app.dir/src/main.cpp.o: CMakeFiles/app.dir/flags.make
CMakeFiles/app.dir/src/main.cpp.o: /Users/anastasia/MAI/OOP/Lab_4/src/main.cpp
CMakeFiles/app.dir/src/main.cpp.o: CMakeFiles/app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/anastasia/MAI/OOP/Lab_4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/app.dir/src/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/app.dir/src/main.cpp.o -MF CMakeFiles/app.dir/src/main.cpp.o.d -o CMakeFiles/app.dir/src/main.cpp.o -c /Users/anastasia/MAI/OOP/Lab_4/src/main.cpp

CMakeFiles/app.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/app.dir/src/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/anastasia/MAI/OOP/Lab_4/src/main.cpp > CMakeFiles/app.dir/src/main.cpp.i

CMakeFiles/app.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/app.dir/src/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/anastasia/MAI/OOP/Lab_4/src/main.cpp -o CMakeFiles/app.dir/src/main.cpp.s

# Object files for target app
app_OBJECTS = \
"CMakeFiles/app.dir/src/Point.cpp.o" \
"CMakeFiles/app.dir/src/Trapezoid.cpp.o" \
"CMakeFiles/app.dir/src/Rhombus.cpp.o" \
"CMakeFiles/app.dir/src/Pentagon.cpp.o" \
"CMakeFiles/app.dir/src/main.cpp.o"

# External object files for target app
app_EXTERNAL_OBJECTS =

app: CMakeFiles/app.dir/src/Point.cpp.o
app: CMakeFiles/app.dir/src/Trapezoid.cpp.o
app: CMakeFiles/app.dir/src/Rhombus.cpp.o
app: CMakeFiles/app.dir/src/Pentagon.cpp.o
app: CMakeFiles/app.dir/src/main.cpp.o
app: CMakeFiles/app.dir/build.make
app: CMakeFiles/app.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/anastasia/MAI/OOP/Lab_4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable app"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/app.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/app.dir/build: app
.PHONY : CMakeFiles/app.dir/build

CMakeFiles/app.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/app.dir/cmake_clean.cmake
.PHONY : CMakeFiles/app.dir/clean

CMakeFiles/app.dir/depend:
	cd /Users/anastasia/MAI/OOP/Lab_4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/anastasia/MAI/OOP/Lab_4 /Users/anastasia/MAI/OOP/Lab_4 /Users/anastasia/MAI/OOP/Lab_4/build /Users/anastasia/MAI/OOP/Lab_4/build /Users/anastasia/MAI/OOP/Lab_4/build/CMakeFiles/app.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/app.dir/depend

