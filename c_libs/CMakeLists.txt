# ================================================================================
# ================================================================================
# - File:    CMakeLists.txt
# - Purpose: Primary CMake file for C build system
#
# Source Metadata
# - Author:  Jonathan A. Webb 
# - Date:    March 28, 2023
# - Version: 1.0
# - Copyright: Copyright 2023, Jon Webb Inc.
# ================================================================================
# ================================================================================
# Set generic terms

# CMake version
cmake_minimum_required(VERSION 3.22.2)
project(c_libs)

# Set the compiler, for some reason this does not work with clang++ or g++
set(CMAKE_C_COMPILER "/usr/bin/gcc")

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

enable_testing()
# Set compiler flags
if ("${CMAKE_C_COMPILER_ID}" STREQUAL "GNU")
    set(CMAKE_C_FLAGS "-Wall -Werror -Wpedantic")
elseif ("${CMAKE_C_COMPILER_ID}" STREQUAL "Clang")
    set(CMAKE_C_FLAGS "-Wall -Werror -Wpedantic")
endif()
# --------------------------------------------------------------------------------
# Set executable terms

# Specify directory where the executable is stored
# set(CMAKE_CURRENT_BINARY_DIR "bin")

# Add subdirectories
add_subdirectory(include)

# Create name for executable
add_executable(${PROJECT_NAME} main.c)

# Add target libraries if necessary
target_link_libraries(${PROJECT_NAME} PUBLIC include)
# --------------------------------------------------------------------------------
# Set test terms

add_subdirectory(test)
# ================================================================================
# ================================================================================
# eof
