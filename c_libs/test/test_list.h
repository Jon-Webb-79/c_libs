// ================================================================================
// ================================================================================
// - File:    test_list.h
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

#ifndef test_H
#define test_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <stdint.h>
#include <cmocka.h>

#include "../include/data_structures.h"
#include "../include/print.h"

// TEST_PUSH_TYPE FUNCTIONS

void test_push_short_list(void **state);
void test_push_ushort_list(void **state);
void test_push_int_list(void **state);
void test_push_uint_list(void **state);
void test_push_long_list(void **state);
void test_push_ulong_list(void **state);
void test_push_llong_list(void **state);
void test_push_ullong_list(void **state);
void test_push_float_list(void **state);
void test_push_double_list(void **state);
void test_push_ldouble_list(void **state);
void test_push_char_list(void **state);
void test_push_uchar_list(void **state);
void test_push_bool_list(void **state);
void test_push_string_list(void **state);

// ================================================================================
// ================================================================================
// TEST_INSERT_TYPE

void test_insert_short_list(void **state);
void test_insert_ushort_list(void **state);
void test_insert_int_list(void **state);
void test_insert_uint_list(void **state);
void test_insert_long_list(void **state);
void test_insert_ulong_list(void **state);
void test_insert_llong_list(void **state);
void test_insert_ullong_list(void **state);
void test_insert_float_list(void **state);
void test_insert_double_list(void **state);
void test_insert_ldouble_list(void **state);
void test_insert_char_list(void **state);
void test_insert_uchar_list(void **state);
void test_insert_bool_list(void **state);
// ================================================================================
// ================================================================================
// TEST REPLACE_TYPE_LIST_INDEX

void test_replace_short_list_index(void **state);
void test_replace_ushort_list_index(void **state);
void test_replace_int_list_index(void **state);
void test_replace_uint_list_index(void **state);
void test_replace_long_list_index(void **state);
void test_replace_ulong_list_index(void **state);
void test_replace_llong_list_index(void **state);
void test_replace_ullong_list_index(void **state);
void test_replace_float_list_index(void **state);
void test_replace_double_list_index(void **state);
void test_replace_ldouble_list_index(void **state);
void test_replace_char_list_index(void **state);
void test_replace_uchar_list_index(void **state);
void test_replace_bool_list_index(void **state);
void test_replace_string_list_index(void **state);
// ================================================================================
// ================================================================================
#endif /* test_H */
// eof
