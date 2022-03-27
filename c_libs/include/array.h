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
 * @param name The name of the array
 */
typedef struct
{
	void *array;  // Pointer to array
	size_t len;   // Active length of array
	size_t size;  // Number of allocated indizes
	int elem;     // Memory consumption per indice
	char *name;   // The array name
	char *dtype;  // A string representing the datatype
} Array;
// --------------------------------------------------------------------------------

/**
 * This function instantiates an Array container and all relevant variables. This
 * function should not be used directly.  Instead the user should invoke the
 * init_array function, which wraps this function.
 * @param array an Array structure
 * @param num_indices A guess for the number of indices that will be consumed by the array
 */
void array_mem_alloc(Array *array, size_t num_indices);
// --------------------------------------------------------------------------------

/**
 * This function is a wrapper for initiate_array that pre-populates
 * data in the Array struct and returns the struct to the user
 * @param dtype A string representing the data type, can be 'float',
 *              'double', 'char', or 'int'
 * @param num_indices A guess for the number of indices required by the array
 * @param name The name of the array as a character string
 *
 * The following is a code example for how to instantiate the container for
 * an integer;
 * @code
 * size_t indices = 20;
 * char dtype[4] = "int";
 * char name[5] = "Array";
 * Array arr_test = init_array(dtype, indices, name);
 * @endcode
 */
Array init_array(char *dtype, size_t num_indices, char *name);
// --------------------------------------------------------------------------------

/**
 * This function allows a user to append an existing or blank array container
 * with scalars or arrays of any data type except strings.
 * @param array A pointer to the memory location where an array exists
 * @param elements A scalar or an array of variables.  The variables can
 *                 be of any data type, so as long as they are of the same
 *                 data type as the array being appended.
 * @param count The size of the elements data type in number of indices they
 *              will occupy
 * @return integer A 0 or 1 indicating success of the function.
 *
 * The following demonstrates several ways that the append_array function can
 * be uses.  In these instances, the function will be used for an array
 * of integers
 * @code
 * // Instantiate array
 * size_t indices = 20;
 * char dtype[4] = "int";
 * char name[5] = "Array";
 * Array arr_test = init_array(dtype, indices, name);
 *
 * // Build array from scalar values
 * for (int = 0; i < 3; i++) {
 *     append_array(&arr_test, &i, 1);
 * }
 *
 * // Print the array values
 * for (int i = 0; i < 3; i ++) {
 *     printf("%d\n", ((int *) arr_test.array)[i]);
 * }
 * @endcode
 * The following code will also have the same effect
 * @code
* // Instantiate array
 * size_t indices = 20;
 * char dtype[4] = "int";
 * char name[5] = "Array";
 * Array arr_test = init_array(dtype, indices, name);
 *
 * // Build from an already existing array
 * int a[3] = {0, 1, 2};
 * append_array(&arr_test, a, 3);
 *
 * // Print the array values
 * for (int i = 0; i < 3; i ++) {
 *     printf("%d\n", ((int *) arr_test.array)[i]);
 * } 
 *
 * @endcode
 */
int append_array(Array *array, void *elements, size_t count);
#endif /* ARRAY_H */
// ================================================================================
// ================================================================================
// eof
