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

void test_push_short(void **state)
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

void test_push_ushort(void **state)
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

void test_push_int(void **state)
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

void test_push_uint(void **state)
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

void test_push_long(void **state)
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

void test_push_ulong(void **state)
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

void test_push_llong(void **state)
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

void test_push_ullong(void **state)
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

void test_push_char(void **state)
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

void test_push_uchar(void **state)
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

void test_push_float(void **state)
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

void test_push_double(void **state)
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

void test_push_ldouble(void **state)
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

void test_push_bool(void **state)
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

void test_push_string(void **state)
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

void test_insert_short(void **state)
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

void test_insert_ushort(void **state)
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

void test_insert_int(void **state)
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

void test_insert_uint(void **state)
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

void test_insert_long(void **state)
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

void test_insert_ulong(void **state)
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

void test_insert_llong(void **state)
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

void test_insert_ullong(void **state)
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

void test_insert_char(void **state)
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

void test_insert_uchar(void **state)
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

void test_insert_float(void **state)
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

void test_insert_double(void **state)
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

void test_insert_ldouble(void **state)
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

void test_insert_bool(void **state)
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

void test_insert_string(void **state)
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
// eof
