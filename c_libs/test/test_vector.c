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
// TEST SUM_TYPE_VEC FUNCTIONS

void test_sum_short_vec(void **state) {
	Short vec;
	INIT_VECTOR(vec, 5);
	short int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	short int b = SUM(vec);
	assert_int_equal(15, b);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_sum_ushort_vec(void **state) {
	UShort vec;
	INIT_VECTOR(vec, 5);
	unsigned short int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	unsigned short int b = SUM(vec);
	assert_int_equal(15, b);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_sum_int_vec(void **state) {
	Int vec;
	INIT_VECTOR(vec, 5);
	int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	int b = SUM(vec);
	assert_int_equal(15, b);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_sum_uint_vec(void **state) {
	UInt vec;
	INIT_VECTOR(vec, 5);
	unsigned int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	unsigned int b = SUM(vec);
	assert_int_equal(15, b);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_sum_long_vec(void **state) {
	LInt vec;
	INIT_VECTOR(vec, 5);
	long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	long int b = SUM(vec);
	assert_int_equal(15, b);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_sum_ulong_vec(void **state) {
	ULInt vec;
	INIT_VECTOR(vec, 5);
	unsigned long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	unsigned long int b = SUM(vec);
	assert_int_equal(15, b);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_sum_llong_vec(void **state) {
	LLInt vec;
	INIT_VECTOR(vec, 5);
	long long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	long long int b = SUM(vec);
	assert_int_equal(15, b);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_sum_ullong_vec(void **state) {
	ULLInt vec;
	INIT_VECTOR(vec, 5);
	unsigned long long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	unsigned long long int b = SUM(vec);
	assert_int_equal(15, b);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_sum_float_vec(void **state) {
	Flt vec;
	INIT_VECTOR(vec, 5);
	float a[5] = {1., 2., 3., 4., 5.};
	INSERT(vec, a, 5, 0);
	float b = SUM(vec);
	assert_float_equal(15.f, b, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_sum_double_vec(void **state) {
	Dble vec;
	INIT_VECTOR(vec, 5);
	double a[5] = {1., 2., 3., 4., 5.};
	INSERT(vec, a, 5, 0);
	double b = SUM(vec);
	assert_float_equal(15, b, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_sum_ldouble_vec(void **state) {
	LDble vec;
	INIT_VECTOR(vec, 5);
	long double a[5] = {1., 2., 3., 4., 5.};
	INSERT(vec, a, 5, 0);
	long double b = SUM(vec);
	assert_float_equal(15, b, 1.0e-3);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_sum_char_vec(void **state) {
	Char vec;
	INIT_VECTOR(vec, 5);
	char a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	char b = SUM(vec);
	assert_int_equal(15, b);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_sum_uchar_vec(void **state) {
	UChar vec;
	INIT_VECTOR(vec, 5);
	unsigned char a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	unsigned char b = SUM(vec);
	assert_int_equal(15, b);
	FREE(vec);
}
// ==========================================================================================
// ==========================================================================================
// TEST CUMSUM_TYPE_VEC FUNCTIONS

void test_cumsum_short_vec(void **state) {
	Short vec;
	INIT_VECTOR(vec, 5);
	short int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	Short new_vec = CUMSUM(vec);
	short int b[5] = {1, 3, 6, 10, 15};
	for (size_t i = 0; i < 5; i++) {
		assert_int_equal(b[i], new_vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_cumsum_ushort_vec(void **state) {
	UShort vec;
	INIT_VECTOR(vec, 5);
	unsigned short int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	UShort new_vec = CUMSUM(vec);
	unsigned short int b[5] = {1, 3, 6, 10, 15};
	for (size_t i = 0; i < 5; i++) {
		assert_int_equal(b[i], new_vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_cumsum_int_vec(void **state) {
	Int vec;
	INIT_VECTOR(vec, 5);
	int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	Int new_vec = CUMSUM(vec);
	int b[5] = {1, 3, 6, 10, 15};
	for (size_t i = 0; i < 5; i++) {
		assert_int_equal(b[i], new_vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_cumsum_uint_vec(void **state) {
	UInt vec;
	INIT_VECTOR(vec, 5);
	unsigned int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	UInt new_vec = CUMSUM(vec);
	unsigned int b[5] = {1, 3, 6, 10, 15};
	for (size_t i = 0; i < 5; i++) {
		assert_int_equal(b[i], new_vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_cumsum_long_vec(void **state) {
	LInt vec;
	INIT_VECTOR(vec, 5);
	long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	LInt new_vec = CUMSUM(vec);
	long int b[5] = {1, 3, 6, 10, 15};
	for (size_t i = 0; i < 5; i++) {
		assert_int_equal(b[i], new_vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_cumsum_ulong_vec(void **state) {
	ULInt vec;
	INIT_VECTOR(vec, 5);
	unsigned long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	ULInt new_vec = CUMSUM(vec);
	unsigned long int b[5] = {1, 3, 6, 10, 15};
	for (size_t i = 0; i < 5; i++) {
		assert_int_equal(b[i], new_vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_cumsum_llong_vec(void **state) {
	LLInt vec;
	INIT_VECTOR(vec, 5);
	long long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	LLInt new_vec = CUMSUM(vec);
	long long int b[5] = {1, 3, 6, 10, 15};
	for (size_t i = 0; i < 5; i++) {
		assert_int_equal(b[i], new_vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_cumsum_ullong_vec(void **state) {
	ULLInt vec;
	INIT_VECTOR(vec, 5);
	unsigned long long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	ULLInt new_vec = CUMSUM(vec);
	unsigned long long int b[5] = {1, 3, 6, 10, 15};
	for (size_t i = 0; i < 5; i++) {
		assert_int_equal(b[i], new_vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_cumsum_float_vec(void **state) {
	Flt vec;
	INIT_VECTOR(vec, 5);
    float a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	Flt new_vec = CUMSUM(vec);
	float b[5] = {1, 3, 6, 10, 15};
	for (size_t i = 0; i < 5; i++) {
		assert_float_equal(b[i], new_vec.array[i], 1.0e-3);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_cumsum_double_vec(void **state) {
	Dble vec;
	INIT_VECTOR(vec, 5);
	double a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	Dble new_vec = CUMSUM(vec);
	double b[5] = {1, 3, 6, 10, 15};
	for (size_t i = 0; i < 5; i++) {
		assert_float_equal(b[i], new_vec.array[i], 1.0e-3);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_cumsum_ldouble_vec(void **state) {
	LDble vec;
	INIT_VECTOR(vec, 5);
	long double a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	LDble new_vec = CUMSUM(vec);
	long double b[5] = {1, 3, 6, 10, 15};
	for (size_t i = 0; i < 5; i++) {
		assert_float_equal(b[i], new_vec.array[i], 1.0e-3);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_cumsum_char_vec(void **state) {
	Char vec;
	INIT_VECTOR(vec, 5);
	char a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	Char new_vec = CUMSUM(vec);
	char b[5] = {1, 3, 6, 10, 15};
	for (size_t i = 0; i < 5; i++) {
		assert_int_equal(b[i], new_vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_cumsum_uchar_vec(void **state) {
	UChar vec;
	INIT_VECTOR(vec, 5);
	unsigned char a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	UChar new_vec = CUMSUM(vec);
	unsigned char b[5] = {1, 3, 6, 10, 15};
	for (size_t i = 0; i < 5; i++) {
		assert_int_equal(b[i], new_vec.array[i]);
	}
	FREE(vec);
}
// ==========================================================================================
// ==========================================================================================
// TEST AVERAGE_TYPE FUNCTIONS

void test_average_short_vec(void **state) {
	Short vec;
	INIT_VECTOR(vec, 5);
	short int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	float avg = AVERAGE(vec);
	assert_float_equal(3.000f, avg, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_average_ushort_vec(void **state) {
	UShort vec;
	INIT_VECTOR(vec, 5);
	unsigned short int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	float avg = AVERAGE(vec);
	assert_float_equal(3.000f, avg, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_average_int_vec(void **state) {
	Int vec;
	INIT_VECTOR(vec, 5);
	int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	float avg = AVERAGE(vec);
	assert_float_equal(3.000f, avg, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_average_uint_vec(void **state) {
	UInt vec;
	INIT_VECTOR(vec, 5);
	unsigned int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	float avg = AVERAGE(vec);
	assert_float_equal(3.000f, avg, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_average_long_vec(void **state) {
	LInt vec;
	INIT_VECTOR(vec, 5);
	long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	double avg = AVERAGE(vec);
	assert_float_equal(3.000f, avg, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_average_ulong_vec(void **state) {
	ULInt vec;
	INIT_VECTOR(vec, 5);
	unsigned long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	double avg = AVERAGE(vec);
	assert_float_equal(3.000f, avg, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_average_llong_vec(void **state) {
	LLInt vec;
	INIT_VECTOR(vec, 5);
	long long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	long double avg = AVERAGE(vec);
	assert_float_equal(3.000f, avg, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_average_ullong_vec(void **state) {
	ULLInt vec;
	INIT_VECTOR(vec, 5);
	unsigned long long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	long double avg = AVERAGE(vec);
	assert_float_equal(3.000f, avg, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_average_float_vec(void **state) {
	Flt vec;
	INIT_VECTOR(vec, 5);
	float a[5] = {3.45, 2.18, 8.17, 0.56, 2.28};
	INSERT(vec, a, 5, 0);
	float avg = AVERAGE(vec);
	assert_float_equal(3.328f, avg, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_average_double_vec(void **state) {
	Dble vec;
	INIT_VECTOR(vec, 5);
	double a[5] = {3.45, 2.18, 8.17, 0.56, 2.28};
	INSERT(vec, a, 5, 0);
	double avg = AVERAGE(vec);
	assert_float_equal(3.328f, avg, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_average_ldouble_vec(void **state) {
	LDble vec;
	INIT_VECTOR(vec, 5);
	long double a[5] = {3.45, 2.18, 8.17, 0.56, 2.28};
	INSERT(vec, a, 5, 0);
	long double avg = AVERAGE(vec);
	assert_float_equal(3.328f, avg, 1.0e-3);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_average_char_vec(void **state) {
	Char vec;
	INIT_VECTOR(vec, 5);
	char a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	float avg = AVERAGE(vec);
	assert_float_equal(3.000f, avg, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_average_uchar_vec(void **state) {
	UChar vec;
	INIT_VECTOR(vec, 5);
	unsigned char a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	float avg = AVERAGE(vec);
	assert_float_equal(3.000f, avg, 1.0e-3);
	FREE(vec);
}
// ==========================================================================================
// ==========================================================================================
// TEST STDEV_TYPE_VEC FUNCTIONS

void test_stdev_short_vec(void **state) {
	Short vec;
	INIT_VECTOR(vec, 5);
	short int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	float stdev = STDEV(vec);
	assert_float_equal(1.581130, stdev, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_stdev_ushort_vec(void **state) {
	UShort vec;
	INIT_VECTOR(vec, 5);
	unsigned short int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	float stdev = STDEV(vec);
	assert_float_equal(1.581130, stdev, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_stdev_int_vec(void **state) {
	Int vec;
	INIT_VECTOR(vec, 5);
	int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	float stdev = STDEV(vec);
	assert_float_equal(1.581130, stdev, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_stdev_uint_vec(void **state) {
	UInt vec;
	INIT_VECTOR(vec, 5);
	unsigned int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	float stdev = STDEV(vec);
	assert_float_equal(1.581130, stdev, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_stdev_long_vec(void **state) {
	LInt vec;
	INIT_VECTOR(vec, 5);
	long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	double stdev = STDEV(vec);
	assert_float_equal(1.581130, stdev, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_stdev_ulong_vec(void **state) {
	ULInt vec;
	INIT_VECTOR(vec, 5);
	unsigned long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	double stdev = STDEV(vec);
	assert_float_equal(1.581130, stdev, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_stdev_llong_vec(void **state) {
	LLInt vec;
	INIT_VECTOR(vec, 5);
	long long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	long double stdev = STDEV(vec);
	assert_float_equal(1.581130, stdev, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_stdev_ullong_vec(void **state) {
	ULLInt vec;
	INIT_VECTOR(vec, 5);
	unsigned long long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	long double stdev = STDEV(vec);
	assert_float_equal(1.581130, stdev, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_stdev_float_vec(void **state) {
	Flt vec;
	INIT_VECTOR(vec, 5);
	float a[5] = {3.417, 2.222, 1.870, 9.123, 1.234};
	INSERT(vec, a, 5, 0);
	float stdev = STDEV(vec);
	assert_float_equal(3.20246, stdev, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_stdev_double_vec(void **state) {
	Dble vec;
	INIT_VECTOR(vec, 5);
	double a[5] = {3.417, 2.222, 1.870, 9.123, 1.234};
	INSERT(vec, a, 5, 0);
	double stdev = STDEV(vec);
	assert_float_equal(3.20246, stdev, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_stdev_ldouble_vec(void **state) {
	LDble vec;
	INIT_VECTOR(vec, 5);
	long double a[5] = {3.417, 2.222, 1.870, 9.123, 1.234};
	INSERT(vec, a, 5, 0);
	long double stdev = STDEV(vec);
	assert_float_equal(3.20246, stdev, 1.0e-3);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_stdev_char_vec(void **state) {
	Char vec;
	INIT_VECTOR(vec, 5);
	char a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	float stdev = STDEV(vec);
	assert_float_equal(1.581130, stdev, 1.0e-3);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_stdev_uchar_vec(void **state) {
	UChar vec;
	INIT_VECTOR(vec, 5);
	unsigned char a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	float stdev = STDEV(vec);
	assert_float_equal(1.581130, stdev, 1.0e-3);
	FREE(vec);
}
// ==========================================================================================
// ==========================================================================================
// TEST_MAX_TYPE_VEC FUNCTIONS

void test_max_short_vec(void **state) {
	Short vec;
	INIT_VECTOR(vec, 5);
	short int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	short int max = MAX(vec);
	assert_int_equal(max, 5);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_max_ushort_vec(void **state) {
	UShort vec;
	INIT_VECTOR(vec, 5);
	unsigned short int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	unsigned short int max = MAX(vec);
	assert_int_equal(max, 5);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_max_int_vec(void **state) {
	Int vec;
	INIT_VECTOR(vec, 5);
	int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	int max = MAX(vec);
	assert_int_equal(max, 5);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_max_uint_vec(void **state) {
	UInt vec;
	INIT_VECTOR(vec, 5);
	unsigned int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	unsigned int max = MAX(vec);
	assert_int_equal(max, 5);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_max_long_vec(void **state) {
	LInt vec;
	INIT_VECTOR(vec, 5);
	long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	long int max = MAX(vec);
	assert_int_equal(max, 5);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_max_ulong_vec(void **state) {
	ULInt vec;
	INIT_VECTOR(vec, 5);
	unsigned long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	unsigned long int max = MAX(vec);
	assert_int_equal(max, 5);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_max_llong_vec(void **state) {
	LLInt vec;
	INIT_VECTOR(vec, 5);
	long long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	long long int max = MAX(vec);
	assert_int_equal(max, 5);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_max_ullong_vec(void **state) {
	ULLInt vec;
	INIT_VECTOR(vec, 5);
	unsigned long long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	unsigned long long int max = MAX(vec);
	assert_int_equal(max, 5);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_max_float_vec(void **state) {
	Flt vec;
	INIT_VECTOR(vec, 5);
	float a[5] = {2.18, 2.02, 3.05, 4.18, 0.87};
	INSERT(vec, a, 5, 0);
	float max = MAX(vec);
	assert_float_equal(max, 4.18, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_max_double_vec(void **state) {
	Dble vec;
	INIT_VECTOR(vec, 5);
	double a[5] = {2.18, 2.02, 3.05, 4.18, 0.87};
	INSERT(vec, a, 5, 0);
	double max = MAX(vec);
	assert_float_equal(max, 4.18, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_max_ldouble_vec(void **state) {
	LDble vec;
	INIT_VECTOR(vec, 5);
	long double a[5] = {2.18, 2.02, 3.05, 4.18, 0.87};
	INSERT(vec, a, 5, 0);
	long double max = MAX(vec);
	assert_float_equal(max, 4.18, 1.0e-3);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_max_char_vec(void **state) {
	Char vec;
	INIT_VECTOR(vec, 5);
	char a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	char max = MAX(vec);
	assert_int_equal(max, 5);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_max_uchar_vec(void **state) {
	UChar vec;
	INIT_VECTOR(vec, 5);
	unsigned char a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	unsigned char max = MAX(vec);
	assert_int_equal(max, 5);
	FREE(vec);
}
// ==========================================================================================
// ==========================================================================================
// TEST_MIN_TYPE_VEC FUNCTIONS

void test_min_short_vec(void **state) {
	Short vec;
	INIT_VECTOR(vec, 5);
	short int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	short int max = MIN(vec);
	assert_int_equal(max, 1);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_min_ushort_vec(void **state) {
	UShort vec;
	INIT_VECTOR(vec, 5);
	unsigned short int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	unsigned short int max = MAX(vec);
	assert_int_equal(max, 5);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_min_int_vec(void **state) {
	Int vec;
	INIT_VECTOR(vec, 5);
	int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	int max = MIN(vec);
	assert_int_equal(max, 1);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_min_uint_vec(void **state) {
	UInt vec;
	INIT_VECTOR(vec, 5);
	unsigned int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	unsigned int max = MIN(vec);
	assert_int_equal(max, 1);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_min_long_vec(void **state) {
	LInt vec;
	INIT_VECTOR(vec, 5);
	long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	long int max = MIN(vec);
	assert_int_equal(max, 1);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_min_ulong_vec(void **state) {
	ULInt vec;
	INIT_VECTOR(vec, 5);
	unsigned long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	unsigned long int max = MIN(vec);
	assert_int_equal(max, 1);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_min_llong_vec(void **state) {
	LLInt vec;
	INIT_VECTOR(vec, 5);
	long long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	long long int max = MIN(vec);
	assert_int_equal(max, 1);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_min_ullong_vec(void **state) {
	ULLInt vec;
	INIT_VECTOR(vec, 5);
	unsigned long long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	unsigned long long int max = MIN(vec);
	assert_int_equal(max, 1);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_min_float_vec(void **state) {
	Flt vec;
	INIT_VECTOR(vec, 5);
	float a[5] = {2.18, 2.02, 3.05, 4.18, 0.87};
	INSERT(vec, a, 5, 0);
	float max = MIN(vec);
	assert_float_equal(max, 0.87, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_min_double_vec(void **state) {
	Dble vec;
	INIT_VECTOR(vec, 5);
	double a[5] = {2.18, 2.02, 3.05, 4.18, 0.87};
	INSERT(vec, a, 5, 0);
	double max = MIN(vec);
	assert_float_equal(max, 0.87, 1.0e-3);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_min_ldouble_vec(void **state) {
	LDble vec;
	INIT_VECTOR(vec, 5);
	long double a[5] = {2.18, 2.02, 3.05, 4.18, 0.87};
	INSERT(vec, a, 5, 0);
	long double max = MIN(vec);
	assert_float_equal(max, 0.87, 1.0e-3);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_min_char_vec(void **state) {
	Char vec;
	INIT_VECTOR(vec, 5);
	char a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	char max = MIN(vec);
	assert_int_equal(max, 1);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_min_uchar_vec(void **state) {
	UChar vec;
	INIT_VECTOR(vec, 5);
	unsigned char a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	unsigned char max = MIN(vec);
	assert_int_equal(max, 1);
	FREE(vec);
}
// ==========================================================================================
// ==========================================================================================
// TEST RANGE_TYPE_VEC FUNCTIONS

void test_range_short_vec(void **state) {
	Short vec;
	INIT_VECTOR(vec, 10);
	RANGE(vec, 2, 20, 2);
	short int a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_range_ushort_vec(void **state) {
	UShort vec;
	INIT_VECTOR(vec, 10);
	RANGE(vec, 2, 20, 2);
	unsigned short a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_range_int_vec(void **state) {
	Int vec;
	INIT_VECTOR(vec, 10);
	RANGE(vec, 2, 20, 2);
	int a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_range_uint_vec(void **state) {
	UInt vec;
	INIT_VECTOR(vec, 10);
	RANGE(vec, 2, 20, 2);
	unsigned int a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_range_long_vec(void **state) {
	LInt vec;
	INIT_VECTOR(vec, 10);
	RANGE(vec, 2, 20, 2);
	long int a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_range_ulong_vec(void **state) {
	ULInt vec;
	INIT_VECTOR(vec, 10);
	RANGE(vec, 2, 20, 2);
	unsigned long int a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_range_llong_vec(void **state) {
	LLInt vec;
	INIT_VECTOR(vec, 10);
	RANGE(vec, 2, 20, 2);
	long long int a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_range_ullong_vec(void **state) {
	ULLInt vec;
	INIT_VECTOR(vec, 10);
	RANGE(vec, 2, 20, 2);
	unsigned long long int a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_range_float_vec(void **state) {
	Flt vec;
	INIT_VECTOR(vec, 10);
	RANGE(vec, 2.5, 37.5, 2.5);
	float a[15] = {2.5, 5.0, 7.5, 10, 12.5, 15.0, 17.5, 20.0,
	               22.5, 25.0, 27.5, 30.0, 32.5, 35.0, 37.5};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_float_equal(a[i], vec.array[i], 1.0e-3);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_range_double_vec(void **state) {
	Dble vec;
	INIT_VECTOR(vec, 10);
	RANGE(vec, 2.5, 37.5, 2.5);
	double a[15] = {2.5, 5.0, 7.5, 10, 12.5, 15.0, 17.5, 20.0,
	               22.5, 25.0, 27.5, 30.0, 32.5, 35.0, 37.5};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_float_equal(a[i], vec.array[i], 1.0e-3);
	}
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_range_ldouble_vec(void **state) {
	LDble vec;
	INIT_VECTOR(vec, 10);
	RANGE(vec, 2.5, 37.5, 2.5);
	long double a[15] = {2.5, 5.0, 7.5, 10, 12.5, 15.0, 17.5, 20.0,
	               22.5, 25.0, 27.5, 30.0, 32.5, 35.0, 37.5};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_float_equal(a[i], vec.array[i], 1.0e-3);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_range_char_vec(void **state) {
	Char vec;
	INIT_VECTOR(vec, 10);
	RANGE(vec, 2, 20, 2);
	char a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_range_uchar_vec(void **state) {
	UChar vec;
	INIT_VECTOR(vec, 10);
	RANGE(vec, 2, 20, 2);
	unsigned char a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ==========================================================================================
// ==========================================================================================
// TEST COPY_TYPE_VEC FUNCTIONS

void test_copy_short_vec(void **state) {
    Short vec1;
	INIT_VECTOR(vec1, 5);
	short int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec1, a, 5, 0);
	Short vec2 = COPY(vec1);
	for (size_t i = 0; i < vec2.active_length; i++) {
		assert_int_equal(a[i], vec2.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_copy_ushort_vec(void **state) {
    UShort vec1;
	INIT_VECTOR(vec1, 5);
	unsigned short int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec1, a, 5, 0);
	UShort vec2 = COPY(vec1);
	for (size_t i = 0; i < vec2.active_length; i++) {
		assert_int_equal(a[i], vec2.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_copy_char_vec(void **state) {
    Char vec1;
	INIT_VECTOR(vec1, 5);
	char a[5] = {1, 2, 3, 4, 5};
	INSERT(vec1, a, 5, 0);
	Char vec2 = COPY(vec1);
	for (size_t i = 0; i < vec2.active_length; i++) {
		assert_int_equal(a[i], vec2.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_copy_uchar_vec(void **state) {
    UChar vec1;
	INIT_VECTOR(vec1, 5);
	unsigned char a[5] = {1, 2, 3, 4, 5};
	INSERT(vec1, a, 5, 0);
	UChar vec2 = COPY(vec1);
	for (size_t i = 0; i < vec2.active_length; i++) {
		assert_int_equal(a[i], vec2.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_copy_int_vec(void **state) {
    Int vec1;
	INIT_VECTOR(vec1, 5);
	int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec1, a, 5, 0);
	Int vec2 = COPY(vec1);
	for (size_t i = 0; i < vec2.active_length; i++) {
		assert_int_equal(a[i], vec2.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_copy_uint_vec(void **state) {
    UInt vec1;
	INIT_VECTOR(vec1, 5);
	unsigned int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec1, a, 5, 0);
	UInt vec2 = COPY(vec1);
	for (size_t i = 0; i < vec2.active_length; i++) {
		assert_int_equal(a[i], vec2.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_copy_long_vec(void **state) {
    LInt vec1;
	INIT_VECTOR(vec1, 5);
	long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec1, a, 5, 0);
	LInt vec2 = COPY(vec1);
	for (size_t i = 0; i < vec2.active_length; i++) {
		assert_int_equal(a[i], vec2.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_copy_ulong_vec(void **state) {
    ULInt vec1;
	INIT_VECTOR(vec1, 5);
	unsigned long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec1, a, 5, 0);
	ULInt vec2 = COPY(vec1);
	for (size_t i = 0; i < vec2.active_length; i++) {
		assert_int_equal(a[i], vec2.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_copy_llong_vec(void **state) {
    LLInt vec1;
	INIT_VECTOR(vec1, 5);
	long long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec1, a, 5, 0);
	LLInt vec2 = COPY(vec1);
	for (size_t i = 0; i < vec2.active_length; i++) {
		assert_int_equal(a[i], vec2.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_copy_ullong_vec(void **state) {
    ULLInt vec1;
	INIT_VECTOR(vec1, 5);
	unsigned long long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec1, a, 5, 0);
	ULLInt vec2 = COPY(vec1);
	for (size_t i = 0; i < vec2.active_length; i++) {
		assert_int_equal(a[i], vec2.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_copy_float_vec(void **state) {
    Flt vec1;
	INIT_VECTOR(vec1, 5);
	float a[5] = {1., 2., 3., 4., 5.};
	INSERT(vec1, a, 5, 0);
	Flt vec2 = COPY(vec1);
	for (size_t i = 0; i < vec2.active_length; i++) {
		assert_float_equal(a[i], vec2.array[i], 1.0e-3);
	}
}
// ------------------------------------------------------------------------------------------

void test_copy_double_vec(void **state) {
    Dble vec1;
	INIT_VECTOR(vec1, 5);
	double a[5] = {1., 2., 3., 4., 5.};
	INSERT(vec1, a, 5, 0);
	Dble vec2 = COPY(vec1);
	for (size_t i = 0; i < vec2.active_length; i++) {
		assert_float_equal(a[i], vec2.array[i], 1.0e-3);
	}
}
// ------------------------------------------------------------------------------------------

void test_copy_ldouble_vec(void **state) {
    LDble vec1;
	INIT_VECTOR(vec1, 5);
	long double a[5] = {1., 2., 3., 4., 5.};
	INSERT(vec1, a, 5, 0);
	LDble vec2 = COPY(vec1);
	for (size_t i = 0; i < vec2.active_length; i++) {
		assert_float_equal(a[i], vec2.array[i], 1.0e-3);
	}
}
// ------------------------------------------------------------------------------------------

void test_copy_bool_vec(void **state) {
    Bool vec1;
	INIT_VECTOR(vec1, 5);
	bool a[5] = {true, false, true, false, true};
	INSERT(vec1, a, 5, 0);
	Bool vec2 = COPY(vec1);
	for (size_t i = 0; i < vec2.active_length; i++) {
		assert_int_equal(a[i], vec2.array[i]);
	}
}
// ------------------------------------------------------------------------------------------

void test_copy_string_vec(void **state) {
    String vec1;
	init_string_vector(&vec1);
	char *a[5] = {"One", "Two", "Three", "Four", "Five"};
	INSERT(vec1, a, 5, 0);
	String vec2 = COPY(vec1);
	int cmp;
	for (size_t i = 0; i < vec2.active_length; i++) {
		cmp = strcmp(a[i], vec2.array[i]);
		assert_int_equal(cmp, 0);
	}
}
// ==========================================================================================
// ==========================================================================================

void test_char_vec_data(void **state) {
	Char vec;
	INIT_VECTOR(vec, 5);
    char a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	char b = IDATA(vec, 2);
	assert_int_equal(b, 3);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_uchar_vec_data(void **state) {
	UChar vec;
	INIT_VECTOR(vec, 5);
    unsigned char a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	unsigned char b = IDATA(vec, 2);
	assert_int_equal(b, 3);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_short_vec_data(void **state) {
	Short vec;
	INIT_VECTOR(vec, 5);
    short int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	short int b = IDATA(vec, 2);
	assert_int_equal(b, 3);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_ushort_vec_data(void **state) {
	UShort vec;
	INIT_VECTOR(vec, 5);
    unsigned short int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	unsigned short int b = IDATA(vec, 2);
	assert_int_equal(b, 3);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_int_vec_data(void **state) {
	Int vec;
	INIT_VECTOR(vec, 5);
    int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	int b = IDATA(vec, 2);
	assert_int_equal(b, 3);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_uint_vec_data(void **state) {
	UInt vec;
	INIT_VECTOR(vec, 5);
    unsigned int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	unsigned int b = IDATA(vec, 2);
	assert_int_equal(b, 3);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_long_vec_data(void **state) {
	LInt vec;
	INIT_VECTOR(vec, 5);
    long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	long int b = IDATA(vec, 2);
	assert_int_equal(b, 3);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_ulong_vec_data(void **state) {
	ULInt vec;
	INIT_VECTOR(vec, 5);
    unsigned long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	unsigned long int b = IDATA(vec, 2);
	assert_int_equal(b, 3);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_llong_vec_data(void **state) {
	LLInt vec;
	INIT_VECTOR(vec, 5);
    long long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	long long int b = IDATA(vec, 2);
	assert_int_equal(b, 3);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_ullong_vec_data(void **state) {
	ULLInt vec;
	INIT_VECTOR(vec, 5);
    unsigned long long int a[5] = {1, 2, 3, 4, 5};
	INSERT(vec, a, 5, 0);
	unsigned long long int b = IDATA(vec, 2);
	assert_int_equal(b, 3);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_float_vec_data(void **state) {
	Flt vec;
	INIT_VECTOR(vec, 5);
    float a[5] = {1., 2., 3., 4., 5.};
	INSERT(vec, a, 5, 0);
	float b = IDATA(vec, 2);
	assert_float_equal(b, 3.f, 1.0e-3);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_double_vec_data(void **state) {
	Dble vec;
	INIT_VECTOR(vec, 5);
    double a[5] = {1., 2., 3., 4., 5.};
	INSERT(vec, a, 5, 0);
	double b = IDATA(vec, 2);
	assert_float_equal(b, 3., 1.0e-3);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_ldouble_vec_data(void **state) {
	LDble vec;
	INIT_VECTOR(vec, 5);
    long double a[5] = {1., 2., 3., 4., 5.};
	INSERT(vec, a, 5, 0);
	long double b = IDATA(vec, 2);
	assert_float_equal(b, 3., 1.0e-3);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_bool_vec_data(void **state) {
	Bool vec;
	INIT_VECTOR(vec, 5);
    bool a[5] = {true, true, false, false, true};
	INSERT(vec, a, 5, 0);
	bool b = IDATA(vec, 2);
	assert_int_equal(b, false);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_string_vec_data(void **state) {
	String vec;
	init_string_vector(&vec);
    char *a[5] = {"One",  "Two", "Three", "Four", "Five"};
	INSERT(vec, a, 5, 0);
	char *b = IDATA(vec, 2);
	int cmp = strcmp(b, "Three");
	assert_int_equal(cmp, 0);
	FREE(vec);
}
// ==========================================================================================
// ==========================================================================================
// TEST_TRIM_TYPE_VEC

void test_trim_char_vec(void **state) {
	Char vec;
	INIT_VECTOR(vec, 20);
	char a[3] = {1, 2, 3};
	INSERT(vec, a, 3, 0);
	TRIM(vec);
	assert_int_equal(3, vec.allocated_length);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_trim_uchar_vec(void **state) {
	UChar vec;
	INIT_VECTOR(vec, 20);
	unsigned char a[3] = {1, 2, 3};
	INSERT(vec, a, 3, 0);
	TRIM(vec);
	assert_int_equal(3, vec.allocated_length);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_trim_short_vec(void **state) {
	Short vec;
	INIT_VECTOR(vec, 20);
	short int a[3] = {1, 2, 3};
	INSERT(vec, a, 3, 0);
	TRIM(vec);
	assert_int_equal(3, vec.allocated_length);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_trim_ushort_vec(void **state) {
	UShort vec;
	INIT_VECTOR(vec, 20);
	unsigned short int a[3] = {1, 2, 3};
	INSERT(vec, a, 3, 0);
	TRIM(vec);
	assert_int_equal(3, vec.allocated_length);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_trim_int_vec(void **state) {
	Int vec;
	INIT_VECTOR(vec, 20);
	int a[3] = {1, 2, 3};
	INSERT(vec, a, 3, 0);
	TRIM(vec);
	assert_int_equal(3, vec.allocated_length);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_trim_uint_vec(void **state) {
	UInt vec;
	INIT_VECTOR(vec, 20);
	unsigned int a[3] = {1, 2, 3};
	INSERT(vec, a, 3, 0);
	TRIM(vec);
	assert_int_equal(3, vec.allocated_length);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_trim_long_vec(void **state) {
	LInt vec;
	INIT_VECTOR(vec, 20);
	long int a[3] = {1, 2, 3};
	INSERT(vec, a, 3, 0);
	TRIM(vec);
	assert_int_equal(3, vec.allocated_length);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_trim_ulong_vec(void **state) {
	ULInt vec;
	INIT_VECTOR(vec, 20);
	unsigned long int a[3] = {1, 2, 3};
	INSERT(vec, a, 3, 0);
	TRIM(vec);
	assert_int_equal(3, vec.allocated_length);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_trim_llong_vec(void **state) {
	LLInt vec;
	INIT_VECTOR(vec, 20);
	long long int a[3] = {1, 2, 3};
	INSERT(vec, a, 3, 0);
	TRIM(vec);
	assert_int_equal(3, vec.allocated_length);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_trim_ullong_vec(void **state) {
	ULLInt vec;
	INIT_VECTOR(vec, 20);
	unsigned long long int a[3] = {1, 2, 3};
	INSERT(vec, a, 3, 0);
	TRIM(vec);
	assert_int_equal(3, vec.allocated_length);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_trim_float_vec(void **state) {
	Flt vec;
	INIT_VECTOR(vec, 20);
	float a[3] = {1., 2., 3.};
	INSERT(vec, a, 3, 0);
	TRIM(vec);
	assert_int_equal(3, vec.allocated_length);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_trim_double_vec(void **state) {
	Dble vec;
	INIT_VECTOR(vec, 20);
	double a[3] = {1., 2., 3.};
	INSERT(vec, a, 3, 0);
	TRIM(vec);
	assert_int_equal(3, vec.allocated_length);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_trim_ldouble_vec(void **state) {
	LDble vec;
	INIT_VECTOR(vec, 20);
	long double a[3] = {1., 2., 3.};
	INSERT(vec, a, 3, 0);
	TRIM(vec);
	assert_int_equal(3, vec.allocated_length);
	FREE(vec);
}
// ------------------------------------------------------------------------------------------

void test_trim_bool_vec(void **state) {
	Bool vec;
	INIT_VECTOR(vec, 20);
	bool a[3] = {true, false, true};
	INSERT(vec, a, 3, 0);
	TRIM(vec);
	assert_int_equal(3, vec.allocated_length);
	FREE(vec);
}
// ==========================================================================================
// ==========================================================================================
// eof
