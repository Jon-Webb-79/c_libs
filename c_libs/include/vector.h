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
 * A container to describe different data types
 * @param FLOAT An integer representing float data types
 * &param DOUBLE An integer representing double data types
 * @param CHAR An integer representing char data types
 * @param INT An integer representing int data types
 */
typedef enum
{
	FLOAT,
	DOUBLE,
	CHAR,
	INT
} dat_type;
// --------------------------------------------------------------------------------

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
	char name[20];   // The array name
	dat_type dat;
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
 * This function is the primary user interface to instantiate the Array container.
 * @param dtype An integer representing the data type, can be FLOAT,
 *              DOUBLE, CHAR, or INT
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
Array init_array(dat_type dat, size_t num_indices, char *name);
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
 * dat_type dtype INT;
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
 * // populated array
 * // >> [0, 1, 2]
 * @endcode
 * The following code will also have the same effect
 * @code
* // Instantiate array
 * size_t indices = 20;
 * dat_type dtype = INT;
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
 * // populated array
 * // >> [0, 1, 2]
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
 * dat_type dtype = INT;
 * char name[5] = "Array";
 * Array arr_test = init_array(dtype, indices, name);
 *
 * // Build from an already existing array
 * int a[3] = {0, 1, 2};
 * append_array(&arr_test, a, 3);
 * // recover array indice value 0 by casting
 * printf("%d\n", ((int *)arr_test.array)[0]);
 * // >> 0
 * @endcode
 * This process can be simplified with this function
 * @code
 * printf("%d\n", int_array_val(&arr_test, 0));
 *  // >> 0
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
 * dat_type dtype = FLOAT;
 * char name[5] = "Array";
 * Array arr_test = init_array(dtype, indices, name);
 *
 * // Build from an already existing array
 * float a[3] = {1.1, 2.1, 3.1};
 * append_array(&arr_test, a, 3);
 * // recover array indice value 0 by casting
 * printf("%f\n", ((float *)arr_test.array)[0]);
 * // >> 1.1
 * @endcode
 * This process can be simplified with this function
 * @code
 * printf("%f\n", float_array_val(&arr_test, 0));
 * // >> 1.1
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
 * dat_type dtype = DOUBLE;
 * char name[5] = "Array";
 * Array arr_test = init_array(dtype, indices, name);
 *
 * // Build from an already existing array
 * double a[3] = {1.1, 2.1, 3.1};
 * append_array(&arr_test, a, 3);
 * // recover array indice value 0 by casting
 * printf("%f\n", ((double *)arr_test.array)[0]);
 * // >> 1.1
 * @endcode
 * This process can be simplified with this function
 * @code
 * printf("%f\n", double_array_val(&arr_test, 0));
 * // >> 1.1
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
 * dat_type dtype = CHAR;
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
 * printf("%s\n", char_array_val(&arr_test, 0));
 * // >> H
 * @endcode
 * However a character array can also be access the traditionale way with
 * the following command.
 * @code
 * printf("%s\n", Array.array);
 * // >> H
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
 * dat_type dtype = INT;
 * char name[5] = "Array";
 * Array arr_test = init_array(dtype, indices, name);
 *
 * // Build the base array
 * int a[3] = {0, 1, 2};
 * append_array(&arr_test, a, 3);
 * // Original array
 * // >> [0, 1, 2]
 *
 * // preappend array from scalar values
 * for (int i = 4; i < 7; i++) {
 *     preappend_array(&arr_test, &i, 1);
 * }
 * // Yields final array
 * // >> [4, 5, 6, 0, 1, 2]
 *
 * @endcode
 * The following code will also have the same effect
 * @code
* // Instantiate array
 * size_t indices = 20;
 * dat_type dtype = INT;
 * char name[5] = "Array";
 * Array arr_test = init_array(dtype, indices, name);
 *
 * // Build from an already existing array
 * int a[3] = {0, 1, 2};
 * append_array(&arr_test, 3);
 * // >> [0, 1, 22]
 *
 * int b[3] = {3, 4, 5};
 * preappend_array(&arr_test, b, 3);
 * // >> [3, 4, 5, 0, 1, 2]
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
 * dat_type dtype = FLOAT;
 * Array arr_test = init_array(dtype, indices, name);
 * float a[4] = {10.1, 9.2, 8.3, 7.4};
 * append_array(&arr_test, a, 4);
 * pop_array(&arr_test, 2);
 * // >> [10.1, 9.2, 7.4]
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
 * dat_type dtype = INT;
 * Array arr_test = init_array(dtype, indices, name);
 * int a[7] = {6, 1, 3, 6, 6, 4, 5};
 * append_array(&arr_test, a, 7);
 * Array p = find_int_array_indices(&arr_test, 6);
 * // P allocation
 * // [0, 3, 4]
 * free_array(p);
 * @endcode
 * The above code should produce an array with indices 0, 3, and 4.
 */
Array find_int_array_indices(Array *array, int integer);
// --------------------------------------------------------------------------------

/**
 * This function will find the indices that contain a user specified float value.
 * This function allocates array space in heap memory and will return NULL
 * if the array does not contain the appropriate value.
 * @param array An array container
 * @param float_val the float value the user wishes to find an indice for
 * @return array An array containing all indices associatd with the user
 *               specified float value.
 * @code
 *size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = FLOAT;
 * Array arr_test = init_array(dtype, indices, name);
 * int a[7] = {6.2, 1.0, 3.0, 6.2, 6.2, 4.5, 5.3};
 * append_array(&arr_test, a, 7);
 * Array p = find_float_array_indices(&arr_test, 6.2f);
 * // p allocation
 * // >> [0, 3, 4]
 * free_array(p);
 * @endcode
 * The above code should produce an array with indices 0, 3, and 4.
 */
Array find_float_array_indices(Array *array, float float_val);
// --------------------------------------------------------------------------------

/**
 * This function will find the indices that contain a user specified double value.
 * This function allocates array space in heap memory and will return NULL
 * if the array does not contain the appropriate value.
 * @param array An array container
 * @param double_val the double value the user wishes to find an indice for
 * @return array An array containing all indices associatd with the user
 *               specified float value.
 * @code
 *size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = DOUBLE;
 * Array arr_test = init_array(dtype, indices, name);
 * double a[7] = {6.2, 1.0, 3.0, 6.2, 6.2, 4.5, 5.3};
 * append_array(&arr_test, a, 7);
 * Array p = find_double_array_indices(&arr_test, 6.2);
 * // p allocation
 * // >> [0, 3, 4]
 * free_array(p);
 * @endcode
 * The above code should produce an array with indices 0, 3, and 4.
 */
Array find_double_array_indices(Array *array, double double_val);
// --------------------------------------------------------------------------------

/**
 * This function will find the indices that contain a user specified char value.
 * This function allocates array space in heap memory and will return NULL
 * if the array does not contain the appropriate value.
 * @param array An array container
 * @param double_val the double value the user wishes to find an indice for
 * @return array An array containing all indices associatd with the user
 *               specified float value.
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = DOUBLE
 * Array arr_test = init_array(dtype, indices, name);
 * char a[7] = {a, b, b, q, b, a, c};
 * append_array(&arr_test, a, 7);
 * Array p = find_char_array_indices(&arr_test, 'b');
 * // p allocation
 * // >> [1, 2, 4]
 * free_array(p);
 * @endcode
 */
Array find_char_array_indices(Array *array, char char_val);
// --------------------------------------------------------------------------------

/**
 * This function will find all integer values occurances in an array
 * and delete them.
 * @param array An array container
 * @param int_value An integer value that the user wishes to delete
 *                  from an array
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = INT;
 * Array arr_test = init_array(dtype, indices, name);
 * int a[7] = {6, 1, 3, 6, 6, 4, 5};
 * append_array(&arr_test, a, 7);
 * delete_int_arr_values(&arr_test, 6);
 * // >> [1, 3, 4, 5]
 * @endcode
 */
void delete_int_arr_values(Array *array, int int_value);
// --------------------------------------------------------------------------------

/**
 * This function will find all float values occurances in an array
 * and delete them.
 * @param array An array container
 * @param float_value A float value that the user wishes to delete
 *                    from an array
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = FLOAT;
 * Array arr_test = init_array(dtype, indices, name);
 * float a[7] = {6.3, 1.0, 3.2, 6.3, 6.3, 4.1, 5.7};
 * append_array(&arr_test, a, 7);
 * delete_float_arr_values(&arr_test, 6.3f);
 * // >> [1.0, 3.2, 4.1, 5.7]
 * @endcode
 */
void delete_float_arr_values(Array *array, float float_value);
// --------------------------------------------------------------------------------

/**
 * This function will find all double values occurances in an array
 * and delete them.
 * @param array An array container
 * @param double_value A double value that the user wishes to delete
 *                    from an array
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = DOUBLE;
 * Array arr_test = init_array(dtype, indices, name);
 * double a[7] = {6.3, 1.0, 3.2, 6.3, 6.3, 4.1, 5.7};
 * append_array(&arr_test, a, 7);
 * delete_double_arr_values(&arr_test, 6.3);
 * // >> [1.0, 3.2, 4.1, 5.7]
 * @endcode
 */
void delete_double_arr_values(Array *array, double double_value);
// --------------------------------------------------------------------------------

/**
 * This function will find all char values occurances in an array
 * and delete them.
 * @param array An array container
 * @param char_value A char value that the user wishes to delete
 *                   from an array
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = CHAR;
 * Array arr_test = init_array(dtype, indices, name);
 * char a[6] = "Hello";
 * append_array(&arr_test, a, 6);
 * delete_char_arr_values(&arr_test, 'l');
 * // >> ['H', 'e', 'o']
 * @endcode
 */
void delete_char_arr_values(Array *array, char char_value);
// --------------------------------------------------------------------------------

/**
 * This function will replace an integer value at a user defined indice
 * with another integer
 * @param array An array container
 * @param replacement_value An integer value that will replace the existing
 *                          integer value at the index location
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = INT;
 * Array arr_test = init_array(dtype, indices, name);
 * int a[6] = {1, 2, 3, 4, 5, 6};
 * append_array(&arr_test, a, 6);
 * replace_int_array_index(&arr_test, 1, 5);
 * // >> [1, 5, 3, 4, 5, 6]
 * @endcode
 */
int replace_int_array_index(Array *array, int index, int replacement_value);
// --------------------------------------------------------------------------------

/**
 * This function will replace a float value at a user defined indice
 * with another float value
 * @param array An array container
 * @param replacement_value A float value that will replace the existing
 *                          float value at the index location
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = FLOAT;
 * Array arr_test = init_array(dtype, indices, name);
 * float a[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
 * append_array(&arr_test, a, 6);
 * replace_float_array_index(&arr_test, 1, 5.5f);
 * // >> [1.1, 5.5, 3.3, 4.4, 5.5, 6.6]
 * @endcode
 */
int replace_float_array_index(Array *array, int index, float replacement_value);
// --------------------------------------------------------------------------------

/**
 * This function will replace a double value at a user defined indice
 * with another double value
 * @param array An array container
 * @param replacement_value A double value that will replace the existing
 *                          double value at the index location
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = DOUBLE;
 * Array arr_test = init_array(dtype, indices, name);
 * double a[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
 * append_array(&arr_test, a, 6);
 * replace_float_array_index(&arr_test, 1, 5.5);
 * // >> [1.1, 5.5, 3.3, 4.4, 5.5, 6.6]
 * @endcode
 */
int replace_double_array_index(Array *array, int index, double replacement_value);
// --------------------------------------------------------------------------------

/**
 * This function will replace a char value at a user defined indice
 * with another char value
 * @param array An array container
 * @param replacement_value A double value that will replace the existing
 *                          double value at the index location
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = CHAR;
 * Array arr_test = init_array(dtype, indices, name);
 * double a[6] = "Hello ";
 * append_array(&arr_test, a, 6);
 * replace_float_char_index(&arr_test, 1, 'p');
 * // >> ['H', 'p', 'l', 'l', 'o', '']
 * @endcode
 */
int replace_char_array_index(Array *array, int index, char replacement_value);
// --------------------------------------------------------------------------------

/**
 * This function will replace integer values defined by a user
 * with another integer
 * @param array An array container
 * @param old_val The integer value to be replaced
 * @param new_val An integer value that will replace the old_val
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = INT;
 * Array arr_test = init_array(dtype, indices, name);
 * int a[6] = {1, 3, 3, 3, 5, 3};
 * append_array(&arr_test, a, 6);
 * replace_int_array_element(&arr_test, 3, 2);
 * // >> [1, 2, 2, 2, 5, 2]
 * @endcode
 */
void replace_int_array_element(Array *array, int old_val, int new_val);
// --------------------------------------------------------------------------------

/**
 * This function will replace float values defined by a user
 * with another float value
 * @param array An array container
 * @param old_val The float value to be replaced
 * @param new_val The float value to replace the old_val
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = FLOAT;
 * Array arr_test = init_array(dtype, indices, name);
 * float a[6] = {1.1, 3.3, 3.3, 3.3, 5.2, 3.3};
 * append_array(&arr_test, a, 6);
 * replace_float_array_element(&arr_test, 3.3f, 2.1f);
 * // >> [1, 2.1, 2.1, 2.1, 5, 2.1]
 * @endcode
 */
void replace_float_array_element(Array *array, float old_val, float new_val);
// --------------------------------------------------------------------------------

/**
 * This function will replace double values defined by a user
 * with another double value
 * @param array An array container
 * @param old_val The double value to be replaced
 * @param new_val The double value to replace the old_val
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = DOUBLE;
 * Array arr_test = init_array(dtype, indices, name);
 * double a[6] = {1.1, 3.3, 3.3, 3.3, 5.2, 3.3};
 * append_array(&arr_test, a, 6);
 * replace_double_array_element(&arr_test, 3.3, 2.1);
 * // >> [1, 2.1, 2.1, 2.1, 5, 2.1]
 * @endcode
 */
void replace_double_array_element(Array *array, double old_val, double new_val);
// --------------------------------------------------------------------------------

/**
 * This function will replace char values defined by a user
 * with another char value
 * @param array An array container
 * @param old_val The char value to be replaced
 * @param new_val The char value to replace the old_val
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = CHAR;
 * Array arr_test = init_array(dtype, indices, name);
 * char a[6] = "Hello";
 * append_array(&arr_test, a, 6);
 * replace_char_array_element(&arr_test, 'l', 'q');
 * // >> ['H', 'e', 'q', 'q', 'o']
 * @endcode
 */
void replace_char_array_element(Array *array, char old_val, char new_val);
#endif /* ARRAY_H */
// ================================================================================
// ================================================================================
// eof
