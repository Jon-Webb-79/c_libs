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
/**
 * This function will remove a data entry from a user specified index
 * within an aray
 *
 * @param array A data rray of any type
 * @param index The index containing data to be removed from the array
 * @param size The size of the array
 * @param num_bytes An integer representing the memory allocation assigned
 *                  to the user defined data type
 *
 * @code
 * int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
 * pop_int_array((void *)a, 3, 9, sizeof(int));
 * for (int i = 0; i < 8; i++) {
 *     printf("%d\n", a[i]);
 * }
 * // >> [1, 2, 3, 5, 6, 7, 8, 9]
 * @endcode
 */
int pop_array(void *array, size_t index, size_t size, size_t num_bytes);
// --------------------------------------------------------------------------------

/**
 * This function will append an existing array with a scalar value or another
 * array.  WARNING: The size the data within the parent_array combined with
 * the data in the child_array cannot exceed the total allocation of memory
 * for the parent_array
 *
 * @param parent_array The integer array to which more data will be added
 * @param len The number of allocated indices in the parent_array, not to be
 *            confused with the total number of allocated indices
 * @param child_array A integer scalar or integer array of data to be added
 *                    to the parent_array
 * @param count The total number of indices to be added to the parent_array
 *              from the child_array
 * @param type An integer representing the amount of memory consumed by
 *             a single data type
 *
 * @code
 * int a[9] = {1, 2, 3};
 * int b[6] = [4, 5, 6, 7, 8, 9];
 * push_array(a, 3, b, 6, sizeof(int));
 * for (int i = 0; i < 9; i++) {
 *     printf("%d\n"i, a[i]);
 * }
 * // >> [1, 2, 3, 4, 5, 6, 7, 8, 9]
 *
 * int a[9] = {1, 2, 3, 4, 5, 6, 7, 8};
 * int b = 9;
 * push_array(a, 8, &b, 1, sizeof(int));
 * for (int i = 0; i < 9; i++) {
 * printf("%d\n", a[i]);
 * }
 * // >> [1, 2, 3, 4, 5, 6, 7, 8, 9]
 * @endcode
 */
void push_array(void *parent_array, int len, void *child_array,
		        size_t count, int type);
// --------------------------------------------------------------------------------

/**
 * This function will pre-append an existing array with a scalar value or another
 * array.  WARNING: The size the data within the parent_array combined with
 * the data in the child_array cannot exceed the total allocation of memory
 * for the parent_array
 *
 * @param parent_array The array to which more data will be added
 * @param len The number of allocated indices in the parent_array, not to be
 *            confused with the total number of allocated indices
 * @param child_array A scalar or array of data to be added
 *                    to the parent_array
 * @param count The total number of indices to be added to the parent_array
 *              from the child_array
 * @param type The number of bytes occupied by the array datatype
 *
 * @code
 * int a[9] = [1, 2, 3];
 * int b[6] = {4, 5, 6, 7, 8, 9};
 * preappend_array(a, 3, b, 6, sizeof(int));
 * for (int i = 0; i < 9; i++) {
 *     printf("%c\n"i, a[i]);
 * }
 * // >> [4, 5, 6, 7, 8, 9, 1, 2, 3]
 *
 * int a[9] = [1, 2, 3, 4, 5, 6, 7, 8];
 * int b = 9;
 * preappend_array(a, 9, &b 1, sizeof(int));
 * for (int i = 0; i < 9; i++) {
 *     printf("%c\n", a[i]);
 * }
 * // >> [9, 1, 2, 3, 4, 5, 6, 7, 8]
 * @endcode
 */
//void preappend_array(void *parent_array, int len, void *child_array,
//		             size_t count, int type);
// --------------------------------------------------------------------------------

/**
 * This function will determine the indices where a specific integer value exists
 * within an array.
 *
 * @param array An array of integer values
 * @param value An integer value
 * @param len The active length of array
 * @return indice_arr A Vector containing the index points where the integer
 *                    value exists within array.
 *
 * @code
 * int a[7] = {1, 3, 5, 1, 2, 1, 6};
 * Vector indeces = find_int_array_indices(a, 1, 7);
 * for (int = 0; i < array.len; i++) {
 *     printf("%d\n", int_vector_val(&indices, &i));
 * }
 * // >> [0, 3, 5]
 * @endcode
 */
//Vector find_int_array_indices(int *array, int value, int len);
// --------------------------------------------------------------------------------

/**
 * This function will determine the indices where a specific float value exists
 * within an array.
 *
 * @param array An array of float values
 * @param value A float value
 * @param len The active length of array
 * @return indice_arr A Vector containing the index points where the integer
 *                    value exists within array.
 *
 * @code
 * float a[7] = {1.1, 3.3, 5.5, 1.1, 2.1, 1.1, 6.1};
 * Vector indeces = find_float_array_indices(a, 1.1f, 7);
 * for (int = 0; i < array.len; i++) {
 *     printf("%d\n", int_vector_val(&indices, &i));
 * }
 * // >> [0, 3, 5]
 * @endcode
 */
//Vector find_float_array_indices(float *array, float value, int len);
// --------------------------------------------------------------------------------

/**
 * This function will determine the indices where a specific double value exists
 * within an array.
 *
 * @param array An array of double values
 * @param value A double value
 * @param len The active length of array
 * @return indice_arr A Vector containing the index points where the integer
 *                    value exists within array.
 *
 * @code
 * double a[7] = {1.1, 3.3, 5.5, 1.1, 2.1, 1.1, 6.1};
 * Vector indeces = find_double_array_indices(a, 1.1, 7);
 * for (int = 0; i < array.len; i++) {
 *     printf("%d\n", int_vector_val(&indices, &i));
 * }
 * // >> [0, 3, 5]
 * @endcode
 */
//Vector find_double_array_indices(double *array, double value, int len);
// --------------------------------------------------------------------------------

/**
 * This function will determine the indices where a specific char value exists
 * within an array.
 *
 * @param array An array of char values
 * @param value A char value
 * @param len The active length of array
 * @return indice_arr A Vector containing the index points where the integer
 *                    value exists within array.
 *
 * @code
 * char[12] = "Hello World"
 * Vector indeces = find_char_array_indices(a, 'l', 11);
 * for (int = 0; i < array.len; i++) {
 *     printf("%d\n", int_vector_val(&indices, &i));
 * }
 * // >> [2, 3, 9]
 * @endcode
 */
//Vector find_char_array_indices(char *array, char value, int len);
#endif /* array_H */
// ================================================================================
// ================================================================================
// eof
