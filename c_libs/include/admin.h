// ================================================================================
// ================================================================================
// - File:    admin.h
// - Purpose: Describe the file purpose here
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    October 01, 2023
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// Include modules here

#ifndef admin_H
#define admin_H

#if !defined(__GNUC__) && !defined(__clang__)
#error "This code is only compatible with GCC and Clang"
#endif

#include <stdio.h>
#ifdef __cplusplus
extern "C" {
#endif
// ================================================================================
// ================================================================================

typedef enum {
	Success,  // Sucessfull execution
	MemoryAllocationError,  // Error during malloc, calloc, or realloc
	NullStrError,  // Null string value in struct
	OutOfBoundsError,  // Trying to move more memory than is available
} ErrorCodes;

// ================================================================================
// ================================================================================
#ifdef __cplusplus
}
#endif /* __cplusplus*/
#endif /* admin_H */
// ================================================================================
// ================================================================================
// eof
