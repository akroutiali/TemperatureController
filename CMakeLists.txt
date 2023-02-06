cmake_minimum_required(VERSION 3.10)
project(TemperatureController)
set(SOURCES
    src/temperaturecontroller.cpp
)
add_library(TemperatureController SHARED ${SOURCES})
include_directories(${GTEST_INCLUDE_DIRS} "${CMAKE_CURRENT_BINARY_DIR}/../src/api")
set_target_properties(TemperatureController PROPERTIES
    VERSION 1.0.0
    SOVERSION 1
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
)
# Add the executable source files
add_executable(TempController src/main.cpp)

# Link the library to the executable
target_link_libraries(TempController TemperatureController)