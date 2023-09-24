// ================================================================================
// ================================================================================
// - File:    unit_test.c
// - Purpose: Describe the file purpose here
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    March 28, 2023
// - Version: 1.0
// - Copyright: Copyright 2023, Jon Webb Inc.
// ================================================================================
// ================================================================================
// Include modules here

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <stdint.h>
#include <cmocka.h>

#include "test_swap.h"
#include "test_vector.h"
#include "test_list.h"

// Test functions for test_swap
const struct CMUnitTest tests_swap[] = {
    cmocka_unit_test(test_swap_short),
    cmocka_unit_test(test_swap_ushort),
    cmocka_unit_test(test_swap_int),
    cmocka_unit_test(test_swap_uint),
    cmocka_unit_test(test_swap_long),
    cmocka_unit_test(test_swap_ulong),
    cmocka_unit_test(test_swap_llong),
    cmocka_unit_test(test_swap_ullong),
    cmocka_unit_test(test_swap_float),
    cmocka_unit_test(test_swap_double),
    cmocka_unit_test(test_swap_ldouble),
    cmocka_unit_test(test_swap_char),
    cmocka_unit_test(test_swap_bool),
};

// Test functions for test_vector
const struct CMUnitTest tests_vector[] = {
    cmocka_unit_test(test_push_short_vec),
    cmocka_unit_test(test_push_ushort_vec),
    cmocka_unit_test(test_push_int_vec),
    cmocka_unit_test(test_push_uint_vec),
    cmocka_unit_test(test_push_long_vec),
    cmocka_unit_test(test_push_ulong_vec),
    cmocka_unit_test(test_push_llong_vec),
    cmocka_unit_test(test_push_ullong_vec),
    cmocka_unit_test(test_push_char_vec),
    cmocka_unit_test(test_push_uchar_vec),
	cmocka_unit_test(test_push_float_vec),
    cmocka_unit_test(test_push_double_vec),
	cmocka_unit_test(test_push_ldouble_vec),
    cmocka_unit_test(test_push_bool_vec),
	cmocka_unit_test(test_push_string_vec),
	cmocka_unit_test(test_insert_short_vec),
    cmocka_unit_test(test_insert_ushort_vec),
	cmocka_unit_test(test_push_int_vec),
	cmocka_unit_test(test_insert_uint_vec),
	cmocka_unit_test(test_push_long_vec),
	cmocka_unit_test(test_insert_ulong_vec),
	cmocka_unit_test(test_push_llong_vec),
	cmocka_unit_test(test_insert_ullong_vec),
	cmocka_unit_test(test_push_float_vec),
	cmocka_unit_test(test_insert_double_vec),
	cmocka_unit_test(test_insert_ldouble_vec),
	cmocka_unit_test(test_insert_bool_vec),
	cmocka_unit_test(test_insert_string_vec),
	cmocka_unit_test(test_insert_short_arr),
	cmocka_unit_test(test_insert_ushort_arr),
	cmocka_unit_test(test_insert_int_arr),
	cmocka_unit_test(test_insert_uint_arr),
	cmocka_unit_test(test_insert_long_arr),
	cmocka_unit_test(test_insert_ulong_arr),
	cmocka_unit_test(test_insert_llong_arr),
	cmocka_unit_test(test_insert_ullong_arr),
	cmocka_unit_test(test_insert_float_arr),
	cmocka_unit_test(test_insert_double_arr),
	cmocka_unit_test(test_insert_ldouble_arr),
	cmocka_unit_test(test_insert_bool_arr),
	cmocka_unit_test(test_pop_short_vec),
	cmocka_unit_test(test_pop_ushort_vec),
	cmocka_unit_test(test_pop_int_vec),
	cmocka_unit_test(test_pop_uint_vec),
	cmocka_unit_test(test_pop_long_vec),
	cmocka_unit_test(test_pop_ulong_vec),
	cmocka_unit_test(test_pop_llong_vec),
	cmocka_unit_test(test_pop_ullong_vec),
	cmocka_unit_test(test_pop_float_vec),
	cmocka_unit_test(test_pop_double_vec),
	cmocka_unit_test(test_pop_ldouble_vec),
	cmocka_unit_test(test_pop_bool_vec),
	cmocka_unit_test(test_pop_string_vec),
	cmocka_unit_test(test_replace_char_values_vec),
	cmocka_unit_test(test_replace_uchar_values_vec),
	cmocka_unit_test(test_replace_short_values_vec),
	cmocka_unit_test(test_replace_ushort_values_vec),
	cmocka_unit_test(test_replace_int_values_vec),
	cmocka_unit_test(test_replace_uint_values_vec),
	cmocka_unit_test(test_replace_long_values_vec),
	cmocka_unit_test(test_replace_ulong_values_vec),
	cmocka_unit_test(test_replace_llong_values_vec),
	cmocka_unit_test(test_replace_ullong_values_vec),
	cmocka_unit_test(test_replace_float_values_vec),
	cmocka_unit_test(test_replace_double_values_vec),
	cmocka_unit_test(test_replace_ldouble_values_vec),
	cmocka_unit_test(test_replace_bool_values_vec),
	cmocka_unit_test(test_replace_string_values_vec),
	cmocka_unit_test(test_delete_short_dup_vec),
	cmocka_unit_test(test_delete_ushort_dup_vec),
	cmocka_unit_test(test_delete_int_dup_vec),
	cmocka_unit_test(test_delete_uint_dup_vec),
	cmocka_unit_test(test_delete_long_dup_vec),
	cmocka_unit_test(test_delete_ulong_dup_vec),
	cmocka_unit_test(test_delete_llong_dup_vec),
	cmocka_unit_test(test_delete_ullong_dup_vec),
	cmocka_unit_test(test_delete_float_dup_vec),
	cmocka_unit_test(test_delete_double_dup_vec),
	cmocka_unit_test(test_delete_ldouble_dup_vec),
	cmocka_unit_test(test_delete_char_dup_vec),
	cmocka_unit_test(test_delete_string_dup_vec),
	cmocka_unit_test(test_reverse_char_vec),
	cmocka_unit_test(test_reverse_uchar_vec),
	cmocka_unit_test(test_reverse_short_vec),
	cmocka_unit_test(test_reverse_ushort_vec),
	cmocka_unit_test(test_reverse_int_vec),
	cmocka_unit_test(test_reverse_uint_vec),
	cmocka_unit_test(test_reverse_long_vec),
	cmocka_unit_test(test_reverse_ulong_vec),
	cmocka_unit_test(test_reverse_llong_vec),
	cmocka_unit_test(test_reverse_ullong_vec),
	cmocka_unit_test(test_reverse_float_vec),
	cmocka_unit_test(test_reverse_double_vec),
	cmocka_unit_test(test_reverse_ldouble_vec),
	cmocka_unit_test(test_reverse_bool_vec),
	cmocka_unit_test(test_reverse_string_vec),
	cmocka_unit_test(test_reverse_char_vec),
	cmocka_unit_test(test_reverse_uchar_vec),
	cmocka_unit_test(test_reverse_short_vec),
	cmocka_unit_test(test_reverse_ushort_vec),
	cmocka_unit_test(test_reverse_int_vec),
	cmocka_unit_test(test_reverse_uint_vec),
	cmocka_unit_test(test_reverse_long_vec),
	cmocka_unit_test(test_reverse_ulong_vec),
	cmocka_unit_test(test_reverse_llong_vec),
	cmocka_unit_test(test_reverse_ullong_vec),
	cmocka_unit_test(test_reverse_float_vec),
	cmocka_unit_test(test_reverse_double_vec),
	cmocka_unit_test(test_reverse_ldouble_vec),
	cmocka_unit_test(test_reverse_bool_vec),
	cmocka_unit_test(test_reverse_string_vec),
	cmocka_unit_test(test_sum_char_vec),
	cmocka_unit_test(test_sum_uchar_vec),
	cmocka_unit_test(test_sum_short_vec),
	cmocka_unit_test(test_sum_ushort_vec),
	cmocka_unit_test(test_sum_int_vec),
	cmocka_unit_test(test_sum_uint_vec),
	cmocka_unit_test(test_sum_long_vec),
	cmocka_unit_test(test_sum_ulong_vec),
	cmocka_unit_test(test_sum_llong_vec),
	cmocka_unit_test(test_sum_ullong_vec),
	cmocka_unit_test(test_sum_float_vec),
	cmocka_unit_test(test_sum_double_vec),
	cmocka_unit_test(test_sum_ldouble_vec),
	cmocka_unit_test(test_sum_char_vec),
	cmocka_unit_test(test_sum_uchar_vec),
	cmocka_unit_test(test_sum_short_vec),
	cmocka_unit_test(test_sum_ushort_vec),
	cmocka_unit_test(test_sum_int_vec),
	cmocka_unit_test(test_sum_uint_vec),
	cmocka_unit_test(test_sum_long_vec),
	cmocka_unit_test(test_sum_ulong_vec),
	cmocka_unit_test(test_sum_llong_vec),
	cmocka_unit_test(test_sum_ullong_vec),
	cmocka_unit_test(test_sum_float_vec),
	cmocka_unit_test(test_sum_double_vec),
	cmocka_unit_test(test_sum_ldouble_vec),
	cmocka_unit_test(test_average_char_vec),
	cmocka_unit_test(test_average_uchar_vec),
	cmocka_unit_test(test_average_short_vec),
	cmocka_unit_test(test_average_ushort_vec),
	cmocka_unit_test(test_average_int_vec),
	cmocka_unit_test(test_average_uint_vec),
	cmocka_unit_test(test_average_long_vec),
	cmocka_unit_test(test_average_ulong_vec),
	cmocka_unit_test(test_average_llong_vec),
	cmocka_unit_test(test_average_ullong_vec),
	cmocka_unit_test(test_average_float_vec),
	cmocka_unit_test(test_average_double_vec),
	cmocka_unit_test(test_average_ldouble_vec),
	cmocka_unit_test(test_stdev_char_vec),
	cmocka_unit_test(test_stdev_uchar_vec),
	cmocka_unit_test(test_stdev_short_vec),
	cmocka_unit_test(test_stdev_ushort_vec),
	cmocka_unit_test(test_stdev_int_vec),
	cmocka_unit_test(test_stdev_uint_vec),
	cmocka_unit_test(test_stdev_long_vec),
	cmocka_unit_test(test_stdev_ulong_vec),
	cmocka_unit_test(test_stdev_llong_vec),
	cmocka_unit_test(test_stdev_ullong_vec),
	cmocka_unit_test(test_stdev_float_vec),
	cmocka_unit_test(test_stdev_double_vec),
	cmocka_unit_test(test_stdev_ldouble_vec),
	cmocka_unit_test(test_max_char_vec),
	cmocka_unit_test(test_max_uchar_vec),
	cmocka_unit_test(test_max_short_vec),
	cmocka_unit_test(test_max_ushort_vec),
	cmocka_unit_test(test_max_int_vec),
	cmocka_unit_test(test_max_uint_vec),
	cmocka_unit_test(test_max_long_vec),
	cmocka_unit_test(test_max_ulong_vec),
	cmocka_unit_test(test_max_llong_vec),
	cmocka_unit_test(test_max_ullong_vec),
	cmocka_unit_test(test_max_float_vec),
	cmocka_unit_test(test_max_double_vec),
	cmocka_unit_test(test_max_ldouble_vec),
	cmocka_unit_test(test_min_char_vec),
	cmocka_unit_test(test_min_uchar_vec),
	cmocka_unit_test(test_min_short_vec),
	cmocka_unit_test(test_min_ushort_vec),
	cmocka_unit_test(test_min_int_vec),
	cmocka_unit_test(test_min_uint_vec),
	cmocka_unit_test(test_min_long_vec),
	cmocka_unit_test(test_min_ulong_vec),
	cmocka_unit_test(test_min_llong_vec),
	cmocka_unit_test(test_min_ullong_vec),
	cmocka_unit_test(test_min_float_vec),
	cmocka_unit_test(test_min_double_vec),
	cmocka_unit_test(test_min_ldouble_vec),
	cmocka_unit_test(test_range_char_vec),
	cmocka_unit_test(test_range_uchar_vec),
	cmocka_unit_test(test_range_short_vec),
	cmocka_unit_test(test_range_ushort_vec),
	cmocka_unit_test(test_range_int_vec),
	cmocka_unit_test(test_range_uint_vec),
	cmocka_unit_test(test_range_long_vec),
	cmocka_unit_test(test_range_ulong_vec),
	cmocka_unit_test(test_range_llong_vec),
	cmocka_unit_test(test_range_ullong_vec),
	cmocka_unit_test(test_range_float_vec),
	cmocka_unit_test(test_range_double_vec),
	cmocka_unit_test(test_range_ldouble_vec),
	cmocka_unit_test(test_copy_char_vec),
	cmocka_unit_test(test_copy_uchar_vec),
	cmocka_unit_test(test_copy_short_vec),
	cmocka_unit_test(test_copy_ushort_vec),
	cmocka_unit_test(test_copy_int_vec),
	cmocka_unit_test(test_copy_uint_vec),
	cmocka_unit_test(test_copy_long_vec),
	cmocka_unit_test(test_copy_ulong_vec),
	cmocka_unit_test(test_copy_llong_vec),
	cmocka_unit_test(test_copy_ullong_vec),
	cmocka_unit_test(test_copy_float_vec),
	cmocka_unit_test(test_copy_double_vec),
	cmocka_unit_test(test_copy_ldouble_vec),
	cmocka_unit_test(test_copy_bool_vec),
	cmocka_unit_test(test_copy_string_vec),
	cmocka_unit_test(test_char_vec_data),
	cmocka_unit_test(test_uchar_vec_data),
	cmocka_unit_test(test_short_vec_data),
	cmocka_unit_test(test_ushort_vec_data),
	cmocka_unit_test(test_int_vec_data),
	cmocka_unit_test(test_uint_vec_data),
	cmocka_unit_test(test_long_vec_data),
	cmocka_unit_test(test_ulong_vec_data),
	cmocka_unit_test(test_llong_vec_data),
	cmocka_unit_test(test_ullong_vec_data),
	cmocka_unit_test(test_float_vec_data),
	cmocka_unit_test(test_double_vec_data),
	cmocka_unit_test(test_ldouble_vec_data),
	cmocka_unit_test(test_bool_vec_data),
	cmocka_unit_test(test_string_vec_data),
	cmocka_unit_test(test_trim_char_vec),
	cmocka_unit_test(test_trim_uchar_vec),
	cmocka_unit_test(test_trim_short_vec),
	cmocka_unit_test(test_trim_ushort_vec),
	cmocka_unit_test(test_trim_int_vec),
	cmocka_unit_test(test_trim_uint_vec),
	cmocka_unit_test(test_trim_long_vec),
	cmocka_unit_test(test_trim_ulong_vec),
	cmocka_unit_test(test_trim_llong_vec),
	cmocka_unit_test(test_trim_ullong_vec),
	cmocka_unit_test(test_trim_float_vec),
	cmocka_unit_test(test_trim_double_vec),
	cmocka_unit_test(test_trim_ldouble_vec),
	cmocka_unit_test(test_trim_bool_vec),
	cmocka_unit_test(test_replace_index_char_vec),
	cmocka_unit_test(test_replace_index_uchar_vec),
	cmocka_unit_test(test_replace_index_short_vec),
	cmocka_unit_test(test_replace_index_ushort_vec),
	cmocka_unit_test(test_replace_index_int_vec),
	cmocka_unit_test(test_replace_index_uint_vec),
	cmocka_unit_test(test_replace_index_long_vec),
	cmocka_unit_test(test_replace_index_ulong_vec),
	cmocka_unit_test(test_replace_index_llong_vec),
	cmocka_unit_test(test_replace_index_ullong_vec),
	cmocka_unit_test(test_replace_index_float_vec),
	cmocka_unit_test(test_replace_index_double_vec),
	cmocka_unit_test(test_replace_index_ldouble_vec),
	cmocka_unit_test(test_replace_index_bool_vec),
	cmocka_unit_test(test_repeat_char_vec),
	cmocka_unit_test(test_repeat_uchar_vec),
	cmocka_unit_test(test_repeat_short_vec),
	cmocka_unit_test(test_repeat_ushort_vec),
	cmocka_unit_test(test_repeat_int_vec),
	cmocka_unit_test(test_repeat_uint_vec),
	cmocka_unit_test(test_repeat_long_vec),
	cmocka_unit_test(test_repeat_ulong_vec),
	cmocka_unit_test(test_repeat_llong_vec),
	cmocka_unit_test(test_repeat_ullong_vec),
	cmocka_unit_test(test_repeat_float_vec),
	cmocka_unit_test(test_repeat_double_vec),
	cmocka_unit_test(test_repeat_ldouble_vec),
	cmocka_unit_test(test_repeat_bool_vec),
	cmocka_unit_test(test_repeat_string_vec)
};


// Test functions for test_swap
const struct CMUnitTest tests_list[] = {
	cmocka_unit_test(test_push_short_list),
    cmocka_unit_test(test_push_ushort_list),
    cmocka_unit_test(test_push_int_list),
    cmocka_unit_test(test_push_uint_list),
	cmocka_unit_test(test_push_long_list),
    cmocka_unit_test(test_push_ulong_list),
    cmocka_unit_test(test_push_llong_list),
    cmocka_unit_test(test_push_ullong_list),
    cmocka_unit_test(test_push_float_list),
    cmocka_unit_test(test_push_double_list),
    cmocka_unit_test(test_push_ldouble_list),
    cmocka_unit_test(test_push_char_list),
    cmocka_unit_test(test_push_uchar_list),
    cmocka_unit_test(test_push_bool_list),
	cmocka_unit_test(test_push_string_list),
    cmocka_unit_test(test_insert_short_list),
	cmocka_unit_test(test_insert_ushort_list),
	cmocka_unit_test(test_insert_int_list),
	cmocka_unit_test(test_insert_uint_list),
	cmocka_unit_test(test_insert_long_list),
	cmocka_unit_test(test_insert_ulong_list),
	cmocka_unit_test(test_insert_llong_list),
	cmocka_unit_test(test_insert_ullong_list),
	cmocka_unit_test(test_insert_float_list),
	cmocka_unit_test(test_insert_double_list),
	cmocka_unit_test(test_insert_ldouble_list),
	cmocka_unit_test(test_insert_char_list),
	cmocka_unit_test(test_insert_uchar_list),
	cmocka_unit_test(test_insert_bool_list),
	cmocka_unit_test(test_replace_short_list_index),
    cmocka_unit_test(test_replace_ushort_list_index),
    cmocka_unit_test(test_replace_int_list_index),
    cmocka_unit_test(test_replace_uint_list_index),
	cmocka_unit_test(test_replace_long_list_index),
    cmocka_unit_test(test_replace_ulong_list_index),
    cmocka_unit_test(test_replace_llong_list_index),
    cmocka_unit_test(test_replace_ullong_list_index),
    cmocka_unit_test(test_replace_char_list_index),
    cmocka_unit_test(test_replace_uchar_list_index),
    cmocka_unit_test(test_replace_float_list_index),
    cmocka_unit_test(test_replace_double_list_index),
    cmocka_unit_test(test_replace_ldouble_list_index),
    cmocka_unit_test(test_replace_bool_list_index),
	cmocka_unit_test(test_replace_string_list_index),
	cmocka_unit_test(test_replace_short_list_values),
	cmocka_unit_test(test_replace_ushort_list_values),
	cmocka_unit_test(test_replace_int_list_values),
	cmocka_unit_test(test_replace_uint_list_values),
	cmocka_unit_test(test_replace_long_list_values),
	cmocka_unit_test(test_replace_ulong_list_values),
	cmocka_unit_test(test_replace_llong_list_values),
	cmocka_unit_test(test_replace_ullong_list_values),
	cmocka_unit_test(test_replace_float_list_values),
	cmocka_unit_test(test_replace_double_list_values),
	cmocka_unit_test(test_replace_ldouble_list_values),
	cmocka_unit_test(test_replace_char_list_values),
	cmocka_unit_test(test_replace_uchar_list_values),
	cmocka_unit_test(test_replace_bool_list_values),
	cmocka_unit_test(test_replace_string_list_values),
	cmocka_unit_test(test_delete_short_list_duplicates),
	cmocka_unit_test(test_delete_ushort_list_duplicates),
	cmocka_unit_test(test_delete_int_list_duplicates),
	cmocka_unit_test(test_delete_uint_list_duplicates),
	cmocka_unit_test(test_delete_long_list_duplicates),
	cmocka_unit_test(test_delete_ulong_list_duplicates),
	cmocka_unit_test(test_delete_llong_list_duplicates),
	cmocka_unit_test(test_delete_ullong_list_duplicates),
	cmocka_unit_test(test_delete_float_list_duplicates),
	cmocka_unit_test(test_delete_double_list_duplicates),
	cmocka_unit_test(test_delete_ldouble_list_duplicates),
	cmocka_unit_test(test_delete_char_list_duplicates),
	cmocka_unit_test(test_delete_uchar_list_duplicates),
	cmocka_unit_test(test_delete_bool_list_duplicates),
	cmocka_unit_test(test_delete_string_list_duplicates),
	cmocka_unit_test(test_reverse_short_list),
	cmocka_unit_test(test_reverse_ushort_list),
	cmocka_unit_test(test_reverse_int_list),
	cmocka_unit_test(test_reverse_uint_list),
	cmocka_unit_test(test_reverse_long_list),
	cmocka_unit_test(test_reverse_ulong_list),
	cmocka_unit_test(test_reverse_llong_list),
	cmocka_unit_test(test_reverse_ullong_list),
	cmocka_unit_test(test_reverse_float_list),
	cmocka_unit_test(test_reverse_double_list),
	cmocka_unit_test(test_reverse_ldouble_list),
	cmocka_unit_test(test_reverse_char_list),
    cmocka_unit_test(test_reverse_uchar_list),
	cmocka_unit_test(test_reverse_bool_list),
	cmocka_unit_test(test_reverse_string_list),
	cmocka_unit_test(test_sort_short_list),
	cmocka_unit_test(test_sort_ushort_list),
	cmocka_unit_test(test_sort_int_list),
	cmocka_unit_test(test_sort_uint_list),
	cmocka_unit_test(test_sort_long_list),
	cmocka_unit_test(test_sort_ulong_list),
	cmocka_unit_test(test_sort_llong_list),
	cmocka_unit_test(test_sort_ullong_list),
	cmocka_unit_test(test_sort_float_list),
	cmocka_unit_test(test_sort_double_list),
	cmocka_unit_test(test_sort_ldouble_list),
	cmocka_unit_test(test_sort_char_list),
    cmocka_unit_test(test_sort_uchar_list),
	cmocka_unit_test(test_sort_bool_list),
	cmocka_unit_test(test_sort_string_list),
	cmocka_unit_test(test_sum_short_list),
	cmocka_unit_test(test_sum_ushort_list),
	cmocka_unit_test(test_sum_int_list),
	cmocka_unit_test(test_sum_uint_list),
	cmocka_unit_test(test_sum_long_list),
	cmocka_unit_test(test_sum_ulong_list),
	cmocka_unit_test(test_sum_llong_list),
	cmocka_unit_test(test_sum_ullong_list),
	cmocka_unit_test(test_sum_float_list),
	cmocka_unit_test(test_sum_double_list),
	cmocka_unit_test(test_sum_ldouble_list),
};

// Begin code
int main(int argc, const char * argv[]) {
	int status;

    // Run the tests for test_swap
    status = cmocka_run_group_tests(tests_swap, NULL, NULL);
    if (status != 0) {
        return status;
    }

    // Run the tests for test_vector
    status = cmocka_run_group_tests(tests_vector, NULL, NULL);
	if (status != 0) {
		return status;
	}

	// Run the tests for test_linked list
    status = cmocka_run_group_tests(tests_list, NULL, NULL);
	return status;
}
// ================================================================================
// ================================================================================
// eof

