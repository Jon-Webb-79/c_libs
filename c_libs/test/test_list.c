// ================================================================================
// ================================================================================
// - File:    test_list.c
// - Purpose: Describe the file purpose here
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    August 31, 2022
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// Include modules here

#include "test_list.h"

void test_push_short_list(void **state)
{
	(void) state;
	short int a[5] = {5, 1, 2, 3, 4};
	ShortLL list;
	INIT_LIST(list);
	PUSH(list, 1, list.active_length);
	PUSH(list, 2, list.active_length);
	PUSH(list, 3, list.active_length);
	PUSH(list, 4, list.active_length);
	PUSH(list, 5, 0);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), a[i]);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_push_ushort_list(void **state)
{
	(void) state;
	unsigned short int a[5] = {5, 1, 2, 3, 4};
	UShortLL list;
	INIT_LIST(list);
	PUSH(list, 1, list.active_length);
	PUSH(list, 2, list.active_length);
	PUSH(list, 3, list.active_length);
	PUSH(list, 4, list.active_length);
	PUSH(list, 5, 0);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), a[i]);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_push_int_list(void **state)
{
	(void) state;
	int a[5] = {5, 1, 2, 3, 4};
	IntLL list;
	INIT_LIST(list);
	PUSH(list, 1, list.active_length);
	PUSH(list, 2, list.active_length);
	PUSH(list, 3, list.active_length);
	PUSH(list, 4, list.active_length);
	PUSH(list, 5, 0);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), a[i]);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_push_uint_list(void **state)
{
	(void) state;
	unsigned int a[5] = {5, 1, 2, 3, 4};
	UIntLL list;
	INIT_LIST(list);
	PUSH(list, 1, list.active_length);
	PUSH(list, 2, list.active_length);
	PUSH(list, 3, list.active_length);
	PUSH(list, 4, list.active_length);
	PUSH(list, 5, 0);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), a[i]);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_push_long_list(void **state)
{
	(void) state;
	long int a[5] = {5, 1, 2, 3, 4};
	LIntLL list;
	INIT_LIST(list);
	PUSH(list, 1, list.active_length);
	PUSH(list, 2, list.active_length);
	PUSH(list, 3, list.active_length);
	PUSH(list, 4, list.active_length);
	PUSH(list, 5, 0);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), a[i]);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_push_ulong_list(void **state)
{
	(void) state;
	unsigned long int a[5] = {5, 1, 2, 3, 4};
	ULIntLL list;
	INIT_LIST(list);
	PUSH(list, 1, list.active_length);
	PUSH(list, 2, list.active_length);
	PUSH(list, 3, list.active_length);
	PUSH(list, 4, list.active_length);
	PUSH(list, 5, 0);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), a[i]);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_push_llong_list(void **state)
{
	(void) state;
	long long int a[5] = {5, 1, 2, 3, 4};
	LLIntLL list;
	INIT_LIST(list);
	PUSH(list, 1, list.active_length);
	PUSH(list, 2, list.active_length);
	PUSH(list, 3, list.active_length);
	PUSH(list, 4, list.active_length);
	PUSH(list, 5, 0);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), a[i]);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_push_ullong_list(void **state)
{
	(void) state;
	unsigned long long int a[5] = {5, 1, 2, 3, 4};
	ULLIntLL list;
	INIT_LIST(list);
	PUSH(list, 1, list.active_length);
	PUSH(list, 2, list.active_length);
	PUSH(list, 3, list.active_length);
	PUSH(list, 4, list.active_length);
	PUSH(list, 5, 0);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), a[i]);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_push_float_list(void **state)
{
	(void) state;
	float a[5] = {5., 1., 2., 3., 4.};
	FltLL list;
	INIT_LIST(list);
	PUSH(list, 1., list.active_length);
	PUSH(list, 2., list.active_length);
	PUSH(list, 3., list.active_length);
	PUSH(list, 4., list.active_length);
	PUSH(list, 5., 0);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_float_equal(IDATA(list, i), a[i], 1.0e-3);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_push_double_list(void **state)
{
	(void) state;
	double a[5] = {5., 1., 2., 3., 4.};
	DbleLL list;
	INIT_LIST(list);
	PUSH(list, 1., list.active_length);
	PUSH(list, 2., list.active_length);
	PUSH(list, 3., list.active_length);
	PUSH(list, 4., list.active_length);
	PUSH(list, 5., 0);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_float_equal(IDATA(list, i), a[i], 1.0e-3);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_push_ldouble_list(void **state)
{
	(void) state;
	long double a[5] = {5., 1., 2., 3., 4.};
	LDbleLL list;
	INIT_LIST(list);
	PUSH(list, 1., list.active_length);
	PUSH(list, 2., list.active_length);
	PUSH(list, 3., list.active_length);
	PUSH(list, 4., list.active_length);
	PUSH(list, 5., 0);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_float_equal(IDATA(list, i), a[i], 1.0e-3);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_push_char_list(void **state)
{
	(void) state;
	char a[5] = {5, 1, 2, 3, 4};
	CharLL list;
	INIT_LIST(list);
	PUSH(list, 1, list.active_length);
	PUSH(list, 2, list.active_length);
	PUSH(list, 3, list.active_length);
	PUSH(list, 4, list.active_length);
	PUSH(list, 5, 0);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), a[i]);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_push_uchar_list(void **state)
{
	(void) state;
	unsigned char a[5] = {5, 1, 2, 3, 4};
	UCharLL list;
	INIT_LIST(list);
	PUSH(list, 1, list.active_length);
	PUSH(list, 2, list.active_length);
	PUSH(list, 3, list.active_length);
	PUSH(list, 4, list.active_length);
	PUSH(list, 5, 0);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), a[i]);
	}
	FREE(list);
}
// ================================================================================
// ================================================================================
// eof
