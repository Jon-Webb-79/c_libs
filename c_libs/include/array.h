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
#include <stdlib.h>
#include <string.h>

/**
 * A container for a dynamically allocated array and related data
 * @param array a pointer to an array in memory
 * @param len The active length of the array
 * @param size The total number of indices allocated for the array
 * @param elem The memory consumption for each indice
 */
typedef struct
{
	void *array;  // Pointer to array
	size_t len;   // Active length of array
	size_t size;  // Number of allocated indizes
	int elem;     // Memory consumption per indice
} Array;
// --------------------------------------------------------------------------------

/**
 * This function instantiates an Array container and all relevant variables. This
 * function should not be used directly.  Instead the user should invoke the
 * init_array function, which wraps this function.
 * @param array an Array structure
 * @param num_indices A guess for the number of indices that will be consumed by the array
 */
void initiate_array(Array *array, size_t num_indices);
// --------------------------------------------------------------------------------

/**
 * This function is a wrapper for initiate_array that pre-populates
 * data in the Array struct and returns the struct to the user
 * @param size The size of a single indice
 * @param num_indices A guess for the number of indices required by the array
 */
Array init_array(int size, size_t num_indices);

#endif /* ARRAY_H */
// ================================================================================
// ================================================================================
// eof
