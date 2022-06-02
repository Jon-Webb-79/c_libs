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
 * @param type An integer representing the memory allocation assigned
 *             to the user defined data type
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
int pop_array(void *array, int index, int size, int type);
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
 * append_array(a, 3, b, 6, sizeof(int));
 * for (int i = 0; i < 9; i++) {
 *     printf("%d\n"i, a[i]);
 * }
 * // >> [1, 2, 3, 4, 5, 6, 7, 8, 9]
 *
 * int a[9] = {1, 2, 3, 4, 5, 6, 7, 8};
 * int b = 9;
 * append_array(a, 8, &b, 1, sizeof(int));
 * for (int i = 0; i < 9; i++) {
 * printf("%d\n", a[i]);
 * }
 * // >> [1, 2, 3, 4, 5, 6, 7, 8, 9]
 * @endcode
 */
void append_array(void *parent_array, int len, void *child_array,
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
void preappend_array(void *parent_array, int len, void *child_array,
		             size_t count, int type);
#endif /* array_H */
// ================================================================================
// ================================================================================
// eof
