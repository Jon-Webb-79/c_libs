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

/* This function will test the test the pop_int_array function to ensure it
 * correctly detles an array indice
 */
TEST(test_pop_array, pop_integer) {
	int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	pop_int_array(a, 3, 9);
	EXPECT_EQ(a[0], 1);
	EXPECT_EQ(a[1], 2);
	EXPECT_EQ(a[2], 3);
	EXPECT_EQ(a[3], 5);
	EXPECT_EQ(a[4], 6);
	EXPECT_EQ(a[5], 7);
	EXPECT_EQ(a[6], 8);
	EXPECT_EQ(a[7], 9);
}
// --------------------------------------------------------------------------------

/* This function will test the test the pop_float_array function to ensure it
 * correctly detles an array indice
 */
TEST(test_pop_array, pop_float) {
	float a[9] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
	pop_float_array(a, 3, 9);
	EXPECT_FLOAT_EQ(a[0], 1.1f);
	EXPECT_FLOAT_EQ(a[1], 2.2f);
	EXPECT_FLOAT_EQ(a[2], 3.3f);
	EXPECT_FLOAT_EQ(a[3], 5.5f);
	EXPECT_FLOAT_EQ(a[4], 6.6f);
	EXPECT_FLOAT_EQ(a[5], 7.7f);
	EXPECT_FLOAT_EQ(a[6], 8.8f);
	EXPECT_FLOAT_EQ(a[7], 9.9f);
}
// --------------------------------------------------------------------------------

/* This function will test the test the pop_double_array function to ensure it
 * correctly detles an array indice
 */
TEST(test_pop_array, pop_double) {
	double a[9] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
	pop_double_array(a, 3, 9);
	EXPECT_DOUBLE_EQ(a[0], 1.1);
	EXPECT_DOUBLE_EQ(a[1], 2.2);
	EXPECT_DOUBLE_EQ(a[2], 3.3);
	EXPECT_DOUBLE_EQ(a[3], 5.5);
	EXPECT_DOUBLE_EQ(a[4], 6.6);
	EXPECT_DOUBLE_EQ(a[5], 7.7);
	EXPECT_DOUBLE_EQ(a[6], 8.8);
	EXPECT_DOUBLE_EQ(a[7], 9.9);
}
// --------------------------------------------------------------------------------

/* This function will test the test the pop_char_array function to ensure it
 * correctly detles an array indice
 */
TEST(test_pop_array, pop_char) {
	char a[10] = "abcdefghi";
	pop_char_array(a, 3, 9);
	EXPECT_EQ(a[0], 'a');
	EXPECT_EQ(a[1], 'b');
	EXPECT_EQ(a[2], 'c');
	EXPECT_EQ(a[3], 'e');
	EXPECT_EQ(a[4], 'f');
	EXPECT_EQ(a[5], 'g');
	EXPECT_EQ(a[6], 'h');
	EXPECT_EQ(a[7], 'i');
}
// ================================================================================

/* This function will test the test append_int_array function to ensure it
 * properly appends a parent array with a child array
 */
TEST(test_append_array, append_int_one) {
	int a[9] = {1, 2, 3};
	int b[6] = {4, 5, 6, 7, 8, 9};
	append_int_array(a, 3, b, 6);
	EXPECT_EQ(a[0], 1);
	EXPECT_EQ(a[1], 2);
	EXPECT_EQ(a[2], 3);
	EXPECT_EQ(a[3], 4);
	EXPECT_EQ(a[4], 5);
	EXPECT_EQ(a[5], 6);
	EXPECT_EQ(a[6], 7);
	EXPECT_EQ(a[7], 8);
	EXPECT_EQ(a[8], 9);
}
// --------------------------------------------------------------------------------

/* This function will test the test append_int_array function to ensure it
 * properly appends a parent array with a child scalar
 */
TEST(test_append_array, append_int_two) {
	int a[9] = {1, 2, 3, 4, 5, 6, 7, 8};
	int b = 9;
	append_int_array(a, 8, &b, 1);
	EXPECT_EQ(a[0], 1);
	EXPECT_EQ(a[1], 2);
	EXPECT_EQ(a[2], 3);
	EXPECT_EQ(a[3], 4);
	EXPECT_EQ(a[4], 5);
	EXPECT_EQ(a[5], 6);
	EXPECT_EQ(a[6], 7);
	EXPECT_EQ(a[7], 8);
	EXPECT_EQ(a[8], 9);
}
// --------------------------------------------------------------------------------

/* This function will test the test append_float_array function to ensure it
 * properly appends a parent array with a child array
 */
TEST(test_append_array, append_float) {
	float a[9] = {1.1, 2.2, 3.3};
	float b[6] = {4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
	append_float_array(a, 3, b, 6);
	EXPECT_FLOAT_EQ(a[0], 1.1f);
	EXPECT_FLOAT_EQ(a[1], 2.2f);
	EXPECT_FLOAT_EQ(a[2], 3.3f);
	EXPECT_FLOAT_EQ(a[3], 4.4f);
	EXPECT_FLOAT_EQ(a[4], 5.5f);
	EXPECT_FLOAT_EQ(a[5], 6.6f);
	EXPECT_FLOAT_EQ(a[6], 7.7f);
	EXPECT_FLOAT_EQ(a[7], 8.8f);
	EXPECT_FLOAT_EQ(a[8], 9.9f);
}
// --------------------------------------------------------------------------------

/* This function will test the test append_double_array function to ensure it
 * properly appends a parent array with a child array
 */
TEST(test_append_array, append_double) {
	double a[9] = {1.1, 2.2, 3.3};
	double b[6] = {4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
	append_double_array(a, 3, b, 6);
	EXPECT_DOUBLE_EQ(a[0], 1.1);
	EXPECT_DOUBLE_EQ(a[1], 2.2);
	EXPECT_DOUBLE_EQ(a[2], 3.3);
	EXPECT_DOUBLE_EQ(a[3], 4.4);
	EXPECT_DOUBLE_EQ(a[4], 5.5);
	EXPECT_DOUBLE_EQ(a[5], 6.6);
	EXPECT_DOUBLE_EQ(a[6], 7.7);
	EXPECT_DOUBLE_EQ(a[7], 8.8);
	EXPECT_DOUBLE_EQ(a[8], 9.9);
}
// --------------------------------------------------------------------------------

/* This function will test the test append_char_array function to ensure it
 * properly appends a parent array with a child array
 */
TEST(test_append_array, append_char) {
	char a[10] = "abcdefgh";
	char b = 'i';
	append_char_array(a, 8, &b, 1);
	EXPECT_EQ(a[0], 'a');
	EXPECT_EQ(a[1], 'b');
	EXPECT_EQ(a[2], 'c');
	EXPECT_EQ(a[3], 'd');
	EXPECT_EQ(a[4], 'e');
	EXPECT_EQ(a[5], 'f');
	EXPECT_EQ(a[6], 'g');
	EXPECT_EQ(a[7], 'h');
	EXPECT_EQ(a[8], 'i');
}
// ================================================================================
// ================================================================================
// eof
