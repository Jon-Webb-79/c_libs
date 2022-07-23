// ================================================================================
// ================================================================================
// - File:    array.h
// - Purpose: This file contains all of the prototypes for functions in the
//            array.c file
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    May 17, 2022
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// Include modules here

#ifndef array_H
#define array_H

#include <stdio.h>
#include <string.h>
#include "vector.h"

/**
 * A container for a dynamically allocated array and related data
 *
 * @struct Array
 * A container for a dynamic array and metadata
 *
 * @param Array::array
 *    A pointer to an array in stack memory
 * @param Array::active_length
 *    The number of indices with assigned data
 * @param Array::allocated_length
 *    The total number of allocated indices in memory
 * @param Array::num_bytes
 *    The number of bytes consumed by a single indice
 * @param Array::dat_type
 *    The data type. Must use data types allocated in dtype enum
 */
typedef struct
{
	void *array;
	size_t active_length;
	size_t allocated_length;
	size_t num_bytes;
	dtype dat_type;
} Array;
// --------------------------------------------------------------------------------

/**
 * This function is used to instantiate an Array container with a staitc
 * array allocated in stack memory.
 *
 * @param allocated_length The total amount of memory allocated in stack
 *                      memory
 * @param active_length The total number of indices that have been populated
 *                      with data
 * @param array A pointer to the memory where the array is allocated
 * @param data_type The data type which must be one of the following, FLOAT, DOUBLE,
 *              CHAR, INT, SHORTINT, LONG, or LONGLONG
 */
Array init_array(size_t allocated_length, size_t active_length,
		         void *array, dtype data_type);
// --------------------------------------------------------------------------------

/**
 * This function allows a user to push a scalar value or an array of data
 * the the end of an array container.  All data is stored in stack memory.
 *
 * @param arr An Array container
 * @param array A static array or scalar stored in stack memory
 * @param active_indices: The active length of array.  In other words, the number
 *                       of indices with data stored in them, which may be different
 *                       than the total amount of memory allocated to array.
 * @return integer Returns 1 if function sucessfully executed, 0 if the function
 *                 fails to execute properly
 *
 * @code
 * int a[10] = {1, 2, 3, 4};
 * int b[6] = {5, 6, 7, 8, 9, 10};
 * Array arr = init_array(10, 4, a, INT);
 * push_array(&arr, b, 6);
 *
 * for (size_t i = 0; i < arr.active_length; i++) {
 *     printf("%d\n", ((int *)arr.array)[i]);
 * }
 * // >> 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
 * @endcode
 */
int push_array(Array *arr, void *array, size_t active_indices);
// --------------------------------------------------------------------------------

/**
 * This function allows a user to insert a scalar value or an array into
 * an Array container at a user defined index
 *
 * @param arr An Array container
 * @param array An array or scalar to be inserted into the container
 * @param active_indices The number of actively used indices in the array to
 *                       be inserted into the Array container.
 * @param insert_index The index where data will be inserted
 *
 * @code
 * int a[10] = {1, 2, 3, 4};
 * int b[6] = {5, 6, 7, 8, 9, 10};
 * Array arr = init_array(10, 4, a, INT);
 * insert_array(&arr, b, 6, 2);
 *
 * for (size_t i = 0; i < arr.active_length; i++) {
 *     printf("%d\n", ((int *)arr.array)[i]);
 * }
 * // >> 1, 2, 5, 6, 7, 8, 9, 10, 3, 4
 * @endcode
 */
int insert_array(Array *arr, void *array, size_t active_indices, size_t insert_index);
// --------------------------------------------------------------------------------

/**
 * This function pops the data from a specific array index within an Array container.
 *
 * @param arr An Array container
 * @param index
 *
 * @code
 * int a[5] = {1, 2, 3, 4, 5};
 * Array arr = init_array(10, 5, a, INT);
 * pop_array(arr, 2);
 * for (size_t i = 0; i < arr.active_length; i++) {
 *     printf("%d\n", ((int *)arr.array)[i]);
 * }
 * // 1, 2, 4, 5
 * @endcode
 */
int pop_array(Array *arr, size_t index);
#endif /* array_H */
// ================================================================================
// ================================================================================
// eof
