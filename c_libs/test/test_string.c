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
	free_string(&string);
}
// --------------------------------------------------------------------------------

void test_append_string_cleanup(void **state)
{
	(void) state;
	str CLEANUP(string);
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
	copy_memory(&string2, &string1, n);
	int a = compare_strings(string2, str_lit("This is a lo"));
	assert_int_equal(a, 0);
	free_string(&string1);
	free_string(&string2);
}
// --------------------------------------------------------------------------------

void test_move_memory(void **state)
{
	(void) state;
	str STR_NULL(string1);
	str STR_NULL(string2);
	append_string(string1, "This is another string for demonstration.");
	size_t n = 20;
	move_memory(&string2, &string1, n);
	int a = compare_strings(string2, str_lit("This is another stri"));
	assert_int_equal(a, 0);
	free_string(&string1);
	free_string(&string2);
}
// ================================================================================
// ================================================================================
// eof
