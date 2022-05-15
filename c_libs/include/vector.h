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
#include <math.h>

/**
 * An enum container with variables describing relevant data types
 *
 * @param FLOAT An integer representing float data types
 * &param DOUBLE An integer representing double data types
 * @param CHAR An integer representing char data types
 * @param INT An integer representing int data types
 * @param STRING An integer representing a string data type
 */
typedef enum
{
	FLOAT,
	DOUBLE,
	CHAR,
	INT,
	STRING
} dat_type;
// --------------------------------------------------------------------------------

/**
 * An enum container describing sorting order
 * @param FORWARD An integer representing a FORWARD sorting algorithm
 * @param REVERSE An integer representing a REVERSE sorting algorithm
 */
typedef enum
{
	FORWARD,
	REVERSE
} order;
// --------------------------------------------------------------------------------

/**
 * A container for a dynamically allocated array and related data
 *
 * @param array a pointer to an array in memory
 * @param len The active length of the array
 * @param size The total number of indices allocated for the array
 * @param elem The memory consumption for each indice
 */
typedef struct
{
	void *array;  // Pointer to array
	size_t len;   // Active length of array
	size_t size;  // Number of allocated indices
	int elem;     // Memory consumption per indice
	dat_type dat;
} Vector;
// --------------------------------------------------------------------------------

/**
 * A container for a dynamically allocated String array and related data
 *
 * @param array A pointer to a multi array in memory
 * @param len The active length of the multi array
 * @param elen The memory consumption for each row indice
 */
typedef struct
{
	char **array;
	size_t len;
	int elem;
	dat_type dat;
} StringVector;
// --------------------------------------------------------------------------------

/**
 * This function instantiates an Array container and all relevant variables. This
 * function should not be used directly.  Instead the user should invoke the
 * init_array function, which wraps this function.
 *
 * @param array A vector container
 * @param num_indices A guess for the number of indices that will be consumed by the array
 */
void vector_mem_alloc(Vector *array, size_t num_indices);
// --------------------------------------------------------------------------------

/**
 * This function instantiates an Array container and all relevant variables. This
 * function should not be used directly.  Instead the user should invoke the
 * init_array function, which wraps this function.
 *
 * @param array A string vector container
 * @param num_indices A guess for the number of indices that will be consumed by the array
 */
int string_vector_mem_alloc(StringVector *array, size_t num_indices);
// --------------------------------------------------------------------------------

/**
 * This function is the primary user interface to instantiate the Array container.
 *
 * @param dat An integer representing the data type.  The acceptable data types
 *            are FLOAT, DOUBLE, CHAR, or INT
 * @param num_indices A guess for the number of indices required by the array
 * @return a Vector container
 *
 * The following is a code example for how to instantiate the container for
 * an integer;
 *
 * @code
 * size_t indices = 20;
 * char dtype[4] = "int";
 * Array arr_test = init_array(dtype, indices);
 * @endcode
 */
Vector init_vector(dat_type dat, size_t num_indices);
// --------------------------------------------------------------------------------

/**
 * This function allows a user to append an existing or blank vector container
 * with scalars or arrays of any data type.
 *
 * @param array A pointer to the memory location where an array exists
 * @param elements A scalar or an array of variables.  The variables can
 *                 be of any data type, so as long as they are of the same
 *                 data type as the array being appended.
 * @param count The size of the elements data type in number of indices they
 *              will occupy
 * @return integer A 0 if teh function was unsuccesful, 1 if it was succesful
 *
 * The following demonstrates several ways that the append_array function can
 * be uses.  In these instances, the function will be used for an array
 * of integers.
 *
 * @code
 * // Instantiate array
 * size_t indices = 20;
 * dat_type dtype INT;
 * Array arr_test = init_array(dtype, indices);
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
 * Array arr_test = init_array(dtype, indices);
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
int append_vector(Vector *array, void *elements, size_t count);
// --------------------------------------------------------------------------------

/**
 * This function allows a user to append an existing or blank string vector container
 * with scalars or arrays of any data type.
 *
 * @param s A pointer to the memory location where an array exists
 * @param value The string value to be appended
 * @return integer A 0 if the function was unsuccesful, 1 if it was succesful
 *
 * The following demonstrates several ways that the append_array function can
 * be uses.  In these instances, the function will be used for an array
 * of integers.
 *
 * @code
 * // Instantiate array
 * Array arr_test = string_init_array();
 * append_string(&arr_test, "First Value");
 * printf("%s\n", arr_test[0])'
 * >> ['F', 'i', 'r', 's', 't', ' ', 'V', 'a', 'l', 'u', 'e']
 * @endcode
 */
int append_string_vector(StringVector *s, char *value);
// --------------------------------------------------------------------------------

/**
 * This function is the primary user interface to instantiate the StringArray container.
 *
 * @return a Vector container
 *
 * The following is a code example for how to instantiate the container for
 * an integer;
 *
 * @code
 * Array arr_test = init_string_array();
 * @endcode
 */
StringVector init_string_vector();
// --------------------------------------------------------------------------------

/**
 * This function will free all memory allocation from a vector container
 * struct elements
 *
 * @param array A vector container
 */
void free_vector(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will free all memory allocation from a String Vector container
 *
 * @param array A StringVector container
 */
void free_string_array(StringVector *array);
// --------------------------------------------------------------------------------

/**
 * This function will return the value of a vector container assigned to a user
 * specified indice, so as long as the data point is an integer.
 *
 * @param array The array container
 * @param indice A vector indice
 * @return value The integer value associated with an indice
 *
 * When a user instantiates and populates an array they must access the array
 * by casting it prior to retrieving the value.
 *
 * @code
 * size_t indices = 20;
 * dat_type dtype = INT;
 * char name[6] = "Array";
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
int int_vector_val(Vector *array, int indice);
// --------------------------------------------------------------------------------

/**
 * This function will return the value of an array assigned to a user specified
 * indice, so as long as the data point is a float.
 *
 * @param array The array container
 * @param indice A vector indice
 * @return value The integer value associated with an indice
 *
 * When a user instantiates and populates an array they must access the array
 * by casting it prior to retrieving the value.
 *
 * @code
 * size_t indices = 20;
 * dat_type dtype = FLOAT;
 * char name[6] = "Array";
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
float float_vector_val(Vector *array, int indice);
// --------------------------------------------------------------------------------

/**
 * This function will return the value of an array assigned to a user specified
 * indice, so as long as the data point is a double.
 *
 * @param array The array container
 * @param indice A vector indice
 * @return value The integer value associated with an indice
 *
 * When a user instantiates and populates an array they must access the array
 * by casting it prior to retrieving the value.
 *
 * @code
 * size_t indices = 20;
 * dat_type dtype = DOUBLE;
 * char name[6] = "Array";
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
double double_vector_val(Vector *array, int indice);
// --------------------------------------------------------------------------------

/**
 * This function will return the value of an array assigned to a user specified
 * indice, so as long as the data point is a char.
 *
 * @param array The array container
 * @param indice A vector indice
 * @return value The integer value associated with an indice
 *
 * When a user instantiates and populates an array they must access the array
 * by casting it prior to retrieving the value.
 *
 * @code
 * size_t indices = 20;
 * dat_type dtype = CHAR;
 * char name[6] = "Array";
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
char char_vector_val(Vector *array, int indice);
// --------------------------------------------------------------------------------
/**
 * This function allows a user to preappend an existing or blank array container
 * with scalars or arrays of any data type.
 *
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
 *
 * @code
 * // Instantiate array
 * size_t indices = 20;
 * dat_type dtype = INT;
 * char name[6] = "Array";
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
int preappend_vector(Vector *array, void *elements, size_t count);
// --------------------------------------------------------------------------------

/**
 * This function will delete a user defined index from the array.  However, the
 * function must be embedded within an Array container and the container must be
 * passed to the function
 *
 * @param array An Array container
 * @param indice A vector container indice
 * @return integer An error code of 0 if the user defines an indice greater than
 *                 the array length.  1 if the function is executed succesfully.
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
 *
 * The above code should yield an arr_test array with the values of 10.1, 9.2, and 7.4.
 */
int pop_vector(Vector *array, int indice);
// --------------------------------------------------------------------------------

/**
 * This function will find the indices that contain a user specified integer.
 * This function allocates array space in heap memory and will return NULL
 * if the array does not contain the appropriate value.
 *
 * @param array An array container
 * @param integer A vector container array
 * @return Vector A vector containing all indices associatd with the user
 *               specified integer.
 *
 * @code
 * size_t indices = 10;
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
Vector find_int_vector_indices(Vector *array, int integer);
// --------------------------------------------------------------------------------

/**
 * This function will find the indices that contain a user specified float value.
 * This function allocates array space in heap memory and will return NULL
 * if the array does not contain the appropriate value.
 *
 * @param array A vector container
 * @param float_val the float value the user wishes to find an indice for
 * @return Vector A vector containing all indices associatd with the user
 *               specified float value.
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = FLOAT;
 * Array arr_test = init_array(dtype, indices, name);
 * float a[7] = {6.2, 1.0, 3.0, 6.2, 6.2, 4.5, 5.3};
 * append_array(&arr_test, a, 7);
 * Array p = find_float_array_indices(&arr_test, 6.2f);
 * // p allocation
 * // >> [0, 3, 4]
 * free_array(p);
 * @endcode
 * The above code should produce an array with indices 0, 3, and 4.
 */
Vector find_float_vector_indices(Vector *array, float float_val);
// --------------------------------------------------------------------------------

/**
 * This function will find the indices that contain a user specified double value.
 * This function allocates array space in heap memory and will return NULL
 * if the array does not contain the appropriate value.
 *
 * @param array A vector container
 * @param double_val the double value the user wishes to find an indice for
 * @return Vector A vector containing all indices associatd with the user
 *                specified float value.
 *
 * @code
 * size_t indices = 10;
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
Vector find_double_vector_indices(Vector *array, double double_val);
// --------------------------------------------------------------------------------

/**
 * This function will find the indices that contain a user specified char value.
 * This function allocates array space in heap memory and will return NULL
 * if the array does not contain the appropriate value.
 *
 * @param array A vector container
 * @param char_val the char value the user wishes to find an indice for
 * @return vector A vector containing all indices associatd with the user
 *                specified float value.
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = CHAR;
 * Array arr_test = init_array(dtype, indices, name);
 * char a[7] = {a, b, b, q, b, a, c};
 * append_array(&arr_test, a, 7);
 * Array p = find_char_array_indices(&arr_test, 'b');
 * // p allocation
 * // >> [1, 2, 4]
 * free_array(p);
 * @endcode
 */
Vector find_char_vector_indices(Vector *array, char char_val);
// --------------------------------------------------------------------------------

/**
 * This function will find all integer values occurances in an array
 * and delete them.
 *
 * @param array A vector container
 * @param int_value An integer value that the user wishes to delete
 *                  from an array
 *
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
void delete_int_vec_values(Vector *array, int int_value);
// --------------------------------------------------------------------------------

/**
 * This function will find all float values occurances in an array
 * and delete them.
 *
 * @param array A vector container
 * @param float_value A float value that the user wishes to delete
 *                    from an array
 *
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
void delete_float_vec_values(Vector *array, float float_value);
// --------------------------------------------------------------------------------

/**
 * This function will find all double values occurances in an array
 * and delete them.
 *
 * @param array A vector container
 * @param double_value A double value that the user wishes to delete
 *                     from an array
 *
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
void delete_double_vec_values(Vector *array, double double_value);
// --------------------------------------------------------------------------------

/**
 * This function will find all char values occurances in an array
 * and delete them.
 *
 * @param array A vector container
 * @param char_value A char value that the user wishes to delete
 *                   from an array
 *
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
void delete_char_vec_values(Vector *array, char char_value);
// --------------------------------------------------------------------------------

/**
 * This function will replace an integer value at a user defined indice
 * with another integer
 *
 * @param array A vector container
 * @param index The index containing a value to be replaced
 * @param replacement_value An integer value that will replace the existing
 *                          integer value at the index location
 *
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
int replace_int_vector_index(Vector *array, int index, int replacement_value);
// --------------------------------------------------------------------------------

/**
 * This function will replace a float value at a user defined indice
 * with another float value
 *
 * @param array A vector container
 * @param index The index containing a value to be replaced
 * @param replacement_value A float value that will replace the existing
 *                          float value at the index location
 *
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
int replace_float_vector_index(Vector *array, int index, float replacement_value);
// --------------------------------------------------------------------------------

/**
 * This function will replace a double value at a user defined indice
 * with another double value
 *
 * @param array A vector container
 * @param index The index containing a value to be replaced
 * @param replacement_value A double value that will replace the existing
 *                          double value at the index location
 *
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
int replace_double_vector_index(Vector *array, int index, double replacement_value);
// --------------------------------------------------------------------------------

/**
 * This function will replace a char value at a user defined indice
 * with another char value
 *
 * @param array A vector container
 * @param index The index containing a value to be replaced
 * @param replacement_value A double value that will replace the existing
 *                          double value at the index location
 *
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
int replace_char_vector_index(Vector *array, int index, char replacement_value);
// --------------------------------------------------------------------------------

/**
 * This function will replace integer values defined by a user
 * with another integer
 *
 * @param array A vector container
 * @param old_val The integer value to be replaced
 * @param new_val An integer value that will replace the old_val
 *
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
void replace_int_vector_element(Vector *array, int old_val, int new_val);
// --------------------------------------------------------------------------------

/**
 * This function will replace float values defined by a user
 * with another float value
 *
 * @param array A vector container
 * @param old_val The float value to be replaced
 * @param new_val The float value to replace the old_val
 *
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
void replace_float_vector_element(Vector *array, float old_val, float new_val);
// --------------------------------------------------------------------------------

/**
 * This function will replace double values defined by a user
 * with another double value
 *
 * @param array A vector container
 * @param old_val The double value to be replaced
 * @param new_val The double value to replace the old_val
 *
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
void replace_double_vector_element(Vector *array, double old_val, double new_val);
// --------------------------------------------------------------------------------

/**
 * This function will replace char values defined by a user
 * with another char value
 *
 * @param array A vector container
 * @param old_val The char value to be replaced
 * @param new_val The char value to replace the old_val
 *
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
void replace_char_vector_element(Vector *array, char old_val, char new_val);
// --------------------------------------------------------------------------------

/**
 * This function will delete all duplicate values in an array, so
 * that the final array only contains one instance of each integer
 *
 * @param array A vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = INT;
 * Array arr_test = init_array(dtype, indices, name);
 * int a[8] = {1, 1, 3, 1, 5, 2, 2, 3};
 * append_array(&arr_test, a, 8);
 * delete_int_duplicates_vec(&arr_test);
 * // >> [1, 3, 5, 2]
 * @endcode
 */
void delete_int_duplicates_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will delete all duplicate values in an array, so
 * that the final array only contains one instance of each float value
 *
 * @param array A vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = FLOAT;
 * Array arr_test = init_array(dtype, indices, name);
 * float a[8] = {1.1, 1.1, 3.0, 1.1, 5.2, 2.1, 2.1, 3.0};
 * append_array(&arr_test, a, 8);
 * delete_float_duplicates_vec(&arr_test);
 * // >> [1.1, 3.0, 5.2, 2.]
 * @endcode
 */
void delete_float_duplicates_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will delete all duplicate values in an array, so
 * that the final array only contains one instance of each double value
 *
 * @param array A vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = DOUBLE;
 * Array arr_test = init_array(dtype, indices, name);
 * double a[8] = {1.1, 1.1, 3.0, 1.1, 5.2, 2.1, 2.1, 3.0};
 * append_array(&arr_test, a, 8);
 * delete_double_duplicates_vec(&arr_test);
 * // >> [1.1, 3.0, 5.2, 2.]
 * @endcode
 */
void delete_double_duplicates_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will delete all duplicate values in an array, so
 * that the final array only contains one instance of each char value
 *
 * @param array A vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = CHAR;
 * Array arr_test = init_array(dtype, indices, name);
 * double a[14] = "Hello WWorld!;
 * append_array(&arr_test, a, 14);
 * delete_char_duplicates_vec(&arr_test);
 * // >> ['H', 'e', 'l', 'o', ' ', 'W', 'r', 'd', '!']
 * @endcode
 */
void delete_char_duplicates_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will delete all values from an integer array except for the
 * unique values.
 *
 * @param array A vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = INT;
 * Array arr_test = init_array(dtype, indices, name);
 * double a[9] = {1, 1, 2, 3, 4, 4, 6, 6, 7};
 * append_array(&arr_test, a, 9);
 * unique_int_vec(&arr_test);
 * // >> [2, 3, 7]
 * @endcode
 */
void unique_int_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will delete all values from a float array except for the
 * unique values.
 *
 * @param array A vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = FLAOT;
 * Array arr_test = init_array(dtype, indices, name);
 * float a[9] = {1.1, 1.1, 2.2, 3.3, 4.4, 4.4, 6.6, 6.6, 7.1};
 * append_array(&arr_test, a, 9);
 * unique_int_vec(&arr_test);
 * // >> [2.2, 3.3, 7.1]
 * @endcode
 */
void unique_float_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will delete all values from a double array except for the
 * unique values.
 *
 * @param array A vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = DOUBLE;
 * Array arr_test = init_array(dtype, indices, name);
 * double a[9] = {1.1, 1.1, 2.2, 3.3, 4.4, 4.4, 6.6, 6.6, 7.1};
 * append_array(&arr_test, a, 9);
 * unique_double_vec(&arr_test);
 * // >> [2.2, 3.3, 7.1]
 * @endcode
 */
void unique_double_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will delete all values from a char array except for the
 * unique values.
 *
 * @param array A vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = CHAR;
 * Array arr_test = init_array(dtype, indices, name);
 * char a[13] = "Hello World!";
 * append_array(&arr_test, a, 13);
 * unique_char_vec(&arr_test);
 * // >> ['H', 'e', ' ', 'W', 'r', 'd', '!']
 * @endcode
 */
void unique_char_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will delete all duplicate values in an array, so
 * that the final array only contains one instance of each variable. This
 * function will work with INT, FLOAT, DOUBLE, or CHAR vector containers
 *
 * @param array A vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = INT;
 * Array arr_test = init_array(dtype, indices, name);
 * int a[8] = {1, 1, 3, 1, 5, 2, 2, 3};
 * append_array(&arr_test, a, 8);
 * delete_duplicates_vec(&arr_test);
 * // >> [1, 3, 5, 2]
 * @endcode
 */
void delete_duplicates_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will delete all values from an array except for the
 * unique values.
 *
 * @param array A vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = CHAR;
 * Array arr_test = init_array(dtype, indices, name);
 * char a[13] = "Hello World!";
 * append_array(&arr_test, a, 13);
 * unique_vec(&arr_test);
 * // >> ['H', 'e', ' ', 'W', 'r', 'd', '!']
 * @endcode
 */
void unique_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will sort an integer array in ascending order
 *
 * @param array A vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = INT;
 * Array arr_test = init_array(dtype, indices, name);
 * int a[6] = {5, 4, 3, 2, 1};
 * append_array(&arr_test, a, 6);
 * sort_int_ascending(&arr_test);
 * // >> [0, 1, 2, 3, 4, 5]
 * @endcode
 */
void sort_int_ascending_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will sort a float array in ascending order
 *
 * @param array A vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = FLOAT;
 * Array arr_test = init_array(dtype, indices, name);
 * float a[6] = {3.2, 1.8, 5.4, 3.9, 4.1, 1.8};
 * append_array(&arr_test, a, 6);
 * sort_float_ascending(&arr_test);
 * // >> [1.8, 1.8, 3.2, 3.9, 4.1, 5.4]
 * @endcode
 */
void sort_float_ascending_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will sort a double array in ascending order
 *
 * @param array A vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = FLOAT;
 * Array arr_test = init_array(dtype, indices, name);
 * float a[6] = {3.2, 1.8, 5.4, 3.9, 4.1, 1.8};
 * append_array(&arr_test, a, 6);
 * sort_double_ascending(&arr_test);
 * // >> [1.8, 1.8, 3.2, 3.9, 4.1, 5.4]
 * @endcode
 */
void sort_double_ascending_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will sort a char array in ascending order
 *
 * @param array A vector container
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = CHAR;
 * Array arr_test = init_array(dtype, indices, name);
 * char a[5] = "QDAF";
 * append_array(&arr_test, a, 5);
 * sort_char_ascending(&arr_test);
 * // >> ['A', 'D', 'F', 'Q']
 * @endcode
 */
void sort_char_ascending_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will sort an integer array in descending order
 *
 * @param array A vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = INT;
 * Array arr_test = init_array(dtype, indices, name);
 * int a[6] = {1, 2, 3, 4, 5, 6};
 * append_array(&arr_test, a, 6);
 * sort_int_descending(&arr_test);
 * // >> [6, 5, 4, 3, 2, 1]
 * @endcode
 */
void sort_int_descending_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will sort a float array in descending order
 *
 * @param array A vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = FLOAT;
 * Array arr_test = init_array(dtype, indices, name);
 * float a[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
 * append_array(&arr_test, a, 6);
 * sort_float_descending(&arr_test);
 * // >> [6.6, 5.5, 4.4, 3.3, 2.2, 1.1]
 * @endcode
 */
void sort_float_descending_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will sort a double array in descending order
 *
 * @param array A vector container
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = DOUBLE;
 * Array arr_test = init_array(dtype, indices, name);
 * double a[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
 * append_array(&arr_test, a, 6);
 * sort_double_descending(&arr_test);
 * // >> [6.6, 5.5, 4.4, 3.3, 2.2, 1.1]
 * @endcode
 */
void sort_double_descending_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will sort a char array in descending order
 *
 * @param array A vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = CHAR;
 * Array arr_test = init_array(dtype, indices, name);
 * char a[5] = "QDAF";
 * append_array(&arr_test, a, 6);
 * sort_char_descending(&arr_test);
 * // >> ['Q', 'F', 'D', 'A']
 * @endcode
 */
void sort_char_descending_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will sort an array in descending order.  This function can
 * handle INT, FLOAT, DOUBLE, and CHAR data types.
 *
 * @param array A vector container
 * @param sort_order FORWARD for ascending, REVERSE for descending
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = CHAR;
 * Array arr_test = init_array(dtype, indices, name);
 * char a[5] = "QDAF";
 * append_array(&arr_test, a, 6);
 * sort_descending(&arr_test);
 * // >> ['Q', 'F', 'D', 'A']
 * @endcode
 */
void sort_vec(Vector *array, order sort_order);
// --------------------------------------------------------------------------------

/**
 * This function will return the median of an integer vector container.  If the
 * container has an even number of values, it will retrun the value present
 * at the maximum indice divided by 2.  If the container has an odd number of
 * indices, it will return the value at the mid indice.
 *
 * @param array A vector container
 * @return median
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = INT;
 * Array arr_test = init_array(dtype, indices, name);
 * int a[4] = {3, 5, 1, 2};
 * append_array(&arr_test, a, 4);
 * int med = median_int_vec(&arr_test);
 * // >> 2
 * @endcode
 */
int median_int_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will return the median of a float vector container.  If the
 * container has an even number of values, it will retrun the average value of
 * the middle two indices.  If the container has an odd number of
 * indices, it will return the value at the mid indice.
 *
 * @param array A vector container
 * @return median
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = FLOAT;
 * Array arr_test = init_array(dtype, indices, name);
 * float a[4] = {3.2, 5.1, 3.0, 2.0, 0.5};
 * append_array(&arr_test, a, 4);
 * float med = median_float_vec(&arr_test);
 * // >> 2.5
 * @endcode
 */
float median_float_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will return the median of a double vector container.  If the
 * container has an even number of values, it will retrun the average value of
 * the middle two indices.  If the container has an odd number of
 * indices, it will return the value at the mid indice.
 *
 * @param array A vector container
 * @return median
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = DOUBLE;
 * Array arr_test = init_array(dtype, indices, name);
 * double a[4] = {3.2, 5.1, 3.0, 2.0, 0.5};
 * append_array(&arr_test, a, 4);
 * double med = median_float_vec(&arr_test);
 * // >> 2.5
 * @endcode
 */
double median_double_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will return the median of a character vector container.  If the
 * container has an even number of values, it will retrun the value present
 * at the maximum indice divided by 2.  If the container has an odd number of
 * indices, it will return the value at the mid indice.
 *
 * @param array A vector container
 * @return median
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = CHAR;
 * Array arr_test = init_array(dtype, indices, name);
 * char a[6] = "hello";
 * append_array(&arr_test, a, 6);
 * char med = median_char_vec(&arr_test);
 * // >> 'l'
 * @endcode
 */
char median_char_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will determine the sum of all values in an integer vector
 * container.
 *
 * @param array A vector container
 * @return sum The sum of all values in a vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = INT;
 * Array arr_test = init_array(dtype, indices, name);
 * int a[6] = {1, 2, 3, 4, 5, 6};
 * append_array(&arr_test, a, 6);*
 * int sum = sum_int_vec(arr_test);
 * // >> 21
 * @endcode
 */
int sum_int_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will determine the sum of all values in a float vector
 * container.
 *
 * @param array A vector container
 * @return sum The sum of all values in a vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = FLOAT;
 * Array arr_test = init_array(dtype, indices, name);
 * float a[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
 * append_array(&arr_test, a, 6);*
 * float sum = sum_float_vec(arr_test);
 * // >> 23.1
 * @endcode
 */
float sum_float_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will determine the sum of all values in a double vector
 * container.
 *
 * @param array A vector container
 * @return sum The sum of all values in a vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = DOUBLE;
 * Array arr_test = init_array(dtype, indices, name);
 * double a[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
 * append_array(&arr_test, a, 6);*
 * double sum = sum_float_vec(arr_test);
 * // >> 23.1
 * @endcode
 */
double sum_double_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will determine the average of all values in a vector
 * container of integers.  Even though the values in the container are integers,
 * the average of a group of integers is a real value.
 *
 * @param array A vector container
 * @return average The average of all values in a vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = INT;
 * Array arr_test = init_array(dtype, indices, name);
 * int a[6] = {1, 2, 3, 4, 5, 6};
 * append_array(&arr_test, a, 6);*
 * float average = average_int_vec(arr_test);
 * // >> 3.5
 * @endcode
 */
float average_int_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will determine the average of all values in a vector
 * container of float values.
 *
 * @param array A vector container
 * @return average The average of all values in a vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = FLOAT;
 * Array arr_test = init_array(dtype, indices, name);
 * float a[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
 * append_array(&arr_test, a, 6);*
 * float average = average_float_vec(arr_test);
 * // >> 3.85
 * @endcode
 */
float average_float_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will determine the average of all values in a vector
 * container of double values.
 *
 * @param array A vector container
 * @return average The average of all values in a vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = DOUBLE;
 * Array arr_test = init_array(dtype, indices, name);
 * double a[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
 * append_array(&arr_test, a, 6);*
 * double average = average_double_vec(arr_test);
 * // >> 3.85
 * @endcode
 */
double average_double_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will determine the standard deviation for a vector container
 * of integers
 *
 * @param array A vector container
 * @return stdev The standard deviation of all values in a vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = INT;
 * Array arr_test = init_array(dtype, indices, name);
 * int a[6] = {1, 5, 3, 6, 7, 2};
 * append_array(&arr_test, a, 6);*
 * float stdev = stdev_int_vec(arr_test);
 * // >> 2.160247
 * @endcode
 */
float stdev_int_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will determine the standard deviation for a vector container
 * of float variables
 *
 * @param array A vector container
 * @return stdev The standard deviation of all values in a vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = FLOAT;
 * Array arr_test = init_array(dtype, indices, name);
 * float a[6] = {1.5, 5.3, 3.2, 6.8, 7.6, 2.1};
 * append_array(&arr_test, a, 6);*
 * float stdev = stdev_int_vec(arr_test);
 * // >> 2.30754
 * @endcode
 */
float stdev_float_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will determine the standard deviation for a vector container
 * of double variables
 *
 * @param array A vector container
 * @return stdev The standard deviation of all values in a vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = DOUBLE;
 * Array arr_test = init_array(dtype, indices, name);
 * double a[6] = {1.5, 5.3, 3.2, 6.8, 7.6, 2.1};
 * append_array(&arr_test, a, 6);*
 * double stdev = stdev_int_vec(arr_test);
 * // >> 2.30754
 * @endcode
 */
double stdev_double_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will create an array containing the running cummulative sum
 * of data in a vector container
 *
 * @param array A vector container
 * @return cumsum An array containing the running cummulative sum of the values
 *                in a vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = INT;
 * Array arr_test = init_array(dtype, indices, name);
 * int a[6] = {1, 2, 3, 4, 5, 6};
 * append_array(&arr_test, a, 6);
 * int *cumsum = cumsum_int_vec(arr_test);
 * // >> cumsum = [1, 3, 6, 10, 15, 21]
 * @endcode
 */
int* cumsum_int_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will create an integer array containing the running cummulative
 * sum of data in a vector container
 *
 * @param array A vector container
 * @return cumsum An array containing the running cummulative sum of the values
 *                in a vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = FLOAT;
 * Array arr_test = init_array(dtype, indices, name);
 * float a[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
 * append_array(&arr_test, a, 6);
 * float *cumsum = cumsum_float_vec(arr_test);
 * // >> cumsum = [1.1, 3.3, 6.6, 11.0, 16.5, 23.1]
 * @endcode
 */
float* cumsum_float_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will create an integer array containing the running cummulative
 * sum of data in a vector container
 *
 * @param array A vector container
 * @return cumsum An array containing the running cummulative sum of the values
 *                in a vector container
 *
 * @code
 * size_t indices = 10;
 * char name[6] = "array";
 * dat_type dtype = DOUBLE;
 * Array arr_test = init_array(dtype, indices, name);
 * double a[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
 * append_array(&arr_test, a, 6);
 * double *cumsum = cumsum_float_vec(arr_test);
 * // >> cumsum = [1.1, 3.3, 6.6, 11.0, 16.5, 23.1]
 * @endcode
 */
double* cumsum_double_vec(Vector *array);
// --------------------------------------------------------------------------------

/**
 * This function will return the value of a vector container assigned to a user
 * specified indice, so as long as the data point is an integer.
 *
 * @param array The string array container
 * @param indice A vector indice
 * @return value The integer value associated with an indice
 *
 * @code
 * StringVector arr_test = init_string_vector();
 * char value[] = "First Value";
 * append_string(&arr_test, value);
 * char* val = string_vector_val(&arr_test, 0);
 * printf("%s\n", val);
 * // >> ['F', 'i', 'r', 's', 't', ' ', 'V', 'a', 'l', 'u', 'e', '\0']
 * @endcode
 */
char* string_vector_val(StringVector *array, int indice);
// --------------------------------------------------------------------------------

/**
 * This function will pre-append an array of strings with another string
 *
 * @param array The string array container
 * @param value A string to be pre-appended onto an array of strings
 *
 * @code
 * StringVector arr_test = init_string_vector();
 * char value[] = "First Value";
 * char new_value[] = "Second Value";
 * append_string_vector(&arr_test, value);
 * preappend_string_vector(&arr_test,new_value);
 * char* val = string_vector_val(&arr_test, 0);
 * printf("%s\n", val);
 * // >> ['S', 'e', 'c', 'o', 'n', 'd', ' ', 'V', 'a', 'l', 'u', 'e', '\0']
 * @endcode
 */
int preappend_string_vector(StringVector *array, const char *value);
// --------------------------------------------------------------------------------

/**
 * This function will remove a string element from a string vector at the
 * user defined index
 *
 * @param array A string array container
 * @param index The integer value of the index where a user wishes to remove
 *              a string element
 *
 * @code
 * StringVector arr_test = init_string_vector();
 * char one[] = "Hello";
 * char two[] = "World";
 * char three[] = "Goodbye";
 * append_string_vector(&arr_test, one);
 * append_string_vector(&arr_test, two);
 * append_string_vector(&arr_test, three);
 * pop_string_vector(&arr_test, 1);
 * // The resulting array is
 * // >> ["Hello", "Goodbye"]
 * @endcode
 */
void pop_string_vector(StringVector *array, int index);
// --------------------------------------------------------------------------------

/**
 * This function will determine the indices where a specific string value
 * exists.
 *
 * @param array A String array container
 * @param string A user defined string
 * @return vec An integer vector container that stores the indice
 *             locations where a string exists in the input array
 *
 * @code
 * StringVector arr_test = init_string_vector();*
 * char one[] = "Hello";
 * char two[] = "World";
 * char three[] = "Hello";
 * char four[] = "Goodbye";
 * append_string_vector(&arr_test, one);
 * append_string_vector(&arr_test, two);
 * append_string_vector(&arr_test, three);
 * append_string_vector(&arr_test,four);
 * Vector vec = find_string_vector_indices(&arr_test, one);
 * // The resulting vector values in vec are;
 * // >> [0, 2]
 * @endcode
 */
Vector find_string_vector_indices(StringVector *array, char string[]);
// --------------------------------------------------------------------------------

/**
 * This function will find all instances of a string within an array and
 * delete them from the array
 *
 * @param array A string array container
 * @param string A user defined string
 *
 * @code
 * StringVector arr_test = init_string_vector();
 * char one[] = "Hello";
 * char two[] = "World";
 * char three[] = "Hello";
 * char four[] = "Goodbye";
 * append_string_vector(&arr_test, one);
 * append_string_vector(&arr_test, two);
 * append_string_vector(&arr_test, three);
 * append_string_vector(&arr_test,four);
 * delete_string_vec_values(&arr_test, one);
 * // The resulting vector values in vec are;
 *  // >> ["World", "Goodbye"]
 * @endcode
 */
void delete_string_vec_values(StringVector *array, char string[]);
// --------------------------------------------------------------------------------

/**
 * This function will replace the string value at a specifi index with
 * another string value
 *
 * @param array A string array container
 * @param string A user defined string
 *
 * @code
 * StringVector arr_test = init_string_vector();
 * char one[] = "Hello";
 * char two[] = "World";
 * char three[] = "Hello";
 * char four[] = "Goodbye";
 * append_string_vector(&arr_test, one);
 * append_string_vector(&arr_test, two);
 * append_string_vector(&arr_test, three);
 * append_string_vector(&arr_test,four);
 * replace_string_vector_index(arr_test, 1, one);
 * // The resulting vector values in vec are;
 *  // >> ["World", "Hello", "Hello", "Goodbye"]
 * @endcode
 */
int replace_string_vector_index(StringVector *array, int index, char string[]);
#endif /* ARRAY_H */
// ================================================================================
// ================================================================================
// eof
