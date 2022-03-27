// ================================================================================
// ================================================================================
// - File>    test.cpp
// - Purpose: This file implements google test as a method to test c code.
//            Describe the type of testing to be completed
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    March 26, 2022
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// - Begin test

#include <gtest/gtest.h>

extern "C" {
#include "array.h"
}

/* This function tests the init_array function to ensure that it correctly
 * prepares the Array container for data addition
 */
TEST(test_initialize_array, init_data) {
	size_t indices = 20;
	char name[6] = "array";
	char dtype[4] = "int";
	Array arr_test = init_array(dtype, indices, name);
	// Verify array -> size is 20
	EXPECT_EQ(20, arr_test.size);
	// Verify array -> len is 0
	EXPECT_EQ(0, arr_test.len);
	// Verify array -> elem is 0
	EXPECT_EQ(4, arr_test.elem);
    // Free all memory and reset variables
	free(arr_test.array);
	arr_test.array = NULL;
	arr_test.size=0;
	arr_test.len=0;
}
// --------------------------------------------------------------------------------
/* This function tests to ensure that append_array can append a single
 * integer scalar
 */
TEST(test_append_array, one_scalar_int) {
	size_t indices = 10;
	char name[6] = "array";
	char dtype[4] = "int";
	Array arr_test = init_array(dtype, indices, name);
	int a = 5;
    append_array(&arr_test, &a, 1);
	int b = ((int *) arr_test.array)[0];
	EXPECT_EQ(5, b); 
	EXPECT_EQ(10, arr_test.size);
	EXPECT_EQ(1, arr_test.len);
	EXPECT_EQ(4, arr_test.elem);
}
// --------------------------------------------------------------------------------
/* This function tests to ensure that append_array can append an array
 */
TEST(test_append_array, array_int) {
	size_t indices = 10;
	char name[6] = "array";
	char dtype[4] = "int";
	Array arr_test = init_array(dtype, indices, name);
	int a[3] = {10, 9, 8};
    append_array(&arr_test, &a, 3);
	int b = ((int *) arr_test.array)[0];
	int c  =((int *) arr_test.array)[1]; 
	int d = ((int *) arr_test.array)[2]; 
	EXPECT_EQ(10, b); 
	EXPECT_EQ(9, c);
	EXPECT_EQ(8, d);
	EXPECT_EQ(10, arr_test.size);
	EXPECT_EQ(3, arr_test.len);
	EXPECT_EQ(4, arr_test.elem);
}
// ================================================================================
// ================================================================================
// eof
