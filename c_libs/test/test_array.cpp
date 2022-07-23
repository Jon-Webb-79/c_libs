// ================================================================================
// ================================================================================
// - File>    test_array.cpp
// - Purpose: This file implements google test as a method to test c code.
//            Describe the type of testing to be completed
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    May 29, 2022
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// - Begin test

#include <gtest/gtest.h>

extern "C" {
	#include "array.h"
}

/* This is a simple test to see if init_array instantiates an array with no
 * errors */
TEST(test_init_array, init_integer) {
	int a[10] = {1, 2, 3, 4};
	Array arr = init_array(sizeof(a)/sizeof(int), 4, a, INT);
	for (size_t i = 0; i < arr.active_length; i++) {
		EXPECT_EQ(a[i], ((int *)arr.array)[i]);
	}
	EXPECT_EQ(10, arr.allocated_length);
	EXPECT_EQ(4, arr.active_length);
	EXPECT_EQ(sizeof(int), arr.num_bytes);
	EXPECT_EQ(INT, arr.dat_type);
}
// ================================================================================
// ================================================================================

/* This function will test push_array to determine if it correctly pushes
 * an array of integers to the end of an integer Array container */
TEST (test_push_array, push_int_array) {
	int a[10] = {1, 2, 3, 4};
	int b[6] = {5, 6, 7, 8, 9, 10};
	int c[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	Array arr = init_array(sizeof(a)/sizeof(int), 4, a, INT);
	push_array(&arr, b, 6);
	for (size_t i = 0; i < arr.active_length; i++) {
		EXPECT_EQ(c[i], ((int *)arr.array)[i]);
	}
}
// --------------------------------------------------------------------------------

/* This function will test push_array to determine if it correctly pushes
 * a scalar integer to the end of an integer Array container */
TEST (test_push_array, push_int_scalar) {
	int a[10] = {1, 2, 3, 4};
	int b = 10;
	int c[10] = {1, 2, 3, 4, 10};
	Array arr = init_array(sizeof(a)/sizeof(int), 4, a, INT);
	push_array(&arr, &b, 1);
	for (size_t i = 0; i < arr.active_length; i++) {
		EXPECT_EQ(c[i], ((int *)arr.array)[i]);
	}
}
// ================================================================================
// ================================================================================
// TEST INSERT_ARRAY

/* This function will test insert_array to determine if it correctly pushes
 * an array of integers to the specified index of an integer Array container */
TEST (test_insert_array, insert_int_array) {
	int a[10] = {1, 2, 3, 4};
	int b[6] = {5, 6, 7, 8, 9, 10};
	Array arr = init_array(sizeof(a)/sizeof(int), 4, a, INT);
	insert_array(&arr, b, 6, 2);
	int d[10] = {1, 2, 5, 6, 7, 8, 9, 10, 3, 4};
	for (size_t i = 0; i < arr.active_length; i++) {
		EXPECT_EQ(d[i], ((int *)arr.array)[i]);
	}
}
// --------------------------------------------------------------------------------

/* This function will test insert_array to determine if it correctly pushes
 * a scalar integer to the specified index of an integer Array container */
TEST (test_insert_array, insert_int_scalar) {
	int a[10] = {1, 2, 3, 4};
	int b = 10;
	Array arr = init_array(sizeof(a)/sizeof(int), 4, a, INT);
	insert_array(&arr, &b, 1, 2);
	int c[10] = {1, 2, 10, 3, 4};	
	for (size_t i = 0; i < arr.active_length; i++) {
		EXPECT_EQ(c[i], ((int *)arr.array)[i]);
	}
}
// ================================================================================
// ================================================================================

/* This function will test pop_array to ensure it correctly pops an index from
 * and array within the container */
TEST (test_pop_array, pop_int) {
	int a[5] = {1, 2, 3, 4, 5};
	Array arr = init_array(sizeof(a)/sizeof(int), 5, a, INT);
	pop_array(&arr, 2);	
	int b[4] = {1, 2, 4, 5};
	for (size_t i = 0; i < arr.active_length; i++) {
		EXPECT_EQ(b[i], ((int *)arr.array)[i]);
	}
	EXPECT_EQ(4, arr.active_length);
}
// ================================================================================
// ================================================================================
// eof
