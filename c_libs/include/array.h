// ================================================================================
// ================================================================================
// - File:    array.h
// - Purpose: This file contains the function prototypes for functions,
//            structures, and enumerations in array.c
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    March 26, 2022
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// Include modules here

#ifndef ARRAY_H
#define ARRAY_H

#include <stdio.h>

typedef struct
{
	void *array;  // Pointer to array
	size_t len;   // Active length of array
	size_t size;  // Number of allocated indizes
	int elem;     // Memory consumption per indice
} Array;

#endif /* array_H */
// ================================================================================
// ================================================================================
// eof
