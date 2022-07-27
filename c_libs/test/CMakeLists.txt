# ================================================================================
# ================================================================================
# - File:    CMakeLists.txt
# - Purpose: Primary CMake file for C++ build system
#
# Source Metadata
# - Author:  Jonathan A. Webb 
# - Date:    March 26, 2022
# - Version: 1.0
# - Copyright: Copyright 2022, Jon Webb Inc.
# ================================================================================
# ================================================================================
# Set minimum cmake version
cmake_minimum_required(VERSION 3.22.2)

enable_testing()

add_executable(
  unit_tests
  test_vector.cpp
)
target_link_libraries(
  unit_tests
  gtest_main
  include
)

include(GoogleTest)
gtest_discover_tests(unit_tests)
# ================================================================================
# ================================================================================
# eof
