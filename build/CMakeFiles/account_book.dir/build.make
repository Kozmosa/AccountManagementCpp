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
CMAKE_SOURCE_DIR = /home/kozumi/code/AccountManagemantCpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kozumi/code/AccountManagemantCpp/build

# Include any dependencies generated for this target.
include CMakeFiles/account_book.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/account_book.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/account_book.dir/flags.make

CMakeFiles/account_book.dir/main.cpp.o: CMakeFiles/account_book.dir/flags.make
CMakeFiles/account_book.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kozumi/code/AccountManagemantCpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/account_book.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/account_book.dir/main.cpp.o -c /home/kozumi/code/AccountManagemantCpp/main.cpp

CMakeFiles/account_book.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/account_book.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kozumi/code/AccountManagemantCpp/main.cpp > CMakeFiles/account_book.dir/main.cpp.i

CMakeFiles/account_book.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/account_book.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kozumi/code/AccountManagemantCpp/main.cpp -o CMakeFiles/account_book.dir/main.cpp.s

CMakeFiles/account_book.dir/Account.cpp.o: CMakeFiles/account_book.dir/flags.make
CMakeFiles/account_book.dir/Account.cpp.o: ../Account.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kozumi/code/AccountManagemantCpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/account_book.dir/Account.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/account_book.dir/Account.cpp.o -c /home/kozumi/code/AccountManagemantCpp/Account.cpp

CMakeFiles/account_book.dir/Account.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/account_book.dir/Account.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kozumi/code/AccountManagemantCpp/Account.cpp > CMakeFiles/account_book.dir/Account.cpp.i

CMakeFiles/account_book.dir/Account.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/account_book.dir/Account.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kozumi/code/AccountManagemantCpp/Account.cpp -o CMakeFiles/account_book.dir/Account.cpp.s

CMakeFiles/account_book.dir/YearStat.cpp.o: CMakeFiles/account_book.dir/flags.make
CMakeFiles/account_book.dir/YearStat.cpp.o: ../YearStat.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kozumi/code/AccountManagemantCpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/account_book.dir/YearStat.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/account_book.dir/YearStat.cpp.o -c /home/kozumi/code/AccountManagemantCpp/YearStat.cpp

CMakeFiles/account_book.dir/YearStat.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/account_book.dir/YearStat.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kozumi/code/AccountManagemantCpp/YearStat.cpp > CMakeFiles/account_book.dir/YearStat.cpp.i

CMakeFiles/account_book.dir/YearStat.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/account_book.dir/YearStat.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kozumi/code/AccountManagemantCpp/YearStat.cpp -o CMakeFiles/account_book.dir/YearStat.cpp.s

CMakeFiles/account_book.dir/FileManager.cpp.o: CMakeFiles/account_book.dir/flags.make
CMakeFiles/account_book.dir/FileManager.cpp.o: ../FileManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kozumi/code/AccountManagemantCpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/account_book.dir/FileManager.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/account_book.dir/FileManager.cpp.o -c /home/kozumi/code/AccountManagemantCpp/FileManager.cpp

CMakeFiles/account_book.dir/FileManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/account_book.dir/FileManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kozumi/code/AccountManagemantCpp/FileManager.cpp > CMakeFiles/account_book.dir/FileManager.cpp.i

CMakeFiles/account_book.dir/FileManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/account_book.dir/FileManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kozumi/code/AccountManagemantCpp/FileManager.cpp -o CMakeFiles/account_book.dir/FileManager.cpp.s

CMakeFiles/account_book.dir/StatAggregator.cpp.o: CMakeFiles/account_book.dir/flags.make
CMakeFiles/account_book.dir/StatAggregator.cpp.o: ../StatAggregator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kozumi/code/AccountManagemantCpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/account_book.dir/StatAggregator.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/account_book.dir/StatAggregator.cpp.o -c /home/kozumi/code/AccountManagemantCpp/StatAggregator.cpp

CMakeFiles/account_book.dir/StatAggregator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/account_book.dir/StatAggregator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kozumi/code/AccountManagemantCpp/StatAggregator.cpp > CMakeFiles/account_book.dir/StatAggregator.cpp.i

CMakeFiles/account_book.dir/StatAggregator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/account_book.dir/StatAggregator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kozumi/code/AccountManagemantCpp/StatAggregator.cpp -o CMakeFiles/account_book.dir/StatAggregator.cpp.s

CMakeFiles/account_book.dir/MonthStat.cpp.o: CMakeFiles/account_book.dir/flags.make
CMakeFiles/account_book.dir/MonthStat.cpp.o: ../MonthStat.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kozumi/code/AccountManagemantCpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/account_book.dir/MonthStat.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/account_book.dir/MonthStat.cpp.o -c /home/kozumi/code/AccountManagemantCpp/MonthStat.cpp

CMakeFiles/account_book.dir/MonthStat.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/account_book.dir/MonthStat.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kozumi/code/AccountManagemantCpp/MonthStat.cpp > CMakeFiles/account_book.dir/MonthStat.cpp.i

CMakeFiles/account_book.dir/MonthStat.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/account_book.dir/MonthStat.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kozumi/code/AccountManagemantCpp/MonthStat.cpp -o CMakeFiles/account_book.dir/MonthStat.cpp.s

CMakeFiles/account_book.dir/DayStat.cpp.o: CMakeFiles/account_book.dir/flags.make
CMakeFiles/account_book.dir/DayStat.cpp.o: ../DayStat.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kozumi/code/AccountManagemantCpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/account_book.dir/DayStat.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/account_book.dir/DayStat.cpp.o -c /home/kozumi/code/AccountManagemantCpp/DayStat.cpp

CMakeFiles/account_book.dir/DayStat.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/account_book.dir/DayStat.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kozumi/code/AccountManagemantCpp/DayStat.cpp > CMakeFiles/account_book.dir/DayStat.cpp.i

CMakeFiles/account_book.dir/DayStat.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/account_book.dir/DayStat.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kozumi/code/AccountManagemantCpp/DayStat.cpp -o CMakeFiles/account_book.dir/DayStat.cpp.s

# Object files for target account_book
account_book_OBJECTS = \
"CMakeFiles/account_book.dir/main.cpp.o" \
"CMakeFiles/account_book.dir/Account.cpp.o" \
"CMakeFiles/account_book.dir/YearStat.cpp.o" \
"CMakeFiles/account_book.dir/FileManager.cpp.o" \
"CMakeFiles/account_book.dir/StatAggregator.cpp.o" \
"CMakeFiles/account_book.dir/MonthStat.cpp.o" \
"CMakeFiles/account_book.dir/DayStat.cpp.o"

# External object files for target account_book
account_book_EXTERNAL_OBJECTS =

account_book: CMakeFiles/account_book.dir/main.cpp.o
account_book: CMakeFiles/account_book.dir/Account.cpp.o
account_book: CMakeFiles/account_book.dir/YearStat.cpp.o
account_book: CMakeFiles/account_book.dir/FileManager.cpp.o
account_book: CMakeFiles/account_book.dir/StatAggregator.cpp.o
account_book: CMakeFiles/account_book.dir/MonthStat.cpp.o
account_book: CMakeFiles/account_book.dir/DayStat.cpp.o
account_book: CMakeFiles/account_book.dir/build.make
account_book: CMakeFiles/account_book.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kozumi/code/AccountManagemantCpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable account_book"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/account_book.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/account_book.dir/build: account_book

.PHONY : CMakeFiles/account_book.dir/build

CMakeFiles/account_book.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/account_book.dir/cmake_clean.cmake
.PHONY : CMakeFiles/account_book.dir/clean

CMakeFiles/account_book.dir/depend:
	cd /home/kozumi/code/AccountManagemantCpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kozumi/code/AccountManagemantCpp /home/kozumi/code/AccountManagemantCpp /home/kozumi/code/AccountManagemantCpp/build /home/kozumi/code/AccountManagemantCpp/build /home/kozumi/code/AccountManagemantCpp/build/CMakeFiles/account_book.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/account_book.dir/depend

