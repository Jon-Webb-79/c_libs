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
// TEST REVERSE_TYPE FUNCTIONS

void test_reverse_short_vec(void **state);
void test_reverse_ushort_vec(void **state);
void test_reverse_int_vec(void **state);
void test_reverse_uint_vec(void **state);
void test_reverse_long_vec(void **state);
void test_reverse_ulong_vec(void **state);
void test_reverse_llong_vec(void **state);
void test_reverse_ullong_vec(void **state);
void test_reverse_float_vec(void **state);
void test_reverse_double_vec(void **state);
void test_reverse_ldouble_vec(void **state);
void test_reverse_char_vec(void **state);
void test_reverse_uchar_vec(void **state);
void test_reverse_bool_vec(void **state);
void test_reverse_string_vec(void **state);
// ==========================================================================================
// ==========================================================================================
// TEST SORT_TYPE_VEC FUNCTIONS

void test_sort_short_vec(void **state);
void test_sort_ushort_vec(void **state);
void test_sort_int_vec(void **state);
void test_sort_uint_vec(void **state);
void test_sort_long_vec(void **state);
void test_sort_ulong_vec(void **state);
void test_sort_llong_vec(void **state);
void test_sort_ullong_vec(void **state);
void test_sort_float_vec(void **state);
void test_sort_double_vec(void **state);
void test_sort_ldouble_vec(void **state);
void test_sort_char_vec(void **state);
void test_sort_uchar_vec(void **state);
void test_sort_bool_vec(void **state);
void test_sort_string_vec(void **state);
// ==========================================================================================
// ==========================================================================================
// TEST SUM_TYPE_VEC FUNCTIONS

void test_sum_short_vec(void **state);
void test_sum_ushort_vec(void **state);
void test_sum_int_vec(void **state);
void test_sum_uint_vec(void **state);
void test_sum_long_vec(void **state);
void test_sum_ulong_vec(void **state);
void test_sum_llong_vec(void **state);
void test_sum_ullong_vec(void **state);
void test_sum_float_vec(void **state);
void test_sum_double_vec(void **state);
void test_sum_ldouble_vec(void **state);
void test_sum_char_vec(void **state);
void test_sum_uchar_vec(void **state);
// ==========================================================================================
// ==========================================================================================
// TEST CUMSUM_TYPE_VEC FUNCTIONS

void test_cumsum_short_vec(void **state);
void test_cumsum_ushort_vec(void **state);
void test_cumsum_int_vec(void **state);
void test_cumsum_uint_vec(void **state);
void test_cumsum_long_vec(void **state);
void test_cumsum_ulong_vec(void **state);
void test_cumsum_llong_vec(void **state);
void test_cumsum_ullong_vec(void **state);
void test_cumsum_float_vec(void **state);
void test_cumsum_double_vec(void **state);
void test_cumsum_ldouble_vec(void **state);
void test_cumsum_char_vec(void **state);
void test_cumsum_uchar_vec(void **state);
// ==========================================================================================
// ==========================================================================================
// TEST AVERAGE_TYPE FUNCTIONS

void test_average_short_vec(void **state);
void test_average_ushort_vec(void **state);
void test_average_int_vec(void **state);
void test_average_uint_vec(void **state);
void test_average_long_vec(void **state);
void test_average_ulong_vec(void **state);
void test_average_llong_vec(void **state);
void test_average_ullong_vec(void **state);
void test_average_float_vec(void **state);
void test_average_double_vec(void **state);
void test_average_ldouble_vec(void **state);
void test_average_char_vec(void **state);
void test_average_uchar_vec(void **state);
// ==========================================================================================
// ==========================================================================================
// TEST STDEV_TYPE_VEC FUNCTIONS

void test_stdev_short_vec(void **state);
void test_stdev_ushort_vec(void **state);
void test_stdev_int_vec(void **state);
void test_stdev_uint_vec(void **state);
void test_stdev_long_vec(void **state);
void test_stdev_ulong_vec(void **state);
void test_stdev_llong_vec(void **state);
void test_stdev_ullong_vec(void **state);
void test_stdev_float_vec(void **state);
void test_stdev_double_vec(void **state);
void test_stdev_ldouble_vec(void **state);
void test_stdev_char_vec(void **state);
void test_stdev_uchar_vec(void **state);
// ==========================================================================================
// ==========================================================================================
// TEST MAX_TYPE_VEC FUNCTIONS

void test_max_short_vec(void **state);
void test_max_ushort_vec(void **state);
void test_max_int_vec(void **state);
void test_max_uint_vec(void **state);
void test_max_long_vec(void **state);
void test_max_ulong_vec(void **state);
void test_max_llong_vec(void **state);
void test_max_ullong_vec(void **state);
void test_max_float_vec(void **state);
void test_max_double_vec(void **state);
void test_max_ldouble_vec(void **state);
void test_max_char_vec(void **state);
void test_max_uchar_vec(void **state);
// ==========================================================================================
// ==========================================================================================
// TEST MIN_TYPE_VEC FUNCTIONS

void test_min_short_vec(void **state);
void test_min_ushort_vec(void **state);
void test_min_int_vec(void **state);
void test_min_uint_vec(void **state);
void test_min_long_vec(void **state);
void test_min_ulong_vec(void **state);
void test_min_llong_vec(void **state);
void test_min_ullong_vec(void **state);
void test_min_float_vec(void **state);
void test_min_double_vec(void **state);
void test_min_ldouble_vec(void **state);
void test_min_char_vec(void **state);
void test_min_uchar_vec(void **state);
// ==========================================================================================
// ==========================================================================================
// TEST RANGE_TYPE_VEC FUNCTIONS

void test_range_short_vec(void **state);
void test_range_ushort_vec(void **state);
void test_range_int_vec(void **state);
void test_range_uint_vec(void **state);
void test_range_long_vec(void **state);
void test_range_ulong_vec(void **state);
void test_range_llong_vec(void **state);
void test_range_ullong_vec(void **state);
void test_range_float_vec(void **state);
void test_range_double_vec(void **state);
void test_range_ldouble_vec(void **state);
void test_range_char_vec(void **state);
void test_range_uchar_vec(void **state);
// ==========================================================================================
// ==========================================================================================
// TEST COPY_TYPE_VEC FUNCTIONS

void test_copy_short_vec(void **state);
void test_copy_ushort_vec(void **state);
void test_copy_int_vec(void **state);
void test_copy_uint_vec(void **state);
void test_copy_long_vec(void **state);
void test_copy_ulong_vec(void **state);
void test_copy_llong_vec(void **state);
void test_copy_ullong_vec(void **state);
void test_copy_float_vec(void **state);
void test_copy_double_vec(void **state);
void test_copy_ldouble_vec(void **state);
void test_copy_char_vec(void **state);
void test_copy_uchar_vec(void **state);
void test_copy_bool_vec(void **state);
void test_copy_string_vec(void **state);
// ==========================================================================================
// ==========================================================================================
// TEST TYPE_VEC_DATA FUNCTIONS

void test_char_vec_data(void **state);
void test_uchar_vec_data(void **state);
void test_short_vec_data(void **state);
void test_ushort_vec_data(void **state);
void test_int_vec_data(void **state);
void test_uint_vec_data(void **state);
void test_long_vec_data(void **state);
void test_ulong_vec_data(void **state);
void test_llong_vec_data(void **state);
void test_ullong_vec_data(void **state);
void test_float_vec_data(void **state);
void test_double_vec_data(void **state);
void test_ldouble_vec_data(void **state);
void test_bool_vec_data(void **state);
void test_string_vec_data(void **state);
// ==========================================================================================
// ==========================================================================================
// TEST_TRIM_TYPE_VECTOR FUNCTIONS

void test_trim_char_vec(void **state);
void test_trim_uchar_vec(void **state);
void test_trim_short_vec(void **state);
void test_trim_ushort_vec(void **state);
void test_trim_int_vec(void **state);
void test_trim_uint_vec(void **state);
void test_trim_long_vec(void **state);
void test_trim_ulong_vec(void **state);
void test_trim_llong_vec(void **state);
void test_trim_ullong_vec(void **state);
void test_trim_float_vec(void **state);
void test_trim_double_vec(void **state);
void test_trim_ldouble_vec(void **state);
void test_trim_bool_vec(void **state);
// ==========================================================================================
// ==========================================================================================
// TEST_REPLACE_TYPE_VECTOR FUNCTIONS

void test_replace_index_char_vec(void **state);
void test_replace_index_uchar_vec(void **state);
void test_replace_index_short_vec(void **state);
void test_replace_index_ushort_vec(void **state);
void test_replace_index_int_vec(void **state);
void test_replace_index_uint_vec(void **state);
void test_replace_index_long_vec(void **state);
void test_replace_index_ulong_vec(void **state);
void test_replace_index_llong_vec(void **state);
void test_replace_index_ullong_vec(void **state);
void test_replace_index_float_vec(void **state);
void test_replace_index_double_vec(void **state);
void test_replace_index_ldouble_vec(void **state);
void test_replace_index_bool_vec(void **state);
// ==========================================================================================
// ==========================================================================================
// TEST_REPEAT_TYPE_VEC FUNCTIONS

void test_repeat_char_vec(void **state);
void test_repeat_uchar_vec(void **state);
void test_repeat_short_vec(void **state);
void test_repeat_ushort_vec(void **state);
void test_repeat_int_vec(void **state);
void test_repeat_uint_vec(void **state);
void test_repeat_long_vec(void **state);
void test_repeat_ulong_vec(void **state);
void test_repeat_llong_vec(void **state);
void test_repeat_ullong_vec(void **state);
void test_repeat_float_vec(void **state);
void test_repeat_double_vec(void **state);
void test_repeat_ldouble_vec(void **state);
void test_repeat_bool_vec(void **state);
void test_repeat_string_vec(void **state);
#endif /* test_vector_H */
// ==========================================================================================
// ==========================================================================================
// eof
