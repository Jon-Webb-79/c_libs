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
// TEST POP_ARRAY

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
// TEST REPLACE_ARRAY_INDEX

/* This function tests to ensure that the replace_array_index function properly
 * replaces data in a user specified index */
TEST (test_replace_array_index, replace_int) {
	int a[5] = {1, 2, 3, 4, 5};
	Array arr = init_array(sizeof(a)/sizeof(int), 5, a, INT);
	int b = 10;
	replace_array_index(&arr, 2, &b);
	int c[5] = {1, 2, 10, 4, 5};
	for (size_t i = 0; i < arr.active_length; i++) {
		EXPECT_EQ(a[i], c[i]);
	}
}
// ================================================================================
// ================================================================================

/* This function tests the replace_int_array_values function to ensure it
 * properly replaces specific integer values in a static array */
TEST (test_replace_array_values, replace_int) {
	int a[6] = {1, 2, 1, 3, 4, 1};
	Array arr = init_array(sizeof(a)/sizeof(int), 6, a, INT);
	int aa = 1;
	int bb = 10;
	replace_array_values(&arr, &aa, &bb);
	int b[6] = {10, 2, 10, 3, 4, 10};
	for (size_t i = 0; i < arr.active_length; i++) {
		EXPECT_EQ(b[i], a[i]);
	}
}
// --------------------------------------------------------------------------------

/* This function tests the replace_float_array_values function to ensure it
 * properly replaces specific float values in a static array */
TEST (test_replace_array_values, replace_float) {
	float a[6] = {1.1, 2.2, 1.1, 3.3, 4.4, 1.1};
	float aa = 1.1;
	float bb = 10.0;
	Array arr = init_array(sizeof(a)/sizeof(float), 6, a, FLOAT);
	replace_array_values(&arr, &aa, &bb);
	float b[6] = {10.0, 2.2, 10.0, 3.3, 4.4, 10.0};
	for (size_t i = 0; i < arr.active_length; i++) {
		EXPECT_FLOAT_EQ(b[i], a[i]);
	}
}
// --------------------------------------------------------------------------------

/* This function tests the replace_double_array_values function to ensure it
 * properly replaces specific double values in a static array */
TEST (test_replace_array_values, replace_double) {
	double a[6] = {1.1, 2.2, 1.1, 3.3, 4.4, 1.1};
	double aa = 1.1;
	double bb = 10.0;
	Array arr = init_array(sizeof(a)/sizeof(double), 6, a, DOUBLE);
	replace_array_values(&arr, &aa, &bb);
	double b[6] = {10.0, 2.2, 10.0, 3.3, 4.4, 10.0};
	for (size_t i = 0; i < arr.active_length; i++) {
		EXPECT_DOUBLE_EQ(b[i], a[i]);
	}
}
// --------------------------------------------------------------------------------

/* This function tests the replace_char_array_values function to ensure it
 * properly replaces specific char values in a static array */
TEST (test_replace_array_values, replace_char) {
	char a[13] = "Hello World!";
	char aa = 'o';
	char bb = 'q';
	Array arr = init_array(sizeof(a)/sizeof(char), 13, a, CHAR);
	replace_array_values(&arr, &aa, &bb);
	char b[13] = "Hellq Wqrld!";
	for (size_t i = 0; i < arr.active_length; i++) {
		EXPECT_EQ(b[i], a[i]);
	}
}
// --------------------------------------------------------------------------------

/* This function tests the replace_short_array_values function to ensure it
 * properly replaces specific short integer values in a static array */
TEST (test_replace_array_values, replace_short) {
	short a[6] = {1, 2, 1, 3, 4, 1};
	short aa = 1;
	short bb = 10;
	Array arr = init_array(sizeof(a)/sizeof(short), 6, a, SHORTINT);
	replace_array_values(&arr, &aa, &bb);
	short b[6] = {10, 2, 10, 3, 4, 10};
	for (size_t i = 0; i < arr.active_length; i++) {
		EXPECT_EQ(b[i], a[i]);
	}
}
// --------------------------------------------------------------------------------

/* This function tests the replace_long_array_values function to ensure it
 * properly replaces specific long integer values in a static array */
TEST (test_replace_array_values, replace_long) {
	long a[6] = {1, 2, 1, 3, 4, 1};
	long aa = 1;
	long bb = 10;
	Array arr = init_array(sizeof(a)/sizeof(long), 6, a, LONG);
	replace_array_values(&arr, &aa, &bb);
	long b[6] = {10, 2, 10, 3, 4, 10};
	for (size_t i = 0; i < arr.active_length; i++) {
		EXPECT_EQ(b[i], a[i]);
	}
}
// --------------------------------------------------------------------------------

/* This function tests the replace_longlong_array_values function to ensure it
 * properly replaces specific long long integer values in a static array */
TEST (test_replace_array_values, replace_longlong) {
	long long a[6] = {1, 2, 1, 3, 4, 1};
	long long aa = 1;
	long long bb = 10;
	Array arr = init_array(sizeof(a)/sizeof(long long), 6, a, LONGLONG);
	replace_array_values(&arr, &aa, &bb);
	long long b[6] = {10, 2, 10, 3, 4, 10};
	for (size_t i = 0; i < arr.active_length; i++) {
		EXPECT_EQ(b[i], a[i]);
	}
}
// ================================================================================
// ================================================================================
// TEST DELETE_ARRAY_DUPLICATES

/* This function tests the delete_array_duplicates function to ensure it properly
 * deletes all repeat values in an integer vector */
TEST (test_delete_duplicates, delete_int) {
	int a[8] = {1, 1, 2, 3, 2, 4, 5, 5};
	Array arr = init_array(sizeof(a)/sizeof(int), 8, a, INT);
	delete_array_duplicates(&arr);
	int b[5] = {1, 2, 3, 4, 5};
	for (size_t i = 0; i < arr.active_length; i++) {
		EXPECT_EQ(b[i], a[i]);
	}
}
// ================================================================================
// ================================================================================
// TEST UNIQUE_VECTOR_VALUES

/* This function tests the unique_vector_values function to ensure it properly
 * deletes all values except for the unique values */
TEST (test_unique_values, unique_int) {
	int a[9] = {1, 2, 2, 3, 3, 4, 5, 6, 6};
	Array arr = init_array(sizeof(a)/sizeof(int), 9, a, INT);
	unique_array_values(&arr);
	int b[5] = {1, 4, 5};
	for (size_t i = 0; i < arr.active_length; i++) {
		EXPECT_EQ(b[i], a[i]);
	}
}
// ================================================================================
// ================================================================================
// eof
