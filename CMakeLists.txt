cmake_minimum_required(VERSION 3.10)
project(MyCppProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set prefix path to use system libraries
set(CMAKE_PREFIX_PATH "/usr")

# Find GTest
find_package(GTest REQUIRED)

# Include directories
include_directories(src)

# Add executable for the main program
add_executable(main src/add.cpp src/main.cpp)

# Add executable for tests
add_executable(runTests test/test_add.cpp src/add.cpp)
target_link_libraries(runTests GTest::gtest_main)

# Enable testing
enable_testing()
add_test(NAME MyTests COMMAND runTests)