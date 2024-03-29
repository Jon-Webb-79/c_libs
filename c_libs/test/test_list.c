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
// TEST_REPLACE_TYPE_LIST_VALUES FUNCTIONS

void test_replace_short_list_values(void **state) {
	short int a[5] = {1, 2, 1, 4, 1};
	short int b[5] = {10, 2, 10, 4, 10};
	ShortLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_VALUES(list, 1, 10);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_ushort_list_values(void **state) {
	unsigned short int a[5] = {1, 2, 1, 4, 1};
	unsigned short int b[5] = {10, 2, 10, 4, 10};
	UShortLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_VALUES(list, 1, 10);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_int_list_values(void **state) {
	int a[5] = {1, 2, 1, 4, 1};
	int b[5] = {10, 2, 10, 4, 10};
	IntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_VALUES(list, 1, 10);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_uint_list_values(void **state) {
	unsigned int a[5] = {1, 2, 1, 4, 1};
	unsigned int b[5] = {10, 2, 10, 4, 10};
	UIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_VALUES(list, 1, 10);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_long_list_values(void **state) {
	long int a[5] = {1, 2, 1, 4, 1};
	long int b[5] = {10, 2, 10, 4, 10};
	LIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_VALUES(list, 1, 10);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_ulong_list_values(void **state) {
	unsigned long int a[5] = {1, 2, 1, 4, 1};
	unsigned long int b[5] = {10, 2, 10, 4, 10};
	ULIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_VALUES(list, 1, 10);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_llong_list_values(void **state) {
	long long int a[5] = {1, 2, 1, 4, 1};
	long long int b[5] = {10, 2, 10, 4, 10};
	LLIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_VALUES(list, 1, 10);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_ullong_list_values(void **state) {
	unsigned long long int a[5] = {1, 2, 1, 4, 1};
	unsigned long long int b[5] = {10, 2, 10, 4, 10};
	ULLIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_VALUES(list, 1, 10);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_float_list_values(void **state) {
	float a[5] = {1., 2., 1., 4., 1.};
	float b[5] = {10., 2., 10., 4., 10.};
	FltLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_VALUES(list, 1.f, 10.f);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_float_equal(b[i], IDATA(list, i), 1.0e-3);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_double_list_values(void **state) {
	double a[5] = {1., 2., 1., 4., 1.};
	double b[5] = {10., 2., 10., 4., 10.};
	DbleLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_VALUES(list, 1., 10.);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_float_equal(b[i], IDATA(list, i), 1.0e-3);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_ldouble_list_values(void **state) {
	long double a[5] = {1., 2., 1., 4., 1.};
	long double b[5] = {10., 2., 10., 4., 10.};
	LDbleLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_VALUES(list, 1., 10.);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_float_equal(b[i], IDATA(list, i), 1.0e-3);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_char_list_values(void **state) {
	char a[5] = {'a', 'b', 'a', 'd', 'a'};
	char b[5] = {'q', 'b', 'q', 'd', 'q'};
	CharLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_VALUES(list, 'a', 'q');
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_uchar_list_values(void **state) {
	unsigned char a[5] = {'a', 'b', 'a', 'd', 'a'};
	unsigned char b[5] = {'q', 'b', 'q', 'd', 'q'};
	UCharLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_VALUES(list, 'a', 'q');
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_bool_list_values(void **state) {
	bool a[5] = {true, false, true, false, true};
	bool b[5] = {true, true, true, true, true};
	BoolLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REPLACE_VALUES(list, false, true);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_replace_string_list_values(void **state) {
	char *a[5] = {"Ten", "Two", "Ten", "Four", "Ten"};
	StringLL list;
	INIT_LIST(list);
	PUSH(list, "One", 0);
	PUSH(list, "Two", 1);
	PUSH(list, "One", 2);
	PUSH(list, "Four", 3);
	PUSH(list, "One", 4);
	REPLACE_VALUES(list, "One", "Ten");
	int cmp;
	for (size_t i = 0; i < list.active_length; i++) {
		cmp = strcmp(a[i], IDATA(list, i));
		assert_int_equal(0, cmp);
	}
	FREE(list);
}
// ================================================================================
// ================================================================================
// TEST_DELETE_TYPE_DUPLICATES FUNCTIONS

void test_delete_short_list_duplicates(void **state) {
	short int a[6] = {1, 1, 2, 2, 3, 3};
	short int b[3] = {1, 2, 3};
	ShortLL list;
	INIT_LIST(list);
	INSERT(list, a, 6, 0);
	DELETE_DUPLICATES(list);
	for (size_t i = 0; i <list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_delete_ushort_list_duplicates(void **state) {
	unsigned short int a[6] = {1, 1, 2, 2, 3, 3};
	unsigned short int b[3] = {1, 2, 3};
	UShortLL list;
	INIT_LIST(list);
	INSERT(list, a, 6, 0);
	DELETE_DUPLICATES(list);
	for (size_t i = 0; i <list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_delete_int_list_duplicates(void **state) {
	int a[6] = {1, 1, 2, 2, 3, 3};
	int b[3] = {1, 2, 3};
	IntLL list;
	INIT_LIST(list);
	INSERT(list, a, 6, 0);
	DELETE_DUPLICATES(list);
	for (size_t i = 0; i <list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_delete_uint_list_duplicates(void **state) {
	unsigned int a[6] = {1, 1, 2, 2, 3, 3};
	unsigned int b[3] = {1, 2, 3};
	UIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 6, 0);
	DELETE_DUPLICATES(list);
	for (size_t i = 0; i <list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_delete_long_list_duplicates(void **state) {
	long int a[6] = {1, 1, 2, 2, 3, 3};
	long int b[3] = {1, 2, 3};
	LIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 6, 0);
	DELETE_DUPLICATES(list);
	for (size_t i = 0; i <list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_delete_ulong_list_duplicates(void **state) {
	unsigned long int a[6] = {1, 1, 2, 2, 3, 3};
	unsigned long int b[3] = {1, 2, 3};
	ULIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 6, 0);
	DELETE_DUPLICATES(list);
	for (size_t i = 0; i <list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_delete_llong_list_duplicates(void **state) {
	long long int a[6] = {1, 1, 2, 2, 3, 3};
	long long int b[3] = {1, 2, 3};
	LLIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 6, 0);
	DELETE_DUPLICATES(list);
	for (size_t i = 0; i <list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_delete_ullong_list_duplicates(void **state) {
	unsigned long long int a[6] = {1, 1, 2, 2, 3, 3};
	unsigned long long int b[3] = {1, 2, 3};
	ULLIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 6, 0);
	DELETE_DUPLICATES(list);
	for (size_t i = 0; i <list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_delete_float_list_duplicates(void **state) {
	float a[6] = {1., 1., 2., 2., 3., 3.};
	float b[3] = {1., 2., 3.};
	FltLL list;
	INIT_LIST(list);
	INSERT(list, a, 6, 0);
	DELETE_DUPLICATES(list);
	for (size_t i = 0; i <list.active_length; i++) {
		assert_float_equal(b[i], IDATA(list, i), 1.0e-3);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_delete_double_list_duplicates(void **state) {
	double a[6] = {1., 1., 2., 2., 3., 3.};
	double b[3] = {1., 2., 3.};
	DbleLL list;
	INIT_LIST(list);
	INSERT(list, a, 6, 0);
	DELETE_DUPLICATES(list);
	for (size_t i = 0; i <list.active_length; i++) {
		assert_float_equal(b[i], IDATA(list, i), 1.0e-3);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_delete_ldouble_list_duplicates(void **state) {
	long double a[6] = {1., 1., 2., 2., 3., 3.};
	long double b[3] = {1., 2., 3.};
	LDbleLL list;
	INIT_LIST(list);
	INSERT(list, a, 6, 0);
	DELETE_DUPLICATES(list);
	for (size_t i = 0; i <list.active_length; i++) {
		assert_float_equal(b[i], IDATA(list, i), 1.0e-3);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_delete_char_list_duplicates(void **state) {
	char a[6] = {'a', 'a', 'b', 'b', 'c', 'c'};
	char b[3] = {'a', 'b', 'c'};
	CharLL list;
	INIT_LIST(list);
	INSERT(list, a, 6, 0);
	DELETE_DUPLICATES(list);
	for (size_t i = 0; i <list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_delete_uchar_list_duplicates(void **state) {
	unsigned char a[6] = {'a', 'a', 'b', 'b', 'c', 'c'};
	unsigned char b[3] = {'a', 'b', 'c'};
	UCharLL list;
	INIT_LIST(list);
	INSERT(list, a, 6, 0);
	DELETE_DUPLICATES(list);
	for (size_t i = 0; i <list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_delete_bool_list_duplicates(void **state) {
	bool a[6] = {true, false, true, false, true, false};
	bool b[2] = {true, false};
	BoolLL list;
	INIT_LIST(list);
	INSERT(list, a, 6, 0);
	DELETE_DUPLICATES(list);
	for (size_t i = 0; i <list.active_length; i++) {
		assert_int_equal(b[i], IDATA(list, i));
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_delete_string_list_duplicates(void **state) {
	char *b[3] = {"One", "Two", "Three"};
	StringLL list;
	INIT_LIST(list);
	PUSH(list, "One", 0);
	PUSH(list, "One", 1);
	PUSH(list, "Two", 2);
	PUSH(list, "Two", 3);
	PUSH(list, "Three", 4);
	PUSH(list, "Three", 5);
	DELETE_DUPLICATES(list);
	int cmp;
	for (size_t i = 0; i <list.active_length; i++) {
		cmp = strcmp(b[i], IDATA(list, i));
		assert_int_equal(0, cmp);
	}
	FREE(list);
}
// ================================================================================
// ================================================================================
// TEST_REVERSE_TYPE_LIST FUNCTIONS

void test_reverse_short_list(void **state) {
	short int a[5] = {1, 2, 3, 4, 5};
	short int b[5] = {5, 4, 3, 2, 1};
	ShortLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REVERSE(list);
	struct short_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_reverse_ushort_list(void **state) {
	unsigned short int a[5] = {1, 2, 3, 4, 5};
	unsigned short int b[5] = {5, 4, 3, 2, 1};
	UShortLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REVERSE(list);
	struct ushort_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_reverse_int_list(void **state) {
	int a[5] = {1, 2, 3, 4, 5};
	int b[5] = {5, 4, 3, 2, 1};
	IntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REVERSE(list);
	struct int_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_reverse_uint_list(void **state) {
	unsigned int a[5] = {1, 2, 3, 4, 5};
	unsigned int b[5] = {5, 4, 3, 2, 1};
	UIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REVERSE(list);
	struct uint_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_reverse_long_list(void **state) {
	long int a[5] = {1, 2, 3, 4, 5};
	long int b[5] = {5, 4, 3, 2, 1};
	LIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REVERSE(list);
	struct long_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_reverse_ulong_list(void **state) {
	unsigned long int a[5] = {1, 2, 3, 4, 5};
	unsigned long int b[5] = {5, 4, 3, 2, 1};
	ULIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REVERSE(list);
	struct ulong_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_reverse_llong_list(void **state) {
	long long int a[5] = {1, 2, 3, 4, 5};
	long long int b[5] = {5, 4, 3, 2, 1};
	LLIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REVERSE(list);
	struct llong_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_reverse_ullong_list(void **state) {
	unsigned long long int a[5] = {1, 2, 3, 4, 5};
	unsigned long long int b[5] = {5, 4, 3, 2, 1};
	ULLIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REVERSE(list);
	struct ullong_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_reverse_float_list(void **state) {
	float a[5] = {1., 2., 3., 4., 5.};
	float b[5] = {5., 4., 3., 2., 1.};
	FltLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REVERSE(list);
	struct float_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_float_equal(guess->data, b[i], 1.0e-3);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_reverse_double_list(void **state) {
	double a[5] = {1., 2., 3., 4., 5.};
	double b[5] = {5., 4., 3., 2., 1.};
	DbleLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REVERSE(list);
	struct double_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_float_equal(guess->data, b[i], 1.0e-3);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_reverse_ldouble_list(void **state) {
	long double a[5] = {1., 2., 3., 4., 5.};
	long double b[5] = {5., 4., 3., 2., 1.};
	LDbleLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REVERSE(list);
	struct ldouble_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_float_equal(guess->data, b[i], 1.0e-3);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_reverse_char_list(void **state) {
	char a[5] = {'a', 'b','c', 'd', 'e'};
	char b[5] = {'e', 'd', 'c', 'b', 'a'};
	CharLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REVERSE(list);
	struct char_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_reverse_uchar_list(void **state) {
	unsigned char a[5] = {'a', 'b','c', 'd', 'e'};
	unsigned char b[5] = {'e', 'd', 'c', 'b', 'a'};
	UCharLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REVERSE(list);
	struct uchar_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_reverse_bool_list(void **state) {
	bool a[5] = {true, true, true, false, false};
	bool b[5] = {false, false, true, true, true};
	BoolLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	REVERSE(list);
	struct bool_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_float_equal(guess->data, b[i], 1.0e-3);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_reverse_string_list(void **state) {
	char *b[5] = {"Five", "Four", "Three", "Two", "One"};
	StringLL list;
	INIT_LIST(list);
	PUSH(list, "One", 0);
	PUSH(list, "Two", 1);
	PUSH(list, "Three", 2);
	PUSH(list, "Four", 3);
	PUSH(list, "Five", 4);
	REVERSE(list);
	struct string_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// ================================================================================
// ================================================================================
// TEST SORT_TYPE_LIST FUNCTIONS

void test_sort_short_list(void **state) {
	short int a[5] = {2, 1, 5, 4, 3};
	short int b[5] = {1, 2, 3, 4, 5};
	ShortLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	SORT(list, FORWARD);
	struct short_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sort_ushort_list(void **state) {
	unsigned short a[5] = {2, 1, 5, 4, 3};
	unsigned short b[5] = {1, 2, 3, 4, 5};
	UShortLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	SORT(list, FORWARD);
	struct ushort_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sort_int_list(void **state) {
	int a[5] = {2, 1, 5, 4, 3};
	int b[5] = {1, 2, 3, 4, 5};
	IntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	SORT(list, FORWARD);
	struct int_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sort_uint_list(void **state) {
	unsigned int a[5] = {2, 1, 5, 4, 3};
	unsigned int b[5] = {1, 2, 3, 4, 5};
	UIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	SORT(list, FORWARD);
	struct uint_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sort_long_list(void **state) {
	long int a[5] = {2, 1, 5, 4, 3};
	long int b[5] = {1, 2, 3, 4, 5};
	LIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	SORT(list, FORWARD);
	struct long_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sort_ulong_list(void **state) {
	unsigned long int a[5] = {2, 1, 5, 4, 3};
	unsigned long int b[5] = {1, 2, 3, 4, 5};
	ULIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	SORT(list, FORWARD);
	struct ulong_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sort_llong_list(void **state) {
	long long int a[5] = {2, 1, 5, 4, 3};
	long long int b[5] = {1, 2, 3, 4, 5};
	LLIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	SORT(list, FORWARD);
	struct llong_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sort_ullong_list(void **state) {
	unsigned long long int a[5] = {2, 1, 5, 4, 3};
	unsigned long long int b[5] = {1, 2, 3, 4, 5};
	ULLIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	SORT(list, FORWARD);
	struct ullong_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sort_float_list(void **state) {
	float a[5] = {2., 1., 5., 4., 3.};
	float b[5] = {1., 2., 3., 4., 5.};
	FltLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	SORT(list, FORWARD);
	struct float_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_float_equal(guess->data, b[i], 1.0e-3);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sort_double_list(void **state) {
	double a[5] = {2., 1., 5., 4., 3.};
	double b[5] = {1., 2., 3., 4., 5.};
	DbleLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	SORT(list, FORWARD);
	struct double_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_float_equal(guess->data, b[i], 1.0e-3);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sort_ldouble_list(void **state) {
	long double a[5] = {2., 1., 5., 4., 3.};
	long double b[5] = {1., 2., 3., 4., 5.};
	LDbleLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	SORT(list, FORWARD);
	struct ldouble_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_float_equal(guess->data, b[i], 1.0e-3);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sort_char_list(void **state) {
	char a[5] = {'b', 'a', 'e','d', 'c'};
	char b[5] = {'a', 'b', 'c', 'd', 'e'};
	CharLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	SORT(list, FORWARD);
	struct char_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sort_uchar_list(void **state) {
	unsigned char a[5] = {'b', 'a', 'e','d', 'c'};
	unsigned char b[5] = {'a', 'b', 'c', 'd', 'e'};
	UCharLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	SORT(list, FORWARD);
	struct uchar_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sort_bool_list(void **state) {
	bool a[5] = {true, false, true, false, true};
	char b[5] = {false, false, true, true, true};
	BoolLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	SORT(list, FORWARD);
	struct bool_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sort_string_list(void **state) {
	char* arr[] = {"Apple", "Banana", "Cucumber", "Xylaphone", "Zuchini"};
	StringLL list;
	INIT_LIST(list);
	PUSH(list, "Xylaphone", 0);
	PUSH(list, "Apple", 1);
	PUSH(list, "Cucumber", 2);
	PUSH(list, "Banana", 3);
    PUSH(list, "Zuchini", 4);
	SORT(list, FORWARD);
	char *guess;
	int cmp;
	for (size_t i = 0; i < 5; i++) {
		guess = IDATA(list, i);
		cmp = strcmp(guess, arr[i]);
		assert_int_equal(cmp, 0);
	}
	FREE(list);
}
// ================================================================================
// ================================================================================
// TEST_SUM_TYPE_LIST

void test_sum_short_list(void **state) {
	short int a[5] = {1, 2, 3, 4, 5};
	ShortLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	short int sum = SUM(list);
	assert_int_equal(15, sum);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sum_ushort_list(void **state) {
	unsigned short int a[5] = {1, 2, 3, 4, 5};
	UShortLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	unsigned short int sum = SUM(list);
	assert_int_equal(15, sum);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sum_int_list(void **state) {
	int a[5] = {1, 2, 3, 4, 5};
	IntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	int sum = SUM(list);
	assert_int_equal(15, sum);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sum_uint_list(void **state) {
	unsigned int a[5] = {1, 2, 3, 4, 5};
	UIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	unsigned int sum = SUM(list);
	assert_int_equal(15, sum);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sum_long_list(void **state) {
	long int a[5] = {1, 2, 3, 4, 5};
	LIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	long int sum = SUM(list);
	assert_int_equal(15, sum);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sum_ulong_list(void **state) {
	unsigned long int a[5] = {1, 2, 3, 4, 5};
	ULIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	unsigned long int sum = SUM(list);
	assert_int_equal(15, sum);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sum_llong_list(void **state) {
	long long int a[5] = {1, 2, 3, 4, 5};
	LLIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	long long int sum = SUM(list);
	assert_int_equal(15, sum);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sum_ullong_list(void **state) {
	unsigned long long int a[5] = {1, 2, 3, 4, 5};
	ULLIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	unsigned long long int sum = SUM(list);
	assert_int_equal(15, sum);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sum_float_list(void **state) {
	float a[5] = {1., 2., 3., 4., 5.};
	FltLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	float sum = SUM(list);
	assert_float_equal(15, sum, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sum_double_list(void **state) {
	double a[5] = {1., 2., 3., 4., 5.};
	DbleLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	double sum = SUM(list);
	assert_float_equal(15, sum, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_sum_ldouble_list(void **state) {
	long double a[5] = {1., 2., 3., 4., 5.};
	LDbleLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	long double sum = SUM(list);
	assert_float_equal(15, sum, 1.0e-3);
	FREE(list);
}
// ================================================================================
// ================================================================================
// TEST_CUMSUM_TYPE_LIST FUNCTIONS

void test_cumsum_short_list(void **state) {
	short int a[5] = {1, 2, 3, 4, 5};
	short int b[5] = {1, 3, 6, 10, 15};
	ShortLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	ShortLL new_list = CUMSUM(list);
	struct short_list *guess = new_list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_cumsum_ushort_list(void **state) {
	unsigned short int a[5] = {1, 2, 3, 4, 5};
	unsigned short int b[5] = {1, 3, 6, 10, 15};
	UShortLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	UShortLL new_list = CUMSUM(list);
	struct ushort_list *guess = new_list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_cumsum_int_list(void **state) {
	int a[5] = {1, 2, 3, 4, 5};
	int b[5] = {1, 3, 6, 10, 15};
	IntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	IntLL new_list = CUMSUM(list);
	struct int_list *guess = new_list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_cumsum_uint_list(void **state) {
	unsigned int a[5] = {1, 2, 3, 4, 5};
	unsigned int b[5] = {1, 3, 6, 10, 15};
	UIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	UIntLL new_list = CUMSUM(list);
	struct uint_list *guess = new_list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_cumsum_long_list(void **state) {
	long int a[5] = {1, 2, 3, 4, 5};
	long int b[5] = {1, 3, 6, 10, 15};
	LIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	LIntLL new_list = CUMSUM(list);
	struct long_list *guess = new_list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_cumsum_ulong_list(void **state) {
	unsigned long int a[5] = {1, 2, 3, 4, 5};
	unsigned long int b[5] = {1, 3, 6, 10, 15};
	ULIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	ULIntLL new_list = CUMSUM(list);
	struct ulong_list *guess = new_list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_cumsum_llong_list(void **state) {
	long long int a[5] = {1, 2, 3, 4, 5};
	long long int b[5] = {1, 3, 6, 10, 15};
	LLIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	LLIntLL new_list = CUMSUM(list);
	struct llong_list *guess = new_list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_cumsum_ullong_list(void **state) {
	unsigned long long int a[5] = {1, 2, 3, 4, 5};
	unsigned long long int b[5] = {1, 3, 6, 10, 15};
	ULLIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	ULLIntLL new_list = CUMSUM(list);
	struct ullong_list *guess = new_list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, b[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_cumsum_float_list(void **state) {
	float a[5] = {1., 2., 3., 4., 5.};
	float b[5] = {1., 3., 6., 10., 15.};
	FltLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	FltLL new_list = CUMSUM(list);
	struct float_list *guess = new_list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_float_equal(guess->data, b[i], 1.0e-3);
		i++;
		guess = guess->next;
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_cumsum_double_list(void **state) {
	double a[5] = {1., 2., 3., 4., 5.};
	double b[5] = {1., 3., 6., 10., 15.};
	DbleLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	DbleLL new_list = CUMSUM(list);
	struct double_list *guess = new_list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_float_equal(guess->data, b[i], 1.0e-3);
		i++;
		guess = guess->next;
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_cumsum_ldouble_list(void **state) {
	long double a[5] = {1., 2., 3., 4., 5.};
	long double b[5] = {1., 3., 6., 10., 15.};
	LDbleLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	LDbleLL new_list = CUMSUM(list);
	struct ldouble_list *guess = new_list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_float_equal(guess->data, b[i], 1.0e-3);
		i++;
		guess = guess->next;
	}
	FREE(list);
	FREE(new_list);
}
// ================================================================================
// ================================================================================
// TEST_AVERAGE_TYPE_LIST FUNCTIONS

void test_average_short_list(void **state) {
	short int a[5] = {1, 2, 3, 4, 5};
	ShortLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	float avg = AVERAGE(list);
	assert_float_equal(3.0f, avg, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_average_ushort_list(void **state) {
	unsigned short int a[5] = {1, 2, 3, 4, 5};
	UShortLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	float avg = AVERAGE(list);
	assert_float_equal(3.0f, avg, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_average_int_list(void **state) {
	int a[5] = {1, 2, 3, 4, 5};
	IntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	float avg = AVERAGE(list);
	assert_float_equal(3.0f, avg, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_average_uint_list(void **state) {
	unsigned int a[5] = {1, 2, 3, 4, 5};
	UIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	float avg = AVERAGE(list);
	assert_float_equal(3.0f, avg, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_average_long_list(void **state) {
	long int a[5] = {1, 2, 3, 4, 5};
	LIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	double avg = AVERAGE(list);
	assert_float_equal(3.0f, avg, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_average_ulong_list(void **state) {
	unsigned long int a[5] = {1, 2, 3, 4, 5};
	ULIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	double avg = AVERAGE(list);
	assert_float_equal(3.0f, avg, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_average_llong_list(void **state) {
	long long int a[5] = {1, 2, 3, 4, 5};
	LLIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	long double avg = AVERAGE(list);
	assert_float_equal(3.0f, avg, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_average_ullong_list(void **state) {
	unsigned long long int a[5] = {1, 2, 3, 4, 5};
	ULLIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	long double avg = AVERAGE(list);
	assert_float_equal(3.0f, avg, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_average_float_list(void **state) {
	float a[5] = {1., 2., 3., 4., 5.};
	FltLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	float avg = AVERAGE(list);
	assert_float_equal(3.0f, avg, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_average_double_list(void **state) {
	double a[5] = {1., 2., 3., 4., 5.};
	DbleLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	double avg = AVERAGE(list);
	assert_float_equal(3.0f, avg, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_average_ldouble_list(void **state) {
	long double a[5] = {1., 2., 3., 4., 5.};
	LDbleLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	long double avg = AVERAGE(list);
	assert_float_equal(3.0f, avg, 1.0e-3);
	FREE(list);
}
// ================================================================================
// ================================================================================
// TEST_STDEV_TYPE_LIST FUNCTIONS

void test_stdev_short_list(void **state) {
	short int a[5] = {1, 2, 3, 4, 5};
	ShortLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	float b = STDEV(list);
	assert_float_equal(b, 1.581130, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_stdev_ushort_list(void **state) {
	unsigned short int a[5] = {1, 2, 3, 4, 5};
	UShortLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	float b = STDEV(list);
	assert_float_equal(b, 1.581130, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_stdev_int_list(void **state) {
	int a[5] = {1, 2, 3, 4, 5};
	IntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	float b = STDEV(list);
	assert_float_equal(b, 1.581130, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_stdev_uint_list(void **state) {
	unsigned int a[5] = {1, 2, 3, 4, 5};
	UIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	float b = STDEV(list);
	assert_float_equal(b, 1.581130, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_stdev_long_list(void **state) {
	long int a[5] = {1, 2, 3, 4, 5};
	LIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	double b = STDEV(list);
	assert_float_equal(b, 1.581130, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_stdev_ulong_list(void **state) {
	unsigned long int a[5] = {1, 2, 3, 4, 5};
	ULIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	double b = STDEV(list);
	assert_float_equal(b, 1.581130, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_stdev_llong_list(void **state) {
	long long int a[5] = {1, 2, 3, 4, 5};
	LLIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	long double b = STDEV(list);
	assert_float_equal(b, 1.581130, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_stdev_ullong_list(void **state) {
	unsigned long long int a[5] = {1, 2, 3, 4, 5};
	ULLIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	long double b = STDEV(list);
	assert_float_equal(b, 1.581130, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_stdev_float_list(void **state) {
	float a[5] = {1., 2., 3., 4., 5.};
	FltLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	float b = STDEV(list);
	assert_float_equal(b, 1.581130, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_stdev_double_list(void **state) {
	double a[5] = {1, 2, 3, 4, 5};
	DbleLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	double b = STDEV(list);
	assert_float_equal(b, 1.581130, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_stdev_ldouble_list(void **state) {
	long double a[5] = {1, 2, 3, 4, 5};
	LDbleLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	long double b = STDEV(list);
	assert_float_equal(b, 1.581130, 1.0e-3);
	FREE(list);
}
// ================================================================================
// ================================================================================
// TEST_MAX_LIST FUNCTIONS

void test_max_short_list(void **state) {
	short int a[5] = {1, 2, 3, 4, 5};
	ShortLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	short int max = MAX(list);
	assert_int_equal(5, max);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_max_ushort_list(void **state) {
	unsigned short int a[5] = {1, 2, 3, 4, 5};
	UShortLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	unsigned short int max = MAX(list);
	assert_int_equal(5, max);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_max_int_list(void **state) {
	int a[5] = {1, 2, 3, 4, 5};
	IntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	int max = MAX(list);
	assert_int_equal(5, max);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_max_uint_list(void **state) {
	unsigned int a[5] = {1, 2, 3, 4, 5};
	UIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	unsigned int max = MAX(list);
	assert_int_equal(5, max);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_max_long_list(void **state) {
	long int a[5] = {1, 2, 3, 4, 5};
	LIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	long int max = MAX(list);
	assert_int_equal(5, max);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_max_ulong_list(void **state) {
	unsigned long int a[5] = {1, 2, 3, 4, 5};
	ULIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	unsigned long int max = MAX(list);
	assert_int_equal(5, max);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_max_llong_list(void **state) {
	long long int a[5] = {1, 2, 3, 4, 5};
	LLIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	long long int max = MAX(list);
	assert_int_equal(5, max);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_max_ullong_list(void **state) {
	unsigned long long int a[5] = {1, 2, 3, 4, 5};
	ULLIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	unsigned long long int max = MAX(list);
	assert_int_equal(5, max);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_max_float_list(void **state) {
	float a[5] = {1., 2., 3., 4., 5.};
	FltLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	float max = MAX(list);
	assert_float_equal(5.f, max, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_max_double_list(void **state) {
	double a[5] = {1., 2., 3., 4., 5.};
	DbleLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	double max = MAX(list);
	assert_float_equal(5., max, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_max_ldouble_list(void **state) {
	long double a[5] = {1., 2., 3., 4., 5.};
	LDbleLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	long double max = MAX(list);
	assert_float_equal(5., max, 1.0e-3);
	FREE(list);
}
// ================================================================================
// ================================================================================
// TEST_MIN_TYPE_LIST FUNCTIONS

void test_min_short_list(void **state) {
	short int a[5] = {1, 2, 3, 4, 5};
	ShortLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	short int min = MIN(list);
	assert_int_equal(1, min);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_min_ushort_list(void **state) {
	unsigned short int a[5] = {1, 2, 3, 4, 5};
	UShortLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	unsigned short int min = MIN(list);
	assert_int_equal(1, min);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_min_int_list(void **state) {
	int a[5] = {1, 2, 3, 4, 5};
	IntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	int min = MIN(list);
	assert_int_equal(1, min);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_min_uint_list(void **state) {
	unsigned int a[5] = {1, 2, 3, 4, 5};
	UIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	unsigned int min = MIN(list);
	assert_int_equal(1, min);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_min_long_list(void **state) {
	long int a[5] = {1, 2, 3, 4, 5};
	LIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	long int min = MIN(list);
	assert_int_equal(1, min);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_min_ulong_list(void **state) {
	unsigned long int a[5] = {1, 2, 3, 4, 5};
	ULIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	unsigned long int min = MIN(list);
	assert_int_equal(1, min);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_min_llong_list(void **state) {
	long long int a[5] = {1, 2, 3, 4, 5};
	LLIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	long long int min = MIN(list);
	assert_int_equal(1, min);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_min_ullong_list(void **state) {
	unsigned long long int a[5] = {1, 2, 3, 4, 5};
	ULLIntLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	unsigned long long int min = MIN(list);
	assert_int_equal(1, min);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_min_float_list(void **state) {
	float a[5] = {1., 2., 3., 4., 5.};
	FltLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	float min = MIN(list);
	assert_float_equal(1.f, min, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_min_double_list(void **state) {
	double a[5] = {1., 2., 3., 4., 5.};
	DbleLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	double min = MIN(list);
	assert_float_equal(1.f, min, 1.0e-3);
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_min_ldouble_list(void **state) {
	long double a[5] = {1., 2., 3., 4., 5.};
	LDbleLL list;
	INIT_LIST(list);
	INSERT(list, a, 5, 0);
	long double min = MIN(list);
	assert_float_equal(1.f, min, 1.0e-3);
	FREE(list);
}
// ================================================================================
// ================================================================================
// TEST_RANGE_TYPE_LIST FUNCTIONS


void test_range_short_list(void **state) {
	ShortLL list;
	INIT_LIST(list);
	RANGE(list, 2, 20, 2);
	short a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	struct short_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, a[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_range_ushort_list(void **state) {
	UShortLL list;
	INIT_LIST(list);
	RANGE(list, 2, 20, 2);
	unsigned short a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	struct ushort_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, a[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_range_int_list(void **state) {
	IntLL list;
	INIT_LIST(list);
	RANGE(list, 2, 20, 2);
	int a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	struct int_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, a[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_range_uint_list(void **state) {
	UIntLL list;
	INIT_LIST(list);
	RANGE(list, 2, 20, 2);
	unsigned int a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	struct uint_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, a[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_range_long_list(void **state) {
	LIntLL list;
	INIT_LIST(list);
	RANGE(list, 2, 20, 2);
	long int a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	struct long_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, a[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_range_ulong_list(void **state) {
	ULIntLL list;
	INIT_LIST(list);
	RANGE(list, 2, 20, 2);
	unsigned long int a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	struct ulong_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, a[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_range_llong_list(void **state) {
	LLIntLL list;
	INIT_LIST(list);
	RANGE(list, 2, 20, 2);
	long long int a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	struct llong_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, a[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_range_ullong_list(void **state) {
	ULLIntLL list;
	INIT_LIST(list);
	RANGE(list, 2, 20, 2);
	unsigned long long int a[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	struct ullong_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_int_equal(guess->data, a[i]);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_range_float_list(void **state) {
	FltLL list;
	INIT_LIST(list);
	RANGE(list, 2.f, 20.f, 2.f);
	float a[10] = {2., 4., 6., 8., 10., 12., 14., 16., 18., 20.};
	struct float_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_float_equal(guess->data, a[i], 1.0e-3);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_range_double_list(void **state) {
	DbleLL list;
	INIT_LIST(list);
	RANGE(list, 2., 20., 2.);
	double a[10] = {2., 4., 6., 8., 10., 12., 14., 16., 18., 20.};
	struct double_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_float_equal(guess->data, a[i], 1.0e-3);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_range_ldouble_list(void **state) {
	LDbleLL list;
	INIT_LIST(list);
	RANGE(list, 2., 20., 2.);
	long double a[10] = {2., 4., 6., 8., 10., 12., 14., 16., 18., 20.};
	struct ldouble_list *guess = list.head;
	size_t i = 0;
	while (guess != NULL) {
		assert_float_equal(guess->data, a[i], 1.0e-3);
		i++;
		guess = guess->next;
	}
	FREE(list);
}
// ================================================================================
// ================================================================================
// TEST_COPY_TYPE

void test_copy_short_list(void **state) {
	ShortLL list;
	INIT_LIST(list);
	RANGE(list, 2, 20, 2);
	ShortLL new_list = COPY(list);
	short int one;
	short int two;
	for (size_t i = 0; i < list.active_length; i++) {
		one = IDATA(list, i);
		two = IDATA(new_list, i);
		assert_int_equal(one, two);
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_copy_ushort_list(void **state) {
	UShortLL list;
	INIT_LIST(list);
	RANGE(list, 2, 20, 2);
	UShortLL new_list = COPY(list);
	unsigned short int one;
	unsigned short int two;
	for (size_t i = 0; i < list.active_length; i++) {
		one = IDATA(list, i);
		two = IDATA(new_list, i);
		assert_int_equal(one, two);
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_copy_int_list(void **state) {
	IntLL list;
	INIT_LIST(list);
	RANGE(list, 2, 20, 2);
	IntLL new_list = COPY(list);
	int one;
	int two;
	for (size_t i = 0; i < list.active_length; i++) {
		one = IDATA(list, i);
		two = IDATA(new_list, i);
		assert_int_equal(one, two);
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_copy_uint_list(void **state) {
	UIntLL list;
	INIT_LIST(list);
	RANGE(list, 2, 20, 2);
	UIntLL new_list = COPY(list);
	unsigned int one;
	unsigned int two;
	for (size_t i = 0; i < list.active_length; i++) {
		one = IDATA(list, i);
		two = IDATA(new_list, i);
		assert_int_equal(one, two);
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_copy_long_list(void **state) {
	LIntLL list;
	INIT_LIST(list);
	RANGE(list, 2, 20, 2);
	LIntLL new_list = COPY(list);
	long int one;
	long int two;
	for (size_t i = 0; i < list.active_length; i++) {
		one = IDATA(list, i);
		two = IDATA(new_list, i);
		assert_int_equal(one, two);
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_copy_ulong_list(void **state) {
	ULIntLL list;
	INIT_LIST(list);
	RANGE(list, 2, 20, 2);
	ULIntLL new_list = COPY(list);
	unsigned long int one;
	unsigned long int two;
	for (size_t i = 0; i < list.active_length; i++) {
		one = IDATA(list, i);
		two = IDATA(new_list, i);
		assert_int_equal(one, two);
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_copy_llong_list(void **state) {
	LLIntLL list;
	INIT_LIST(list);
	RANGE(list, 2, 20, 2);
	LLIntLL new_list = COPY(list);
	long long int one;
	long long int two;
	for (size_t i = 0; i < list.active_length; i++) {
		one = IDATA(list, i);
		two = IDATA(new_list, i);
		assert_int_equal(one, two);
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_copy_ullong_list(void **state) {
	ULLIntLL list;
	INIT_LIST(list);
	RANGE(list, 2, 20, 2);
	ULLIntLL new_list = COPY(list);
	unsigned long long int one;
	unsigned long long int two;
	for (size_t i = 0; i < list.active_length; i++) {
		one = IDATA(list, i);
		two = IDATA(new_list, i);
		assert_int_equal(one, two);
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_copy_char_list(void **state) {
	CharLL list;
	INIT_LIST(list);
	char a[5] = { 'a', 'b', 'c', 'd', 'e'};
	INSERT(list, a, 5, 0);
	CharLL new_list = COPY(list);
	char one;
	char two;
	for (size_t i = 0; i < list.active_length; i++) {
		one = IDATA(list, i);
		two = IDATA(new_list, i);
		assert_int_equal(one, two);
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_copy_uchar_list(void **state) {
	UCharLL list;
	INIT_LIST(list);
    unsigned char a[5] = { 'a', 'b', 'c', 'd', 'e'};
	INSERT(list, a, 5, 0);
	UCharLL new_list = COPY(list);
	unsigned char one;
	unsigned char two;
	for (size_t i = 0; i < list.active_length; i++) {
		one = IDATA(list, i);
		two = IDATA(new_list, i);
		assert_int_equal(one, two);
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_copy_float_list(void **state) {
	FltLL list;
	INIT_LIST(list);
	RANGE(list, 2., 20., 2.);
	FltLL new_list = COPY(list);
	float one;
	float two;
	for (size_t i = 0; i < list.active_length; i++) {
		one = IDATA(list, i);
		two = IDATA(new_list, i);
		assert_float_equal(one, two, 1.0e-3);
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_copy_double_list(void **state) {
	DbleLL list;
	INIT_LIST(list);
	RANGE(list, 2., 20., 2.);
	DbleLL new_list = COPY(list);
	double one;
	double two;
	for (size_t i = 0; i < list.active_length; i++) {
		one = IDATA(list, i);
		two = IDATA(new_list, i);
		assert_float_equal(one, two, 1.0e-3);
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_copy_ldouble_list(void **state) {
	LDbleLL list;
	INIT_LIST(list);
	RANGE(list, 2., 20., 2.);
	LDbleLL new_list = COPY(list);
	long double one;
	long double two;
	for (size_t i = 0; i < list.active_length; i++) {
		one = IDATA(list, i);
		two = IDATA(new_list, i);
		assert_float_equal(one, two, 1.0e-3);
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_copy_bool_list(void **state) {
	BoolLL list;
	INIT_LIST(list);
	bool a[5] = {true, false, true, false, true};
	INSERT(list, a, 5, 0);
	BoolLL new_list = COPY(list);
	bool one;
	bool two;
	for (size_t i = 0; i < list.active_length; i++) {
		one = IDATA(list, i);
		two = IDATA(new_list, i);
		assert_int_equal(one, two);
	}
	FREE(list);
	FREE(new_list);
}
// --------------------------------------------------------------------------------

void test_copy_string_list(void **state) {
	StringLL list;
	INIT_LIST(list);
	PUSH(list, "One", list.active_length);
	PUSH(list, "Two", list.active_length);
    PUSH(list, "Three", list.active_length);
	PUSH(list, "Four", list.active_length);
	StringLL new_list = COPY(list);
	char *one;
	char *two;
	int cmp;
	for (size_t i = 0; i < list.active_length; i++) {
		one = IDATA(list, i);
		two = IDATA(new_list, i);
		cmp = strcmp(one, two);
		assert_int_equal(cmp, 0);
	}
	FREE(list);
	FREE(new_list);
}
// ================================================================================
// ================================================================================

void test_repeat_char_list(void **state) {
	CharLL list;
	INIT_LIST(list);
	REPEAT(list, 'a', 5);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), 'a');
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_repeat_uchar_list(void **state) {
	UCharLL list;
	INIT_LIST(list);
	REPEAT(list, 'a', 5);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), 'a');
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_repeat_short_list(void **state) {
	ShortLL list;
	INIT_LIST(list);
	REPEAT(list, 1, 5);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), 1);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_repeat_ushort_list(void **state) {
	UShortLL list;
	INIT_LIST(list);
	REPEAT(list, 1, 5);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), 1);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_repeat_int_list(void **state) {
	IntLL list;
	INIT_LIST(list);
	REPEAT(list, 1, 5);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), 1);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_repeat_uint_list(void **state) {
	UIntLL list;
	INIT_LIST(list);
	REPEAT(list, 1, 5);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), 1);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_repeat_long_list(void **state) {
	LIntLL list;
	INIT_LIST(list);
	REPEAT(list, 1, 5);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), 1);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_repeat_ulong_list(void **state) {
	ULIntLL list;
	INIT_LIST(list);
	REPEAT(list, 1, 5);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), 1);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_repeat_llong_list(void **state) {
	LLIntLL list;
	INIT_LIST(list);
	REPEAT(list, 1, 5);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), 1);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_repeat_ullong_list(void **state) {
	ULLIntLL list;
	INIT_LIST(list);
	REPEAT(list, 1, 5);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), 1);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_repeat_float_list(void **state) {
	FltLL list;
	INIT_LIST(list);
	REPEAT(list, 1., 5);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_float_equal(IDATA(list, i), 1., 1.0e-3);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_repeat_double_list(void **state) {
	DbleLL list;
	INIT_LIST(list);
	REPEAT(list, 1., 5);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_float_equal(IDATA(list, i), 1., 1.0e-3);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_repeat_ldouble_list(void **state) {
	LDbleLL list;
	INIT_LIST(list);
	REPEAT(list, 1., 5);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_float_equal(IDATA(list, i), 1., 1.0e-3);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_repeat_bool_list(void **state) {
	DbleLL list;
	INIT_LIST(list);
	REPEAT(list, true, 5);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), true);
	}
	FREE(list);
}
// --------------------------------------------------------------------------------

void test_repeat_string_list(void **state) {
	StringLL list;
	INIT_LIST(list);
	REPEAT(list, "One", 5);
	int cmp;
	for (size_t i = 0; i < list.active_length; i++) {
		cmp = strcmp("One", IDATA(list, i));
		assert_int_equal(cmp, 0);
	}
	FREE(list);
}
// ================================================================================
// ================================================================================

void test_short_list_to_vector(void **state) {
	ShortLL list;
	INIT_LIST(list);
	REPEAT(list, 1, 5);
	Short vec = LIST_TO_VECTOR(list);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), vec.array[i]);
	}
	FREE(list);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_ushort_list_to_vector(void **state) {
	UShortLL list;
	INIT_LIST(list);
	REPEAT(list, 1, 5);
	UShort vec = LIST_TO_VECTOR(list);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), vec.array[i]);
	}
	FREE(list);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_int_list_to_vector(void **state) {
	IntLL list;
	INIT_LIST(list);
	REPEAT(list, 1, 5);
	Int vec = LIST_TO_VECTOR(list);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), vec.array[i]);
	}
	FREE(list);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_uint_list_to_vector(void **state) {
	UIntLL list;
	INIT_LIST(list);
	REPEAT(list, 1, 5);
	UInt vec = LIST_TO_VECTOR(list);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), vec.array[i]);
	}
	FREE(list);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_long_list_to_vector(void **state) {
	LIntLL list;
	INIT_LIST(list);
	REPEAT(list, 1, 5);
	LInt vec = LIST_TO_VECTOR(list);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), vec.array[i]);
	}
	FREE(list);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_ulong_list_to_vector(void **state) {
	ULIntLL list;
	INIT_LIST(list);
	REPEAT(list, 1, 5);
	ULInt vec = LIST_TO_VECTOR(list);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), vec.array[i]);
	}
	FREE(list);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_llong_list_to_vector(void **state) {
	LLIntLL list;
	INIT_LIST(list);
	REPEAT(list, 1, 5);
	LLInt vec = LIST_TO_VECTOR(list);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), vec.array[i]);
	}
	FREE(list);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_ullong_list_to_vector(void **state) {
	ULLIntLL list;
	INIT_LIST(list);
	REPEAT(list, 1, 5);
	ULLInt vec = LIST_TO_VECTOR(list);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), vec.array[i]);
	}
	FREE(list);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_char_list_to_vector(void **state) {
	CharLL list;
	INIT_LIST(list);
	REPEAT(list, 'a', 5);
	Char vec = LIST_TO_VECTOR(list);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), vec.array[i]);
	}
	FREE(list);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_uchar_list_to_vector(void **state) {
	UCharLL list;
	INIT_LIST(list);
	REPEAT(list, 'a', 5);
	UChar vec = LIST_TO_VECTOR(list);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), vec.array[i]);
	}
	FREE(list);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_float_list_to_vector(void **state) {
	FltLL list;
	INIT_LIST(list);
	REPEAT(list, 1.1, 5);
	Flt vec = LIST_TO_VECTOR(list);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_float_equal(IDATA(list, i), vec.array[i], 1.0e-3);
	}
	FREE(list);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_double_list_to_vector(void **state) {
	DbleLL list;
	INIT_LIST(list);
	REPEAT(list, 1.1, 5);
	Dble vec = LIST_TO_VECTOR(list);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_float_equal(IDATA(list, i), vec.array[i], 1.0e-3);
	}
	FREE(list);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_ldouble_list_to_vector(void **state) {
	LDbleLL list;
	INIT_LIST(list);
	REPEAT(list, 1.1, 5);
	LDble vec = LIST_TO_VECTOR(list);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_float_equal(IDATA(list, i), vec.array[i], 1.0e-3);
	}
	FREE(list);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_bool_list_to_vector(void **state) {
	BoolLL list;
	INIT_LIST(list);
	REPEAT(list, true, 5);
	Bool vec = LIST_TO_VECTOR(list);
	for (size_t i = 0; i < list.active_length; i++) {
		assert_int_equal(IDATA(list, i), vec.array[i]);
	}
	FREE(list);
	FREE(vec);
}
// --------------------------------------------------------------------------------

void test_string_list_to_vector(void **state) {
	StringLL list;
	INIT_LIST(list);
	PUSH(list, "One", list.active_length);
	PUSH(list, "Two", list.active_length);
	PUSH(list, "Three", list.active_length);
	PUSH(list, "Four", list.active_length);
	String vec = LIST_TO_VECTOR(list);
	int cmp;
	for (size_t i = 0; i < list.active_length; i++) {
		cmp = strcmp(IDATA(list, i), vec.array[i]);
		assert_int_equal(cmp, 0);
	}
	FREE(list);
	FREE(vec);
}
// ================================================================================
// ================================================================================
// eof
