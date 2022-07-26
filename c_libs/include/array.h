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
 * statically allocated array container.
 *
 * @param arr An Array container
 * @param old_value The value to be replaced
 * @param new_value The value to replace the old value
 *
 * @code
 * long long a[7] = {1, 2, 1, 3, 1, 1, 5};
 * long long aa = 1;
 * long long bb = 10;
 * Array arr = init_array(7, 7, a, LONGLONG);
 * replace_array_values(&arr, &aa, &bb);
 * for (size_t i = 0l i < arr->active_length; i++) {
 *     printf("%d\n", a[i]);
 * }
 * // 10, 2, 10, 3, 10, 10, 5
 * @endcode
 */
void replace_array_values(Array *arr, void *old_value, void *new_value);
// --------------------------------------------------------------------------------

/**
 * This function will allow a user to delete specific values in a
 * statically allocated array container.
 *
 * @param arr An Array container
 * @param value The value to be deleted
 *
 * @code
 * long long a[7] = {1, 2, 1, 3, 1, 1, 5};
 * long long aa = 1;
 * Array arr = init_array(7, 7, a, LONGLONG);
 * delete_array_values(&arr, &aa);
 * for (size_t i = 0l i < arr->active_length; i++) {
 *     printf("%d\n", a[i]);
 * }
 * // 2, 3, 5
 * @endcode
 */
void delete_array_values(Array *arr, void *value);
// --------------------------------------------------------------------------------

/**
 * This function will allow a user to delete all duplicate value in an array, whil
 * preserving the initial value.
 *
 * @param arr An Array container
 *
 * @code
 * int a[8] = {1, 2, 1, 3, 3, 4, 5, 4};
 * Array arr = init_array(8, 8, a, INT);
 * delete_array_duplicates(&arr);
 * for (size_t i = 0; i < arr.active_length; i++) {
 *     printf("%d\n", a[i]);
 * }
 * // >> 1, 2, 3, 4, 5
 * @endcode
 */
void delete_array_duplicates(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will delete all repeated values to include the original
 * value.
 *
 * @param arr An Array container
 *
 * @code
 * int a[9] = {1, 2, 2, 3, 4, 4, 5, 6, 6};
 * Array arr = init_array(9, 9, a, INT);
 * unique_array_values(&arr);
 * for (size_t i = 0; i < arr.active_length; i++) {
 *     printf("%d\n", a[i]);
 * }
 * // >> 1, 3, 5
 * @endcode
 */
void unique_array_values(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will re-order an integer array from least to greatest (ascending),
 * or greates to least (descending).  This function uses a simple insert method.
 * This function does not modify any of the Array container metadata.  As a result,
 * the user can also use other C sort methods.
 *
 * @param arr An array container
 * @param method Either FORWARD, or REVERSE
 * @return integer 0 if unsucesful and 1 if succesful
 *
 * @code
 * int a[6] = { 1, 3, 5, 2, 4, 6};
 * Array arr  = init_array(6, 6, a, INT);
 * sort_int_array(&arr, FORWARD);
 * for (size_t i = 0; i < arr.active_length; i++) {
 *     printf("%d\n", a[i]);
 * }
 * // >> 1, 2, 3, 4, 5, 6
 * @endcode
 */
int sort_int_array(Array *arr, order method);
// --------------------------------------------------------------------------------

/**
 * This function will re-order a float array from least to greatest (ascending),
 * or greates to least (descending).  This function uses a simple insert method.
 * This function does not modify any of the Array container metadata.  As a result,
 * the user can also use other C sort methods.
 *
 * @param arr An array container
 * @param method Either FORWARD, or REVERSE
 * @return integer 0 if unsucesful and 1 if succesful
 *
 * @code
 * float a[6] = { 1.1, 3.3, 5.5, 2.2, 4.4, 6.6};
 * Array arr  = init_array(6, 6, a, FLOAT);
 * sort_float_array(&arr, FORWARD);
 * for (size_t i = 0; i < arr.active_length; i++) {
 *     printf("%f\n", a[i]);
 * }
 * // >> 1.1, 2.2, 3.3, 4.4, 5.5, 6.6
 * @endcode
 */
int sort_float_array(Array *arr, order method);
// --------------------------------------------------------------------------------

/**
 * This function will re-order a double array from least to greatest (ascending),
 * or greates to least (descending).  This function uses a simple insert method.
 * This function does not modify any of the Array container metadata.  As a result,
 * the user can also use other C sort methods.
 *
 * @param arr An array container
 * @param method Either FORWARD, or REVERSE
 * @return integer 0 if unsucesful and 1 if succesful
 *
 * @code
 * double a[6] = { 1.1, 3.3, 5.5, 2.2, 4.4, 6.6};
 * Array arr  = init_array(6, 6, a, DOUBLE);
 * sort_double_array(&arr, FORWARD);
 * for (size_t i = 0; i < arr.active_length; i++) {
 *     printf("%lf\n", a[i]);
 * }
 * // >> 1.1, 2.2, 3.3, 4.4, 5.5, 6.6
 * @endcode
 */
int sort_double_array(Array *arr, order method);
// --------------------------------------------------------------------------------

/**
 * This function will re-order a char array from least to greatest (ascending),
 * or greates to least (descending).  This function uses a simple insert method.
 * This function does not modify any of the Array container metadata.  As a result,
 * the user can also use other C sort methods.
 *
 * @param arr An array container
 * @param method Either FORWARD, or REVERSE
 * @return integer 0 if unsucesful and 1 if succesful
 *
 * @code
 * char a[] = "Hello World!";
 * Array arr  = init_array(6, 6, a, CHAR);
 * sort_char_array(&arr, FORWARD);
 * for (size_t i = 0; i < arr.active_length; i++) {
 *     printf("%c\n", a[i]);
 * }
 * // >> " !HWdellloor";
 * @endcode
 */
int sort_char_array(Array *arr, order method);
// --------------------------------------------------------------------------------

/**
 * This function will re-order an short integer array from least to greatest (ascending),
 * or greates to least (descending).  This function uses a simple insert method.
 * This function does not modify any of the Array container metadata.  As a result,
 * the user can also use other C sort methods.
 *
 * @param arr An array container
 * @param method Either FORWARD, or REVERSE
 * @return integer 0 if unsucesful and 1 if succesful
 *
 * @code
 * short a[6] = { 1, 3, 5, 2, 4, 6};
 * Array arr  = init_array(6, 6, a, SHORTINT);
 * sort_short_array(&arr, FORWARD);
 * for (size_t i = 0; i < arr.active_length; i++) {
 *     printf("%d\n", a[i]);
 * }
 * // >> 1, 2, 3, 4, 5, 6
 * @endcode
 */
int sort_short_array(Array *arr, order method);
// --------------------------------------------------------------------------------

/**
 * This function will re-order an long integer array from least to greatest (ascending),
 * or greates to least (descending).  This function uses a simple insert method.
 * This function does not modify any of the Array container metadata.  As a result,
 * the user can also use other C sort methods.
 *
 * @param arr An array container
 * @param method Either FORWARD, or REVERSE
 * @return integer 0 if unsucesful and 1 if succesful
 *
 * @code
 * long a[6] = { 1, 3, 5, 2, 4, 6};
 * Array arr  = init_array(6, 6, a, LONG);
 * sort_long_array(&arr, FORWARD);
 * for (size_t i = 0; i < arr.active_length; i++) {
 *     printf("%ld\n", a[i]);
 * }
 * // >> 1, 2, 3, 4, 5, 6
 * @endcode
 */
int sort_long_array(Array *arr, order method);
// --------------------------------------------------------------------------------

/**
 * This function will re-order an long long integer array from least to greatest (ascending),
 * or greates to least (descending).  This function uses a simple insert method.
 * This function does not modify any of the Array container metadata.  As a result,
 * the user can also use other C sort methods.
 *
 * @param arr An array container
 * @param method Either FORWARD, or REVERSE
 * @return integer 0 if unsucesful and 1 if succesful
 *
 * @code
 * long long a[6] = { 1, 3, 5, 2, 4, 6};
 * Array arr  = init_array(6, 6, a, LONGLONG);
 * sort_longlong_array(&arr, FORWARD);
 * for (size_t i = 0; i < arr.active_length; i++) {
 *     printf("%ld\n", a[i]);
 * }
 * // >> 1, 2, 3, 4, 5, 6
 * @endcode
 */
int sort_longlong_array(Array *arr, order method);
// --------------------------------------------------------------------------------

/**
 * This function will re-order an array of any data type from least to greatest (ascending),
 * or greates to least (descending).  This function uses a simple insert method.
 * This function does not modify any of the Array container metadata.  As a result,
 * the user can also use other C sort methods.
 *
 * @param arr An array container
 * @param method Either FORWARD, or REVERSE
 * @return integer 0 if unsucesful and 1 if succesful
 *
 * @code
 * long long a[6] = { 1, 3, 5, 2, 4, 6};
 * Array arr  = init_array(6, 6, a, LONGLONG);
 * sort_array(&arr, FORWARD);
 * for (size_t i = 0; i < arr.active_length; i++) {
 *     printf("%ld\n", a[i]);
 * }
 * // >> 1, 2, 3, 4, 5, 6
 * @endcode
 */
int sort_array(Array *arr, order method);
// --------------------------------------------------------------------------------

/**
 * This function will reverse the order of an integer array
 *
 * @param arr An array container
 *
 * @code
 * int a[5] = {1, 2, 3, 4, 5};
 * Array arr = init_array(5, 5, a, INT);
 * reverse_int_array(&arr);
 * for (size_t i = 0; i < arr->active_length; i++) {
 *     printf("%d\n", a[i]);
 * }
 * // >> 5, 4, 3, 2, 1
 * @endcode
 */
void reverse_int_array(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will reverse the order of a float array
 *
 * @param arr An array container
 *
 * @code
 * float a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
 * Array arr = init_array(5, 5, a, FLOAT);
 * reverse_float_array(&arr);
 * for (size_t i = 0; i < arr->active_length; i++) {
 *     printf("%f\n", a[i]);
 * }
 * // >> 5.5, 4.4, 3.3, 2.2, 1.1
 * @endcode
 */
void reverse_float_array(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will reverse the order of a double array
 *
 * @param arr An array container
 *
 * @code
 * double a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
 * Array arr = init_array(5, 5, a, DOUBLE);
 * reverse_double_array(&arr);
 * for (size_t i = 0; i < arr->active_length; i++) {
 *     printf("%lf\n", a[i]);
 * }
 * // >> 5.5, 4.4, 3.3, 2.2, 1.1
 * @endcode
 */
void reverse_double_array(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will reverse the order of a char array
 *
 * @param arr An array container
 *
 * @code
 * char a[6] = "Hello";
 * Array arr = init_array(6, 6, a, CHAR);
 * reverse_char_array(&arr);
 * for (size_t i = 0; i < arr->active_length; i++) {
 *     printf("%c\n", a[i]);
 * }
 * // >> "olleH"
 * @endcode
 */
void reverse_char_array(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will reverse the order of a short array
 *
 * @param arr An array container
 *
 * @code
 * short a[5] = {1, 2, 3, 4, 5};
 * Array arr = init_array(5, 5, a, SHORT);
 * reverse_short_array(&arr);
 * for (size_t i = 0; i < arr->active_length; i++) {
 *     printf("%ld\n", a[i]);
 * }
 * // >> 5, 4, 3, 2, 1
 * @endcode
 */
void reverse_short_array(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will reverse the order of a long array
 *
 * @param arr An array container
 *
 * @code
 * long a[5] = {1, 2, 3, 4, 5};
 * Array arr = init_array(5, 5, a, LONG);
 * reverse_long_array(&arr);
 * for (size_t i = 0; i < arr->active_length; i++) {
 *     printf("%ld\n", a[i]);
 * }
 * // >> 5, 4, 3, 2, 1
 * @endcode
 */
void reverse_long_array(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will reverse the order of a long long array
 *
 * @param arr An array container
 *
 * @code
 * long long a[5] = {1, 2, 3, 4, 5};
 * Array arr = init_array(5, 5, a, LONG LONG);
 * reverse_longlong_array(&arr);
 * for (size_t i = 0; i < arr->active_length; i++) {
 *     printf("%ld\n", a[i]);
 * }
 * // >> 5, 4, 3, 2, 1
 * @endcode
 */
void reverse_longlong_array(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will reverse the order of an array
 *
 * @param arr An array container
 * @return integer 0 if unsucessful, 1 if sucessful
 *
 * @code
 * long long a[5] = {1, 2, 3, 4, 5};
 * Array arr = init_array(5, 5, a, LONG LONG);
 * reverse_array(&arr);
 * for (size_t i = 0; i < arr->active_length; i++) {
 *     printf("%ld\n", a[i]);
 * }
 * // >> 5, 4, 3, 2, 1
 * @endcode
 */
int reverse_array(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will return the median value of an int array
 *
 * @param arr An integer array container
 * @return median The median value of an array.  This will be the middle
 *                value if the array has an odd number of values, or the
 *                average of the two middle values if the array has an
 *                even number of values.
 *
 * @code
 * int a[5] = {1, 2, 3, 4, 5};
 * Array arr = init_array(5, 5, a, INT);
 * float median = median_int_array(&arr);
 * printf("%d\n", median);
 * // >> 3
 * @endcode
 */
float median_int_array(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will return the median value of a float array
 *
 * @param arr A float array container
 * @return median The median value of an array.  This will be the middle
 *                value if the array has an odd number of values, or the
 *                average of the two middle values if the array has an
 *                even number of values.
 *
 * @code
 * float a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
 * Array arr = init_array(5, 5, a, FLOAT);
 * float median = median_float_array(&arr);
 * printf("%f\n", median);
 * // >> 3.3
 * @endcode
 */
float median_float_array(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will return the median value of a double array
 *
 * @param arr A double array container
 * @return median The median value of an array.  This will be the middle
 *                value if the array has an odd number of values, or the
 *                average of the two middle values if the array has an
 *                even number of values.
 *
 * @code
 * double a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
 * Array arr = init_array(5, 5, a, DOUBLE);
 * double median = median_double_array(&arr);
 * printf("%lf\n", median);
 * // >> 3.3
 * @endcode
 */
double median_double_array(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will return the median value of a long integer array
 *
 * @param arr A long integer array container
 * @return median The median value of an array.  This will be the middle
 *                value if the array has an odd number of values, or the
 *                average of the two middle values if the array has an
 *                even number of values.
 *
 * @code
 * long a[5] = {1, 2, 3, 4, 5};
 * Array arr = init_array(5, 5, a, LONG);
 * double median = median_long_array(&arr);
 * printf("%lf\n", median);
 * // >> 3.3
 * @endcode
 */
double median_long_array(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will return the sum total of all values in an integer
 * array
 *
 * @param arr An integer array
 * @return sum The sum total of all values in an array
 *
 * @code
 * int a[5] = {1, 2, 3, 4, 5};
 * Array arr = init_array(5, 5, a, INT);
 * int sum = sum_int_array(&arr);
 * printf("%d\n", sum);
 * // >> 15
 * @endcode
 */
int sum_int_array(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will return the sum total of all values in a float
 * array
 *
 * @param arr An float array
 * @return sum The sum total of all values in an array
 *
 * @code
 * float a[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
 * Array arr = init_array(5, 5, a, FLOAT);
 * float sum = sum_float_array(&arr);
 * printf("%f\n", sum);
 * // >> 15.0
 * @endcode
 */
float sum_float_array(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will return the sum total of all values in a double
 * array
 *
 * @param arr An double array
 * @return sum The sum total of all values in an array
 *
 * @code
 * double a[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
 * Array arr = init_array(5, 5, a, DOUBLE);
 * double sum = sum_double_array(&arr);
 * printf("%lf\n", sum);
 * // >> 15.0
 * @endcode
 */
double sum_double_array(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will return the sum total of all values in a short integer
 * array
 *
 * @param arr An short integer array
 * @return sum The sum total of all values in an array
 *
 * @code
 * short a[5] = {1, 2, 3, 4, 5};
 * Array arr = init_array(5, 5, a, SHORTINT);
 * short sum = sum_short_array(&arr);
 * printf("%ld\n", sum);
 * // >> 15
 * @endcode
 */
short sum_short_array(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will return the sum total of all values in a long integer
 * array
 *
 * @param arr An long integer array
 * @return sum The sum total of all values in an array
 *
 * @code
 * long a[5] = {1, 2, 3, 4, 5};
 * Array arr = init_array(5, 5, a, LONG);
 * long sum = sum_long_array(&arr);
 * printf("%ld\n", sum);
 * // >> 15
 * @endcode
 */
long sum_long_array(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will return the sum total of all values in a long long integer
 * array
 *
 * @param arr An long long integer array
 * @return sum The sum total of all values in an array
 *
 * @code
 * long long a[5] = {1, 2, 3, 4, 5};
 * Array arr = init_array(5, 5, a, LONGLONG);
 * long long sum = sum_longlong_array(&arr);
 * printf("%ld\n", sum);
 * // >> 15
 * @endcode
 */
long long sum_longlong_array(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will return the average of the values in an integer array
 *
 * @param arr An integer array container
 * @return avg The average value of an array
 *
 * @code
 * int a[5] = {1, 2, 3, 4, 5};
 * Array arr = init_array(5, 5, a, INT);
 * float avg = average_int_array(&arr);
 * printf("%d\n", avg);
 * // 3.0
 * @endcode
 */
float average_int_array(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will return the average of the values in a float array
 *
 * @param arr A float array container
 * @return avg The average value of an array
 *
 * @code
 * float a[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
 * Array arr = init_array(5, 5, a, FLOAT);
 * float avg = average_float_array(&arr);
 * printf("%f\n", avg);
 * // 3.0
 * @endcode
 */
float average_float_array(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will return the average of the values in a double array
 *
 * @param arr A double array container
 * @return avg The average value of an array
 *
 * @code
 * double a[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
 * Array arr = init_array(5, 5, a, DOUBLE);
 * double avg = average_double_array(&arr);
 * printf("%lf\n", avg);
 * // 3.0
 * @endcode
 */
double average_double_array(Array *arr);
// --------------------------------------------------------------------------------

/**
 * This function will return the average of the values in a long array
 *
 * @param arr A long array container
 * @return avg The average value of an array
 *
 * @code
 * long a[5] = {1, 2, 3, 4, 5};
 * Array arr = init_array(5, 5, a, LONG);
 * double avg = average_long_array(&arr);
 * printf("%lf\n", avg);
 * // 3.0
 * @endcode
 */
double average_long_array(Array *arr);
#endif /* array_H */
// ================================================================================
// ================================================================================
// eof
