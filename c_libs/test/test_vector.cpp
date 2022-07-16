// ================================================================================
// ================================================================================
// - File>    test_vec.cpp
// - Purpose: This file implements google test as a method to test c code.
//            Describe the type of testing to be completed
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    June 06, 2022
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// - Begin test

#include <gtest/gtest.h>

extern "C" {
	#include "vector.h"
}

TEST(test_initialize_vector, notype_vec) {
	size_t size = sizeof(int);
    size_t length = 5;
	Vector vec = init_vector(size, length);
	EXPECT_EQ(vec.num_bytes, 4);
	EXPECT_EQ(vec.allocated_length, 5);
	EXPECT_EQ(vec.active_length, 0);
	free(vec.vector);
}
// --------------------------------------------------------------------------------

/* This function will test the init_type_vector to see if it correctly
 * allocates memory for a user defined dynamic array
 */
TEST(test_initialize_vector, type_vec) {
    size_t length = 5;
	Vector vec = init_type_vector(INT, length);
	EXPECT_EQ(vec.num_bytes, 4);
	EXPECT_EQ(vec.allocated_length, 5);
	EXPECT_EQ(vec.active_length, 0);
	free(vec.vector);
}
// ================================================================================
// ================================================================================
// TEST APPEND_VECTOR FUNCTION


/* This function will test the append_vector function to ensure it can correctly
 * append a scalar value to a recently initialized vector container */
TEST(test_push_vector, scalar_int) {
	size_t length = 3;
	Vector vec = init_type_vector(INT, length);
	int a = 3;
	push_vector(&vec, &a, 1);
	EXPECT_EQ(3, ((int *) vec.vector)[0]);
	EXPECT_EQ(1, vec.active_length);
	EXPECT_EQ(3, vec.allocated_length);
	free(vec.vector);
}
// --------------------------------------------------------------------------------

/* This function will test the push_vector function to ensure it can correctly
 * append an array to a vector and correctly re-allocate memory */
TEST(test_push_vector, array_int) {
	size_t length = 3;
	Vector vec = init_type_vector(INT, length);
	int a[3] = {1, 2, 3};
	int b[3] = {4, 5, 6};
	push_vector(&vec, a, 3);
	push_vector(&vec, b, 3);
	EXPECT_EQ(1, ((int *) vec.vector)[0]);
	EXPECT_EQ(2, ((int *) vec.vector)[1]);
	EXPECT_EQ(3, ((int *) vec.vector)[2]);
	EXPECT_EQ(4, ((int *) vec.vector)[3]);
	EXPECT_EQ(5, ((int *) vec.vector)[4]);
	EXPECT_EQ(6, ((int *) vec.vector)[5]);
	EXPECT_EQ(6, vec.active_length);
	EXPECT_EQ(12, vec.allocated_length);
	free(vec.vector);
}
// --------------------------------------------------------------------------------

/* This function will test the push_vector function to ensure it can correctly
 * append a float vector.  This combined with the previous tests ensures
 * that the function can properly append multiple data types. */
TEST(test_push_vector, array_float) {
	size_t length = 3;
	Vector vec = init_type_vector(FLOAT, length);
	float a[3] = {1.1, 2.2, 3.3};
	float b[3] = {4.4, 5.5, 6.6};
	push_vector(&vec, a, 3);
	push_vector(&vec, b, 3);
	EXPECT_EQ(1.1f, ((float *) vec.vector)[0]);
	EXPECT_EQ(2.2f, ((float *) vec.vector)[1]);
	EXPECT_EQ(3.3f, ((float *) vec.vector)[2]);
	EXPECT_EQ(4.4f, ((float *) vec.vector)[3]);
	EXPECT_EQ(5.5f, ((float *) vec.vector)[4]);
	EXPECT_EQ(6.6f, ((float *) vec.vector)[5]);
	EXPECT_EQ(6, vec.active_length);
	EXPECT_EQ(12, vec.allocated_length);
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests to see if the push_vector function correctly erases the
 * \0 passing in a string / character array */
TEST(test_push_vector, array_char) {
	Vector vec = init_type_vector(CHAR, 6);
	char a[6] = "Hello";
	push_vector(&vec, a, 6);
	ASSERT_EQ(5, vec.active_length);
	for (size_t i = 0; i < vec.active_length; i++) {
		ASSERT_EQ(a[i], ((char *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// ================================================================================
// ================================================================================

/* This function will test the insert_vector function to ensure it can correctly
 * insert a scalar variable into an array. Based on previous testing there
 * is no need to test this for other data types */
TEST(test_insert_vector, scalar_int) {
	Vector vec = init_type_vector(INT, 6);
	int a[5] = {1, 2, 3, 4, 5};
	push_vector(&vec, a, 5);

	int b = 9;;
	insert_vector(&vec, &b, 1, 3);
	EXPECT_EQ(1, ((int *)vec.vector)[0]);
    EXPECT_EQ(2, ((int *)vec.vector)[1]);
	EXPECT_EQ(3, ((int *)vec.vector)[2]);
	EXPECT_EQ(9, ((int *)vec.vector)[3]);
	EXPECT_EQ(4, ((int *)vec.vector)[4]);
	EXPECT_EQ(5, ((int *)vec.vector)[5]);
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function will test the insert_vector function to ensure it can correctly
 * insert an array variable into an array. Based on previous testing there
 * is no need to test this for other data types */
TEST(test_insert_vector, array_int) {
	Vector vec = init_type_vector(INT, 6);
	int a[5] = {1, 2, 3, 4, 5};
	push_vector(&vec, a, 5);

	int b[2] = {9, 10};
	insert_vector(&vec, b, 2, 3);
	EXPECT_EQ(1, ((int *)vec.vector)[0]);
    EXPECT_EQ(2, ((int *)vec.vector)[1]);
	EXPECT_EQ(3, ((int *)vec.vector)[2]);
	EXPECT_EQ(9, ((int *)vec.vector)[3]);
	EXPECT_EQ(10, ((int *)vec.vector)[4]);
	EXPECT_EQ(4, ((int *)vec.vector)[5]);
	EXPECT_EQ(5, ((int *)vec.vector)[6]);
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function ensures that the insert_vector function does not insert a
 * null padding into the vector */
TEST(test_insert_vector, array_char) {
	Vector vec = init_type_vector(CHAR, 6);
	char a[6] = "Hello";
	char b[11] = "HelHellolo";
	push_vector(&vec, a, 6);
	insert_vector(&vec, a, 6, 3);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(b[i], ((char *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// ================================================================================
// ================================================================================
// TEST FREE_VECTOR FUNCTION

/* This function tests the free_array function to ensure it adequately frees
 * all memory from an array
 */
TEST(test_free_memory, free_memory) {
	// Allocate and implement memory
	size_t indices = 10;
	Vector arr_test = init_type_vector(DOUBLE, indices);
	double a[3] = {10.5, 9.4, 8.3};
    push_vector(&arr_test, &a, 3);

	// free memory
	free_vector(&arr_test);

	EXPECT_EQ(0, arr_test.active_length);
	EXPECT_EQ(0, arr_test.allocated_length);
	EXPECT_EQ(0, arr_test.num_bytes);
}
// ================================================================================
// ================================================================================
// TEST POP_VECTOR FUNCTION

/* This function tests the pop_array function to ensure it proprly deletes an
*  integer element from a vector.  THis function is data type agnostic, so
*  this function serves as validation for all data types.
*/
TEST(test_pop_vector, pop_int) {
	size_t indices = 10;
	Vector vec = init_type_vector(INT, indices);
    int a[4] = {10, 9, 8, 7};
	push_vector(&vec, a, 4);
	pop_vector(&vec, 2);
	EXPECT_EQ(10, ((int *)vec.vector)[0]);
	EXPECT_EQ(9, ((int *)vec.vector)[1]);
	EXPECT_EQ(7, ((int *)vec.vector)[2]); 
	free_vector(&vec);
}
// ================================================================================
// TEST FIND_VECTOR_INDICES

/* This function tests the find_vector_indices function to ensure it properly
 * finds all matching indices between an integer vector container and an
 * integer scalar.*/
TEST(test_find_vector_indices, find_int) {
	int a[3] = {3, 2, 3};
	Vector vec = init_type_vector(INT, 3);
	push_vector(&vec, a, 3);
	int b = 3;
	Vector indices = find_vector_indices(&vec, &b);
	EXPECT_EQ(0, ((int *)indices.vector)[0]);
	EXPECT_EQ(2, ((int *)indices.vector)[1]);
	free_vector(&indices);
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the find_vector_indices function to ensure it properly
 * finds all matching indices between a double vector container and a
 * double scalar.  This combined with the previous test proves this function
 * works on all appropriately defined data types*/
TEST(test_find_vector_indices, find_double) {
	double a[5] = {3.1, 2.2, 3.1, 3.2, 3.1};
	Vector vec = init_type_vector(DOUBLE, 5);
	push_vector(&vec, a, 5);
	double b = 3.1;
	Vector indices = find_vector_indices(&vec, &b);
	EXPECT_EQ(0, ((int *)indices.vector)[0]);
	EXPECT_EQ(2, ((int *)indices.vector)[1]);
	EXPECT_EQ(4, ((int *)indices.vector)[2]);
	free_vector(&vec);
	free_vector(&indices);
}
// ================================================================================
// ================================================================================
// TEST_DELETE_ELEMENTS

/* This function tests the delete_vector_values function to ensure it properly
 * deletes all elements in a Vector of a specific value */
TEST(test_delete_elements, delete_int) {
	int a[5] = {1, 2, 1, 3, 1};
	Vector vec = init_type_vector(INT, 5);
	push_vector(&vec, a, 5);
	int b = 1;
	delete_vector_values(&vec, &b);
	EXPECT_EQ(2, ((int *)vec.vector)[0]);
	EXPECT_EQ(3, ((int *)vec.vector)[1]);
	free_vector(&vec);
}
// ================================================================================
// ================================================================================
// TEST REPLACE_VECTOR_INDEX

/* This function tests the replace_vector_index function to ensure it properly
 * replaces the value at a vector index with a user defined value */
TEST(replace_vector_index, replace_float) {
	float a[4] = {1.1, 2.2, 3.3, 4.5};
	size_t b = 1;
	float c = 9.4;
	Vector vec = init_type_vector(FLOAT, 4);
	push_vector(&vec, a, 4);
	replace_vector_index(&vec, b, &c);
	EXPECT_FLOAT_EQ(1.1f, ((float *)vec.vector)[0]);
	EXPECT_FLOAT_EQ(9.4f, ((float *)vec.vector)[1]);
	EXPECT_FLOAT_EQ(3.3f, ((float *)vec.vector)[2]);
	EXPECT_FLOAT_EQ(4.5f, ((float *)vec.vector)[3]);
	free_vector(&vec);
}
// ================================================================================
// ================================================================================
// TEST REPLACE_VECTOR_VALUES

/* This function tests the replace_vector_element function to ensure it 
 * properly replaces multiple elements with the correct float value
 */
TEST(replace_vector_values, replace_float) {
	float a[4] = {1.1, 2.2, 1.1, 4.5};
	float b = 1.1;
	float c = 9.4;
	Vector vec = init_type_vector(FLOAT, 4);
	push_vector(&vec, a, 4);
	replace_vector_values(&vec, &b, &c);
	EXPECT_FLOAT_EQ(9.4f, ((float *)vec.vector)[0]);
	EXPECT_FLOAT_EQ(2.2f, ((float *)vec.vector)[1]);
	EXPECT_FLOAT_EQ(9.4f, ((float *)vec.vector)[2]);
	EXPECT_FLOAT_EQ(4.5f, ((float *)vec.vector)[3]);
	free_vector(&vec);
}
// ================================================================================
// ================================================================================
// TEST DELETE_DUPLICATES_VECTOR

/* THis function tests delete_vector_duplicates To ensure it correctly identifies
 * and deletes all duplicate values */
TEST(test_delete_duplicates, delete_float) {
	float a[7] = {1.1, 2.2, 1.1, 4.5, 1.1, 2.3, 2.2};
	float c[4] = {1.1, 2.2, 4.5, 2.3};
	float b = 1.1;
	Vector vec = init_type_vector(FLOAT, 7);
	push_vector(&vec, a, 7);
	delete_vector_duplicates(&vec);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(c[i], ((float *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// ================================================================================
// ================================================================================
// TEST UNIQUE_VECTOR_VALUES

/* This function tests the unique_vector_values function to ensure it correctly
 * deletes all values except for the unique values */
TEST(test_unique_vector, unique_float) {
	float a[7] = {1.1, 2.2, 1.1, 4.5, 1.1, 2.3, 2.2};
	float c[4] = {4.5, 2.3};
	float b = 1.1;
	Vector vec = init_type_vector(FLOAT, 7);
	push_vector(&vec, a, 7);
	unique_vector_values(&vec);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(c[i], ((float *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// ================================================================================
// ================================================================================
// TEST SORT_ASCENDING_ORDER

/* This function tests the sort_int_vector function to ensure it correctly
 * sorts an integer array in ascending order */
TEST(test_sort, sort_int_ascending) {
	int a[5] = {3, 6, 2, 1, 5};
	int b[5] = {1, 2, 3, 5, 6};
	Vector vec = init_type_vector(INT, 5);
	push_vector(&vec, a, 5);
	sort_int_vector(&vec, 0);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(b[i], ((int *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the sort_float_vector function to ensure it correctly
 * sorts a float array in ascending order */
TEST(test_sort, sort_float_ascending) {
	float a[5] = {3.4, 6.8, 2.1, 1.6, 5.0};
	float b[5] = {1.6, 2.1, 3.4, 5.0, 6.8};
	Vector vec = init_type_vector(FLOAT, 5);
	push_vector(&vec, a, 5);
	sort_float_vector(&vec, 0);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(b[i], ((float *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the sort_double_vector function to ensure it correctly
 * sorts a double array in ascending order */
TEST(test_sort, sort_double_ascending) {
	double a[5] = {3.4, 6.8, 2.1, 1.6, 5.0};
	double b[5] = {1.6, 2.1, 3.4, 5.0, 6.8};
	Vector vec = init_type_vector(DOUBLE, 5);
	push_vector(&vec, a, 5);
	sort_double_vector(&vec, 0);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(b[i], ((double *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the sort_char_vector function to ensure it correctly
 * sorts a char array in ascending order */
TEST(test_sort, sort_char_ascending) {
	char a[6] = "dzCba";
	char b[6] = "Cabdz";
	Vector vec = init_type_vector(CHAR, 6);
	push_vector(&vec, a, 6);
	sort_char_vector(&vec, 0);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(b[i], ((char *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the sort_short_vector function to ensure it correctly
 * sorts a short integer array in ascending order */
TEST(test_sort, sort_short_ascending) {
	short a[5] = {3, 6, 2, 1, 5};
	short b[5] = {1, 2, 3, 5, 6};
	Vector vec = init_type_vector(SHORTINT, 5);
	push_vector(&vec, a, 5);
	sort_short_vector(&vec, 0);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(b[i], ((short *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the sort_long_vector function to ensure it correctly
 * sorts a long integer array in ascending order */
TEST(test_sort, sort_long_ascending) {
	long a[5] = {3, 6, 2, 1, 5};
	long b[5] = {1, 2, 3, 5, 6};
	Vector vec = init_type_vector(LONG, 5);
	push_vector(&vec, a, 5);
	sort_long_vector(&vec, 0);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(b[i], ((long *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the sort_longlong_vector function to ensure it correctly
 * sorts a long long integer in ascending order */
TEST(test_sort, sort_longlong_ascending) {
	long long a[5] = {3, 6, 2, 1, 5};
	long long b[5] = {1, 2, 3, 5, 6};
	Vector vec = init_type_vector(LONGLONG, 5);
	push_vector(&vec, a, 5);
	sort_longlong_vector(&vec, 0);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(b[i], ((long long *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the sort_int_vector function to ensure it correctly
 * sorts an integer array in descending order */
TEST(test_sort, sort_int_descending) {
	int a[5] = {3, 6, 2, 1, 5};
	int b[5] = {6, 5, 3, 2, 1};
	Vector vec = init_type_vector(INT, 5);
	push_vector(&vec, a, 5);
	sort_int_vector(&vec, 1);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(b[i], ((int *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the sort_float_vector function to ensure it correctly
 * sorts a float array in descending order */
TEST(test_sort, sort_float_descending) {
	float a[5] = {3.4, 6.8, 2.1, 1.6, 5.0};
	float b[5] = {6.8, 5.0, 3.4, 2.1, 1.6};
	Vector vec = init_type_vector(FLOAT, 5);
	push_vector(&vec, a, 5);
	sort_float_vector(&vec, 1);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(b[i], ((float *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the sort_double_vector function to ensure it correctly
 * sorts a double array in descending order */
TEST(test_sort, sort_double_descending) {
	double a[5] = {3.4, 6.8, 2.1, 1.6, 5.0};
	double b[5] = {6.8, 5.0, 3.4, 2.1, 1.6};
	Vector vec = init_type_vector(DOUBLE, 5);
	push_vector(&vec, a, 5);
	sort_double_vector(&vec, 1);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(b[i], ((double *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the sort_char_vector function to ensure it correctly
 * sorts a char array in ascending order */
TEST(test_sort, sort_char_descending) {
	char a[6] = "dzCba";
	char b[6] = "zdbaC";
	Vector vec = init_type_vector(CHAR, 6);
	push_vector(&vec, a, 6);
	sort_char_vector(&vec, 1);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(b[i], ((char *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the sort_long_vector function to ensure it correctly
 * sorts a long integer array in descending order */
TEST(test_sort, sort_long_descending) {
	long a[5] = {3, 6, 2, 1, 5};
	long b[5] = {6, 5, 3, 2, 1};
	Vector vec = init_type_vector(LONG, 5);
	push_vector(&vec, a, 5);
	sort_long_vector(&vec, 1);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(b[i], ((long *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the sort_longlong_vector function to ensure it correctly
 * sorts a long long integer in descending order */
TEST(test_sort, sort_longlong_descending) {
	long long a[5] = {3, 6, 2, 1, 5};
	long long b[5] = {6, 5, 3, 2, 1};
	Vector vec = init_type_vector(LONGLONG, 5);
	push_vector(&vec, a, 5);
	sort_longlong_vector(&vec, 1);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(b[i], ((long long *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the sort_longlong_vector function to ensure it correctly
 * sorts a long long integer in descending order */
TEST(test_sort, sort_descending) {
	long long a[5] = {3, 6, 2, 1, 5};
	long long b[5] = {6, 5, 3, 2, 1};
	Vector vec = init_type_vector(LONGLONG, 5);
	push_vector(&vec, a, 5);
	sort_vector(&vec, 1);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(b[i], ((long long *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// ================================================================================
// ================================================================================

/* This function tests the reverse_int_vector function to ensure it properly
 * reverses a vector */
TEST(test_reverse, reverse_int) {
	int a[5] = {1, 2, 3, 4, 5};
	int b[5] = {5, 4, 3, 2, 1};
	Vector vec = init_type_vector(INT, 5);
	push_vector(&vec, a, 5);
	reverse_int_vector(&vec);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(b[i], ((int *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the reverse_float_vector function to ensure it properly
 * reverses a vector */
TEST(test_reverse, reverse_float) {
	float a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	float b[5] = {5.5, 4.4, 3.3, 2.2, 1.1};
	Vector vec = init_type_vector(FLOAT, 5);
	push_vector(&vec, a, 5);
	reverse_float_vector(&vec);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_FLOAT_EQ(b[i], ((float *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the reverse_double_vector function to ensure it properly
 * reverses a vector */
TEST(test_reverse, reverse_double) {
	double a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double b[5] = {5.5, 4.4, 3.3, 2.2, 1.1};
	Vector vec = init_type_vector(DOUBLE, 5);
	push_vector(&vec, a, 5);
	reverse_double_vector(&vec);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_DOUBLE_EQ(b[i], ((double *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the reverse_char_vector function to ensure it properly
 * reverses a vector */
TEST(test_reverse, reverse_char) {
	char a[6] = "Hello";
	char b[6] = "olleH";
	Vector vec = init_type_vector(CHAR, 5);
	push_vector(&vec, a, 5);
	reverse_char_vector(&vec);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(b[i], ((char *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the reverse_short_vector function to ensure it properly
 * reverses a vector */
TEST(test_reverse, reverse_short) {
	short a[5] = {1, 2, 3, 4, 5};
	short b[5] = {5, 4, 3, 2, 1};
	Vector vec = init_type_vector(SHORTINT, 5);
	push_vector(&vec, a, 5);
	reverse_short_vector(&vec);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(b[i], ((short *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the reverse_long_vector function to ensure it properly
 * reverses a vector */
TEST(test_reverse, reverse_long) {
	long a[5] = {1, 2, 3, 4, 5};
	long b[5] = {5, 4, 3, 2, 1};
	Vector vec = init_type_vector(LONG, 5);
	push_vector(&vec, a, 5);
	reverse_long_vector(&vec);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(b[i], ((long *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the reverse_longlong_vector function to ensure it properly
 * reverses a vector */
TEST(test_reverse, reverse_longlong) {
	long long a[5] = {1, 2, 3, 4, 5};
	long long b[5] = {5, 4, 3, 2, 1};
	Vector vec = init_type_vector(LONGLONG, 5);
	push_vector(&vec, a, 5);
	reverse_longlong_vector(&vec);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(b[i], ((long long *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the reverse_vector function to ensure it properly
 * reverses a vector */
TEST(test_reverse, reverse) {
	long long a[5] = {1, 2, 3, 4, 5};
	long long b[5] = {5, 4, 3, 2, 1};
	Vector vec = init_type_vector(LONGLONG, 5);
	push_vector(&vec, a, 5);
	reverse_vector(&vec);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(b[i], ((long long *)vec.vector)[i]);
	}
	free_vector(&vec);
}
// ================================================================================
// ================================================================================

/* This function tests the median_int_vector function to ensure it correctly
 * determines the median value of an integer vector of odd length */
TEST(test_median, int_median_odd) {
	int a[5] = {1, 2, 3, 4, 5};
	Vector vec= init_type_vector(INT, 5);
	push_vector(&vec, a,  5);
	float median = median_int_vector(&vec);
	EXPECT_FLOAT_EQ(3.0f, median);
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the median_int_vector function to ensure it correctly
 * determines the median value of an integer vector of even length */
TEST(test_median, int_median_even) {
	int a[6] = {1, 2, 3, 4, 5, 6};
	Vector vec= init_type_vector(INT, 6);
	push_vector(&vec, a,  6);
	float median = median_int_vector(&vec);
	EXPECT_FLOAT_EQ(3.5f, median);
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the median_float_vector function to ensure it correctly
 * determines the median value of an integer vector of even length */
TEST(test_median, float_median_even) {
	float a[6] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
	Vector vec= init_type_vector(FLOAT, 6);
	push_vector(&vec, a,  6);
	float median = median_float_vector(&vec);
	EXPECT_FLOAT_EQ(3.5f, median);
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the median_double_vector function to ensure it correctly
 * determines the median value of an integer vector of even length */
TEST(test_median, double_median_even) {
	double a[6] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
	Vector vec= init_type_vector(DOUBLE, 6);
	push_vector(&vec, a,  6);
	double median = median_double_vector(&vec);
	EXPECT_DOUBLE_EQ(3.5, median);
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the median_long_vector function to ensure it correctly
 * determines the median value of an integer vector of even length */
TEST(test_median, long_median_even) {
	long a[6] = {1, 2, 3, 4, 5, 6};
	Vector vec= init_type_vector(LONG, 6);
	push_vector(&vec, a,  6);
	double median = median_long_vector(&vec);
	EXPECT_DOUBLE_EQ(3.5, median);
	free_vector(&vec);
}
// ================================================================================
// ================================================================================

/* This function tests the sum_int_vector function to ensure it properly
 * determines the sum of an integer Vector container */
TEST(test_sum, int_sum) {
	int a[5] = {1, 2, 3, 4, 5};
	Vector vec = init_type_vector(INT, 5);
	push_vector(&vec, a, 5);
	int sum = sum_int_vector(&vec);
	EXPECT_EQ(sum, 15);
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the sum_float_vector function to ensure it properly
 * determines the sum of a float Vector container */
TEST(test_sum, float_sum) {
	float a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	Vector vec = init_type_vector(FLOAT, 5);
	push_vector(&vec, a, 5);
	float sum = sum_float_vector(&vec);
	EXPECT_FLOAT_EQ(sum, 16.5f);
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the sum_double_vector function to ensure it properly
 * determines the sum of a float Vector container */
TEST(test_sum, double_sum) {
	double a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	Vector vec = init_type_vector(DOUBLE, 5);
	push_vector(&vec, a, 5);
	double sum = sum_double_vector(&vec);
	EXPECT_DOUBLE_EQ(sum, 16.5);
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the sum_short_vector function to ensure it properly
 * determines the sum of a short Vector container */
TEST(test_sum, short_sum) {
	short a[5] = {1, 2, 3, 4, 5};
	Vector vec = init_type_vector(SHORTINT, 5);
	push_vector(&vec, a, 5);
	short sum = sum_short_vector(&vec);
	EXPECT_EQ(sum, 15);
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the sum_long_vector function to ensure it properly
 * determines the sum of a long Vector container */
TEST(test_sum, long_sum) {
	long a[5] = {1, 2, 3, 4, 5};
	Vector vec = init_type_vector(LONG, 5);
	push_vector(&vec, a, 5);
	long sum = sum_long_vector(&vec);
	EXPECT_EQ(sum, 15);
	free_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the sum_longlong_vector function to ensure it properly
 * determines the sum of a long long Vector container */
TEST(test_sum, longlong_sum) {
	long long a[5] = {1, 2, 3, 4, 5};
	Vector vec = init_type_vector(LONGLONG, 5);
	push_vector(&vec, a, 5);
	long long sum = sum_longlong_vector(&vec);
	EXPECT_EQ(sum, 15);
	free_vector(&vec);
}
// ================================================================================
// ================================================================================

/* This function tests the average_int_vector function to ensure it properly
 * determines the average value for an integer Vector container */
TEST(test_avg, int_avg) {
	int a[5] = {1, 2, 3, 4, 5};
	Vector vec = init_type_vector(INT, 5);
	push_vector(&vec, a, 5);
	float avg = average_int_vector(&vec);
	EXPECT_FLOAT_EQ(avg, 3.0f);
}
// --------------------------------------------------------------------------------

/* This function tests the average_float_vector function to ensure it properly
 * determines the average value for a float Vector container */
TEST(test_avg, float_avg) {
	float a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	Vector vec = init_type_vector(FLOAT, 5);
	push_vector(&vec, a, 5);
	float avg = average_float_vector(&vec);
	EXPECT_FLOAT_EQ(avg, 3.3f);
}
// --------------------------------------------------------------------------------

/* This function tests the average_double_vector function to ensure it properly
 * determines the average value for a double Vector container */
TEST(test_avg, double_avg) {
	double a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	Vector vec = init_type_vector(DOUBLE, 5);
	push_vector(&vec, a, 5);
	double avg = average_double_vector(&vec);
	EXPECT_DOUBLE_EQ(avg, 3.3);
}
// --------------------------------------------------------------------------------

/* This function tests the average_long_vector function to ensure it properly
 * determines the average value for a long Vector container */
TEST(test_avg, long_avg) {
	long a[5] = {1, 2, 3, 4, 5};
	Vector vec = init_type_vector(LONG, 5);
	push_vector(&vec, a, 5);
	double avg = average_long_vector(&vec);
	EXPECT_DOUBLE_EQ(avg, 3.0);
}
// ================================================================================
// ================================================================================

/* This function tests the stdev_int_vector function to ensure it properly
 * calculates the standard deviation of an integer vector */
TEST(test_stdev, int_stdev) {
	int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	Vector vec = init_type_vector(INT, 9);
	push_vector(&vec, a, 9);
	float stdev = stdev_int_vector(&vec);
	EXPECT_NEAR(stdev, 2.738613f, 0.0001f);
}
// --------------------------------------------------------------------------------

/* This function tests the stdev_float_vector function to ensure it properly
 * calculates the standard deviation of a float vector */
TEST(test_stdev, float_stdev) {
	float a[9] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
	Vector vec = init_type_vector(FLOAT, 9);
	push_vector(&vec, a, 9);
	float stdev = stdev_float_vector(&vec);
	EXPECT_NEAR(stdev, 3.012f, 0.001f);
}
// --------------------------------------------------------------------------------

/* This function tests the stdev_double_vector function to ensure it properly
 * calculates the standard deviation of a double vector */
TEST(test_stdev, double_stdev) {
	double a[9] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
	Vector vec = init_type_vector(DOUBLE, 9);
	push_vector(&vec, a, 9);
	double stdev = stdev_double_vector(&vec);
	EXPECT_NEAR(stdev, 3.012, 0.001);
}
// --------------------------------------------------------------------------------

/* This function tests the stdev_long_vector function to ensure it properly
 * calculates the standard deviation of a long vector */
TEST(test_stdev, long_stdev) {
	long a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	Vector vec = init_type_vector(LONG, 9);
	push_vector(&vec, a, 9);
	double stdev = stdev_long_vector(&vec);
	EXPECT_NEAR(stdev, 2.738613, 0.0001);
}
// --------------------------------------------------------------------------------

/* This function tests the cumsum_int_vector function to it ensure that it
 * properly returns the cumulative sum of the input vector */
TEST(test_cumsum, int_csum) {
	int a[5] = {1, 2, 3, 4, 5};
	int result[5] = {1, 3, 6, 10, 15};
	Vector vec = init_type_vector(INT, 5);
	push_vector(&vec, a, 5);
	Vector csum = cumsum_int_vector(&vec);
	for (size_t i = 0; i < csum.active_length; i++) {
		EXPECT_EQ(result[i], ((int *)csum.vector)[i]);
	}
}
// --------------------------------------------------------------------------------

/* This function tests the cumsum_float_vector function to it ensure that it
 * properly returns the cumulative sum of the input vector */
TEST(test_cumsum, float_csum) {
	float a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	float result[5] = {1.1, 3.3, 6.6, 11, 16.5};
	Vector vec = init_type_vector(FLOAT, 5);
	push_vector(&vec, a, 5);
	Vector csum = cumsum_float_vector(&vec);
	for (size_t i = 0; i < csum.active_length; i++) {
		EXPECT_FLOAT_EQ(result[i], ((float *)csum.vector)[i]);
	}
}
// --------------------------------------------------------------------------------

/* This function tests the cumsum_double_vector function to it ensure that it
 * properly returns the cumulative sum of the input vector */
TEST(test_cumsum, double_csum) {
	double a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double result[5] = {1.1, 3.3, 6.6, 11, 16.5};
	Vector vec = init_type_vector(DOUBLE, 5);
	push_vector(&vec, a, 5);
	Vector csum = cumsum_double_vector(&vec);
	for (size_t i = 0; i < csum.active_length; i++) {
		EXPECT_DOUBLE_EQ(result[i], ((double *)csum.vector)[i]);
	}
}
// --------------------------------------------------------------------------------

/* This function tests the cumsum_short_vector function to it ensure that it
 * properly returns the cumulative sum of the input vector */
TEST(test_cumsum, short_csum) {
	short a[5] = {1, 2, 3, 4, 5};
	short result[5] = {1, 3, 6, 10, 15};
	Vector vec = init_type_vector(SHORTINT, 5);
	push_vector(&vec, a, 5);
	Vector csum = cumsum_short_vector(&vec);
	for (size_t i = 0; i < csum.active_length; i++) {
		EXPECT_EQ(result[i], ((short *)csum.vector)[i]);
	}
}
// --------------------------------------------------------------------------------

/* This function tests the cumsum_long_vector function to it ensure that it
 * properly returns the cumulative sum of the input vector */
TEST(test_cumsum, long_csum) {
	long a[5] = {1, 2, 3, 4, 5};
	long result[5] = {1, 3, 6, 10, 15};
	Vector vec = init_type_vector(LONG, 5);
	push_vector(&vec, a, 5);
	Vector csum = cumsum_long_vector(&vec);
	for (size_t i = 0; i < csum.active_length; i++) {
		EXPECT_EQ(result[i], ((long *)csum.vector)[i]);
	}
}
// --------------------------------------------------------------------------------

/* This function tests the cumsum_longlong_vector function to it ensure that it
 * properly returns the cumulative sum of the input vector */
TEST(test_cumsum, longlong_csum) {
	long long a[5] = {1, 2, 3, 4, 5};
	long long result[5] = {1, 3, 6, 10, 15};
	Vector vec = init_type_vector(LONGLONG, 5);
	push_vector(&vec, a, 5);
	Vector csum = cumsum_longlong_vector(&vec);
	for (size_t i = 0; i < csum.active_length; i++) {
		EXPECT_EQ(result[i], ((long long *)csum.vector)[i]);
	}
}
// ================================================================================
// ================================================================================
// eof
