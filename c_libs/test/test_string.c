// ================================================================================
// ================================================================================
// - File:    test_string.c
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

#include "test_string.h"

void test_append_string_free(void **state)
{
	(void) state;
	str STR_NULL(string);
	append_string(string, str_lit("One"));
	append_string(string, " Two");
	int a = compare_strings(string, str_lit("One Two"));
	assert_int_equal(a, 0);
	free_str(string);
}
// --------------------------------------------------------------------------------

void test_append_string_cleanup(void **state)
{
	(void) state;
	str CLEANUP_STR(string);
	append_string(string, str_lit("One"));
	append_string(string, " Two");
	int a = compare_strings(string, str_lit("One Two"));
	assert_int_equal(a, 0);
}
// --------------------------------------------------------------------------------

void test_copy_memory(void **state)
{
	(void) state;
	str STR_NULL(string1);
	str STR_NULL(string2);
	append_string(string1, "This is a long string for demonstration.");
	size_t n = 12;
	copy_mem(string2, string1, n);
	int a = compare_strings(string2, str_lit("This is a lo"));
	assert_int_equal(a, 0);
	free_str(string1);
	free_str(string2);
}
// --------------------------------------------------------------------------------

void test_move_memory(void **state)
{
	(void) state;
	str STR_NULL(string1);
	str STR_NULL(string2);
	append_string(string1, "This is another string for demonstration.");
	size_t n = 20;
	move_mem(string2, string1, n);
	int a = compare_strings(string2, str_lit("This is another stri"));
	assert_int_equal(a, 0);
	free_str(string1);
	free_str(string2);
}
// --------------------------------------------------------------------------------

void test_replace_string_literal(void **state)
{
	(void) state;
	str STR_NULL(string1);
	append_string(string1, "Original String");
	replace_string(string1, "Second String");
	int a = compare_strings(string1, str_lit("Second String"));
	assert_int_equal(a, 0);
	free_str(string1);
}
// --------------------------------------------------------------------------------

void test_replace_string_str(void **state)
{
	(void) state;
	str STR_NULL(string1);
	append_string(string1, "Original String");
	replace_string(string1, str_lit("Second String"));
	int a = compare_strings(string1, str_lit("Second String"));
	assert_int_equal(a, 0);
	free_str(string1);
}
// --------------------------------------------------------------------------------

void test_compare_equal_strings(void **state)
{
	(void) state;
	int a = compare_strings(str_lit("aaa"), str_lit("aaa"));
	assert_int_equal(a, 0);
}
// --------------------------------------------------------------------------------

void test_compare_larger_strings(void **state)
{
	(void) state;
	int a = compare_strings(str_lit("aab"), str_lit("aaa"));
	assert_int_equal(a, 1);
}
// --------------------------------------------------------------------------------

void test_compare_smaller_strings(void **state)
{
	(void) state;
	int a = compare_strings(str_lit("aab"), str_lit("aac"));
	assert_int_equal(a, -1);
}
// ================================================================================
// ================================================================================
// eof
