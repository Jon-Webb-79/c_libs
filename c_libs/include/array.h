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
// --------------------------------------------------------------------------------

/**
 * This function will free all memory allocation from an array and associated
 * struct elements
 * @param array the array container
 */
void free_array(Array *array);
// --------------------------------------------------------------------------------

/**
 * This function will return the value of an array assigned to a user specified
 * indice, so as long as the data point is an integer.
 * @param array The array container
 * @param indice The indice the user wishes returned
 * @return value The integer value associated with an indice
 *
 * When a user instantiates and populates an array they must access the array
 * by casting it prior to retrieving the value.
 * @code
 * size_t indices = 20;
 * char dtype[4] = "int";
 * char name[5] = "Array";
 * Array arr_test = init_array(dtype, indices, name);
 *
 * // Build from an already existing array
 * int a[3] = {0, 1, 2};
 * append_array(&arr_test, a, 3);
 * // recover array indice value 0 by casting
 * printf("%d\n", ((int *)arr_test.array)[0]);
 * @endcode
 * This process can be simplified with this function
 * @code
 * printf("%d\n", int_array_val(&arr_test, 0));
 * @endcode
 */
int int_array_val(Array *array, int indice);
// --------------------------------------------------------------------------------

/**
 * This function will return the value of an array assigned to a user specified
 * indice, so as long as the data point is a float.
 * @param array The array container
 * @param indice The indice the user wishes returned
 * @return value The integer value associated with an indice
 *
 * When a user instantiates and populates an array they must access the array
 * by casting it prior to retrieving the value.
 * @code
 * size_t indices = 20;
 * char dtype[4] = "float";
 * char name[5] = "Array";
 * Array arr_test = init_array(dtype, indices, name);
 *
 * // Build from an already existing array
 * float a[3] = {1.1, 2.1, 3.1};
 * append_array(&arr_test, a, 3);
 * // recover array indice value 0 by casting
 * printf("%d\n", ((float *)arr_test.array)[0]);
 * @endcode
 * This process can be simplified with this function
 * @code
 * printf("%f\n", float_array_val(&arr_test, 0));
 * @endcode
 */
float float_array_val(Array *array, int indice);
// --------------------------------------------------------------------------------

/**
 * This function will return the value of an array assigned to a user specified
 * indice, so as long as the data point is a double.
 * @param array The array container
 * @param indice The indice the user wishes returned
 * @return value The integer value associated with an indice
 *
 * When a user instantiates and populates an array they must access the array
 * by casting it prior to retrieving the value.
 * @code
 * size_t indices = 20;
 * char dtype[4] = "double";
 * char name[5] = "Array";
 * Array arr_test = init_array(dtype, indices, name);
 *
 * // Build from an already existing array
 * double a[3] = {1.1, 2.1, 3.1};
 * append_array(&arr_test, a, 3);
 * // recover array indice value 0 by casting
 * printf("%d\n", ((double *)arr_test.array)[0]);
 * @endcode
 * This process can be simplified with this function
 * @code
 * printf("%f\n", double_array_val(&arr_test, 0));
 * @endcode
 */
double double_array_val(Array *array, int indice);
// --------------------------------------------------------------------------------

/**
 * This function will return the value of an array assigned to a user specified
 * indice, so as long as the data point is a char.
 * @param array The array container
 * @param indice The indice the user wishes returned
 * @return value The integer value associated with an indice
 *
 * When a user instantiates and populates an array they must access the array
 * by casting it prior to retrieving the value.
 * @code
 * size_t indices = 20;
 * char dtype[4] = "char";
 * char name[5] = "Array";
 * Array arr_test = init_array(dtype, indices, name);
 *
 * // Build from an already existing array
 * char a[7] = "Hello!";
 * append_array(&arr_test, a, 7);
 * // recover array indice value 0 by casting
 * printf("%d\n", ((char *)arr_test.array)[0]);
 * @endcode
 * This process can be simplified with this function
 * @code
 * printf("%f\n", char_array_val(&arr_test, 0));
 * @endcode
 * However a character array can also be access the traditionale way with
 * the following command.
 * @code
 * printf("%s\n", Array.array);
 * @endcode
 */
char char_array_val(Array *array, int indice);
// --------------------------------------------------------------------------------
/**
 * This function allows a user to preappend an existing or blank array container
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
 *     preappend_array(&arr_test, &i, 1);
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
 * preappend_array(&arr_test, a, 3);
 *
 * // Print the array values
 * for (int i = 0; i < 3; i ++) {
 *     printf("%d\n", ((int *) arr_test.array)[i]);
 * }
 *
 * @endcode
 */
int preappend_array(Array *array, void *elements, size_t count);
// --------------------------------------------------------------------------------

/**
 * This function will delete a user defined indices from the array.  However, the
 * function must be embedded within an Array container and the container must be
 * passed to the function
 *
 * @param array An Array container
 * @param indice The indices within the array that the user wishes to delete
 *               from the array
 * @return integer An error code of 0 if the user defines an indice greater than
 *                 the array length
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * char dtype[7] = "float";
 * Array arr_test = init_array(dtype, indices, name);
 * float a[4] = {10.1, 9.2, 8.3, 7.4};
 * append_array(&arr_test, a, 4);
 * pop_array(&arr_test, 2);
 * @endcode
 * The above code should yield an arr_test array with the values of 10.1, 9.2, and 7.4.
 */
int pop_array(Array *array, int indice);
// --------------------------------------------------------------------------------

/**
 * This function will find the indices that contain a user specified integer.
 * This function allocates array space in heap memory and will return NULL
 * if the array does not contain the appropriate value.
 * @param array An array container
 * @param integer the integer the user wishes to find an indice for
 * @return array An array containing all indices associatd with the user
 *               specified integer.
 * @code
 *size_t indices = 10;
 * char name[6] = "array";
 * char dtype[7] = "int";
 * Array arr_test = init_array(dtype, indices, name);
 * int a[7] = {6, 1, 3, 6, 6, 4, 5};
 * append_array(&arr_test, a, 7);
 * find_int_array_indices(&arr_test, 6);
 * free(p);
 * @endcode
 * The above code should produce an array with indices 0, 3, and 4.
 */
int* find_int_array_indices(Array *array, int integer);
// --------------------------------------------------------------------------------

/**
 * This function will find the indices that contain a user specified float value.
 * This function allocates array space in heap memory and will return NULL
 * if the array does not contain the appropriate value.
 * @param array An array container
 * @param float_val the integer the user wishes to find an indice for
 * @return array An array containing all indices associatd with the user
 *               specified float value.
 * @code
 *size_t indices = 10;
 * char name[6] = "array";
 * char dtype[7] = "float";
 * Array arr_test = init_array(dtype, indices, name);
 * int a[7] = {6.2, 1.0, 3.0, 6.2, 6.2, 4.5, 5.3};
 * append_array(&arr_test, a, 7);
 * find_int_array_indices(&arr_test, 6.2);
 * free(p);
 * @endcode
 * The above code should produce an array with indices 0, 3, and 4.
 */
int* find_float_array_indices(Array *array, float float_val);
#endif /* ARRAY_H */
// ================================================================================
// ================================================================================
// eof
