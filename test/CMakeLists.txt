cmake_minimum_required(VERSION 3.10)
project(TemperatureControllerTest)

# Find the Google Test library
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS} "${CMAKE_CURRENT_BINARY_DIR}/../src/api")

# Set the path for the dynamic library
set(CMAKE_INSTALL_PREFIX "${CMAKE_CURRENT_BINARY_DIR}/../build/lib")
link_directories("${CMAKE_CURRENT_BINARY_DIR}/../build/lib")

# Compile the test case source file
add_executable(TempControllerTest temperaturecontroller_test.cpp)



# Link the test case binary with the Google Test library
target_link_libraries(TempControllerTest ${GTEST_LIBRARIES} pthread TemperatureController)