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
// ================================================================================
// ================================================================================

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

	free(arr_test.array);
	arr_test.array = NULL;
	arr_test.size=0;
	arr_test.len=0;
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

    free(arr_test.array);
	arr_test.array = NULL;
	arr_test.size=0;
	arr_test.len=0;
}
// --------------------------------------------------------------------------------

/* This function tests the append_array function to ensure it proprly appends
 * float variables */
TEST(test_append_array, array_float) {
	size_t indices = 10;
	char name[6] = "array";
	char dtype[6] = "float";
	Array arr_test = init_array(dtype, indices, name);
	float a[3] = {10.5, 9.4, 8.3};
    append_array(&arr_test, &a, 3);
	float b = ((float *) arr_test.array)[0];
	float c  =((float *) arr_test.array)[1]; 
	float d = ((float *) arr_test.array)[2]; 
	EXPECT_FLOAT_EQ(10.5f, b); 
	EXPECT_FLOAT_EQ(9.4f, c);
	EXPECT_FLOAT_EQ(8.3f, d);

	free(arr_test.array);
	arr_test.array = NULL;
	arr_test.size=0;
	arr_test.len=0;
}
// --------------------------------------------------------------------------------

/* This function tests the append_array function to ensure it proprly appends
 * double variables */
TEST(test_append_array, array_double) {
	size_t indices = 10;
	char name[6] = "array";
	char dtype[7] = "double";
	Array arr_test = init_array(dtype, indices, name);
	double a[3] = {10.5, 9.4, 8.3};
    append_array(&arr_test, &a, 3);
	double b = ((double *) arr_test.array)[0];
	double c  =((double *) arr_test.array)[1]; 
	double d = ((double *) arr_test.array)[2]; 
	EXPECT_DOUBLE_EQ(10.5, b); 
	EXPECT_DOUBLE_EQ(9.4, c);
	EXPECT_DOUBLE_EQ(8.3, d);

	free(arr_test.array);
	arr_test.array = NULL;
	arr_test.size=0;
	arr_test.len=0;
}
// --------------------------------------------------------------------------------

/* This function tests the append_array function to ensure it proprly appends
 * double variables */
TEST(test_append_array, array_char){
	size_t indices = 10;
	char name[6] = "array";
	char dtype[7] = "double";
	Array arr_test = init_array(dtype, indices, name);
	char a[7] = "Hello!";
    append_array(&arr_test, &a, 3);
	EXPECT_STREQ(a, ((char *)arr_test.array));

    free(arr_test.array);
	arr_test.array = NULL;
	arr_test.size=0;
	arr_test.len=0;
}
// --------------------------------------------------------------------------------

/* This function tests the append_array function to ensure it properly adds
 * memory allocatio when required */
TEST(test_append_array, memory_rollover) {
	size_t indices = 10;
	char name[6] = "array";
	char dtype[4] = "int";
	Array arr_test = init_array(dtype, indices, name);
	
	for (int i = 0; i < 11; i++) {
		append_array(&arr_test, &i, 1);
	}

	EXPECT_EQ(11, arr_test.len);
	EXPECT_EQ(22, arr_test.size);

	free(arr_test.array);
	arr_test.array = NULL;
	arr_test.size=0;
	arr_test.len=0;	
}
// ================================================================================
// ================================================================================

/* This function tests the free_array function to ensure it adequately frees
 * all memory from an array
 */
TEST(test_free_memory, free_memory) {
	// Allocate and implement memory
	size_t indices = 10;
	char name[6] = "array";
	char dtype[7] = "double";
	Array arr_test = init_array(dtype, indices, name);
	double a[3] = {10.5, 9.4, 8.3};
    append_array(&arr_test, &a, 3);

	// free memory
	free_array(&arr_test);

	EXPECT_EQ(0, arr_test.size);
	EXPECT_EQ(0, arr_test.len);
	EXPECT_EQ(0, arr_test.elem);
}
// ================================================================================
// ================================================================================

/* This function tests the int_array_val function to ensure that it properly
 * returns an integer value */
TEST(test_retrieve_indice, int_indice) {
	size_t indices = 10;
	char name[6] = "array";
	char dtype[4] = "int";
	Array arr_test = init_array(dtype, indices, name);
	int a[3] = {10, 9, 8};
    append_array(&arr_test, &a, 3);

	EXPECT_EQ(10, int_array_val(&arr_test, 0));
    EXPECT_EQ(9, int_array_val(&arr_test, 1));
	EXPECT_EQ(8, int_array_val(&arr_test, 2));
}
// --------------------------------------------------------------------------------

/* This function tests the float_array_val function to ensure that it 
 * properly returns a float value */
TEST(test_retrieve_indice, float_indice) {
	size_t indices = 10;
	char name[6] = "array";
	char dtype[7] = "float";
	Array arr_test = init_array(dtype, indices, name);
	float a[3] = {10.3, 9.5, 8.4};
    append_array(&arr_test, &a, 3);

	EXPECT_FLOAT_EQ(10.3f, float_array_val(&arr_test, 0));
    EXPECT_FLOAT_EQ(9.5f, float_array_val(&arr_test, 1));
	EXPECT_FLOAT_EQ(8.4f, float_array_val(&arr_test, 2));
}
// --------------------------------------------------------------------------------

/* This function tests the double_array_val function to ensure that it 
 * properly returns a double value */
TEST(test_retrieve_indice, double_indice) {
	size_t indices = 10;
	char name[6] = "array";
	char dtype[7] = "double";
	Array arr_test = init_array(dtype, indices, name);
	double a[3] = {10.3, 9.5, 8.4};
    append_array(&arr_test, &a, 3);

	EXPECT_FLOAT_EQ(10.3f, double_array_val(&arr_test, 0));
    EXPECT_FLOAT_EQ(9.5f, double_array_val(&arr_test, 1));
	EXPECT_FLOAT_EQ(8.4f, double_array_val(&arr_test, 2));
}
// --------------------------------------------------------------------------------

/* This function tests the char_array_val function to ensure that it 
 * properly returns a char value */
TEST(test_retrieve_indice, char_indice) {
	size_t indices = 10;
	char name[6] = "array";
	char dtype[7] = "char";
	Array arr_test = init_array(dtype, indices, name);
	char a[7] = "Hello!";
    append_array(&arr_test, &a, 3);
    char b = 'H';
	char c = 'e';
	char d = 'l';
	EXPECT_EQ(b, char_array_val(&arr_test, 0));
    EXPECT_EQ(c, char_array_val(&arr_test, 1));
	EXPECT_EQ(d, char_array_val(&arr_test, 2));
}
// ================================================================================
// ================================================================================

/* This function tests the preappend_array function to ensure it can incorporate
 * a scalar value */ 
TEST(test_preappend_array, preappend_scalar) {
	size_t indices = 10;
	char name[6] = "array";
	char dtype[7] = "int";
	Array arr_test = init_array(dtype, indices, name);
	int a[3] = {10, 9, 8};
    append_array(&arr_test, &a, 3);
	int b = 3;
	preappend_array(&arr_test, &b, 1);

	EXPECT_EQ(3, int_array_val(&arr_test, 0));
	EXPECT_EQ(10, int_array_val(&arr_test, 1));
	EXPECT_EQ(9, int_array_val(&arr_test, 2));
	EXPECT_EQ(8, int_array_val(&arr_test, 3));
}
// --------------------------------------------------------------------------------

/* This function tests the preappend_array function to incorporate an array
 * value */ 
TEST(test_preappend_array, preappend_array) {
	size_t indices = 10;
	char name[6] = "array";
	char dtype[7] = "int";
	Array arr_test = init_array(dtype, indices, name);
	int a[3] = {10, 9, 8};
    append_array(&arr_test, &a, 3);
	int b[3] = {1, 2, 3};
	preappend_array(&arr_test, b, 3);

	EXPECT_EQ(1, int_array_val(&arr_test, 0));
	EXPECT_EQ(2, int_array_val(&arr_test, 1));
	EXPECT_EQ(3, int_array_val(&arr_test, 2));
	EXPECT_EQ(10, int_array_val(&arr_test, 3));
	EXPECT_EQ(9, int_array_val(&arr_test, 4));
	EXPECT_EQ(8, int_array_val(&arr_test, 5));
}
// ================================================================================
// ================================================================================

/* This function tests the pop_array function to ensure it proprly deletes an 
 * ainteger rray element
 */
TEST(test_pop_array, pop_int) {
	size_t indices = 10;
	char name[6] = "array";
	char dtype[7] = "int";
	Array arr_test = init_array(dtype, indices, name);
    int a[4] = {10, 9, 8, 7};
	append_array(&arr_test, a, 4);
	pop_array(&arr_test, 2);
	EXPECT_EQ(10, int_array_val(&arr_test, 0));
	EXPECT_EQ(9, int_array_val(&arr_test, 1));
	EXPECT_EQ(7, int_array_val(&arr_test, 2)); 
}
// --------------------------------------------------------------------------------

/* This function tests the pop_array function to ensure it proprly deletes an 
 * float array element
 */
TEST(test_pop_array, pop_float) {
	size_t indices = 10;
	char name[6] = "array";
	char dtype[7] = "float";
	Array arr_test = init_array(dtype, indices, name);
    float a[4] = {10.1, 9.2, 8.3, 7.4};
	append_array(&arr_test, a, 4);
	pop_array(&arr_test, 2);
	EXPECT_FLOAT_EQ(10.1f, float_array_val(&arr_test, 0));
	EXPECT_FLOAT_EQ(9.2f, float_array_val(&arr_test, 1));
	EXPECT_FLOAT_EQ(7.4f, float_array_val(&arr_test, 2));
}
// ================================================================================
// ================================================================================

/* This function tests the fint_int_array function to ensure ir properly 
 * finds the indices associated with specific values in an integer array.*/
TEST(test_find_indices, find_integer_indices) {
	size_t indices = 10;
	char name[6] = "array";
	char dtype[7] = "int";
	Array arr_test = init_array(dtype, indices, name);
    int a[7] = {6, 1, 3, 6, 6, 4, 5};
	append_array(&arr_test, a, 7);
	int *p = find_int_array_indices(&arr_test, 6);
	EXPECT_EQ(p[0], 0);
	EXPECT_EQ(p[1], 3);
	EXPECT_EQ(p[2], 4);
}
// ================================================================================
// ================================================================================
// eof
