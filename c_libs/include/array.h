// ================================================================================
// ================================================================================
// - File:    array.h
// - Purpose: Describe the file purpose here
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
 * This function will remove the integer entry from a user specified index
 * within an aray
 *
 * @param array An integer array
 * @param index The index containing data to be removed from the array
 * @param size The size of the array
 *
 * @code
 * int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
 * pop_int_array(a, 3, 9);
 * for (int i = 0; i < 8; i++) {
 *     printf("%d\n", a[i]);
 * }
 * // >> [1, 2, 3, 5, 6, 7, 8, 9]
 * @endcode
 */
int pop_int_array(int *array, int index, int size);
// --------------------------------------------------------------------------------

/**
 * This function will remove the float entry from a user specified index
 * within an aray
 *
 * @param array An float array
 * @param index The index containing data to be removed from the array
 * @param size The size of the array
 *
 * @code
 * float a[9] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
 * pop_float_array(a, 3, 9);
 * for (int i = 0; i < 8; i++) {
 *     printf("%f\n", a[i]);
 * }
 * // >> [1.1, 2.2, 3.3, 5.5, 6.6, 7.7, 8.8, 9.9]
 * @endcode
 */
int pop_float_array(float *array, int index, int size);
// --------------------------------------------------------------------------------

/**
 * This function will remove the double entry from a user specified index
 * within an aray
 *
 * @param array A double array
 * @param index The index containing data to be removed from the array
 * @param size The size of the array
 *
 * @code
 * double a[9] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
 * pop_float_array(a, 3, 9);
 * for (int i = 0; i < 8; i++) {
 *     printf("%lf\n"i, a[i]);
 * }
 * // >> [1.1, 2.2, 3.3, 5.5, 6.6, 7.7, 8.8, 9.9]
 * @endcode
 */
int pop_double_array(double *array, int index, int size);
// --------------------------------------------------------------------------------

/**
 * This function will remove the char entry from a user specified index
 * within an aray
 *
 * @param array A char array
 * @param index The index containing data to be removed from the array
 * @param size The size of the array
 *
 * @code
 * char a[9] = "abcdefghi";
 * pop_char_array(a, 3, 9);
 * for (int i = 0; i < 8; i++) {
 *     printf("%c\n"i, a[i]);
 * }
 * // >> ['a', 'b', 'c', 'e', 'f', 'g', 'h', 'i']
 * @endcode
 */
int pop_char_array(char *array, int index, int size);
// --------------------------------------------------------------------------------

/**
 * This function will append an existing array with a sclar value or another
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
 *
 * @code
 * int a[9] = {1, 2, 3};
 * int b[6] = [4, 5, 6, 7, 8, 9];
 * append_int_array(a, 3, b, 6);
 * for (int i = 0; i < 9; i++) {
 *     printf("%d\n"i, a[i]);
 * }
 * // >> [1, 2, 3, 4, 5, 6, 7, 8, 9]
 *
 * int a[9] = {1, 2, 3, 4, 5, 6, 7, 8};
 * int b = 9;
 * append_int_array(a, 8, &b, 1);
 * for (int i = 0; i < 9; i++) {
 * printf("%d\n", a[i]);
 * }
 * // >> [1, 2, 3, 4, 5, 6, 7, 8, 9]
 * @endcode
 */
void append_int_array(int *parent_array, int len, int *child_array, size_t count);
// --------------------------------------------------------------------------------

/**
 * This function will append an existing array with a sclar value or another
 * array.  WARNING: The size the data within the parent_array combined with
 * the data in the child_array cannot exceed the total allocation of memory
 * for the parent_array
 *
 * @param parent_array The float array to which more data will be added
 * @param len The number of allocated indices in the parent_array, not to be
 *            confused with the total number of allocated indices
 * @param child_array A float scalar or integer array of data to be added
 *                    to the parent_array
 * @param count The total number of indices to be added to the parent_array
 *              from the child_array
 *
 * @code
 * float a[9] = {1.1, 2.2, 3.3};
 * float b[6] = [4.4, 5.5, 6.6, 7.7, 8.8, 9.9];
 * append_float_array(a, 3, b, 6);
 * for (int i = 0; i < 9; i++) {
 *     printf("%f\n"i, a[i]);
 * }
 * // >> [1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9]
 *
 * float a[9] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8};
 * float b = 9.9;
 * append_float_array(a, 8, &b 1);
 * for (int i = 0; i < 9; i++) {
 *     printf("%f\n", a[i]);
 * }
 * // >> [1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9]
 * @endcode
 */
void append_float_array(float *parent_array, int len, float *child_array, size_t count);
// --------------------------------------------------------------------------------

/**
 * This function will append an existing array with a sclar value or another
 * array.  WARNING: The size the data within the parent_array combined with
 * the data in the child_array cannot exceed the total allocation of memory
 * for the parent_array
 *
 * @param parent_array The double array to which more data will be added
 * @param len The number of allocated indices in the parent_array, not to be
 *            confused with the total number of allocated indices
 * @param child_array A double scalar or integer array of data to be added
 *                    to the parent_array
 * @param count The total number of indices to be added to the parent_array
 *              from the child_array
 *
 * @code
 * double a[9] = {1.1, 2.2, 3.3};
 * double b[6] = [4.4, 5.5, 6.6, 7.7, 8.8, 9.9];
 * append_double_array(a, 3, b, 6);
 * for (int i = 0; i < 9; i++) {
 *     printf("%lf\n"i, a[i]);
 * }
 * // >> [1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9]
 *
 * double a[9] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8};
 * double b = 9.9;
 * append_double_array(a, 8, &b 1);
 * for (int i = 0; i < 9; i++) {
 *     printf("%lf\n", a[i]);
 * }
 * // >> [1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9]
 * @endcode
 */
void append_double_array(double *parent_array, int len, double *child_array, size_t count);
// --------------------------------------------------------------------------------

/**
 * This function will append an existing array with a sclar value or another
 * array.  WARNING: The size the data within the parent_array combined with
 * the data in the child_array cannot exceed the total allocation of memory
 * for the parent_array
 *
 * @param parent_array The char array to which more data will be added
 * @param len The number of allocated indices in the parent_array, not to be
 *            confused with the total number of allocated indices
 * @param child_array A char scalar or integer array of data to be added
 *                    to the parent_array
 * @param count The total number of indices to be added to the parent_array
 *              from the child_array
 *
 * @code
 * char a[10] = "abc";
 * char b[7] = "defghi"
 * append_double_array(a, 3, b, 6);
 * for (int i = 0; i < 9; i++) {
 *     printf("%lf\n"i, a[i]);
 * }
 * // >> ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i']
 *
 * char a[10] = "abcdefgh";
 * char b = 'i'
 * append_double_array(a, 9, &b 1);
 * for (int i = 0; i < 9; i++) {
 *     printf("%lf\n", a[i]);
 * }
 * // >> ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i']
 * @endcode
 */
void append_char_array(char *parent_array, int len, char *child_array, size_t count);
#endif /* array_H */
// ================================================================================
// ================================================================================
// eof
