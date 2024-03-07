cmake_minimum_required(VERSION 3.13)  # CMake version check

project(misc_examples)               # Create project "benchmark"

set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Include the current directory as search path
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Add all source files here
set(SOURCE_FILES segfault.cpp)

SET(GCC_COVERAGE_COMPILE_FLAGS "-static ")
SET(GCC_COVERAGE_LINK_FLAGS    "")

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(segfault ${SOURCE_FILES})

SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")
SET(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS}")
