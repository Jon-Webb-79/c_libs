// ================================================================================
// ================================================================================
// - File:    vector.h
// - Purpose: This file contains the prototypes, structures, and enums used
//            in vector.c
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    June 06, 2022
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// Include modules here

#ifndef vector_H
#define vector_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * An enum container with variables describing relevant data types
 *
 * @param FLOAT An integer representing 4 byte float data types
 * &param DOUBLE An integer representing 8 byte double data types
 * @param CHAR An integer representing 1 byte char data types
 * @param INT An integer representing 4 byte int data types
 * @param STRING An integer representing a string data type as an array
 *               of 1 byte characters
 * @param SHORTINT An integer representing a 2 byte integer data type
 * @param LONGINT An integer representing an 8 byte integer data type
 * @param LONGLONG An integer representing a 16 byte integer or double
 *                 data type
 * @param NONE No data type assigned.  This is used when the programmer
 *             wishes to create a vector of a unique data type
 */
typedef enum
{
	FLOAT,
	DOUBLE,
	CHAR,
	INT,
	STRING,
	SHORTINT,
	LONG,
	LONGLONG,
	NONE
} dtype;
// --------------------------------------------------------------------------------

/**
 * A container for a dynamically allocated array and related data
 *
 * @param vector A pointer to an array in heap memory
 * @param active_length The number of indices with assigned data
 * @param allocated_length The total number of allocated indices in memory
 * @param num_bytes The number of bytes consumed by a single indice
 * @param dat_type The data type. Must use data types allocated in dtype enum
 */
typedef struct
{
	char *vector;
	size_t active_length;
	size_t allocated_length;
	size_t num_bytes;
	dtype dat_type;
} Vector;
// --------------------------------------------------------------------------------

/**
 * Instantiates a Vector container where the user can determine the number of
 * bytes allocated to each vector indice.  This function allocates the vector
 * in heap memory.
 *
 * @param num_bytes The number of bytes consumed by each index in the array
 * @param num_indices The users guess for the total number of required indices
 *                    in the vector
 *
 * @code
 * // - Create a dynamically allocated array container for integers, with allocated
 * //   memory for 5 indices
 * Vector vec = init_notype(sizeof(int), 5);
 * @endcode
 */
Vector init_vector(size_t num_bytes, size_t num_indices);
// --------------------------------------------------------------------------------

/**
 * Instantiates a Vector container with a specified data type.  This function
 * allocates the vector in heap memory.
 *
 * @param dat_type The data type.  Must use a specified from the dtype enum.
 * @param num_indices The users guess for the total number of required indices
 *                    in the vector
 *
 * @code
 * // - Create a dynamically allocated array container for integers, with allocated
 * //   memory for 5 indices
 * Vector vec = init_notype(INT, 5);
 * @endcode
 */
Vector init_type_vector(dtype dat_type, size_t num_indices);
// --------------------------------------------------------------------------------

/**
 * This function appends a Vector container with a scalar or an array of data.
 * The data appended to the Vector container must be of the same type as
 * the appended array.
 *
 * @param vec The Vector container
 * @param elements The scalar or array that will be appended to vec
 * @param num_indices The number of variables to be appended
 * @return num Returns 0 if the function executes successfully, or
 *             returns a 1 if the function cannot allocate the
 *             necessary memory*
 *
 * @code
 * // - Append an array of length 3 with another array of length 3
 * Vector vec = init_type_vector(INT, 5);
 * a[3] = {1, 2, 3};
 * b[3] = {4, 5, 6};
 * append_vector(&vec, a, 3};
 * append_vector(&vec, b, 3};
 * for (int i = 0; i < 6; i++) {
 *     printf("[ ");
 *     printf("%d, ", ((int *)vec->vector)[i]);
 *     printf(" ]\n");
 * }
 * // >> [ 1, 2, 3, 4, 5, 6 ]
 *
 * // append a vector with a scalar value
 * Vector vec2 = init_type_vector(INT, 1);
 * int c = 1;
 * append_vector(&vec2, &c, 1);
 * printf("%d\n", ((int *)vec->vector)[0]);
 * // >> 1
 * @endcode
	* free_vector(&vec);
	* free_vector(&vec2);
 */
int push_vector(Vector *vec, void *elements, size_t num_indices);
// --------------------------------------------------------------------------------

/**
 * This function will free all memory allocation from a vector container.
 *
 * @param vec A vector container
 */
void free_vector(Vector *vec);
// --------------------------------------------------------------------------------

/**
 * This function inserts a Vector container with a scalar or an array of data.
 * The data inserted to the Vector container must be of the same type as
 * the pre-appended array.
 *
 * @param vec The Vector container
 * @param elements The scalar or array that will be inserted to vec
 * @param num_indices The number of variables to be inserted
 * @param indice The indice in the Vector container where the data
 *               is to be inserted
 *
 * @code
 * // - Append an array of length 3 with another array of length 3
 * Vector vec = init_type_vector(INT, 5);
 * a[3] = {1, 2, 3};
 * b[3] = {4, 5, 6};
 * push_vector(&vec, a, 3};
 * insert_vector(&vec, b, 3, 2};
 * for (int i = 0; i < 6; i++) {
 *     printf("[ ");
 *     printf("%d, ", ((int *)vec->vector)[i]);
 *     printf(" ]\n");
 * }
 * // >> [ 1, 2, 4, 5, 6, 3 ]
 *
 * // append a vector with a scalar value
 * Vector vec2 = init_type_vector(INT, 1);
 * int c = 1;
 * a[3] = {1, 2, 3};
 * push_vector(&vec2, a, 3);
 * insert_vector(&vec2, c, 1, 1);
 * printf("%d, ", ((int *)vec->vector)[0]);
 * // >> 1, 1, 2, 3
 * @endcode
	* free_vector(&vec);
	* free_vector(&vec2);
 */
int insert_vector(Vector *vec, void *elements, size_t num_indices, size_t indice);
// --------------------------------------------------------------------------------

/**
 * This function will delete a user defined index from the array.  However, the
 * function must be embedded within an Array container and the container must be
 * passed to the function
 *
 * @param vec A Vector container
 * @param index The vector index containing the value to be deleted
 * @return integer An error code of 0 if the user defines an indice greater than
 *                 the array length.  1 if the function is executed succesfully.
 * @code
 * size_t indices = 4
 * Array arr_test = init_typ_vecot(FLOAT, indices);
 * float a[4] = {10.1, 9.2, 8.3, 7.4};
 * append_array(&arr_test, a, 4);
 * float b = 8.3;
 * pop_array(&arr_test, &b);
 * // >> [10.1, 9.2, 7.4]
 * @endcode
 *
 * The above code should yield an arr_test array with the values of 10.1, 9.2, and 7.4.
 */
int pop_vector(Vector *vec, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will compare each index of a vector container with a sclar
 * value and return an integer vector containing the index of each match
 * in the original vector.  NOTE: This function is sign sensitive and will
 * not recognize -0.0 as being equal to 0.0.  In addition, if the user passes
 * data of different data types, this function will have undefined behavior.
 * In addition, this function is predicated on the vector container having
 * the appropriate value of `num_bytes` for the data type.
 *
 * @param vec A vector container
 * @param value A scalar value of the same data type as the value in vec
 * @return indices An integer vector of value cooresponding to the location
 *                 of the scalar value in the vev Vector.
 *
 * @code
 * size_t indices = 5;
 * int a[5] = {1, 2, 1, 4, 1};
 * int b = 1;
 * Vector vec = init_type_vector(INT, 5);
 * Vector indices = find_vector_indices(&vec, &b);
 * for (size_t = 0; i < indices.active_length; i++) {
 *     printf("%d ", ((int *)indices->vector)[i]);
 * }
 * // >> 0, 1, 3
 * @endcode
 */
Vector find_vector_indices(Vector *vec, void *value);
// --------------------------------------------------------------------------------

/**
 * This function will deleted all elements from an array that match a user
 * defined scalar
 *
 * @param vec A Vector array
 * @param value a scalar value of the same data type as the value in vev
 *
 * @code
 * size_t indices = 5;
 * int a[5] = {1, 3, 1, 2, 1};
 * int b = 1;
 * Vector vec = init_type_vector(INT, 5};
 * append_vector(&vec, a, 5);
 * delete_vector_values(&vec, &b);
 * for(size_t i = 0; i < vec.active_length; i++) {
 *     printf("%d\n ", ((int *)vec.vector)[i]);
 * }
 * // >> 3, 2
 * @endcode
 */
void delete_vector_values(Vector *vec, void *value);
// --------------------------------------------------------------------------------

/**
 * This function will replace the data in a Vector element with another value.
 * WARNING: The value replacing the initial value should be of the same type.
 * If the data types are different it will lead to undefined behavior.
 *
 * @param vec A vector container
 * @param index The index containing the value to be replaced
 * @param replacement_value The value that will replace the original
 *
 * @code
 * int a[6] = {1, 2, 1, 3, 1, 5};
 * int new_value = 6;
 * Vector vec = init_type_vector(INT, 6);
 * append_vector(&vec, a, 6);
 * replace_vector_index(&vec, 1, new_value);
 * for (size_t i = 0; vev->active_length; i++){
 *     printf("%d \n", ((int *)vec->vector)[i]);
 * }
 * // >> 1, 6, 1, 3, 1, 5
 * @endcode
 */
int replace_vector_index(Vector *vec, size_t index, void *replacement_value);
// --------------------------------------------------------------------------------

/**
 * This function will replace any values in an array that match the user
 * description with another user defined value.  WARNING: The value
 * replacing the initial value must be of the same type as the initial
 * value, otherwise the function will lead to undefined behavior.
 *
 * @param vec A vector container
 * @param old_value The value to be replaced
 * @param new_value The value that will replace the old value
 *
 * @code
 * int a[6] = { 1, 2, 3, 2, 4, 5};
 * int old_value = 2;
 * int new_value = 4;
 * Vector vec = init_type_vector(INT, 6);
 * append_vector(&vec, a, 6);
 * replace_vector_element(&vec, &old_value, &new_value);
 * for (size_t i = 0; i < vec.active_length; i++) {
 *    printf("%d \n", ((int *)vec.vector)[i]);
 * }
 * // >> 1, 4, 3, 4, 4, 5
 * @endcode
 */
void replace_vector_values(Vector *vec, void *old_value, void *new_value);
// --------------------------------------------------------------------------------

/**
 * This function will delete all duplicate values in a vector container
 *
 * @param vec A vector container
 *
 * @code
 * float a[7] = {1.1, 2.2, 1.1, 4.5, 1.1, 2.3, 2.2};
 * Vector vec = init_type_vector(FLOAT, 7);
 * append_vector(&vec, a, 7);
 * delete_vector_duplicates(&vec);
 * for (size_t i = 0; i < vec.active_length; i++) {
 *    printf("%f \n", ((float *)vec.vector)[i]);
 * }
 * // >> 1.1, 2.2, 4.5, 2.3
 * @endcode
 */
void delete_vector_duplicates(Vector *vec);
#endif /* vector_H */
// ================================================================================
// ================================================================================
// eof
