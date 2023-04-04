// ==========================================================================================
// ==========================================================================================
// - File:    test_vector.c
// - Purpose: Describe the file purpose here
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    August 31, 2022
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ==========================================================================================
// ==========================================================================================
// Include modules here

#include "test_vector.h"

void test_push_short_vec(void **state)
{
	(void) state;
	short int a[5] = {5, 1, 2, 3, 4};
	Short vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_push_ushort_vec(void **state)
{
	(void) state;
	unsigned short int a[5] = {5, 1, 2, 3, 4};
	UShort vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_push_int_vec(void **state)
{
	(void) state;
	int a[5] = {5, 1, 2, 3, 4};
	Int vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_push_uint_vec(void **state)
{
	(void) state;
	unsigned int a[5] = {5, 1, 2, 3, 4};
	UInt vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_push_long_vec(void **state)
{
	(void) state;
	int a[5] = {5, 1, 2, 3, 4};
	LInt vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_push_ulong_vec(void **state)
{
	(void) state;
	unsigned int a[5] = {5, 1, 2, 3, 4};
	ULInt vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_push_llong_vec(void **state)
{
	(void) state;
	int a[5] = {5, 1, 2, 3, 4};
	LLInt vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_push_ullong_vec(void **state)
{
	(void) state;
	unsigned int a[5] = {5, 1, 2, 3, 4};
	ULLInt vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_push_char_vec(void **state)
{
	(void) state;
	char a[5] = {5, 1, 2, 3, 4};
	Char vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_push_uchar_vec(void **state)
{
	(void) state;
	unsigned char a[5] = {5, 1, 2, 3, 4};
	UChar vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_push_float_vec(void **state)
{
	(void) state;
	float a[5] = {5., 1., 2., 3., 4.};
	Flt vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1., vec.active_length);
	PUSH(vec, 2., vec.active_length);
	PUSH(vec, 3., vec.active_length);
	PUSH(vec, 4., vec.active_length);
	PUSH(vec, 5., 0);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_float_equal(a[i], vec.array[i], 1.0e-3);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_push_double_vec(void **state)
{
	(void) state;
	double a[5] = {5., 1., 2., 3., 4.};
	Dble vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1., vec.active_length);
	PUSH(vec, 2., vec.active_length);
	PUSH(vec, 3., vec.active_length);
	PUSH(vec, 4., vec.active_length);
	PUSH(vec, 5., 0);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_float_equal(a[i], vec.array[i], 1.0e-3);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_push_ldouble_vec(void **state)
{
	(void) state;
	long double a[5] = {5., 1., 2., 3., 4.};
	LDble vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1., vec.active_length);
	PUSH(vec, 2., vec.active_length);
	PUSH(vec, 3., vec.active_length);
	PUSH(vec, 4., vec.active_length);
	PUSH(vec, 5., 0);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_float_equal(a[i], vec.array[i], 1.0e-3);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_push_bool_vec(void **state)
{
	(void) state;
	bool a[5] = {true, true, true, false, false};
	Bool vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, true, vec.active_length);
	PUSH(vec, true, vec.active_length);
	PUSH(vec, false, vec.active_length);
	PUSH(vec, false, vec.active_length);
	PUSH(vec, true, 0);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_push_string_vec(void **state)
{
	(void) state;
	char *a[] = {"One", "Two", "three", "Four", "Five"};
	String vec;
	init_string_vector(&vec);
	PUSH(vec, "Two", vec.active_length);
	PUSH(vec, "three", vec.active_length);
	PUSH(vec, "Four", vec.active_length);
	PUSH(vec, "Five", vec.active_length);
	PUSH(vec, "One", 0);
	int cmp;
	for (size_t i = 0; i < vec.active_length; i++) {
		cmp = strcmp(a[i], vec.array[i]);
		assert_int_equal(cmp, 0);
	}
	FREE(vec);
}
// ==========================================================================================
// ==========================================================================================
// TEST_INSERT_TYPE FUNCTIONS

void test_insert_short_vec(void **state)
{
	(void) state;
	short int a[10] = {5, 1, 10, 11, 12, 13, 14, 2, 3, 4};
	Short vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	short int b[5] = {10, 11, 12, 13, 14};
	INSERT(vec, b, 5, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_insert_ushort_vec(void **state)
{
	(void) state;
	unsigned short int a[10] = {5, 1, 10, 11, 12, 13, 14, 2, 3, 4};
	UShort vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	unsigned short int b[5] = {10, 11, 12, 13, 14};
	INSERT(vec, b, 5, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_insert_int_vec(void **state)
{
	(void) state;
	int a[10] = {5, 1, 10, 11, 12, 13, 14, 2, 3, 4};
	Int vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	int b[5] = {10, 11, 12, 13, 14};
	INSERT(vec, b, 5, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_insert_uint_vec(void **state)
{
	(void) state;
	unsigned int a[10] = {5, 1, 10, 11, 12, 13, 14, 2, 3, 4};
	UInt vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	unsigned int b[5] = {10, 11, 12, 13, 14};
	INSERT(vec, b, 5, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_insert_long_vec(void **state)
{
	(void) state;
	long int a[10] = {5, 1, 10, 11, 12, 13, 14, 2, 3, 4};
	LInt vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	long int b[5] = {10, 11, 12, 13, 14};
	INSERT(vec, b, 5, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_insert_ulong_vec(void **state)
{
	(void) state;
	unsigned long int a[10] = {5, 1, 10, 11, 12, 13, 14, 2, 3, 4};
	ULInt vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	unsigned long int b[5] = {10, 11, 12, 13, 14};
	INSERT(vec, b, 5, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_insert_llong_vec(void **state)
{
	(void) state;
	long long int a[10] = {5, 1, 10, 11, 12, 13, 14, 2, 3, 4};
	LLInt vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	long long int b[5] = {10, 11, 12, 13, 14};
	INSERT(vec, b, 5, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_insert_ullong_vec(void **state)
{
	(void) state;
	unsigned long long int a[10] = {5, 1, 10, 11, 12, 13, 14, 2, 3, 4};
	ULLInt vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	unsigned long long int b[5] = {10, 11, 12, 13, 14};
	INSERT(vec, b, 5, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_insert_char_vec(void **state)
{
	(void) state;
	char a[10] = {5, 1, 10, 11, 12, 13, 14, 2, 3, 4};
	Char vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	char b[5] = {10, 11, 12, 13, 14};
	INSERT(vec, b, 5, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_insert_uchar_vec(void **state)
{
	(void) state;
	unsigned char a[10] = {5, 1, 10, 11, 12, 13, 14, 2, 3, 4};
	UChar vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	unsigned char b[5] = {10, 11, 12, 13, 14};
	INSERT(vec, b, 5, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_insert_float_vec(void **state)
{
	(void) state;
	float a[10] = {5., 1., 10., 11., 12., 13., 14., 2., 3., 4.};
	Flt vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1., vec.active_length);
	PUSH(vec, 2., vec.active_length);
	PUSH(vec, 3., vec.active_length);
	PUSH(vec, 4., vec.active_length);
	PUSH(vec, 5., 0);
	float b[5] = {10., 11., 12., 13., 14.};
	INSERT(vec, b, 5, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_insert_double_vec(void **state)
{
	(void) state;
	double a[10] = {5., 1., 10., 11., 12., 13., 14., 2., 3., 4.};
	Dble vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	double b[5] = {10., 11., 12., 13., 14.};
	INSERT(vec, b, 5, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_insert_ldouble_vec(void **state)
{
	(void) state;
	long double a[10] = {5., 1., 10., 11., 12., 13., 14., 2., 3., 4.};
	LDble vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	long double b[5] = {10., 11., 12., 13., 14.};
	INSERT(vec, b, 5, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_insert_bool_vec(void **state)
{
	(void) state;
	bool a[10] = {true, true, false, false, false, false, false, true, true, true};
	LDble vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, true, vec.active_length);
	PUSH(vec, true, vec.active_length);
	PUSH(vec, true, vec.active_length);
	PUSH(vec, true, vec.active_length);
	PUSH(vec, true, 0);
	long double b[5] = {false, false, false, false, false};
	INSERT(vec, b, 5, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_insert_string_vec(void **state)
{
	(void) state;
	char *a[10] = {"Five", "One", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
		           "Two", "Three", "Four"};
	String vec;
	init_string_vector(&vec);
	PUSH(vec, "One", vec.active_length);
	PUSH(vec, "Two", vec.active_length);
	PUSH(vec, "Three", vec.active_length);
	PUSH(vec, "Four", vec.active_length);
	PUSH(vec, "Five", 0);
	char *b[5] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen"};
	INSERT(vec, b, 5, 2);
	int cmp;
	for (size_t i = 0; i < vec.active_length; i++) {
		cmp = strcmp(a[i], vec.array[i]);
		assert_int_equal(cmp, 0);
	}
	FREE(vec);
}
// ==========================================================================================
// ==========================================================================================
// TEST_INSERT_TYPE_ARR FUNCTIONS

void test_insert_short_arr(void **state) {
	(void) state;
	Short arr;
	short int a[5] = {1, 2, 3};
	short int b[2] = {9, 10};
	INIT_ARRAY(arr, a, 5, 2);
	INSERT(arr, b, 2, 0);
	short int c[5] = {9, 10, 1, 2, 3};
	for (size_t i = 0; i < arr.active_length; i++) {
		assert_int_equal(c[i], arr.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_insert_ushort_arr(void **state) {
	(void) state;
	UShort arr;
	unsigned short int a[5] = {1, 2, 3};
	unsigned short int b[2] = {9, 10};
	INIT_ARRAY(arr, a, 5, 2);
	INSERT(arr, b, 2, 0);
	unsigned short int c[5] = {9, 10, 1, 2, 3};
	for (size_t i = 0; i < arr.active_length; i++) {
		assert_int_equal(c[i], arr.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_insert_int_arr(void **state) {
	(void) state;
	Int arr;
	int a[5] = {1, 2, 3};
	int b[2] = {9, 10};
	INIT_ARRAY(arr, a, 5, 2);
	INSERT(arr, b, 2, 0);
	int c[5] = {9, 10, 1, 2, 3};
	for (size_t i = 0; i < arr.active_length; i++) {
		assert_int_equal(c[i], arr.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_insert_uint_arr(void **state) {
	(void) state;
	UInt arr;
	unsigned int a[5] = {1, 2, 3};
	unsigned int b[2] = {9, 10};
	INIT_ARRAY(arr, a, 5, 2);
	INSERT(arr, b, 2, 0);
	unsigned int c[5] = {9, 10, 1, 2, 3};
	for (size_t i = 0; i < arr.active_length; i++) {
		assert_int_equal(c[i], arr.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_insert_long_arr(void **state) {
	(void) state;
	LInt arr;
	long int a[5] = {1, 2, 3};
	long int b[2] = {9, 10};
	INIT_ARRAY(arr, a, 5, 2);
	INSERT(arr, b, 2, 0);
	long int c[5] = {9, 10, 1, 2, 3};
	for (size_t i = 0; i < arr.active_length; i++) {
		assert_int_equal(c[i], arr.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_insert_ulong_arr(void **state) {
	(void) state;
	ULInt arr;
	unsigned long int a[5] = {1, 2, 3};
	unsigned long int b[2] = {9, 10};
	INIT_ARRAY(arr, a, 5, 2);
	INSERT(arr, b, 2, 0);
	unsigned long int c[5] = {9, 10, 1, 2, 3};
	for (size_t i = 0; i < arr.active_length; i++) {
		assert_int_equal(c[i], arr.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_insert_llong_arr(void **state) {
	(void) state;
	LLInt arr;
	long long int a[5] = {1, 2, 3};
	long long int b[2] = {9, 10};
	INIT_ARRAY(arr, a, 5, 2);
	INSERT(arr, b, 2, 0);
	long long int c[5] = {9, 10, 1, 2, 3};
	for (size_t i = 0; i < arr.active_length; i++) {
		assert_int_equal(c[i], arr.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_insert_ullong_arr(void **state) {
	(void) state;
	ULLInt arr;
	unsigned long long int a[5] = {1, 2, 3};
	unsigned long long int b[2] = {9, 10};
	INIT_ARRAY(arr, a, 5, 2);
	INSERT(arr, b, 2, 0);
	unsigned long long int c[5] = {9, 10, 1, 2, 3};
	for (size_t i = 0; i < arr.active_length; i++) {
		assert_int_equal(c[i], arr.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_insert_char_arr(void **state) {
	(void) state;
	Char arr;
	char a[5] = {1, 2, 3};
	char b[2] = {9, 10};
	INIT_ARRAY(arr, a, 5, 2);
	INSERT(arr, b, 2, 0);
	char c[5] = {9, 10, 1, 2, 3};
	for (size_t i = 0; i < arr.active_length; i++) {
		assert_int_equal(c[i], arr.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_insert_uchar_arr(void **state) {
	(void) state;
	UChar arr;
	unsigned char a[5] = {1, 2, 3};
	unsigned char b[2] = {9, 10};
	INIT_ARRAY(arr, a, 5, 2);
	INSERT(arr, b, 2, 0);
	unsigned char c[5] = {9, 10, 1, 2, 3};
	for (size_t i = 0; i < arr.active_length; i++) {
		assert_int_equal(c[i], arr.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_insert_float_arr(void **state) {
	(void) state;
	Flt arr;
	float a[5] = {1., 2., 3.};
	float b[2] = {9., 10.};
	INIT_ARRAY(arr, a, 5, 2);
	INSERT(arr, b, 2, 0);
	float c[5] = {9., 10., 1., 2., 3.};
	for (size_t i = 0; i < arr.active_length; i++) {
		assert_int_equal(c[i], arr.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_insert_double_arr(void **state) {
	(void) state;
	Dble arr;
	double a[5] = {1, 2, 3};
	double b[2] = {9, 10};
	INIT_ARRAY(arr, a, 5, 2);
	INSERT(arr, b, 2, 0);
	double c[5] = {9, 10, 1, 2, 3};
	for (size_t i = 0; i < arr.active_length; i++) {
		assert_int_equal(c[i], arr.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_insert_ldouble_arr(void **state) {
	(void) state;
	LDble arr;
	long double a[5] = {1, 2, 3};
	long double b[2] = {9, 10};
	INIT_ARRAY(arr, a, 5, 2);
	INSERT(arr, b, 2, 0);
	long double c[5] = {9, 10, 1, 2, 3};
	for (size_t i = 0; i < arr.active_length; i++) {
		assert_int_equal(c[i], arr.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_insert_bool_arr(void **state) {
	(void) state;
	Bool arr;
	bool a[5] = {true, true, true};
	bool b[2] = {false, false};
	INIT_ARRAY(arr, a, 5, 2);
	INSERT(arr, b, 2, 0);
	bool c[5] = {false, false, true, true, true};
	for (size_t i = 0; i < arr.active_length; i++) {
		assert_int_equal(c[i], arr.array[i]);
	}
}
// ==========================================================================================
// ==========================================================================================
// eof