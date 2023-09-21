# ================================================================================
# ================================================================================
# - File:    CMakeLists.txt
# - Purpose: Secondary CMake file for C build system
#
# Source Metadata
# - Author:  Jonathan A. Webb 
# - Date:    March 28, 2023
# - Version: 1.0
# - Copyright: Copyright 2023, Jon Webb Inc.
# ================================================================================
# ================================================================================

add_library( include
    swap.c
	swap.h
	vector.c
	vector.h
	llist.c
	llist.h
	print.c
	print.h
	data_structures.c
	data_structures.h
)

target_include_directories(include PUBLIC .)
# ================================================================================
# ================================================================================
# eof
