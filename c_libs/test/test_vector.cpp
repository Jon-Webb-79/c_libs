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
#include "vector.h"
}

/* This function tests the init_array function to ensure that it correctly
 * prepares the Array container for data addition
 */
TEST(test_initialize_array, init_data) {
	size_t indices = 20;
	dat_type dtype = INT;
	char name[6] = "array";
	Vector arr_test = init_vector(dtype, indices, name);
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
// ================================================================================*/
// ================================================================================*/

/* This function tests to ensure that append_array can append a single*/
/*  * integer scalar
  */
TEST(test_append_array, one_scalar_int) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = INT;
	Vector arr_test = init_vector(dtype, indices, name);
	int a = 5;
    append_vector(&arr_test, &a, 1);
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
// --------------------------------------------------------------------------------*/

/* This function tests to ensure that append_array can append an array
 */
TEST(test_append_array, array_int) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = INT;
	Vector arr_test = init_vector(dtype, indices, name);
	int a[3] = {10, 9, 8};
    append_vector(&arr_test, &a, 3);
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
// --------------------------------------------------------------------------------*/

/* This function tests the append_array function to ensure it proprly appends
 * float variables */
TEST(test_append_array, array_float) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = FLOAT;
	Vector arr_test = init_vector(dtype, indices, name);
	float a[3] = {10.5, 9.4, 8.3};
    append_vector(&arr_test, &a, 3);
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
// --------------------------------------------------------------------------------*/

/* This function tests the append_array function to ensure it proprly appends
 * double variables
 */
TEST(test_append_array, array_double) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = DOUBLE;
	Vector arr_test = init_vector(dtype, indices, name);
	double a[3] = {10.5, 9.4, 8.3};
    append_vector(&arr_test, &a, 3);
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
// --------------------------------------------------------------------------------*/

/* This function tests the append_array function to ensure it proprly appends
 * double variables
 */
TEST(test_append_array, array_char){
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = DOUBLE;
	Vector arr_test = init_vector(dtype, indices, name);
	char a[7] = "Hello!";
    append_vector(&arr_test, &a, 3);
	EXPECT_STREQ(a, ((char *)arr_test.array));

    free(arr_test.array);
	arr_test.array = NULL;
	arr_test.size=0;
	arr_test.len=0;
}
// --------------------------------------------------------------------------------*/

/* This function tests the append_array function to ensure it properly adds
 * memory allocatio when required
 */
TEST(test_append_array, memory_rollover) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = INT;
	Vector arr_test = init_vector(dtype, indices, name);
	
	for (int i = 0; i < 11; i++) {
		append_vector(&arr_test, &i, 1);
	}

	EXPECT_EQ(11, arr_test.len);
	EXPECT_EQ(22, arr_test.size);

	free(arr_test.array);
	arr_test.array = NULL;
	arr_test.size=0;
	arr_test.len=0;	
}
// ================================================================================*/
// ================================================================================*/

/* This function tests the free_array function to ensure it adequately frees
 * all memory from an array
 */
TEST(test_free_memory, free_memory) {
	// Allocate and implement memory
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = DOUBLE;
	Vector arr_test = init_vector(dtype, indices, name);
	double a[3] = {10.5, 9.4, 8.3};
    append_vector(&arr_test, &a, 3);

	// free memory
	free_vector(&arr_test);

	EXPECT_EQ(0, arr_test.size);
	EXPECT_EQ(0, arr_test.len);
	EXPECT_EQ(0, arr_test.elem);
}
// ================================================================================*/
// ================================================================================*/

/* This function tests the int_array_val function to ensure that it properly
 * returns an integer value
 */
TEST(test_retrieve_indice, int_indice) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = INT;
	Vector arr_test = init_vector(dtype, indices, name);
	int a[3] = {10, 9, 8};
    append_vector(&arr_test, &a, 3);

	EXPECT_EQ(10, int_vector_val(&arr_test, 0));
    EXPECT_EQ(9, int_vector_val(&arr_test, 1));
	EXPECT_EQ(8, int_vector_val(&arr_test, 2));
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------*/

/* This function tests the float_array_val function to ensure that it
 * properly returns a float value
 */
TEST(test_retrieve_indice, float_indice) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = FLOAT;
	Vector arr_test = init_vector(dtype, indices, name);
	float a[3] = {10.3, 9.5, 8.4};
    append_vector(&arr_test, &a, 3);

	EXPECT_FLOAT_EQ(10.3f, float_vector_val(&arr_test, 0));
    EXPECT_FLOAT_EQ(9.5f, float_vector_val(&arr_test, 1));
	EXPECT_FLOAT_EQ(8.4f, float_vector_val(&arr_test, 2));
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------*/

/* This function tests the double_array_val function to ensure that it
 * properly returns a double value
 */
TEST(test_retrieve_indice, double_indice) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = DOUBLE;
	Vector arr_test = init_vector(dtype, indices, name);
	double a[3] = {10.3, 9.5, 8.4};
    append_vector(&arr_test, &a, 3);

	EXPECT_FLOAT_EQ(10.3f, double_vector_val(&arr_test, 0));
    EXPECT_FLOAT_EQ(9.5f, double_vector_val(&arr_test, 1));
	EXPECT_FLOAT_EQ(8.4f, double_vector_val(&arr_test, 2));
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------*/

/* This function tests the char_array_val function to ensure that it
 * properly returns a char value
 */
TEST(test_retrieve_indice, char_indice) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = CHAR;
	Vector arr_test = init_vector(dtype, indices, name);
	char a[7] = "Hello!";
    append_vector(&arr_test, &a, 3);
    char b = 'H';
	char c = 'e';
	char d = 'l';
	EXPECT_EQ(b, char_vector_val(&arr_test, 0));
    EXPECT_EQ(c, char_vector_val(&arr_test, 1));
	EXPECT_EQ(d, char_vector_val(&arr_test, 2));
	free_vector(&arr_test);
}
// ================================================================================*/
// ================================================================================*/

/* This function tests the preappend_array function to ensure it can incorporate
 * a scalar value
 */
TEST(test_preappend_array, preappend_scalar) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = INT;
	Vector arr_test = init_vector(dtype, indices, name);
	int a[3] = {10, 9, 8};
    append_vector(&arr_test, &a, 3);
	int b = 3;
	preappend_vector(&arr_test, &b, 1);

	EXPECT_EQ(3, int_vector_val(&arr_test, 0));
	EXPECT_EQ(10, int_vector_val(&arr_test, 1));
	EXPECT_EQ(9, int_vector_val(&arr_test, 2));
	EXPECT_EQ(8, int_vector_val(&arr_test, 3));
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------*/

/* This function tests the preappend_array function to incorporate an array
 * value
 */
TEST(test_preappend_array, preappend_array) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = INT;
	Vector arr_test = init_vector(dtype, indices, name);
	int a[3] = {10, 9, 8};
    append_vector(&arr_test, &a, 3);
	int b[3] = {1, 2, 3};
	preappend_vector(&arr_test, b, 3);

	EXPECT_EQ(1, int_vector_val(&arr_test, 0));
	EXPECT_EQ(2, int_vector_val(&arr_test, 1));
	EXPECT_EQ(3, int_vector_val(&arr_test, 2));
	EXPECT_EQ(10, int_vector_val(&arr_test, 3));
	EXPECT_EQ(9, int_vector_val(&arr_test, 4));
	EXPECT_EQ(8, int_vector_val(&arr_test, 5));
	free_vector(&arr_test);
}
// ================================================================================*/
// ================================================================================*/

/* This function tests the pop_array function to ensure it proprly deletes an
* ainteger rray element
*/
TEST(test_pop_array, pop_int) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = INT;
	Vector arr_test = init_vector(dtype, indices, name);
    int a[4] = {10, 9, 8, 7};
	append_vector(&arr_test, a, 4);
	pop_vector(&arr_test, 2);
	EXPECT_EQ(10, int_vector_val(&arr_test, 0));
	EXPECT_EQ(9, int_vector_val(&arr_test, 1));
	EXPECT_EQ(7, int_vector_val(&arr_test, 2)); 
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------*/

/* This function tests the pop_array function to ensure it proprly deletes an
 * float array element
 */
TEST(test_pop_array, pop_float) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = FLOAT;
	Vector arr_test = init_vector(dtype, indices, name);
    float a[4] = {10.1, 9.2, 8.3, 7.4};
	append_vector(&arr_test, a, 4);
	pop_vector(&arr_test, 2);
	EXPECT_FLOAT_EQ(10.1f, float_vector_val(&arr_test, 0));
	EXPECT_FLOAT_EQ(9.2f, float_vector_val(&arr_test, 1));
	EXPECT_FLOAT_EQ(7.4f, float_vector_val(&arr_test, 2));
	free_vector(&arr_test);
}
// ================================================================================
// ================================================================================

/* This function tests the find_int_array function to ensure ir properly 
 * finds the indices associated with specific values in an integer array.*/
TEST(test_find_indices, find_integer_indices) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = INT;
	Vector arr_test = init_vector(dtype, indices, name);
    int a[7] = {6, 1, 3, 6, 6, 4, 5};
	append_vector(&arr_test, a, 7);
	Vector p = find_int_vector_indices(&arr_test, 6);
	EXPECT_EQ(int_vector_val(&p, 0), 0);
	EXPECT_EQ(int_vector_val(&p, 1), 3);
	EXPECT_EQ(int_vector_val(&p, 2), 4);
	free_vector(&arr_test);
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------

/* This function tests the find_float_array function to ensure ir properly 
 * finds the indices associated with specific values in an integer array.*/
TEST(test_find_indices, find_float_indices) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = FLOAT;
	Vector arr_test = init_vector(dtype, indices, name);
    float a[7] = {6.2, 1.0, 3.2, 6.2, 6.2, 4.5, 5.7};
	append_vector(&arr_test, a, 7);
	float value = 6.2;
	Vector p = find_float_vector_indices(&arr_test, value);
	EXPECT_EQ(int_vector_val(&p, 0), 0);
	EXPECT_EQ(int_vector_val(&p, 1), 3);
	EXPECT_EQ(int_vector_val(&p, 2), 4);
	free_vector(&arr_test);
	free_vector(&p);
}
// --------------------------------------------------------------------------------

/* This function tests the find_float_array function to ensure ir properly 
 * finds the indices associated with specific values in an integer array.*/
TEST(test_find_indices, find_double_indices) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = DOUBLE;
	Vector arr_test = init_vector(dtype, indices, name);
    double a[7] = {6.2, 1.0, 3.2, 6.2, 6.2, 4.5, 5.7};
	append_vector(&arr_test, a, 7);
	double value = 6.2;
	Vector p = find_double_vector_indices(&arr_test, value);
	EXPECT_EQ(int_vector_val(&p, 0), 0);
	EXPECT_EQ(int_vector_val(&p, 1), 3);
	EXPECT_EQ(int_vector_val(&p, 2), 4);
	free_vector(&arr_test);
	free_vector(&p);
}
// --------------------------------------------------------------------------------

/* This function tests the find_char_array function to ensure ir properly 
 * finds the indices associated with specific values in an integer array.*/
TEST(test_find_indices, find_char_indices) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = CHAR;
	Vector arr_test = init_vector(dtype, indices, name);
    char a[7] = {'a', 'b', 'b', 'b', 'd', 'e', 'b'};
	append_vector(&arr_test, a, 7);
	char value = 'b';
	Vector p = find_char_vector_indices(&arr_test, value);
	EXPECT_EQ(int_vector_val(&p, 0), 1);
	EXPECT_EQ(int_vector_val(&p, 1), 2);
	EXPECT_EQ(int_vector_val(&p, 2), 3);
	EXPECT_EQ(int_vector_val(&p, 3), 6);
	free_vector(&arr_test);
	free_vector(&p);
}
// ================================================================================
// ================================================================================

/* This function tests the delete_int_array_values function to ensure it 
 * properly deletes a value from an array */
TEST(test_delete_array_value, delete_int) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = INT;
	Vector arr_test = init_vector(dtype, indices, name);
    int a[7] = {6, 1, 3, 6, 6, 4, 5};
	append_vector(&arr_test, a, 7);
	delete_int_vec_values(&arr_test, 6);
	EXPECT_EQ(int_vector_val(&arr_test, 0), 1);
	EXPECT_EQ(int_vector_val(&arr_test, 1), 3);
	EXPECT_EQ(int_vector_val(&arr_test, 2), 4);
	EXPECT_EQ(int_vector_val(&arr_test, 3), 5);
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------

/* This function tests the delete_int_array function to ensure if properly
 * executes if the expected value is not in the target array*/
TEST(test_delete_array_value, no_delete) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = INT;
	Vector arr_test = init_vector(dtype, indices, name);
    int a[4] = {6, 1, 3, 6};
	append_vector(&arr_test, a, 4);
	delete_int_vec_values(&arr_test, 5);
	EXPECT_EQ(int_vector_val(&arr_test, 0), 6);
	EXPECT_EQ(int_vector_val(&arr_test, 1), 1);
	EXPECT_EQ(int_vector_val(&arr_test, 2), 3);
	EXPECT_EQ(int_vector_val(&arr_test, 3), 6);
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------

/* This function tests the delete_float_array_values function to ensure it 
 * properly deletes a value from an array */
TEST(test_delete_array_value, delete_float) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = FLOAT;
	Vector arr_test = init_vector(dtype, indices, name);
    float a[7] = {6.1, 1.2, 3.4, 6.1, 6.1, 4.5, 5.7};
	append_vector(&arr_test, a, 7);
	float b = 6.1;
	delete_float_vec_values(&arr_test, b);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 0), 1.2f);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 1), 3.4f);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 2), 4.5f);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 3), 5.7f);
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------

/* This function tests the delete_double_array_values function to ensure it 
 * properly deletes a value from an array */
TEST(test_delete_array_value, delete_double) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = DOUBLE;
	Vector arr_test = init_vector(dtype, indices, name);
    double a[7] = {6.1, 1.2, 3.4, 6.1, 6.1, 4.5, 5.7};
	append_vector(&arr_test, a, 7);
	delete_double_vec_values(&arr_test, 6.1);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 0), 1.2);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 1), 3.4);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 2), 4.5);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 3), 5.7);
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------

/* This function tests the delete_char_array_values function to ensure it 
 * properly deletes a value from an array */
TEST(test_delete_array_value, delete_char) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = CHAR;
	Vector arr_test = init_vector(dtype, indices, name);
    char a[6] = "Hello";
	append_vector(&arr_test, a, 6);
	delete_char_vec_values(&arr_test, 'l');
	EXPECT_EQ(char_vector_val(&arr_test, 0), 'H');
	EXPECT_EQ(char_vector_val(&arr_test, 1), 'e');
	EXPECT_EQ(char_vector_val(&arr_test, 2), 'o');
	free_vector(&arr_test);
}
// ================================================================================
// ================================================================================

/* This function tests the replace_int_array_index function to ensure
 * it properly replaces an integer value at an index*/
TEST(test_replace_index, replace_int) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = INT;
	Vector arr_test = init_vector(dtype, indices, name);
    int a[6] = {1, 2, 3, 4, 5, 6};
	append_vector(&arr_test, a, 6);
	replace_int_vector_index(&arr_test, 1, 5);
	EXPECT_EQ(int_vector_val(&arr_test, 0), 1);
	EXPECT_EQ(int_vector_val(&arr_test, 1), 5);
	EXPECT_EQ(int_vector_val(&arr_test, 2), 3);
	EXPECT_EQ(int_vector_val(&arr_test, 3), 4);
	EXPECT_EQ(int_vector_val(&arr_test, 4), 5);
	EXPECT_EQ(int_vector_val(&arr_test, 5), 6);
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------

/* This function tests the replace_float_array_index function to ensure
 * it properly replaces a float value at an index*/
TEST(test_replace_index, replace_float) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = FLOAT;
	Vector arr_test = init_vector(dtype, indices, name);
    float a[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
	append_vector(&arr_test, a, 6);
	replace_float_vector_index(&arr_test, 1, 5.5f);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 0), 1.1f);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 1), 5.5f);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 2), 3.3f);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 3), 4.4f);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 4), 5.5f);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 5), 6.6f);
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------

/* This function tests the replace_double_array_index function to ensure
 * it properly replaces a double value at an index*/
TEST(test_replace_index, replace_double) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = DOUBLE;
	Vector arr_test = init_vector(dtype, indices, name);
    double a[6] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
	append_vector(&arr_test, a, 6);
	replace_double_vector_index(&arr_test, 1, 5.5);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 0), 1.1);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 1), 5.5);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 2), 3.3);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 3), 4.4);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 4), 5.5);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 5), 6.6);
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------

/* This function tests the replace_char_array_index function to ensure
 * it properly replaces a char value at an index*/
TEST(test_replace_index, replace_char) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = CHAR;
	Vector arr_test = init_vector(dtype, indices, name);
    char a[7] = "Hello ";
	append_vector(&arr_test, a, 6);
	replace_char_vector_index(&arr_test, 1, 'p');
	EXPECT_EQ(char_vector_val(&arr_test, 0), 'H');
	EXPECT_EQ(char_vector_val(&arr_test, 1), 'p');
	EXPECT_EQ(char_vector_val(&arr_test, 2), 'l');
	EXPECT_EQ(char_vector_val(&arr_test, 3), 'l');
	EXPECT_EQ(char_vector_val(&arr_test, 4), 'o');
	EXPECT_EQ(char_vector_val(&arr_test, 5), ' ');
	free_vector(&arr_test);
}
// ================================================================================
// ================================================================================

/* This function tests the replace_int_array_element function to ensure it
 * properly replace int values in an array */
TEST(test_replace_element, replace_int_element) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = INT;
	Vector arr_test = init_vector(dtype, indices, name);
    int a[6] = {1, 2, 3, 2, 5, 2};
	append_vector(&arr_test, a, 6);
	replace_int_vector_element(&arr_test, 2, 3);
	EXPECT_EQ(int_vector_val(&arr_test, 0), 1);
	EXPECT_EQ(int_vector_val(&arr_test, 1), 3);
	EXPECT_EQ(int_vector_val(&arr_test, 2), 3);
	EXPECT_EQ(int_vector_val(&arr_test, 3), 3);
	EXPECT_EQ(int_vector_val(&arr_test, 4), 5);
	EXPECT_EQ(int_vector_val(&arr_test, 5), 3);
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------

/* This function tests the replace_float_array_element function to ensure it
 * properly replace a float values in an array */
TEST(test_replace_element, replace_float_element) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = FLOAT;
	Vector arr_test = init_vector(dtype, indices, name);
    float a[6] = {1.1, 2.2, 3.4, 2.2, 5.6, 2.2};
	append_vector(&arr_test, a, 6);
	replace_float_vector_element(&arr_test, 2.2f, 3.4f);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 0), 1.1f);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 1), 3.4f);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 2), 3.4f);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 3), 3.4f);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 4), 5.6f);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 5), 3.4f);
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------

/* This function tests the replace_double_array_element function to ensure it
 * properly replace a double values in an array */
TEST(test_replace_element, replace_double_element) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = DOUBLE;
	Vector arr_test = init_vector(dtype, indices, name);
    double a[6] = {1.1, 2.2, 3.4, 2.2, 5.6, 2.2};
	append_vector(&arr_test, a, 6);
	replace_double_vector_element(&arr_test, 2.2, 3.4);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 0), 1.1);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 1), 3.4);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 2), 3.4);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 3), 3.4);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 4), 5.6);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 5), 3.4);
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------

/* This function tests the replace_char_array_element function to ensure it
 * properly replace a char values in an array */
TEST(test_replace_element, replace_char_element) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = CHAR;
	Vector arr_test = init_vector(dtype, indices, name);
    char a[6] = "Hello";
	append_vector(&arr_test, a, 6);
	replace_char_vector_element(&arr_test, 'l', 'q');
	EXPECT_EQ(char_vector_val(&arr_test, 0), 'H');
	EXPECT_EQ(char_vector_val(&arr_test, 1), 'e');
	EXPECT_EQ(char_vector_val(&arr_test, 2), 'q');
	EXPECT_EQ(char_vector_val(&arr_test, 3), 'q');
	EXPECT_EQ(char_vector_val(&arr_test, 4), 'o');
	free_vector(&arr_test);
}
// ================================================================================
// ================================================================================

/* This function tests the delete_int_duplicates function to ensure it properly
 * deletes duplicate values from an array */
TEST(test_delete_dubplicates, delete_int_duplicates) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = INT;
	Vector arr_test = init_vector(dtype, indices, name);
    int a[8] = {1, 1, 3, 1, 5, 2, 2, 3};
	append_vector(&arr_test, a, 8);
	delete_int_duplicates_vec(&arr_test);
	EXPECT_EQ(int_vector_val(&arr_test, 0), 1);
	EXPECT_EQ(int_vector_val(&arr_test, 1), 3);
	EXPECT_EQ(int_vector_val(&arr_test, 2), 5);
	EXPECT_EQ(int_vector_val(&arr_test, 3), 2);
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------

/* This function tests the delete_float_duplicates function to ensure it properly
 * deletes duplicate values from an array */
TEST(test_delete_dubplicates, delete_float_duplicates) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = FLOAT;
	Vector arr_test = init_vector(dtype, indices, name);
    float a[8] = {1.1, 1.1, 3.0, 1.1, 5.2, 2.1, 2.1, 3.0};
	append_vector(&arr_test, a, 8);
	delete_float_duplicates_vec(&arr_test);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 0), 1.1f);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 1), 3.0f);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 2), 5.2f);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 3), 2.1f);
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------

/* This function tests the delete_double_duplicates function to ensure it properly
 * deletes duplicate values from an array */
TEST(test_delete_dubplicates, delete_double_duplicates) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = DOUBLE;
	Vector arr_test = init_vector(dtype, indices, name);
    double a[8] = {1.1, 1.1, 3.0, 1.1, 5.2, 2.1, 2.1, 3.0};
	append_vector(&arr_test, a, 8);
	delete_double_duplicates_vec(&arr_test);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 0), 1.1);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 1), 3.0);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 2), 5.2);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 3), 2.1);
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------

/* This function tests the delete_char_duplicates function to ensure it properly
 * deletes duplicate values from an array */
TEST(test_delete_dubplicates, delete_char_duplicates) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = CHAR;
	Vector arr_test = init_vector(dtype, indices, name);
    char a[14] = "Hello WWorld!";
	append_vector(&arr_test, a, 14);
	delete_char_duplicates_vec(&arr_test);
	EXPECT_EQ(char_vector_val(&arr_test, 0), 'H');
	EXPECT_EQ(char_vector_val(&arr_test, 1), 'e');
	EXPECT_EQ(char_vector_val(&arr_test, 2), 'l');
	EXPECT_EQ(char_vector_val(&arr_test, 3), 'o');
	EXPECT_EQ(char_vector_val(&arr_test, 4), ' ');
	EXPECT_EQ(char_vector_val(&arr_test, 5), 'W');
	EXPECT_EQ(char_vector_val(&arr_test, 6), 'r');
	EXPECT_EQ(char_vector_val(&arr_test, 7), 'd');
	EXPECT_EQ(char_vector_val(&arr_test, 8), '!');
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------

/* This function tests the delete_duplicates function to ensure it properly
 * deletes duplicate values from an array */
TEST(test_delete_dubplicates, delete_duplicates) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = CHAR;
	Vector arr_test = init_vector(dtype, indices, name);
    char a[14] = "Hello WWorld!";
	append_vector(&arr_test, a, 14);
	delete_duplicates_vec(&arr_test);
	EXPECT_EQ(char_vector_val(&arr_test, 0), 'H');
	EXPECT_EQ(char_vector_val(&arr_test, 1), 'e');
	EXPECT_EQ(char_vector_val(&arr_test, 2), 'l');
	EXPECT_EQ(char_vector_val(&arr_test, 3), 'o');
	EXPECT_EQ(char_vector_val(&arr_test, 4), ' ');
	EXPECT_EQ(char_vector_val(&arr_test, 5), 'W');
	EXPECT_EQ(char_vector_val(&arr_test, 6), 'r');
	EXPECT_EQ(char_vector_val(&arr_test, 7), 'd');
	EXPECT_EQ(char_vector_val(&arr_test, 8), '!');
	free_vector(&arr_test);
}
// ================================================================================
// ================================================================================

/* This function tests the unique_int_vec function to ensure it properly
 * deletes all values from an array except for the unique values */
TEST(test_unique_vec, unique_int) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = INT;
	Vector arr_test = init_vector(dtype, indices, name);
    int a[9] = {1, 1, 2, 3, 4, 4, 6, 6, 7};
	append_vector(&arr_test, a, 9);
	unique_int_vec(&arr_test);
	EXPECT_EQ(int_vector_val(&arr_test, 0), 2);
	EXPECT_EQ(int_vector_val(&arr_test, 1), 3);
	EXPECT_EQ(int_vector_val(&arr_test, 2), 7);
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------

/* This function tests the unique_float_vec function to ensure it properly
 * deletes all values from an array except for the unique values */
TEST(test_unique_vec, unique_float) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = FLOAT;
	Vector arr_test = init_vector(dtype, indices, name);
    float a[9] = {1.1, 1.1, 2.2, 3.3, 4.4, 4.4, 6.6, 6.6, 7.1};
	append_vector(&arr_test, a, 9);
	unique_float_vec(&arr_test);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 0), 2.2f);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 1), 3.3f);
	EXPECT_FLOAT_EQ(float_vector_val(&arr_test, 2), 7.1f);
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------

/* This function tests the unique_double_vec function to ensure it properly
 * deletes all values from an array except for the unique values */
TEST(test_unique_vec, unique_double) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = DOUBLE;
	Vector arr_test = init_vector(dtype, indices, name);
    double a[9] = {1.1, 1.1, 2.2, 3.3, 4.4, 4.4, 6.6, 6.6, 7.1};
	append_vector(&arr_test, a, 9);
	unique_double_vec(&arr_test);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 0), 2.2);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 1), 3.3);
	EXPECT_DOUBLE_EQ(double_vector_val(&arr_test, 2), 7.1);
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------

/* This function tests the unique_char_vec function to ensure it properly
 * deletes all values from an array except for the unique values */
TEST(test_unique_vec, unique_char) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = CHAR;
	Vector arr_test = init_vector(dtype, indices, name);
    char a[13] = "Hello World!";
	append_vector(&arr_test, a, 13);
	unique_char_vec(&arr_test);
	EXPECT_EQ(char_vector_val(&arr_test, 0), 'H');
	EXPECT_EQ(char_vector_val(&arr_test, 1), 'e');
	EXPECT_EQ(char_vector_val(&arr_test, 2), ' ');
	EXPECT_EQ(char_vector_val(&arr_test, 3), 'W');
	EXPECT_EQ(char_vector_val(&arr_test, 4), 'r');
	EXPECT_EQ(char_vector_val(&arr_test, 5), 'd');
	EXPECT_EQ(char_vector_val(&arr_test, 6), '!');
	free_vector(&arr_test);
}
// --------------------------------------------------------------------------------

/* This function tests the unique_vec function to ensure it properly
 * deletes all values from an array except for the unique values */
TEST(test_unique_vec, unique) {
	size_t indices = 10;
	char name[6] = "array";
	dat_type dtype = CHAR;
	Vector arr_test = init_vector(dtype, indices, name);
    char a[13] = "Hello World!";
	append_vector(&arr_test, a, 13);
	unique_vec(&arr_test);
	EXPECT_EQ(char_vector_val(&arr_test, 0), 'H');
	EXPECT_EQ(char_vector_val(&arr_test, 1), 'e');
	EXPECT_EQ(char_vector_val(&arr_test, 2), ' ');
	EXPECT_EQ(char_vector_val(&arr_test, 3), 'W');
	EXPECT_EQ(char_vector_val(&arr_test, 4), 'r');
	EXPECT_EQ(char_vector_val(&arr_test, 5), 'd');
	EXPECT_EQ(char_vector_val(&arr_test, 6), '!');
	free_vector(&arr_test);
}
// ================================================================================
// ================================================================================
// eof
