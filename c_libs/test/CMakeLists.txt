# ================================================================================
# ================================================================================
# - File:    CMakeLists.txt
# - Purpose: Primary CMake file for C++ build system
#
# Source Metadata
# - Author:  Jonathan A. Webb 
# - Date:    March 28, 2023
# - Version: 1.0
# - Copyright: Copyright 2023, Jon Webb Inc.
# ================================================================================
# ================================================================================
# Set minimum cmake version
cmake_minimum_required(VERSION 3.22.2)

add_executable(
  unit_tests
  unit_test.c
  test_swap.c
  test_swap.h
)
target_link_libraries(
  unit_tests
  include
  cmocka
)
# ================================================================================
# ================================================================================
# eof
