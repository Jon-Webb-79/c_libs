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
}
// ================================================================================
// ================================================================================

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
}
// ================================================================================
// ================================================================================
// eof
