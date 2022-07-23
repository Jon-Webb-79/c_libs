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
 * @return index 1 if function performed correctly, 0 if the function
 *               does not perform correctly
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
// --------------------------------------------------------------------------------

/**
 * This function will replace the value at a user specified index
 *
 * @param arr An Array container
 * @param index The index where the user wishes to replace data
 * @param value The value that will replace the original value. This
 *              parameter is a scalar
 * @return index 1 if function performed correctly, 0 if the function
 *               does not perform correctly
 *
 * @code
 * int a[5] = {1, 2, 3, 4, 5};
 * Array arr = init_array(5, 5, a, INT);
 * int b = 10;
 * replace_array_index(&arr, 2, &b);
 * for (size_t i = 0; i < arr.active_length; i++) {
 *     printf("%d\n", a[i]);
 * }
 * // 1, 2, 10, 4, 5
 * @endcode
 */
int replace_array_index(Array *arr, size_t index, void *value);
// --------------------------------------------------------------------------------

/**
 * This function will allow a user to replace specific values in a
 * statically allocated integer array container.
 *
 * @param arr An Array container
 * @param old_value The value to be replaced
 * @param new_value The value to replace the old value
 *
 * @code
 * int a[7] = {1, 2, 1, 3, 1, 1, 5};
 * Array arr = init_array(7, 7, a, INT);
 * replace_int_array_values(&arr, 1, 5);
 * for (size_t i = 0l i < arr->active_length; i++) {
 *     printf("%d\n", a[i]);
 * }
 * // 5, 2, 5, 3, 5, 5, 5
 * @endcode
 */
void replace_int_array_values(Array *arr, int old_value, int new_value);
// --------------------------------------------------------------------------------

/**
 * This function will allow a user to replace specific values in a
 * statically allocated float array container.
 *
 * @param arr An Array container
 * @param old_value The value to be replaced
 * @param new_value The value to replace the old value
 *
 * @code
 * float a[7] = {1.1, 2.2, 1.1, 3.3, 1.1, 1.1, 5.5};
 * Array arr = init_array(7, 7, a, FLOAT);
 * replace_float_array_values(&arr, 1.1f, 5.5f);
 * for (size_t i = 0l i < arr->active_length; i++) {
 *     printf("%f\n", a[i]);
 * }
 * // 5.5, 2.2, 5.5, 3.3, 5.5, 5.5, 5.5
 * @endcode
 */
void replace_float_array_values(Array *arr, float old_value, float new_value);
// --------------------------------------------------------------------------------

/**
 * This function will allow a user to replace specific values in a
 * statically allocated double array container.
 *
 * @param arr An Array container
 * @param old_value The value to be replaced
 * @param new_value The value to replace the old value
 *
 * @code
 * double a[7] = {1.1, 2.2, 1.1, 3.3, 1.1, 1.1, 5.5};
 * Array arr = init_array(7, 7, a, DOUBLE);
 * replace_double_array_values(&arr, 1.1, 5.5);
 * for (size_t i = 0l i < arr->active_length; i++) {
 *     printf("%lf\n", a[i]);
 * }
 * // 5.5, 2.2, 5.5, 3.3, 5.5, 5.5, 5.5
 * @endcode
 */
void replace_double_array_values(Array *arr, double old_value, double new_value);
// --------------------------------------------------------------------------------

/**
 * This function will allow a user to replace specific values in a
 * statically allocated char array container.
 *
 * @param arr An Array container
 * @param old_value The value to be replaced
 * @param new_value The value to replace the old value
 *
 * @code
 * char a[13] = "Hello World!";
 * Array arr = init_array(13, 13, a, CHAR);
 * replace_char_array_values(&arr, 'o', 'q');
 * for (size_t i = 0l i < arr->active_length; i++) {
 *     printf("%lf\n", a[i]);
 * }
 * // 'H', 'e', 'l', 'l', 'q', ' ', 'W', 'q', 'r', 'l', 'd', '!'
 * @endcode
 */
void replace_char_array_values(Array *arr, char old_value, char new_value);
// --------------------------------------------------------------------------------

/**
 * This function will allow a user to replace specific values in a
 * statically allocated short array container.
 *
 * @param arr An Array container
 * @param old_value The value to be replaced
 * @param new_value The value to replace the old value
 *
 * @code
 * short a[7] = {1, 2, 1, 3, 1, 1, 5};
 * Array arr = init_array(7, 7, a, SHORTINT);
 * replace_short_array_values(&arr, 1, 5);
 * for (size_t i = 0l i < arr->active_length; i++) {
 *     printf("%d\n", a[i]);
 * }
 * // 5, 2, 5, 3, 5, 5, 5
 * @endcode
 */
void replace_short_array_values(Array *arr, short old_value, short new_value);
// --------------------------------------------------------------------------------

/**
 * This function will allow a user to replace specific values in a
 * statically allocated long integer array container.
 *
 * @param arr An Array container
 * @param old_value The value to be replaced
 * @param new_value The value to replace the old value
 *
 * @code
 * long a[7] = {1, 2, 1, 3, 1, 1, 5};
 * Array arr = init_array(7, 7, a, LONG);
 * replace_long_array_values(&arr, 1, 5);
 * for (size_t i = 0l i < arr->active_length; i++) {
 *     printf("%d\n", a[i]);
 * }
 * // 5, 2, 5, 3, 5, 5, 5
 * @endcode
 */
void replace_long_array_values(Array *arr, long old_value, long new_value);
// --------------------------------------------------------------------------------

/**
 * This function will allow a user to replace specific values in a
 * statically allocated long long integer array container.
 *
 * @param arr An Array container
 * @param old_value The value to be replaced
 * @param new_value The value to replace the old value
 *
 * @code
 * long long a[7] = {1, 2, 1, 3, 1, 1, 5};
 * Array arr = init_array(7, 7, a, LONGLONG);
 * replace_longlong_array_values(&arr, 1, 5);
 * for (size_t i = 0l i < arr->active_length; i++) {
 *     printf("%d\n", a[i]);
 * }
 * // 5, 2, 5, 3, 5, 5, 5
 * @endcode
 */
void replace_longlong_array_values(Array *arr, long long old_value, long long new_value);
#endif /* array_H */
// ================================================================================
// ================================================================================
// eof
