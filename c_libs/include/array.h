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
#endif /* array_H */
// ================================================================================
// ================================================================================
// eof
