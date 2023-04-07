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
// TEST_POP_TYPE_VEC FUNCTION

void test_pop_short_vec(void **state) {
	(void) state;
	Short vec;
	short int a[5] = {1, 2, 3, 4, 5};
	INIT_VECTOR(vec, 5);
	INSERT(vec, a, 5, 0);
	POP_INDEX(vec, 2);
	short int b[4] = {1, 2, 4, 5};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(b[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_pop_ushort_vec(void **state) {
	(void) state;
	UShort vec;
	unsigned short int a[5] = {1, 2, 3, 4, 5};
	INIT_VECTOR(vec, 5);
	INSERT(vec, a, 5, 0);
	POP_INDEX(vec, 2);
	unsigned short int b[4] = {1, 2, 4, 5};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(b[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_pop_int_vec(void **state) {
	(void) state;
	Int vec;
	int a[5] = {1, 2, 3, 4, 5};
	INIT_VECTOR(vec, 5);
	INSERT(vec, a, 5, 0);
	POP_INDEX(vec, 2);
	int b[4] = {1, 2, 4, 5};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(b[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_pop_uint_vec(void **state) {
	(void) state;
	UInt vec;
	unsigned int a[5] = {1, 2, 3, 4, 5};
	INIT_VECTOR(vec, 5);
	INSERT(vec, a, 5, 0);
	POP_INDEX(vec, 2);
	unsigned int b[4] = {1, 2, 4, 5};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(b[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_pop_long_vec(void **state) {
	(void) state;
	LInt vec;
	long int a[5] = {1, 2, 3, 4, 5};
	INIT_VECTOR(vec, 5);
	INSERT(vec, a, 5, 0);
	POP_INDEX(vec, 2);
	long int b[4] = {1, 2, 4, 5};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(b[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_pop_ulong_vec(void **state) {
	(void) state;
	ULInt vec;
	unsigned long int a[5] = {1, 2, 3, 4, 5};
	INIT_VECTOR(vec, 5);
	INSERT(vec, a, 5, 0);
	POP_INDEX(vec, 2);
	unsigned long int b[4] = {1, 2, 4, 5};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(b[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_pop_llong_vec(void **state) {
	(void) state;
	LLInt vec;
	long long int a[5] = {1, 2, 3, 4, 5};
	INIT_VECTOR(vec, 5);
	INSERT(vec, a, 5, 0);
	POP_INDEX(vec, 2);
	long long int b[4] = {1, 2, 4, 5};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(b[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_pop_ullong_vec(void **state) {
	(void) state;
	ULLInt vec;
	unsigned long long int a[5] = {1, 2, 3, 4, 5};
	INIT_VECTOR(vec, 5);
	INSERT(vec, a, 5, 0);
	POP_INDEX(vec, 2);
	unsigned long long int b[4] = {1, 2, 4, 5};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(b[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_pop_float_vec(void **state) {
	(void) state;
	Flt vec;
	float a[5] = {1., 2., 3., 4., 5.};
	INIT_VECTOR(vec, 5);
	INSERT(vec, a, 5, 0);
	POP_INDEX(vec, 2);
	float b[4] = {1., 2., 4., 5.};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_float_equal(b[i], vec.array[i], 1.0e-3);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_pop_double_vec(void **state) {
	(void) state;
	Dble vec;
	double a[5] = {1., 2., 3., 4., 5.};
	INIT_VECTOR(vec, 5);
	INSERT(vec, a, 5, 0);
	POP_INDEX(vec, 2);
	double b[4] = {1., 2., 4., 5.};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_float_equal(b[i], vec.array[i], 1.0e-3);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_pop_ldouble_vec(void **state) {
	(void) state;
	LDble vec;
	long double a[5] = {1., 2., 3., 4., 5.};
	INIT_VECTOR(vec, 5);
	INSERT(vec, a, 5, 0);
	POP_INDEX(vec, 2);
	long double b[4] = {1., 2., 4., 5.};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_float_equal(b[i], vec.array[i], 1.0e-3);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_pop_bool_vec(void **state) {
	(void) state;
	Bool vec;
	bool a[5] = {true, true, false, true, true};
	INIT_VECTOR(vec, 5);
	INSERT(vec, a, 5, 0);
	POP_INDEX(vec, 2);
	bool b[4] = {true, true, true, true};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(b[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_pop_string_vec(void **state) {
	(void) state;
	String vec;
	char *a[5] = {"One", "Two", "Three", "Four", "Five"};
	init_string_vector(&vec);
	INSERT(vec, a, 5, 0);
	POP_INDEX(vec, 2);
	char *b[4] = {"One", "Two", "Four", "Five"};
	int cmp;
	for (size_t i = 0; i < vec.active_length; i++) {
		cmp = strcmp(b[i], vec.array[i]);
		assert_int_equal(0, cmp);
	}
	FREE(vec);
}
// ==========================================================================================
// ==========================================================================================
 // TEST_REPLACE_TYPE_VALUES_VEC FUNCTIONS

void test_replace_short_values_vec(void **state)
{
	(void) state;
	short int correct[5] = {2, 2, 2, 4, 2};
	Short vec;
	INIT_VECTOR(vec, 5);

	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 1, vec.active_length);

	REPLACE_VALUES(vec, 1, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(correct[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_replace_ushort_values_vec(void **state)
{
	(void) state;
	unsigned short int correct[5] = {2, 2, 2, 4, 2};
	UShort vec;
	INIT_VECTOR(vec, 5);

	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 1, vec.active_length);

	REPLACE_VALUES(vec, 1, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(correct[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_replace_int_values_vec(void **state)
{
	(void) state;
	int correct[5] = {2, 2, 2, 4, 2};
	Int vec;
	INIT_VECTOR(vec, 5);

	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 1, vec.active_length);

	REPLACE_VALUES(vec, 1, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(correct[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_replace_uint_values_vec(void **state)
{
	(void) state;
	unsigned int correct[5] = {2, 2, 2, 4, 2};
	UInt vec;
	INIT_VECTOR(vec, 5);

	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 1, vec.active_length);

	REPLACE_VALUES(vec, 1, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(correct[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_replace_long_values_vec(void **state)
{
	(void) state;
	long int correct[5] = {2, 2, 2, 4, 2};
	LInt vec;
	INIT_VECTOR(vec, 5);

	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 1, vec.active_length);

	REPLACE_VALUES(vec, 1, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(correct[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_replace_ulong_values_vec(void **state)
{
	(void) state;
	unsigned long int correct[5] = {2, 2, 2, 4, 2};
	ULInt vec;
	INIT_VECTOR(vec, 5);

	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 1, vec.active_length);

	REPLACE_VALUES(vec, 1, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(correct[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_replace_llong_values_vec(void **state)
{
	(void) state;
	long long int correct[5] = {2, 2, 2, 4, 2};
	LLInt vec;
	INIT_VECTOR(vec, 5);

	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 1, vec.active_length);

	REPLACE_VALUES(vec, 1, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(correct[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_replace_ullong_values_vec(void **state)
{
	(void) state;
	unsigned long long int correct[5] = {2, 2, 2, 4, 2};
	ULLInt vec;
	INIT_VECTOR(vec, 5);

	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 1, vec.active_length);

	REPLACE_VALUES(vec, 1, 2);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(correct[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_replace_float_values_vec(void **state)
{
	(void) state;
	float correct[5] = {2., 2., 2., 4., 2.};
	Flt vec;
	INIT_VECTOR(vec, 5);

	PUSH(vec, 1.f, vec.active_length);
	PUSH(vec, 2.f, vec.active_length);
	PUSH(vec, 1.f, vec.active_length);
	PUSH(vec, 4.f, vec.active_length);
	PUSH(vec, 1.f, vec.active_length);

	REPLACE_VALUES(vec, 1.f, 2.f);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_float_equal(correct[i], vec.array[i], 1.0e-3);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_replace_double_values_vec(void **state)
{
	(void) state;
	double correct[5] = {2., 2., 2., 4., 2.};
	Dble vec;
	INIT_VECTOR(vec, 5);

	PUSH(vec, 1., vec.active_length);
	PUSH(vec, 2., vec.active_length);
	PUSH(vec, 1., vec.active_length);
	PUSH(vec, 4., vec.active_length);
	PUSH(vec, 1., vec.active_length);

	REPLACE_VALUES(vec, 1., 2.);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_float_equal(correct[i], vec.array[i], 1.0e-3);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_replace_ldouble_values_vec(void **state)
{
	(void) state;
	long double correct[5] = {2., 2., 2., 4., 2.};
	LDble vec;
	INIT_VECTOR(vec, 5);

	PUSH(vec, 1., vec.active_length);
	PUSH(vec, 2., vec.active_length);
	PUSH(vec, 1., vec.active_length);
	PUSH(vec, 4., vec.active_length);
	PUSH(vec, 1., vec.active_length);

	REPLACE_VALUES(vec, 1., 2.);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_float_equal(correct[i], vec.array[i], 1.0e-3);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_replace_char_values_vec(void **state)
{
	(void) state;
	char correct[5] = {'b', 'b', 'b','b', 'b'};
	Char vec;
	INIT_VECTOR(vec, 5);

	PUSH(vec, 'a', vec.active_length);
	PUSH(vec, 'b', vec.active_length);
	PUSH(vec, 'a', vec.active_length);
	PUSH(vec, 'a', vec.active_length);
	PUSH(vec, 'a', vec.active_length);

	REPLACE_VALUES(vec, 'a', 'b');
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_true(correct[i] == vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_replace_uchar_values_vec(void **state)
{
	(void) state;
	unsigned char correct[5] = {'b', 'b', 'b','b', 'b'};
	UChar vec;
	INIT_VECTOR(vec, 5);

	PUSH(vec, 'a', vec.active_length);
	PUSH(vec, 'b', vec.active_length);
	PUSH(vec, 'a', vec.active_length);
	PUSH(vec, 'a', vec.active_length);
	PUSH(vec, 'a', vec.active_length);

	REPLACE_VALUES(vec, 'a', 'b');
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_true(correct[i] == vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_replace_bool_values_vec(void **state)
{
	(void) state;
	bool correct[5] = {true, true, true, true, true};
	UChar vec;
	INIT_VECTOR(vec, 5);

	PUSH(vec, true, vec.active_length);
	PUSH(vec, false, vec.active_length);
	PUSH(vec, true, vec.active_length);
	PUSH(vec, false, vec.active_length);
	PUSH(vec, false, vec.active_length);

	REPLACE_VALUES(vec, false, true);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_true(correct[i] == vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_replace_string_values_vec(void **state) {
	String vec;
	init_string_vector(&vec);
	PUSH(vec, "Hello", vec.active_length);
	PUSH(vec, "Goodbye", vec.active_length);
	PUSH(vec, "Hello", vec.active_length);
	PUSH(vec, "Goodbye", vec.active_length);
	REPLACE_VALUES(vec, "Hello", "Goodbye");
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_true(strcmp("Goodbye", vec.array[i]) == 0);
	}
	FREE(vec);
}
// ==========================================================================================
// ==========================================================================================

void test_delete_short_dup_vec(void **state) {
	short int a[6] = {1, 1, 2, 2, 3, 3};
	Short vec;
	INIT_VECTOR(vec, 6);
	INSERT(vec, a, 6, 0);
	DELETE_DUPLICATES(vec);
	short int b[3] = {1, 2, 3};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(vec.array[i], b[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_delete_ushort_dup_vec(void **state) {
	unsigned short int a[6] = {1, 1, 2, 2, 3, 3};
	UShort vec;
	INIT_VECTOR(vec, 6);
	INSERT(vec, a, 6, 0);
	DELETE_DUPLICATES(vec);
	unsigned short int b[3] = {1, 2, 3};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(vec.array[i], b[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_delete_int_dup_vec(void **state) {
	int a[6] = {1, 1, 2, 2, 3, 3};
	Int vec;
	INIT_VECTOR(vec, 6);
	INSERT(vec, a, 6, 0);
	DELETE_DUPLICATES(vec);
	int b[3] = {1, 2, 3};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(vec.array[i], b[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_delete_uint_dup_vec(void **state) {
	unsigned int a[6] = {1, 1, 2, 2, 3, 3};
	UInt vec;
	INIT_VECTOR(vec, 6);
	INSERT(vec, a, 6, 0);
	DELETE_DUPLICATES(vec);
	unsigned int b[3] = {1, 2, 3};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(vec.array[i], b[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_delete_long_dup_vec(void **state) {
	long int a[6] = {1, 1, 2, 2, 3, 3};
	LInt vec;
	INIT_VECTOR(vec, 6);
	INSERT(vec, a, 6, 0);
	DELETE_DUPLICATES(vec);
	long int b[3] = {1, 2, 3};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(vec.array[i], b[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_delete_ulong_dup_vec(void **state) {
	unsigned long int a[6] = {1, 1, 2, 2, 3, 3};
	ULInt vec;
	INIT_VECTOR(vec, 6);
	INSERT(vec, a, 6, 0);
	DELETE_DUPLICATES(vec);
	unsigned long int b[3] = {1, 2, 3};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(vec.array[i], b[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_delete_llong_dup_vec(void **state) {
	long long int a[6] = {1, 1, 2, 2, 3, 3};
	LLInt vec;
	INIT_VECTOR(vec, 6);
	INSERT(vec, a, 6, 0);
	DELETE_DUPLICATES(vec);
	long long int b[3] = {1, 2, 3};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(vec.array[i], b[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_delete_ullong_dup_vec(void **state) {
	unsigned long long int a[6] = {1, 1, 2, 2, 3, 3};
	ULLInt vec;
	INIT_VECTOR(vec, 6);
	INSERT(vec, a, 6, 0);
	DELETE_DUPLICATES(vec);
	unsigned long long int b[3] = {1, 2, 3};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(vec.array[i], b[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_delete_float_dup_vec(void **state) {
	float a[6] = {1., 1., 2., 2., 3., 3.};
	Flt vec;
	INIT_VECTOR(vec, 6);
	INSERT(vec, a, 6, 0);
	DELETE_DUPLICATES(vec);
	float b[3] = {1., 2., 3.};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(vec.array[i], b[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_delete_double_dup_vec(void **state) {
	double a[6] = {1., 1., 2., 2., 3., 3.};
	Dble vec;
	INIT_VECTOR(vec, 6);
	INSERT(vec, a, 6, 0);
	DELETE_DUPLICATES(vec);
	double b[3] = {1., 2., 3.};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(vec.array[i], b[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_delete_ldouble_dup_vec(void **state) {
	long double a[6] = {1., 1., 2., 2., 3., 3.};
	LDble vec;
	INIT_VECTOR(vec, 6);
	INSERT(vec, a, 6, 0);
	DELETE_DUPLICATES(vec);
	long double b[3] = {1., 2., 3.};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(vec.array[i], b[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_delete_char_dup_vec(void **state) {
	char a[6] = {'a', 'a', 'b', 'b', 'c', 'c'};
	Char vec;
	INIT_VECTOR(vec, 6);
	INSERT(vec, a, 6, 0);
	DELETE_DUPLICATES(vec);
	char b[3] = {'a', 'b', 'c'};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(vec.array[i], b[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_delete_uchar_dup_vec(void **state) {
	unsigned char a[6] = {'a', 'a', 'b', 'b', 'c', 'c'};
	UChar vec;
	INIT_VECTOR(vec, 6);
	INSERT(vec, a, 6, 0);
	DELETE_DUPLICATES(vec);
	unsigned char b[3] = {'a', 'b', 'c'};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(vec.array[i], b[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_delete_string_dup_vec(void **state) {
	char *a[] = {"One", "Two", "Three"};
	int test;
	String vec;
	init_string_vector(&vec);
	PUSH(vec, "One", 0);
	PUSH(vec, "One", 1);
	PUSH(vec, "Two", 2);
	PUSH(vec, "Two", 3);
	PUSH(vec, "Three", 4);
	PUSH(vec, "Three", 5);
	DELETE_DUPLICATES(vec);
	for (size_t i = 0; i < vec.active_length; i++) {
		test = strcmp(a[i], vec.array[i]);
		assert_int_equal(test, 0);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_delete_bool_dup_vec(void **state) {
	bool a[6] = {true, true, false, false, true, false};
	Bool vec;
	INIT_VECTOR(vec, 6);
	INSERT(vec, a, 6, 0);
	DELETE_DUPLICATES(vec);
	bool b[2] = {true, false};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(vec.array[i], b[i]);
	}
	FREE(vec);
}
// ==========================================================================================
// ==========================================================================================
// TEST REVERSE_TYPE FUNCTIONS

void test_reverse_short_vec(void **state) {
	Short vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, vec.active_length);
	REVERSE(vec);
	short int a[5] = {5, 4, 3, 2, 1};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_reverse_ushort_vec(void **state) {
	UShort vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, vec.active_length);
	REVERSE(vec);
	unsigned short int a[5] = {5, 4, 3, 2, 1};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_reverse_int_vec(void **state) {
	Int vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, vec.active_length);
	REVERSE(vec);
	int a[5] = {5, 4, 3, 2, 1};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_reverse_uint_vec(void **state) {
	UInt vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, vec.active_length);
	REVERSE(vec);
	unsigned int a[5] = {5, 4, 3, 2, 1};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_reverse_long_vec(void **state) {
	LInt vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, vec.active_length);
	REVERSE(vec);
	long int a[5] = {5, 4, 3, 2, 1};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_reverse_ulong_vec(void **state) {
	ULInt vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, vec.active_length);
	REVERSE(vec);
	unsigned long int a[5] = {5, 4, 3, 2, 1};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_reverse_llong_vec(void **state) {
	LLInt vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, vec.active_length);
	REVERSE(vec);
	long long int a[5] = {5, 4, 3, 2, 1};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_reverse_ullong_vec(void **state) {
	ULLInt vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, vec.active_length);
	REVERSE(vec);
	unsigned long long int a[5] = {5, 4, 3, 2, 1};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_reverse_float_vec(void **state) {
	Flt vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1.f, vec.active_length);
	PUSH(vec, 2.f, vec.active_length);
	PUSH(vec, 3.f, vec.active_length);
	PUSH(vec, 4.f, vec.active_length);
	PUSH(vec, 5.f, vec.active_length);
	REVERSE(vec);
	float a[5] = {5., 4., 3., 2., 1.};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_float_equal(a[i], vec.array[i], 1.0e-3);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_reverse_double_vec(void **state) {
	Dble vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1., vec.active_length);
	PUSH(vec, 2., vec.active_length);
	PUSH(vec, 3., vec.active_length);
	PUSH(vec, 4., vec.active_length);
	PUSH(vec, 5., vec.active_length);
	REVERSE(vec);
	double a[5] = {5., 4., 3., 2., 1.};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_reverse_ldouble_vec(void **state) {
	LDble vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1., vec.active_length);
	PUSH(vec, 2., vec.active_length);
	PUSH(vec, 3., vec.active_length);
	PUSH(vec, 4., vec.active_length);
	PUSH(vec, 5., vec.active_length);
	REVERSE(vec);
	long double a[5] = {5., 4., 3., 2., 1.};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_float_equal(a[i], vec.array[i], 1.0e-3);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_reverse_char_vec(void **state) {
	Char vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 'a', vec.active_length);
	PUSH(vec, 'b', vec.active_length);
	PUSH(vec, 'c', vec.active_length);
	PUSH(vec, 'd', vec.active_length);
	PUSH(vec, 'e', vec.active_length);
	REVERSE(vec);
	char a[5] = {'e', 'd', 'c', 'b', 'a'};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_true(a[i] == vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_reverse_uchar_vec(void **state) {
	UChar vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 'a', vec.active_length);
	PUSH(vec, 'b', vec.active_length);
	PUSH(vec, 'c', vec.active_length);
	PUSH(vec, 'd', vec.active_length);
	PUSH(vec, 'e', vec.active_length);
	REVERSE(vec);
	unsigned char a[5] = {'e', 'd', 'c', 'b', 'a'};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_true(a[i] == vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_reverse_bool_vec(void **state) {
	Bool vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, true, vec.active_length);
	PUSH(vec, true, vec.active_length);
	PUSH(vec, false, vec.active_length);
	PUSH(vec, false, vec.active_length);
	PUSH(vec, false, vec.active_length);
	REVERSE(vec);
	bool a[5] = {false, false, false, true, true};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_true(a[i] == vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_reverse_string_vec(void **state) {
	char *a[] = {"Four", "Three", "Two", "One"};
	int test;
	String vec;
	init_string_vector(&vec);
	PUSH(vec, "One", vec.active_length);
	PUSH(vec, "Two", vec.active_length);
	PUSH(vec, "Three", vec.active_length);
	PUSH(vec, "Four", vec.active_length);
	REVERSE(vec);
	for (size_t i = 0; i < vec.active_length; i++) {
		test = strcmp(a[i], vec.array[i]);
		assert_int_equal(0, test);
	}
	FREE(vec);
}
// ==========================================================================================
// ==========================================================================================

void test_sort_short_vec(void **state) {
	Short vec;
	INIT_VECTOR(vec, 5);
	short int a[5] = {2, 5, 3, 1, 4};
	INSERT(vec, a, 5, 0);
	SORT(vec, FORWARD);
	short int b[5] = {1, 2, 3, 4, 5};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(b[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_sort_ushort_vec(void **state) {
	UShort vec;
	INIT_VECTOR(vec, 5);
	unsigned short int a[5] = {2, 5, 3, 1, 4};
	INSERT(vec, a, 5, 0);
	SORT(vec, FORWARD);
	unsigned short int b[5] = {1, 2, 3, 4, 5};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(b[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_sort_int_vec(void **state) {
	Int vec;
	INIT_VECTOR(vec, 5);
	int a[5] = {2, 5, 3, 1, 4};
	INSERT(vec, a, 5, 0);
	SORT(vec, FORWARD);
	int b[5] = {1, 2, 3, 4, 5};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(b[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_sort_uint_vec(void **state) {
	UInt vec;
	INIT_VECTOR(vec, 5);
	unsigned int a[5] = {2, 5, 3, 1, 4};
	INSERT(vec, a, 5, 0);
	SORT(vec, FORWARD);
	unsigned int b[5] = {1, 2, 3, 4, 5};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(b[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_sort_long_vec(void **state) {
	LInt vec;
	INIT_VECTOR(vec, 5);
	long int a[5] = {2, 5, 3, 1, 4};
	INSERT(vec, a, 5, 0);
	SORT(vec, FORWARD);
	long int b[5] = {1, 2, 3, 4, 5};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(b[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_sort_ulong_vec(void **state) {
	ULInt vec;
	INIT_VECTOR(vec, 5);
	unsigned long int a[5] = {2, 5, 3, 1, 4};
	INSERT(vec, a, 5, 0);
	SORT(vec, FORWARD);
	unsigned long int b[5] = {1, 2, 3, 4, 5};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(b[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_sort_llong_vec(void **state) {
	LLInt vec;
	INIT_VECTOR(vec, 5);
	long long int a[5] = {2, 5, 3, 1, 4};
	INSERT(vec, a, 5, 0);
	SORT(vec, FORWARD);
	long long int b[5] = {1, 2, 3, 4, 5};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(b[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_sort_ullong_vec(void **state) {
	ULLInt vec;
	INIT_VECTOR(vec, 5);
	unsigned long long int a[5] = {2, 5, 3, 1, 4};
	INSERT(vec, a, 5, 0);
	SORT(vec, FORWARD);
	unsigned long long int b[5] = {1, 2, 3, 4, 5};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(b[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_sort_float_vec(void **state) {
	Flt vec;
	INIT_VECTOR(vec, 5);
	float a[5] = {2., 5., 3., 1., 4.};
	INSERT(vec, a, 5, 0);
	SORT(vec, FORWARD);
	float b[5] = {1., 2., 3., 4., 5.};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_float_equal(b[i], vec.array[i], 1.0e-3);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_sort_double_vec(void **state) {
	Dble vec;
	INIT_VECTOR(vec, 5);
	double a[5] = {2, 5, 3, 1, 4};
	INSERT(vec, a, 5, 0);
	SORT(vec, FORWARD);
	double b[5] = {1, 2, 3, 4, 5};
	for (size_t i = 0; i < vec.active_length; i++) {
	 	assert_float_equal(b[i], vec.array[i], 1.0e-3);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_sort_ldouble_vec(void **state) {
	LDble vec;
	INIT_VECTOR(vec, 5);
	long double a[5] = {2., 5., 3., 1., 4.};
	INSERT(vec, a, 5, 0);
	SORT(vec, FORWARD);
	long double b[5] = {1., 2., 3., 4., 5.};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_float_equal(b[i], vec.array[i], 1.0e-3);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_sort_char_vec(void **state) {
	Char vec;
	INIT_VECTOR(vec, 5);
	char a[5] = {'b', 'e', 'c', 'a', 'd'};
	INSERT(vec, a, 5, 0);
	SORT(vec, FORWARD);
	char b[5] = {'a', 'b', 'c', 'd', 'e'};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_true(b[i] == vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_sort_uchar_vec(void **state) {
	UChar vec;
	INIT_VECTOR(vec, 5);
	unsigned char a[5] = {'b', 'e', 'c', 'a', 'd'};
	INSERT(vec, a, 5, 0);
	SORT(vec, FORWARD);
	unsigned char b[5] = {'a', 'b', 'c', 'd', 'e'};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_true(b[i] == vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_sort_bool_vec(void **state) {
	Bool vec;
	INIT_VECTOR(vec, 5);
	bool a[5] = {true, false, true, false, true};
	INSERT(vec, a, 5, 0);
	SORT(vec, FORWARD);
	bool b[5] = {true, true, true, false, false};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_true(b[i] == vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_sort_string_vec(void **state) {
	String vec;
	init_string_vector(&vec);
	PUSH(vec, "Xylaphone", 0);
	PUSH(vec, "Apple", 1);
	PUSH(vec, "Cucumber", 2);
	PUSH(vec, "Banana", 3);
    PUSH(vec, "Zuchini", 4);
	SORT(vec, FORWARD);
	const char* arr[] = {"Apple", "Banana", "Cucumber", "Xylaphone", "Zuchini"};
	int test;
	for (size_t i = 0; i < vec.active_length; i++) {
		test = strcmp(arr[i], vec.array[i]);
		assert_int_equal(test, 0);
	}
	FREE(vec);
}
// ==========================================================================================
// ==========================================================================================
// eof
