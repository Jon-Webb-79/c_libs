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
void test_cleanup_with_manual_deallocation(void **state)
{
	(void) state;
	str CLEANUP_STR(string);
	append_string(string, str_lit("One"));
	append_string(string, " Two");
	int a = compare_strings(string, str_lit("One Two"));
	assert_int_equal(a, 0);
	free_str(string);
}
// --------------------------------------------------------------------------------

void test_append_string_manual_cleanup(void **state)
{
	(void) state;
	str CLEANUP_STR(string);
	append_string(string, str_lit("One"));
	append_string(string, " Two");
	int a = compare_strings(string, str_lit("One Two"));
	assert_int_equal(a, 0);
	free_str(string);
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

void test_copy_memory_overflow(void **state)
{
	(void) state;
	str STR_NULL(string1);
	str STR_NULL(string2);
	append_string(string1, "This is a long string for demonstration.");
	size_t n = 60;
	ErrorCodes val = copy_mem(string2, string1, n);
	assert_int_equal(val, OutOfBoundsError);
	free_str(string1);
	free_str(string2);
}
// --------------------------------------------------------------------------------

void test_copy_memory_null(void **state)
{
	(void) state;
	str STR_NULL(string1);
	str STR_NULL(string2);
	size_t n = 5;
	ErrorCodes val = copy_mem(string2, string1, n);
	assert_int_equal(val, NullStrError);
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

void test_move_memory_overflow(void **state)
{
	(void) state;
	str STR_NULL(string1);
	str STR_NULL(string2);
	append_string(string1, "This is another string for demonstration.");
	size_t n = 60;
	ErrorCodes val = move_mem(string2, string1, n);
	assert_int_equal(val, OutOfBoundsError);
	free_str(string1);
	free_str(string2);
}
// --------------------------------------------------------------------------------

void test_move_memory_null(void **state)
{
	(void) state;
	str STR_NULL(string1);
	str STR_NULL(string2);
	size_t n = 5;
	ErrorCodes val = move_mem(string2, string1, n);
	assert_int_equal(val, NullStrError);
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
	int a = compare_strings(str_lit("aaa"), str_lit("aac"));
    assert_int_equal(a, -2);
}
// --------------------------------------------------------------------------------

void test_literal_string_length(void **state)
{
	(void) state;
	size_t a = literal_strlen("Hello");
	assert_int_equal(a, 5);
}
// --------------------------------------------------------------------------------

void test_copy_string_literal(void **state)
{
	(void) state;
    const char src[50] = "https://www.tutorialspoint.com";
    char dest[50] = "Heloooo!!";
    literal_memcpy(dest, src, literal_strlen(src)+1);
	int a = compare_strings(str_lit(dest), str_lit(dest));
	assert_int_equal(a, 0);
}
// --------------------------------------------------------------------------------

void test_move_string_literal(void **state)
{
	(void) state;
    char string[] = "memmove can be very useful......";
    literal_memmove(string+20, string+15, 11);
	str string2= str_lit(string);
	str string3 = str_lit("memmove can be very very useful.");
	int a = compare_strings(string2, string3);
	assert_int_equal(a, 0);
}
// --------------------------------------------------------------------------------

void test_last_token_occurance(void **state)
{
	(void) state;
	const char *test_string1 = "hello, world! hello again!";
    char *result1 = last_token_occurance(test_string1, 'l');
    assert_ptr_equal(result1, test_string1 + 17);  // The last 'l' is at position 24
}
// --------------------------------------------------------------------------------

void test_last_token_occurance_null(void **state)
{
	(void) state;
	const char *test_string2 = "hello, world!";
    char *result2 = last_token_occurance(test_string2, 'z');
    assert_ptr_equal(result2, NULL);
}
// --------------------------------------------------------------------------------

void test_last_token_empty(void **state)
{
	(void) state;
	const char *test_string4 = "";
    char *result4 = last_token_occurance(test_string4, 'a');
    assert_ptr_equal(result4, NULL);
}
// --------------------------------------------------------------------------------

void test_pop_string_token(void **state)
{
	(void) state;
	str STR_NULL(date);
    append_string(date, "01/06/2023");
	str year = string_pop(date, "/");
	str month = string_pop(date, "/");
	str day = string_pop(date, "/");
	assert_string_equal(year.ptr, "2023");
	assert_string_equal(month.ptr, "06");
	assert_string_equal(day.ptr, "01");
	assert_ptr_equal(date.ptr, NULL);

	free_str(date);
	free_str(year);
	free_str(month);
	free_str(day);
}
// --------------------------------------------------------------------------------

void test_pop_string_int(void **state)
{
	(void) state;
	str STR_NULL(date);
    append_string(date, "01062023");
	str year = string_pop(date, 4);
	str month = string_pop(date, 2);
	str day = string_pop(date, 2);
	assert_string_equal(year.ptr, "2023");
	assert_string_equal(month.ptr, "06");
	assert_string_equal(day.ptr, "01");
	assert_ptr_equal(date.ptr, NULL);

	free_str(date);
	free_str(year);
	free_str(month);
	free_str(day);
}
// --------------------------------------------------------------------------------

void test_resize_string(void **state)
{
	(void) state;
	str STR_NULL(date);
    append_string(date, "01/062023");
	str year = string_pop(date, "/");
	resize_str(date);

	free_str(date);
	free_str(year);
}
// --------------------------------------------------------------------------------

void test_remove_string_token(void **state)
{
	(void) state;
	str STR_NULL(date);
    append_string(date, "01/06/2023");
	remove_string_after(date, "/");
	assert_string_equal(date.ptr, "01/06");
	free_str(date);
}
// --------------------------------------------------------------------------------

void test_remove_string_int(void **state)
{
	(void) state;
	str STR_NULL(date);
    append_string(date, "01062023");
	remove_string_after(date, 4);
	assert_string_equal(date.ptr, "0106");
	free_str(date);
}
// --------------------------------------------------------------------------------

void test_concat_literal(void **state)
{
	(void) state;
	char buffer[100] = "One";
	char *a = literal_strcat(buffer, "Two");
	assert_string_equal(a, "OneTwo");
}
// ================================================================================
// ================================================================================
// eof
