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

init_vector(int);
init_vector(float);
/* This test ensures that init_xxx_vector, push_xxx_vector, and free_xx_vector
 * works correctly when only one vector of one data type is defined */
TEST(test_vector, test_push_single_vec) {
	int a[5] = {1, 2, 3, 4, 5};
	intVector vec = init_int_vector(5);
	push_int_vector(&vec, a, 5);
	// Ensure correct assignment
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(a[i], vec.vector[i]);
	}
	EXPECT_EQ(1, vec.min);
	EXPECT_EQ(5, vec.max);

	// Ensure correct allocation
	EXPECT_EQ(5, vec.active_length);
	EXPECT_EQ(5, vec.allocated_length);
	free_int_vector(&vec);
	// Ensure proper deallocation
	EXPECT_EQ(0, vec.active_length);
	EXPECT_EQ(0, vec.allocated_length);
}
// --------------------------------------------------------------------------------

/* This test ensures that init_xxx_vector, push_xxx_vector, and free_xxx_vector
 * works correctly when multiple vectors and data types are defined */
TEST(test_vector, test_push_multiple_vecs) {
	int a[5] = {1, 2, 3, 4, 5};
	int b[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	float c[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
	intVector vec1 = init_int_vector(5);
	intVector vec2 = init_int_vector(10);
	floatVector vec3 = init_float_vector(6);
	push_int_vector(&vec1, a, 5);
	push_int_vector(&vec2, b, 10);
	push_float_vector(&vec3, c, 6);
	EXPECT_EQ(vec1.active_length, 5);
	EXPECT_EQ(vec2.active_length, 10);
	EXPECT_EQ(vec3.active_length, 6);
	free_int_vector(&vec1);
	free_int_vector(&vec2);
	free_float_vector(&vec3);
}
// --------------------------------------------------------------------------------

/* This function will test the insert_vector function as well as the ability
 * of the function to allocate new memory */
TEST (test_vector, test_insert_vector) {
	int a[5] = {1, 2, 3, 4, 5};
	int b[6] = {6, 7, 8, 9, 10, 11};
	intVector vec = init_int_vector(5);
	push_int_vector(&vec, a, 5);
	insert_int_vector(&vec, b, 6, 2);
	int c[11] = {1, 2, 6, 7, 8, 9, 10, 11, 3, 4, 5};
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_EQ(c[i], vec.vector[i]);
	}
	EXPECT_EQ(11, vec.max);
	EXPECT_EQ(1, vec.min);
	EXPECT_EQ(11, vec.active_length);
	EXPECT_EQ(22, vec.allocated_length);
	free_int_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the pop_xxx_vector function to ensure it properly
 * pops a variable from an array */
TEST (test_vector, pop_vector) {
	float a[5] = {1.2, 3.4, 6.3, 1.3, 9.2};
	floatVector vec = init_float_vector(5);
	push_float_vector(&vec, a, 5);
	float b[4] = {1.2, 3.4, 1.3, 9.2};
	pop_float_vector(&vec, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_FLOAT_EQ(b[i], vec.vector[i]);
	}
	free_float_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the delete_xxx_vector_values function to ensure it properly
 * pops a scalar variable from an array */
TEST (test_vector, delete_vector_values_scalar) {
	float a[6] = {1.1, 2.2, 1.1, 3.8, 4.2, 1.1};
	floatVector vec = init_float_vector(6);
	push_float_vector(&vec, a, 6);
	float c = 1.1;
	delete_float_vector_values(&vec, &c, 1);
	float b[3] = {2.2, 3.8, 4.2};
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_FLOAT_EQ(b[i], vec.vector[i]);
	}
	free_float_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the delete_xxx_vector_values function to ensure it properly
 * pops an array variable from an array */
TEST (test_vector, delete_vector_values_array) {
	float a[7] = {1.1, 2.2, 1.1, 3.8, 4.2, 1.1, 2.2};
	floatVector vec = init_float_vector(6);
	push_float_vector(&vec, a, 6);
	float c[2] = {1.1, 2.2};
	delete_float_vector_values(&vec, c, 2);
	float b[3] = {3.8, 4.2};
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_FLOAT_EQ(b[i], vec.vector[i]);
	}
	free_float_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the replace_xxx_vector_index function to ensure it properly
 * replaces an array value */
TEST (test_vector, replace_vector_index) {
	float a[7] = {1.1, 2.2, 1.1, 3.8, 4.2, 1.1, 2.2};
	floatVector vec = init_float_vector(7);
	push_float_vector(&vec, a, 7);
	replace_float_vector_index(vec.vector, vec.active_length, 2, 3.1f);
	float b[7] = {1.1, 2.2, 3.1, 3.8, 4.2, 1.1, 2.2};
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_FLOAT_EQ(b[i], vec.vector[i]);
	}
	free_float_vector(&vec);
}
// --------------------------------------------------------------------------------

/* This function tests the replace_xxx_vector_values function to ensure it properly
 * replaces an series of array value */
TEST (test_vector, replace_vector_values) {
	float a[7] = {1.1, 2.2, 1.1, 3.8, 4.2, 1.1, 2.2};
	floatVector vec = init_float_vector(7);
	push_float_vector(&vec, a, 7);
	replace_float_vector_values(vec.vector, vec.active_length, 1.1, 3.1f);
	float b[7] = {3.1, 2.2, 3.1, 3.8, 4.2, 3.1, 2.2};
	for (size_t i = 0; i < vec.active_length; i++) {
		EXPECT_FLOAT_EQ(b[i], vec.vector[i]);
	}
	free_float_vector(&vec);
}
// ================================================================================
// ================================================================================
// eof
