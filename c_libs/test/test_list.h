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
// TEST_REPLACE_TYPE_LIST_VALUES FUNCTIONS

void test_replace_short_list_values(void **state);
void test_replace_ushort_list_values(void **state);
void test_replace_int_list_values(void **state);
void test_replace_uint_list_values(void **state);
void test_replace_long_list_values(void **state);
void test_replace_ulong_list_values(void **state);
void test_replace_llong_list_values(void **state);
void test_replace_ullong_list_values(void **state);
void test_replace_float_list_values(void **state);
void test_replace_double_list_values(void **state);
void test_replace_ldouble_list_values(void **state);
void test_replace_char_list_values(void **state);
void test_replace_uchar_list_values(void **state);
void test_replace_bool_list_values(void **state);
void test_replace_string_list_values(void **state);
// ================================================================================
// ================================================================================
// TEST_DELETE_TYPE_LIST_DUPLICATES

void test_delete_short_list_duplicates(void **state);
void test_delete_ushort_list_duplicates(void **state);
void test_delete_int_list_duplicates(void **state);
void test_delete_uint_list_duplicates(void **state);
void test_delete_long_list_duplicates(void **state);
void test_delete_ulong_list_duplicates(void **state);
void test_delete_llong_list_duplicates(void **state);
void test_delete_ullong_list_duplicates(void **state);
void test_delete_float_list_duplicates(void **state);
void test_delete_double_list_duplicates(void **state);
void test_delete_ldouble_list_duplicates(void **state);
void test_delete_char_list_duplicates(void **state);
void test_delete_uchar_list_duplicates(void **state);
void test_delete_bool_list_duplicates(void **state);
void test_delete_string_list_duplicates(void **state);
// ================================================================================
// ================================================================================
// TEST_REVERSE_TYPE_LIST FUNCTIONS

void test_reverse_short_list(void **state);
void test_reverse_ushort_list(void **state);
void test_reverse_int_list(void **state);
void test_reverse_uint_list(void **state);
void test_reverse_long_list(void **state);
void test_reverse_ulong_list(void **state);
void test_reverse_llong_list(void **state);
void test_reverse_ullong_list(void **state);
void test_reverse_float_list(void **state);
void test_reverse_double_list(void **state);
void test_reverse_ldouble_list(void **state);
void test_reverse_char_list(void **state);
void test_reverse_uchar_list(void **state);
void test_reverse_bool_list(void **state);
void test_reverse_string_list(void **state);
// ================================================================================
// ================================================================================
// TEST SORT_TYPE_LIST FUNCTIONS

void test_sort_short_list(void **state);
void test_sort_ushort_list(void **state);
void test_sort_int_list(void **state);
void test_sort_uint_list(void **state);
void test_sort_long_list(void **state);
void test_sort_ulong_list(void **state);
void test_sort_llong_list(void **state);
void test_sort_ullong_list(void **state);
void test_sort_float_list(void **state);
void test_sort_double_list(void **state);
void test_sort_ldouble_list(void **state);
void test_sort_char_list(void **state);
void test_sort_uchar_list(void **state);
void test_sort_bool_list(void **state);
void test_sort_string_list(void **state);
// ================================================================================
// ================================================================================
// TEST_SUM_TYPE_LIST FUNCTIONS

void test_sum_short_list(void **state);
void test_sum_ushort_list(void **state);
void test_sum_int_list(void **state);
void test_sum_uint_list(void **state);
void test_sum_long_list(void **state);
void test_sum_ulong_list(void **state);
void test_sum_llong_list(void **state);
void test_sum_ullong_list(void **state);
void test_sum_float_list(void **state);
void test_sum_double_list(void **state);
void test_sum_ldouble_list(void **state);
// ================================================================================
// ================================================================================
// TEST_CUMSUM_TYPE_LIST FUNCTIONS

void test_cumsum_short_list(void **state);
void test_cumsum_ushort_list(void **state);
void test_cumsum_int_list(void **state);
void test_cumsum_uint_list(void **state);
void test_cumsum_long_list(void **state);
void test_cumsum_ulong_list(void **state);
void test_cumsum_llong_list(void **state);
void test_cumsum_ullong_list(void **state);
void test_cumsum_float_list(void **state);
void test_cumsum_double_list(void **state);
void test_cumsum_ldouble_list(void **state);
// ================================================================================
// ================================================================================
// TEST_AVERAGE_TYPE_LIST

void test_average_short_list(void **state);
void test_average_ushort_list(void **state);
void test_average_int_list(void **state);
void test_average_uint_list(void **state);
void test_average_long_list(void **state);
void test_average_ulong_list(void **state);
void test_average_llong_list(void **state);
void test_average_ullong_list(void **state);
void test_average_float_list(void **state);
void test_average_double_list(void **state);
void test_average_ldouble_list(void **state);
// ================================================================================
// ================================================================================
// TEST_STDEV_TYPE_LIST FUNCTIONS

void test_stdev_short_list(void **state);
void test_stdev_ushort_list(void **state);
void test_stdev_int_list(void **state);
void test_stdev_uint_list(void **state);
void test_stdev_long_list(void **state);
void test_stdev_ulong_list(void **state);
void test_stdev_llong_list(void **state);
void test_stdev_ullong_list(void **state);
void test_stdev_float_list(void **state);
void test_stdev_double_list(void **state);
void test_stdev_ldouble_list(void **state);
// ================================================================================
// ================================================================================
// TEST_MAX_TYPE_LIST FUNCTIONS

void test_max_short_list(void **state);
void test_max_ushort_list(void **state);
void test_max_int_list(void **state);
void test_max_uint_list(void **state);
void test_max_long_list(void **state);
void test_max_ulong_list(void **state);
void test_max_llong_list(void **state);
void test_max_ullong_list(void **state);
void test_max_float_list(void **state);
void test_max_double_list(void **state);
void test_max_ldouble_list(void **state);
// ================================================================================
// ================================================================================
// TEST_MIN_TYPE_LIST FUNCTIONS

void test_min_short_list(void **state);
void test_min_ushort_list(void **state);
void test_min_int_list(void **state);
void test_min_uint_list(void **state);
void test_min_long_list(void **state);
void test_min_ulong_list(void **state);
void test_min_llong_list(void **state);
void test_min_ullong_list(void **state);
void test_min_float_list(void **state);
void test_min_double_list(void **state);
void test_min_ldouble_list(void **state);
// ================================================================================
// ================================================================================
// TEST_RANGE_TYPE_LIST FUNCTIONS

void test_range_short_list(void **state);
void test_range_ushort_list(void **state);
void test_range_int_list(void **state);
void test_range_uint_list(void **state);
void test_range_long_list(void **state);
void test_range_ulong_list(void **state);
void test_range_llong_list(void **state);
void test_range_ullong_list(void **state);
void test_range_float_list(void **state);
void test_range_double_list(void **state);
void test_range_ldouble_list(void **state);
// ================================================================================
// ================================================================================
// TEST_COPY

void test_copy_short_list(void ** state);
void test_copy_ushort_list(void ** state);
void test_copy_int_list(void ** state);
void test_copy_uint_list(void ** state);
void test_copy_long_list(void ** state);
void test_copy_ulong_list(void ** state);
void test_copy_llong_list(void ** state);
void test_copy_ullong_list(void ** state);
void test_copy_char_list(void ** state);
void test_copy_uchar_list(void ** state);
void test_copy_float_list(void ** state);
void test_copy_double_list(void ** state);
void test_copy_ldouble_list(void ** state);
void test_copy_bool_list(void ** state);
void test_copy_short_list(void ** state);
void test_copy_string_list(void ** state);
// ================================================================================
// ================================================================================
// TEST_REPEAT

void test_repeat_short_list(void ** state);
void test_repeat_ushort_list(void ** state);
void test_repeat_int_list(void ** state);
void test_repeat_uint_list(void ** state);
void test_repeat_long_list(void ** state);
void test_repeat_ulong_list(void ** state);
void test_repeat_llong_list(void ** state);
void test_repeat_ullong_list(void ** state);
void test_repeat_char_list(void ** state);
void test_repeat_uchar_list(void ** state);
void test_repeat_float_list(void ** state);
void test_repeat_double_list(void ** state);
void test_repeat_ldouble_list(void ** state);
void test_repeat_bool_list(void ** state);
void test_repeat_short_list(void ** state);
void test_repeat_string_list(void ** state);
// ================================================================================
// ================================================================================

void test_short_list_to_vector(void **state);
void test_ushort_list_to_vector(void **state);
void test_int_list_to_vector(void **state);
void test_uint_list_to_vector(void **state);
void test_long_list_to_vector(void **state);
void test_ulong_list_to_vector(void **state);
void test_llong_list_to_vector(void **state);
void test_ullong_list_to_vector(void **state);
void test_float_list_to_vector(void **state);
void test_double_list_to_vector(void **state);
void test_ldouble_list_to_vector(void **state);
void test_char_list_to_vector(void **state);
void test_uchar_list_to_vector(void **state);
void test_bool_list_to_vector(void **state);
void test_string_list_to_vector(void **state);
// ================================================================================
// ================================================================================
#endif /* test_H */
// eof
