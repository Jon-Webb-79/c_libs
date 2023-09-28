// ================================================================================
// ================================================================================
// - File:    test_btree.c
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

#include "test_btree.h"

// --------------------------------------------------------------------------------

void test_short_btree_push(void **state)
{
	/*This function ensures that all data is adequately pushed to the structure
	  and that active length increments correctly */
	ShortBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);

	// enusre active length is correct
	assert_int_equal(tree.active_length, 8);

	uint64_t a[8] = {9, 5, 1, 0, 2, 6, 10, 11};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_short_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_ushort_btree_push(void **state)
{
	/*This function ensures that all data is adequately pushed to the structure
	  and that active length increments correctly */
	UShortBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);

	// enusre active length is correct
	assert_int_equal(tree.active_length, 8);

	uint64_t a[8] = {9, 5, 1, 0, 2, 6, 10, 11};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_ushort_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_int_btree_push(void **state)
{
	/*This function ensures that all data is adequately pushed to the structure
	  and that active length increments correctly */
	IntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);

	// enusre active length is correct
	assert_int_equal(tree.active_length, 8);

	uint64_t a[8] = {9, 5, 1, 0, 2, 6, 10, 11};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_int_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_uint_btree_push(void **state)
{
	/*This function ensures that all data is adequately pushed to the structure
	  and that active length increments correctly */
	UIntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);

	// enusre active length is correct
	assert_int_equal(tree.active_length, 8);

	uint64_t a[8] = {9, 5, 1, 0, 2, 6, 10, 11};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_uint_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_long_btree_push(void **state)
{
	/*This function ensures that all data is adequately pushed to the structure
	  and that active length increments correctly */
	LIntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);

	// enusre active length is correct
	assert_int_equal(tree.active_length, 8);

	uint64_t a[8] = {9, 5, 1, 0, 2, 6, 10, 11};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_long_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_ulong_btree_push(void **state)
{
	/*This function ensures that all data is adequately pushed to the structure
	  and that active length increments correctly */
	ULIntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);

	// enusre active length is correct
	assert_int_equal(tree.active_length, 8);

	uint64_t a[8] = {9, 5, 1, 0, 2, 6, 10, 11};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_ulong_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_llong_btree_push(void **state)
{
	/*This function ensures that all data is adequately pushed to the structure
	  and that active length increments correctly */
	LLIntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);

	// enusre active length is correct
	assert_int_equal(tree.active_length, 8);

	uint64_t a[8] = {9, 5, 1, 0, 2, 6, 10, 11};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_llong_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_ullong_btree_push(void **state)
{
	/*This function ensures that all data is adequately pushed to the structure
	  and that active length increments correctly */
	ULLIntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);

	// enusre active length is correct
	assert_int_equal(tree.active_length, 8);

	uint64_t a[8] = {9, 5, 1, 0, 2, 6, 10, 11};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_ullong_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_float_btree_push(void **state)
{
	/*This function ensures that all data is adequately pushed to the structure
	  and that active length increments correctly */
	FltBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9.);
	PUSH_BTREE(tree, 5.);
	PUSH_BTREE(tree, 10.);
	PUSH_BTREE(tree, 0.);
	PUSH_BTREE(tree, 6.);
	PUSH_BTREE(tree, 11.);
	PUSH_BTREE(tree, 1.);
	PUSH_BTREE(tree, 2.);
	PUSH_BTREE(tree, 10.);

	// enusre active length is correct
	assert_int_equal(tree.active_length, 8);

	float a[8] = {9, 5, 1, 0, 2, 6, 10, 11};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_float_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_double_btree_push(void **state)
{
	/*This function ensures that all data is adequately pushed to the structure
	  and that active length increments correctly */
	DbleBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9.);
	PUSH_BTREE(tree, 5.);
	PUSH_BTREE(tree, 10.);
	PUSH_BTREE(tree, 0.);
	PUSH_BTREE(tree, 6.);
	PUSH_BTREE(tree, 11.);
	PUSH_BTREE(tree, 1.);
	PUSH_BTREE(tree, 2.);
	PUSH_BTREE(tree, 10.);

	// enusre active length is correct
	assert_int_equal(tree.active_length, 8);

	double a[8] = {9, 5, 1, 0, 2, 6, 10, 11};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_double_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_ldouble_btree_push(void **state)
{
	/*This function ensures that all data is adequately pushed to the structure
	  and that active length increments correctly */
	LDbleBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9.);
	PUSH_BTREE(tree, 5.);
	PUSH_BTREE(tree, 10.);
	PUSH_BTREE(tree, 0.);
	PUSH_BTREE(tree, 6.);
	PUSH_BTREE(tree, 11.);
	PUSH_BTREE(tree, 1.);
	PUSH_BTREE(tree, 2.);
	PUSH_BTREE(tree, 10.);

	// enusre active length is correct
	assert_int_equal(tree.active_length, 8);

	long double a[8] = {9, 5, 1, 0, 2, 6, 10, 11};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_ldouble_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_char_btree_push(void **state)
{
	/*This function ensures that all data is adequately pushed to the structure
	  and that active length increments correctly */
	CharBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 'a');
	PUSH_BTREE(tree, 'b');
	PUSH_BTREE(tree, 'c');
	PUSH_BTREE(tree, 'd');
	PUSH_BTREE(tree, 'e');
	PUSH_BTREE(tree, 'f');
	PUSH_BTREE(tree, 'g');
	PUSH_BTREE(tree, 'h');
	PUSH_BTREE(tree, 'c');

	// enusre active length is correct
	assert_int_equal(tree.active_length, 8);

	char a[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_char_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_uchar_btree_push(void **state)
{
	/*This function ensures that all data is adequately pushed to the structure
	  and that active length increments correctly */
	UCharBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 'a');
	PUSH_BTREE(tree, 'b');
	PUSH_BTREE(tree, 'c');
	PUSH_BTREE(tree, 'd');
	PUSH_BTREE(tree, 'e');
	PUSH_BTREE(tree, 'f');
	PUSH_BTREE(tree, 'g');
	PUSH_BTREE(tree, 'h');
	PUSH_BTREE(tree, 'c');

	// enusre active length is correct
	assert_int_equal(tree.active_length, 8);

	unsigned char a[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_uchar_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_string_btree_push(void **state)
{
	/*This function ensures that all data is adequately pushed to the structure
	  and that active length increments correctly */
	StringBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, "One");
	PUSH_BTREE(tree, "Two");
	PUSH_BTREE(tree, "Three");
	PUSH_BTREE(tree, "Four");
	PUSH_BTREE(tree, "Five");
	PUSH_BTREE(tree, "Six");
	PUSH_BTREE(tree, "Seven");
	PUSH_BTREE(tree, "Eight");
	PUSH_BTREE(tree, "Two");

	// enusre active length is correct
	assert_int_equal(tree.active_length, 8);

	char *a[8] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight"};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_string_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// ================================================================================
// ================================================================================
// TEST_TYPE_BTREE_POP FUNCTIONS


void test_short_btree_pop(void **state) {
	ShortBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);
	// enusre active length is correct
	assert_int_equal(tree.active_length, 7);

	short int a[7] = {5, 1, 0, 2, 9, 6, 10};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_short_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_ushort_btree_pop(void **state) {
	UShortBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);
	// enusre active length is correct
	assert_int_equal(tree.active_length, 7);

	unsigned short int a[7] = {5, 1, 0, 2, 9, 6, 10};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_ushort_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_int_btree_pop(void **state) {
	IntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);
	// enusre active length is correct
	assert_int_equal(tree.active_length, 7);

	int a[7] = {5, 1, 0, 2, 9, 6, 10};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_int_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_uint_btree_pop(void **state) {
	UIntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);
	// enusre active length is correct
	assert_int_equal(tree.active_length, 7);

	unsigned int a[7] = {5, 1, 0, 2, 9, 6, 10};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_uint_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_long_btree_pop(void **state) {
	LIntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);
	// enusre active length is correct
	assert_int_equal(tree.active_length, 7);

	long int a[7] = {5, 1, 0, 2, 9, 6, 10};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_long_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_ulong_btree_pop(void **state) {
	ULIntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);
	// enusre active length is correct
	assert_int_equal(tree.active_length, 7);

	unsigned long int a[7] = {5, 1, 0, 2, 9, 6, 10};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_ulong_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_llong_btree_pop(void **state) {
	LLIntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);
	// enusre active length is correct
	assert_int_equal(tree.active_length, 7);

	long long int a[7] = {5, 1, 0, 2, 9, 6, 10};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_llong_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_ullong_btree_pop(void **state) {
	ULLIntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);
	// enusre active length is correct
	assert_int_equal(tree.active_length, 7);

	unsigned long long int a[7] = {5, 1, 0, 2, 9, 6, 10};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_ullong_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_float_btree_pop(void **state) {
	FltBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9.);
	PUSH_BTREE(tree, 5.);
	PUSH_BTREE(tree, 10.);
	PUSH_BTREE(tree, 0.);
	PUSH_BTREE(tree, 6.);
	PUSH_BTREE(tree, 11.);
	PUSH_BTREE(tree, 1.);
	PUSH_BTREE(tree, 2.);
	PUSH_BTREE(tree, 10.);
	POP_BTREE(tree, 95.);
	POP_BTREE(tree, 11.);
	// enusre active length is correct
	assert_int_equal(tree.active_length, 7);

	float a[7] = {5., 1., 0., 2., 9., 6., 10.};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_float_equal(true, is_float_btree_data(&tree, a[i]), 1.0e-3);
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_double_btree_pop(void **state) {
	DbleBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9.);
	PUSH_BTREE(tree, 5.);
	PUSH_BTREE(tree, 10.);
	PUSH_BTREE(tree, 0.);
	PUSH_BTREE(tree, 6.);
	PUSH_BTREE(tree, 11.);
	PUSH_BTREE(tree, 1.);
	PUSH_BTREE(tree, 2.);
	PUSH_BTREE(tree, 10.);
	POP_BTREE(tree, 95.);
	POP_BTREE(tree, 11.);
	// enusre active length is correct
	assert_int_equal(tree.active_length, 7);

	double a[7] = {5., 1., 0., 2., 9., 6., 10.};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_float_equal(true, is_double_btree_data(&tree, a[i]), 1.0e-3);
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_ldouble_btree_pop(void **state) {
	LDbleBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9.);
	PUSH_BTREE(tree, 5.);
	PUSH_BTREE(tree, 10.);
	PUSH_BTREE(tree, 0.);
	PUSH_BTREE(tree, 6.);
	PUSH_BTREE(tree, 11.);
	PUSH_BTREE(tree, 1.);
	PUSH_BTREE(tree, 2.);
	PUSH_BTREE(tree, 10.);
	POP_BTREE(tree, 95.);
	POP_BTREE(tree, 11.);
	// enusre active length is correct
	assert_int_equal(tree.active_length, 7);

	long double a[7] = {5., 1., 0., 2., 9., 6., 10.};
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_float_equal(true, is_ldouble_btree_data(&tree, a[i]), 1.0e-3);
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_char_btree_pop(void **state) {
	CharBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 'a');
	PUSH_BTREE(tree, 'b');
	PUSH_BTREE(tree, 'c');
	PUSH_BTREE(tree, 'v');
	PUSH_BTREE(tree, 'q');
	PUSH_BTREE(tree, 'd');
	PUSH_BTREE(tree, 'e');
	PUSH_BTREE(tree, 'f');
	PUSH_BTREE(tree, 'a');
	POP_BTREE(tree, 'z');
	POP_BTREE(tree, 'v');
	// enusre active length is correct
	assert_int_equal(tree.active_length, 7);
	char a[7] = "cbaedqf";
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_char_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_uchar_btree_pop(void **state) {
	UCharBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 'a');
	PUSH_BTREE(tree, 'b');
	PUSH_BTREE(tree, 'c');
	PUSH_BTREE(tree, 'v');
	PUSH_BTREE(tree, 'q');
	PUSH_BTREE(tree, 'd');
	PUSH_BTREE(tree, 'e');
	PUSH_BTREE(tree, 'f');
	PUSH_BTREE(tree, 'a');
	POP_BTREE(tree, 'z');
	POP_BTREE(tree, 'v');
	// enusre active length is correct
	assert_int_equal(tree.active_length, 7);
	unsigned char a[7] = "cbaedqf";
	for (size_t i = 0; i < tree.active_length; i++) {
		assert_int_equal(true, is_uchar_btree_data(&tree, a[i]));
	}
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_string_btree_pop(void **state) {
	StringBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, "Apple");
	PUSH_BTREE(tree, "Banana");
	PUSH_BTREE(tree, "Cucumber");
	PUSH_BTREE(tree, "Lettuce");
	PUSH_BTREE(tree, "Pear");
	PUSH_BTREE(tree, "Pumpkin");
	PUSH_BTREE(tree, "Apple");
	POP_BTREE(tree, "Xylaphone");
	POP_BTREE(tree, "Pumpkin");
	// enusre active length is correct
	assert_int_equal(tree.active_length, 5);
	FREE_BTREE(tree);
}
// ================================================================================
// ================================================================================
// TEST_TYPE_MIN_BTREE FUNCTIONS


void test_short_min_btree(void **state) {
	ShortBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);

	short int min = MIN_BTREE(tree);
	assert_int_equal(min, 0);
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_ushort_min_btree(void **state) {
	UShortBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);

	unsigned short int min = MIN_BTREE(tree);
	assert_int_equal(min, 0);
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_int_min_btree(void **state) {
	IntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);

	int min = MIN_BTREE(tree);
	assert_int_equal(min, 0);
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_uint_min_btree(void **state) {
	UIntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);

	unsigned int min = MIN_BTREE(tree);
	assert_int_equal(min, 0);
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_long_min_btree(void **state) {
	LIntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);

	long int min = MIN_BTREE(tree);
	assert_int_equal(min, 0);
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_ulong_min_btree(void **state) {
	ULIntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);

	unsigned long int min = MIN_BTREE(tree);
	assert_int_equal(min, 0);
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_llong_min_btree(void **state) {
	LLIntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);

	long long int min = MIN_BTREE(tree);
	assert_int_equal(min, 0);
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_ullong_min_btree(void **state) {
	ULLIntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);

	unsigned long long int min = MIN_BTREE(tree);
	assert_int_equal(min, 0);
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_float_min_btree(void **state) {
	FltBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9.);
	PUSH_BTREE(tree, 5.);
	PUSH_BTREE(tree, 10.);
	PUSH_BTREE(tree, 0.);
	PUSH_BTREE(tree, 6.);
	PUSH_BTREE(tree, 11.);
	PUSH_BTREE(tree, 1.);
	PUSH_BTREE(tree, 2.);
	PUSH_BTREE(tree, 10.);
	POP_BTREE(tree, 95.);
	POP_BTREE(tree, 11.);

	float min = MIN_BTREE(tree);
	assert_float_equal(min, 0., 1.0e-3);
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_double_min_btree(void **state) {
	DbleBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9.);
	PUSH_BTREE(tree, 5.);
	PUSH_BTREE(tree, 10.);
	PUSH_BTREE(tree, 0.);
	PUSH_BTREE(tree, 6.);
	PUSH_BTREE(tree, 11.);
	PUSH_BTREE(tree, 1.);
	PUSH_BTREE(tree, 2.);
	PUSH_BTREE(tree, 10.);
	POP_BTREE(tree, 95.);
	POP_BTREE(tree, 11.);

	double min = MIN_BTREE(tree);
	assert_float_equal(min, 0., 1.0e-3);
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_ldouble_min_btree(void **state) {
	LDbleBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9.);
	PUSH_BTREE(tree, 5.);
	PUSH_BTREE(tree, 10.);
	PUSH_BTREE(tree, 0.);
	PUSH_BTREE(tree, 6.);
	PUSH_BTREE(tree, 11.);
	PUSH_BTREE(tree, 1.);
	PUSH_BTREE(tree, 2.);
	PUSH_BTREE(tree, 10.);
	POP_BTREE(tree, 95.);
	POP_BTREE(tree, 11.);

	long double min = MIN_BTREE(tree);
	assert_float_equal(min, 0., 1.0e-3);
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_char_min_btree(void **state) {
	CharBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 'a');
	PUSH_BTREE(tree, 'b');
	PUSH_BTREE(tree, 'c');
	PUSH_BTREE(tree, 'd');
	PUSH_BTREE(tree, 'e');

	char min = MIN_BTREE(tree);
	assert_int_equal(min, 'a');
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_uchar_min_btree(void **state) {
	UCharBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 'a');
	PUSH_BTREE(tree, 'b');
	PUSH_BTREE(tree, 'c');
	PUSH_BTREE(tree, 'd');
	PUSH_BTREE(tree, 'e');

	unsigned char min = MIN_BTREE(tree);
	assert_int_equal(min, 'a');
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_string_min_btree(void **state) {
	StringBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, "Apple");
	PUSH_BTREE(tree, "Banana");
	PUSH_BTREE(tree, "Cucumber");
	PUSH_BTREE(tree, "Pear");
	PUSH_BTREE(tree, "Lettuce");

	char *min = MIN_BTREE(tree);
	int cmp = strcmp(min, "Apple");
	assert_int_equal(cmp, 0);
	FREE_BTREE(tree);
}
// ================================================================================
// ================================================================================
// TEST_TYPE_MAX_BTREE FUNCTIONS

void test_short_max_btree(void **state) {
	ShortBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);

	short int max = MAX_BTREE(tree);
	assert_int_equal(max, 10);
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_ushort_max_btree(void **state) {
	UShortBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);

	unsigned short int max = MAX_BTREE(tree);
	assert_int_equal(max, 10);
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_int_max_btree(void **state) {
	IntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);

	int max = MAX_BTREE(tree);
	assert_int_equal(max, 10);
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_uint_max_btree(void **state) {
	UIntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);

	unsigned int max = MAX_BTREE(tree);
	assert_int_equal(max, 10);
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_long_max_btree(void **state) {
	LIntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);

	long int max = MAX_BTREE(tree);
	assert_int_equal(max, 10);
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_ulong_max_btree(void **state) {
	ULIntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);

	unsigned long int max = MAX_BTREE(tree);
	assert_int_equal(max, 10);
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_llong_max_btree(void **state) {
	LLIntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);

	long long int max = MAX_BTREE(tree);
	assert_int_equal(max, 10);
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_ullong_max_btree(void **state) {
	ULLIntBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9);
	PUSH_BTREE(tree, 5);
	PUSH_BTREE(tree, 10);
	PUSH_BTREE(tree, 0);
	PUSH_BTREE(tree, 6);
	PUSH_BTREE(tree, 11);
	PUSH_BTREE(tree, 1);
	PUSH_BTREE(tree, 2);
	PUSH_BTREE(tree, 10);
	POP_BTREE(tree, 95);
	POP_BTREE(tree, 11);

	unsigned long long int max = MAX_BTREE(tree);
	assert_int_equal(max, 10);
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_float_max_btree(void **state) {
	FltBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9.);
	PUSH_BTREE(tree, 5.);
	PUSH_BTREE(tree, 10.);
	PUSH_BTREE(tree, 0.);
	PUSH_BTREE(tree, 6.);
	PUSH_BTREE(tree, 11.);
	PUSH_BTREE(tree, 1.);
	PUSH_BTREE(tree, 2.);
	PUSH_BTREE(tree, 10.);
	POP_BTREE(tree, 95.);
	POP_BTREE(tree, 11.);

	float max = MAX_BTREE(tree);
	assert_float_equal(max, 10., 1.0e-3);
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_double_max_btree(void **state) {
	DbleBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9.);
	PUSH_BTREE(tree, 5.);
	PUSH_BTREE(tree, 10.);
	PUSH_BTREE(tree, 0.);
	PUSH_BTREE(tree, 6.);
	PUSH_BTREE(tree, 11.);
	PUSH_BTREE(tree, 1.);
	PUSH_BTREE(tree, 2.);
	PUSH_BTREE(tree, 10.);
	POP_BTREE(tree, 95.);
	POP_BTREE(tree, 11.);

	double max = MAX_BTREE(tree);
	assert_float_equal(max, 10., 1.0e-3);
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_ldouble_max_btree(void **state) {
	LDbleBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9.);
	PUSH_BTREE(tree, 5.);
	PUSH_BTREE(tree, 10.);
	PUSH_BTREE(tree, 0.);
	PUSH_BTREE(tree, 6.);
	PUSH_BTREE(tree, 11.);
	PUSH_BTREE(tree, 1.);
	PUSH_BTREE(tree, 2.);
	PUSH_BTREE(tree, 10.);
	POP_BTREE(tree, 95.);
	POP_BTREE(tree, 11.);

	long double max = MAX_BTREE(tree);
	assert_float_equal(max, 10., 1.0e-3);
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_char_max_btree(void **state) {
	CharBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 'a');
	PUSH_BTREE(tree, 'b');
	PUSH_BTREE(tree, 'c');
	PUSH_BTREE(tree, 'd');
	PUSH_BTREE(tree, 'e');

	char max = MAX_BTREE(tree);
	assert_int_equal(max, 'e');
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_uchar_max_btree(void **state) {
	UCharBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 'a');
	PUSH_BTREE(tree, 'b');
	PUSH_BTREE(tree, 'c');
	PUSH_BTREE(tree, 'd');
	PUSH_BTREE(tree, 'e');

	unsigned char max = MAX_BTREE(tree);
	assert_int_equal(max, 'e');
	FREE_BTREE(tree);
}
// --------------------------------------------------------------------------------

void test_string_max_btree(void **state) {
	StringBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, "Apple");
	PUSH_BTREE(tree, "Banana");
	PUSH_BTREE(tree, "Cucumber");
	PUSH_BTREE(tree, "Pear");
	PUSH_BTREE(tree, "Lettuce");

	char *max = MAX_BTREE(tree);
	int cmp = strcmp(max, "Pear");
	assert_int_equal(cmp, 0);
	FREE_BTREE(tree);
}
// ================================================================================
// ================================================================================
// eof
