// ==========================================================================================
// ==========================================================================================
// - File:    test_vector.h
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

#ifndef test_vector_H
#define test_vector_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <stdint.h>
#include <cmocka.h>
#include <stdbool.h>
#include <string.h>

#include "../include/data_structures.h"

// TEST_PUSH_TYPE FUNCTIONS

void test_push_short_vec(void **state);
void test_push_ushort_vec(void **state);
void test_push_int_vec(void **state);
void test_push_uint_vec(void **state);
void test_push_long_vec(void **state);
void test_push_ulong_vec(void **state);
void test_push_llong_vec(void **state);
void test_push_ullong_vec(void **state);
void test_push_char_vec(void **state);
void test_push_uchar_vec(void **state);
void test_push_float_vec(void **state);
void test_push_double_vec(void **state);
void test_push_ldouble_vec(void **state);
void test_push_bool_vec(void **state);
void test_push_string_vec(void **state);
// ==========================================================================================
// ==========================================================================================
// TEST_INSERT_TYPE FUNCTIONS

void test_insert_short_vec(void **state);
void test_insert_ushort_vec(void **state);
void test_insert_int_vec(void **state);
void test_insert_uint_vec(void **state);
void test_insert_long_vec(void **state);
void test_insert_ulong_vec(void **state);
void test_insert_llong_vec(void **state);
void test_insert_ullong_vec(void **state);
void test_insert_char_vec(void **state);
void test_insert_uchar_vec(void **state);
void test_insert_float_vec(void **state);
void test_insert_double_vec(void **state);
void test_insert_ldouble_vec(void **state);
void test_insert_bool_vec(void **state);
void test_insert_string_vec(void **state);
// ==========================================================================================
// ==========================================================================================
// TEST_INSERT_ARRAY_TYPE FUNCTIONS

void test_insert_short_arr(void **state);
void test_insert_ushort_arr(void **state);
void test_insert_int_arr(void **state);
void test_insert_uint_arr(void **state);
void test_insert_long_arr(void **state);
void test_insert_ulong_arr(void **state);
void test_insert_llong_arr(void **state);
void test_insert_ullong_arr(void **state);
void test_insert_char_arr(void **state);
void test_insert_uchar_arr(void **state);
void test_insert_float_arr(void **state);
void test_insert_double_arr(void **state);
void test_insert_ldouble_arr(void **state);
void test_insert_bool_arr(void **state);
// ==========================================================================================
// ==========================================================================================
// TEST_POP_TYPE_INDEX FUNCTIONS

void test_pop_short_vec(void **state);
void test_pop_ushort_vec(void **state);
void test_pop_int_vec(void **state);
void test_pop_uint_vec(void **state);
void test_pop_long_vec(void **state);
void test_pop_ulong_vec(void **state);
void test_pop_llong_vec(void **state);
void test_pop_ullong_vec(void **state);
void test_pop_char_vec(void **state);
void test_pop_uchar_vec(void **state);
void test_pop_float_vec(void **state);
void test_pop_double_vec(void **state);
void test_pop_ldouble_vec(void **state);
void test_pop_bool_vec(void **state);
void test_pop_string_vec(void **state);
// ==========================================================================================
// ==========================================================================================
// TEST_REPLACE_TYPE_VALUES_VEC FUNCTIONS

void test_replace_short_values_vec(void **state);
void test_replace_ushort_values_vec(void **state);
void test_replace_int_values_vec(void **state);
void test_replace_uint_values_vec(void **state);
void test_replace_long_values_vec(void **state);
void test_replace_ulong_values_vec(void **state);
void test_replace_llong_values_vec(void **state);
void test_replace_ullong_values_vec(void **state);
void test_replace_char_values_vec(void **state);
void test_replace_uchar_values_vec(void **state);
void test_replace_float_values_vec(void **state);
void test_replace_double_values_vec(void **state);
void test_replace_ldouble_values_vec(void **state);
void test_replace_bool_values_vec(void **state);
void test_replace_string_values_vec(void **state);
// ==========================================================================================
// ==========================================================================================
// TEST_DELETE_TYPE_DUP_VEC

void test_delete_short_dup_vec(void **state);
void test_delete_ushort_dup_vec(void **state);
void test_delete_int_dup_vec(void **state);
void test_delete_uint_dup_vec(void **state);
void test_delete_long_dup_vec(void **state);
void test_delete_ulong_dup_vec(void **state);
void test_delete_llong_dup_vec(void **state);
void test_delete_ullong_dup_vec(void **state);
void test_delete_float_dup_vec(void **state);
void test_delete_double_dup_vec(void **state);
void test_delete_ldouble_dup_vec(void **state);
void test_delete_char_dup_vec(void **state);
void test_delete_uchar_dup_vec(void **state);
void test_delete_bool_dup_vec(void **state);
void test_delete_string_dup_vec(void **state);
// ==========================================================================================
// ==========================================================================================

#endif /* test_vector_H */
// ==========================================================================================
// ==========================================================================================
// eof
