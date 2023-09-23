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
// --------------------------------------------------------------------------------

void test_push_bool_list(void **state)
{
	(void) state;
	bool a[5] = {true, true, false, false, false};
	UCharLL list;
	INIT_LIST(list);
	PUSH(list, true, list.active_length);
	PUSH(list, false, list.active_length);
	PUSH(list, false, list.active_length);
	PUSH(list, false, list.active_length);
	PUSH(list, true, 0);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), a[i]);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_push_string_list(void **state)
{
	(void) state;
	char *a[5] = {"One", "Two", "Three", "Four", "Five"};
	StringLL list;
	INIT_LIST(list);
	PUSH(list, "Two", list.active_length);
	PUSH(list, "Three", list.active_length);
	PUSH(list, "Four", list.active_length);
	PUSH(list, "Five", list.active_length);
	PUSH(list, "One", 0);
	int cmp;
	for (size_t i = 0; i < list.active_length; i++) {
		cmp = strcmp(IDATA(list, i), a[i]);
		assert_int_equal(cmp, 0);
	}
	FREE(list);
}
// ================================================================================
// ================================================================================
// TEST_INSERT_TYPE

void test_insert_short_list(void **state)
{
	ShortLL list;
	INIT_LIST(list);
	short int a[5] = {1, 2, 3, 4, 5};
	INSERT(list, a, 5, 0);
	POP_INDEX(list, 2);
	short int b[4] = {1, 2, 4, 5};
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), b[i]);
	}
	FREE(list);
}
/* // -------------------------------------------------------------------------------- */

void test_insert_ushort_list(void **state)
{
	UShortLL list;
	INIT_LIST(list);
	unsigned short int a[5] = {1, 2, 3, 4, 5};
	INSERT(list, a, 5, 0);
	POP_INDEX(list, 2);
	unsigned short int b[4] = {1, 2, 4, 5};
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), b[i]);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_insert_int_list(void **state)
{
	IntLL list;
	INIT_LIST(list);
	int a[5] = {1, 2, 3, 4, 5};
	INSERT(list, a, 5, 0);
	POP_INDEX(list, 2);
	int b[4] = {1, 2, 4, 5};
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), b[i]);
	}
	FREE(list);
}
/* // -------------------------------------------------------------------------------- */

void test_insert_uint_list(void **state)
{
	UIntLL list;
	INIT_LIST(list);
	unsigned int a[5] = {1, 2, 3, 4, 5};
	INSERT(list, a, 5, 0);
	POP_INDEX(list, 2);
	unsigned int b[4] = {1, 2, 4, 5};
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), b[i]);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_insert_long_list(void **state)
{
	LIntLL list;
	INIT_LIST(list);
	long int a[5] = {1, 2, 3, 4, 5};
	INSERT(list, a, 5, 0);
	POP_INDEX(list, 2);
	long int b[4] = {1, 2, 4, 5};
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), b[i]);
	}
	FREE(list);
}
/* // -------------------------------------------------------------------------------- */

void test_insert_ulong_list(void **state)
{
	ULIntLL list;
	INIT_LIST(list);
	unsigned long int a[5] = {1, 2, 3, 4, 5};
	INSERT(list, a, 5, 0);
	POP_INDEX(list, 2);
	unsigned long int b[4] = {1, 2, 4, 5};
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), b[i]);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_insert_llong_list(void **state)
{
	LLIntLL list;
	INIT_LIST(list);
	long long int a[5] = {1, 2, 3, 4, 5};
	INSERT(list, a, 5, 0);
	POP_INDEX(list, 2);
	long long int b[4] = {1, 2, 4, 5};
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), b[i]);
	}
	FREE(list);
}
/* // -------------------------------------------------------------------------------- */

void test_insert_ullong_list(void **state)
{
	ULLIntLL list;
	INIT_LIST(list);
	unsigned long long int a[5] = {1, 2, 3, 4, 5};
	INSERT(list, a, 5, 0);
	POP_INDEX(list, 2);
	unsigned long long int b[4] = {1, 2, 4, 5};
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), b[i]);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_insert_float_list(void **state)
{
	FltLL list;
	INIT_LIST(list);
	float a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	INSERT(list, a, 5, 0);
	POP_INDEX(list, 2);
	float b[4] = {1.1, 2.2, 4.4, 5.5};
	for (size_t i = 0; i < list.active_length; i++) {
		assert_float_equal(IDATA(list, i), b[i], 1.0e-3);
	}
	FREE(list);
}
/* // -------------------------------------------------------------------------------- */

void test_insert_double_list(void **state)
{
	DbleLL list;
	INIT_LIST(list);
	double a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	INSERT(list, a, 5, 0);
	POP_INDEX(list, 2);
	double b[4] = {1.1, 2.2, 4.4, 5.5};
	for (size_t i = 0; i < list.active_length; i++) {
		assert_float_equal(IDATA(list, i), b[i], 1.0e-3);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_insert_ldouble_list(void **state)
{
	LDbleLL list;
	INIT_LIST(list);
	long double a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	INSERT(list, a, 5, 0);
	POP_INDEX(list, 2);
	long double b[4] = {1.1, 2.2, 4.4, 5.5};
	for (size_t i = 0; i < list.active_length; i++) {
		assert_float_equal(IDATA(list, i), b[i], 1.0e-3);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_insert_char_list(void **state)
{
	CharLL list;
	INIT_LIST(list);
	char a[5] = {'a', 'b', 'c', 'd', 'e'};
	INSERT(list, a, 5, 0);
	POP_INDEX(list, 2);
	char b[4] = {'a', 'b', 'd', 'e'};
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), b[i]);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_insert_uchar_list(void **state)
{
	UCharLL list;
	INIT_LIST(list);
	unsigned char a[5] = {'a', 'b', 'c', 'd', 'e'};
	INSERT(list, a, 5, 0);
	POP_INDEX(list, 2);
	char b[4] = {'a', 'b', 'd', 'e'};
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), b[i]);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_insert_bool_list(void **state)
{
	BoolLL list;
	INIT_LIST(list);
	bool a[5] = {true, false, true, false, true};
	INSERT(list, a, 5, 0);
	POP_INDEX(list, 2);
	bool b[4] = {true, false, false, true};
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), b[i]);
	}
	FREE(list);
}
// ================================================================================
// ================================================================================

void test_replace_short_list_index(void **state) {
	short int a[5] = {1, 2, 3, 4, 5};
	short int b[5] = {1, 2, 10, 4, 5};
	ShortLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_INDEX(list, 10, 2);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_ushort_list_index(void **state) {
	unsigned short int a[5] = {1, 2, 3, 4, 5};
	unsigned short int b[5] = {1, 2, 10, 4, 5};
	UShortLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_INDEX(list, 10, 2);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_int_list_index(void **state) {
	int a[5] = {1, 2, 3, 4, 5};
	int b[5] = {1, 2, 10, 4, 5};
	IntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_INDEX(list, 10, 2);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_uint_list_index(void **state) {
	unsigned int a[5] = {1, 2, 3, 4, 5};
	unsigned int b[5] = {1, 2, 10, 4, 5};
	UIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_INDEX(list, 10, 2);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_long_list_index(void **state) {
	long int a[5] = {1, 2, 3, 4, 5};
	long int b[5] = {1, 2, 10, 4, 5};
	LIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_INDEX(list, 10, 2);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_ulong_list_index(void **state) {
	unsigned long int a[5] = {1, 2, 3, 4, 5};
	unsigned long int b[5] = {1, 2, 10, 4, 5};
	ULIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_INDEX(list, 10, 2);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_llong_list_index(void **state) {
	long long int a[5] = {1, 2, 3, 4, 5};
	long long int b[5] = {1, 2, 10, 4, 5};
	LLIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_INDEX(list, 10, 2);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_ullong_list_index(void **state) {
	unsigned long long int a[5] = {1, 2, 3, 4, 5};
	unsigned long long int b[5] = {1, 2, 10, 4, 5};
	ULLIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_INDEX(list, 10, 2);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_float_list_index(void **state) {
	float a[5] = {1., 2., 3., 4., 5.};
	float b[5] = {1., 2., 10., 4., 5.};
	FltLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_INDEX(list, 10, 2);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_float_equal(b[i], IDATA(list, i), 1.0e-3);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_double_list_index(void **state) {
	double a[5] = {1., 2., 3., 4., 5.};
	double b[5] = {1., 2., 10., 4., 5.};
	DbleLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_INDEX(list, 10, 2);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_float_equal(b[i], IDATA(list, i), 1.0e-3);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_ldouble_list_index(void **state) {
	long double a[5] = {1., 2., 3., 4., 5.};
	long double b[5] = {1., 2., 10., 4., 5.};
	LDbleLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_INDEX(list, 10, 2);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_float_equal(b[i], IDATA(list, i), 1.0e-3);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_char_list_index(void **state) {
	char a[5] = {'a', 'b', 'c', 'd', 'e'};
	char b[5] = {'a', 'b', 'q', 'd', 'e'};
	CharLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_INDEX(list, 'q', 2);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_uchar_list_index(void **state) {
	unsigned char a[5] = {'a', 'b', 'c', 'd', 'e'};
	unsigned char b[5] = {'a', 'b', 'q', 'd', 'e'};
	UCharLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_INDEX(list, 'q', 2);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_bool_list_index(void **state) {
	bool a[5] = {true, true, true, true, true};
	bool b[5] = {true, true, false, true, true};
	BoolLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_INDEX(list, false, 2);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_string_list_index(void **state) {
	char *a[5] = {"One", "Two", "Ten", "Four", "Five"};
	StringLL list;
	INIT_LIST(list);
	PUSH(list, "One", 0);
	PUSH(list, "Two", 1);
	PUSH(list, "Three", 2);
	PUSH(list, "Four", 3);
	PUSH(list, "Five", 4);
	REPLACE_INDEX(list, "Ten", 2);
	int cmp;
	for (size_t i = 0; i < list.active_length; i++) {
		cmp = strcmp(IDATA(list, i), a[i]);
		assert_int_equal(0, cmp);
	}
	FREE(list);
}
// ================================================================================
// ================================================================================
// eof
