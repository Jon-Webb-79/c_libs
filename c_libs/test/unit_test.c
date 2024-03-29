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

#include "test_string.h"
/* #include "test_swap.h" */
/* #include "test_vector.h" */
/* #include "test_list.h" */
/* #include "test_btree.h" */

// Test functions for test_string
 const struct CMUnitTest tests_string[] = {
	cmocka_unit_test(test_append_string_free),
    cmocka_unit_test(test_append_string_cleanup),
    cmocka_unit_test(test_cleanup_with_manual_deallocation),
    cmocka_unit_test(test_append_string_manual_cleanup),
	cmocka_unit_test(test_copy_memory),
    cmocka_unit_test(test_copy_memory_overflow),
	cmocka_unit_test(test_copy_memory_null),
	cmocka_unit_test(test_move_memory),
	cmocka_unit_test(test_move_memory_overflow),
	cmocka_unit_test(test_move_memory_null),
	cmocka_unit_test(test_replace_string_literal),
	cmocka_unit_test(test_replace_string_str),
	cmocka_unit_test(test_compare_equal_strings),
    cmocka_unit_test(test_compare_larger_strings),
    cmocka_unit_test(test_compare_smaller_strings),
	cmocka_unit_test(test_literal_string_length),
    cmocka_unit_test(test_copy_string_literal),
    cmocka_unit_test(test_move_string_literal),
	cmocka_unit_test(test_last_token_occurance),
	cmocka_unit_test(test_last_token_occurance_null),
	cmocka_unit_test(test_last_token_empty),
    cmocka_unit_test(test_pop_string_token),
	cmocka_unit_test(test_pop_string_int),
    cmocka_unit_test(test_resize_string),
    cmocka_unit_test(test_remove_string_token),
	cmocka_unit_test(test_remove_string_int),
    cmocka_unit_test(test_concat_literal),
	cmocka_unit_test(test_add_strings_literal),
    cmocka_unit_test(test_add_strings_str)
 };
// Test functions for test_swap
/* const struct CMUnitTest tests_swap[] = { */
/*     cmocka_unit_test(test_swap_short), */
/*     cmocka_unit_test(test_swap_ushort), */
/*     cmocka_unit_test(test_swap_int), */
/*     cmocka_unit_test(test_swap_uint), */
/*     cmocka_unit_test(test_swap_long), */
/*     cmocka_unit_test(test_swap_ulong), */
/*     cmocka_unit_test(test_swap_llong), */
/*     cmocka_unit_test(test_swap_ullong), */
/*     cmocka_unit_test(test_swap_float), */
/*     cmocka_unit_test(test_swap_double), */
/*     cmocka_unit_test(test_swap_ldouble), */
/*     cmocka_unit_test(test_swap_char), */
/*     cmocka_unit_test(test_swap_bool), */
/* }; */

// Test functions for test_vector
/* const struct CMUnitTest tests_vector[] = { */
/*     cmocka_unit_test(test_push_short_vec), */
/*     cmocka_unit_test(test_push_ushort_vec), */
/*     cmocka_unit_test(test_push_int_vec), */
/*     cmocka_unit_test(test_push_uint_vec), */
/*     cmocka_unit_test(test_push_long_vec), */
/*     cmocka_unit_test(test_push_ulong_vec), */
/*     cmocka_unit_test(test_push_llong_vec), */
/*     cmocka_unit_test(test_push_ullong_vec), */
/*     cmocka_unit_test(test_push_char_vec), */
/*     cmocka_unit_test(test_push_uchar_vec), */
/* 	cmocka_unit_test(test_push_float_vec), */
/*     cmocka_unit_test(test_push_double_vec), */
/* 	cmocka_unit_test(test_push_ldouble_vec), */
/*     cmocka_unit_test(test_push_bool_vec), */
/* 	cmocka_unit_test(test_push_string_vec), */
/* 	cmocka_unit_test(test_insert_short_vec), */
/*     cmocka_unit_test(test_insert_ushort_vec), */
/* 	cmocka_unit_test(test_push_int_vec), */
/* 	cmocka_unit_test(test_insert_uint_vec), */
/* 	cmocka_unit_test(test_push_long_vec), */
/* 	cmocka_unit_test(test_insert_ulong_vec), */
/* 	cmocka_unit_test(test_push_llong_vec), */
/* 	cmocka_unit_test(test_insert_ullong_vec), */
/* 	cmocka_unit_test(test_push_float_vec), */
/* 	cmocka_unit_test(test_insert_double_vec), */
/* 	cmocka_unit_test(test_insert_ldouble_vec), */
/* 	cmocka_unit_test(test_insert_bool_vec), */
/* 	cmocka_unit_test(test_insert_string_vec), */
/* 	cmocka_unit_test(test_insert_short_arr), */
/* 	cmocka_unit_test(test_insert_ushort_arr), */
/* 	cmocka_unit_test(test_insert_int_arr), */
/* 	cmocka_unit_test(test_insert_uint_arr), */
/* 	cmocka_unit_test(test_insert_long_arr), */
/* 	cmocka_unit_test(test_insert_ulong_arr), */
/* 	cmocka_unit_test(test_insert_llong_arr), */
/* 	cmocka_unit_test(test_insert_ullong_arr), */
/* 	cmocka_unit_test(test_insert_float_arr), */
/* 	cmocka_unit_test(test_insert_double_arr), */
/* 	cmocka_unit_test(test_insert_ldouble_arr), */
/* 	cmocka_unit_test(test_insert_bool_arr), */
/* 	cmocka_unit_test(test_pop_short_vec), */
/* 	cmocka_unit_test(test_pop_ushort_vec), */
/* 	cmocka_unit_test(test_pop_int_vec), */
/* 	cmocka_unit_test(test_pop_uint_vec), */
/* 	cmocka_unit_test(test_pop_long_vec), */
/* 	cmocka_unit_test(test_pop_ulong_vec), */
/* 	cmocka_unit_test(test_pop_llong_vec), */
/* 	cmocka_unit_test(test_pop_ullong_vec), */
/* 	cmocka_unit_test(test_pop_float_vec), */
/* 	cmocka_unit_test(test_pop_double_vec), */
/* 	cmocka_unit_test(test_pop_ldouble_vec), */
/* 	cmocka_unit_test(test_pop_bool_vec), */
/* 	cmocka_unit_test(test_pop_string_vec), */
/* 	cmocka_unit_test(test_replace_char_values_vec), */
/* 	cmocka_unit_test(test_replace_uchar_values_vec), */
/* 	cmocka_unit_test(test_replace_short_values_vec), */
/* 	cmocka_unit_test(test_replace_ushort_values_vec), */
/* 	cmocka_unit_test(test_replace_int_values_vec), */
/* 	cmocka_unit_test(test_replace_uint_values_vec), */
/* 	cmocka_unit_test(test_replace_long_values_vec), */
/* 	cmocka_unit_test(test_replace_ulong_values_vec), */
/* 	cmocka_unit_test(test_replace_llong_values_vec), */
/* 	cmocka_unit_test(test_replace_ullong_values_vec), */
/* 	cmocka_unit_test(test_replace_float_values_vec), */
/* 	cmocka_unit_test(test_replace_double_values_vec), */
/* 	cmocka_unit_test(test_replace_ldouble_values_vec), */
/* 	cmocka_unit_test(test_replace_bool_values_vec), */
/* 	cmocka_unit_test(test_replace_string_values_vec), */
/* 	cmocka_unit_test(test_delete_short_dup_vec), */
/* 	cmocka_unit_test(test_delete_ushort_dup_vec), */
/* 	cmocka_unit_test(test_delete_int_dup_vec), */
/* 	cmocka_unit_test(test_delete_uint_dup_vec), */
/* 	cmocka_unit_test(test_delete_long_dup_vec), */
/* 	cmocka_unit_test(test_delete_ulong_dup_vec), */
/* 	cmocka_unit_test(test_delete_llong_dup_vec), */
/* 	cmocka_unit_test(test_delete_ullong_dup_vec), */
/* 	cmocka_unit_test(test_delete_float_dup_vec), */
/* 	cmocka_unit_test(test_delete_double_dup_vec), */
/* 	cmocka_unit_test(test_delete_ldouble_dup_vec), */
/* 	cmocka_unit_test(test_delete_char_dup_vec), */
/* 	cmocka_unit_test(test_delete_string_dup_vec), */
/* 	cmocka_unit_test(test_reverse_char_vec), */
/* 	cmocka_unit_test(test_reverse_uchar_vec), */
/* 	cmocka_unit_test(test_reverse_short_vec), */
/* 	cmocka_unit_test(test_reverse_ushort_vec), */
/* 	cmocka_unit_test(test_reverse_int_vec), */
/* 	cmocka_unit_test(test_reverse_uint_vec), */
/* 	cmocka_unit_test(test_reverse_long_vec), */
/* 	cmocka_unit_test(test_reverse_ulong_vec), */
/* 	cmocka_unit_test(test_reverse_llong_vec), */
/* 	cmocka_unit_test(test_reverse_ullong_vec), */
/* 	cmocka_unit_test(test_reverse_float_vec), */
/* 	cmocka_unit_test(test_reverse_double_vec), */
/* 	cmocka_unit_test(test_reverse_ldouble_vec), */
/* 	cmocka_unit_test(test_reverse_bool_vec), */
/* 	cmocka_unit_test(test_reverse_string_vec), */
/* 	cmocka_unit_test(test_reverse_char_vec), */
/* 	cmocka_unit_test(test_reverse_uchar_vec), */
/* 	cmocka_unit_test(test_reverse_short_vec), */
/* 	cmocka_unit_test(test_reverse_ushort_vec), */
/* 	cmocka_unit_test(test_reverse_int_vec), */
/* 	cmocka_unit_test(test_reverse_uint_vec), */
/* 	cmocka_unit_test(test_reverse_long_vec), */
/* 	cmocka_unit_test(test_reverse_ulong_vec), */
/* 	cmocka_unit_test(test_reverse_llong_vec), */
/* 	cmocka_unit_test(test_reverse_ullong_vec), */
/* 	cmocka_unit_test(test_reverse_float_vec), */
/* 	cmocka_unit_test(test_reverse_double_vec), */
/* 	cmocka_unit_test(test_reverse_ldouble_vec), */
/* 	cmocka_unit_test(test_reverse_bool_vec), */
/* 	cmocka_unit_test(test_reverse_string_vec), */
/* 	cmocka_unit_test(test_sum_char_vec), */
/* 	cmocka_unit_test(test_sum_uchar_vec), */
/* 	cmocka_unit_test(test_sum_short_vec), */
/* 	cmocka_unit_test(test_sum_ushort_vec), */
/* 	cmocka_unit_test(test_sum_int_vec), */
/* 	cmocka_unit_test(test_sum_uint_vec), */
/* 	cmocka_unit_test(test_sum_long_vec), */
/* 	cmocka_unit_test(test_sum_ulong_vec), */
/* 	cmocka_unit_test(test_sum_llong_vec), */
/* 	cmocka_unit_test(test_sum_ullong_vec), */
/* 	cmocka_unit_test(test_sum_float_vec), */
/* 	cmocka_unit_test(test_sum_double_vec), */
/* 	cmocka_unit_test(test_sum_ldouble_vec), */
/* 	cmocka_unit_test(test_sum_char_vec), */
/* 	cmocka_unit_test(test_sum_uchar_vec), */
/* 	cmocka_unit_test(test_sum_short_vec), */
/* 	cmocka_unit_test(test_sum_ushort_vec), */
/* 	cmocka_unit_test(test_sum_int_vec), */
/* 	cmocka_unit_test(test_sum_uint_vec), */
/* 	cmocka_unit_test(test_sum_long_vec), */
/* 	cmocka_unit_test(test_sum_ulong_vec), */
/* 	cmocka_unit_test(test_sum_llong_vec), */
/* 	cmocka_unit_test(test_sum_ullong_vec), */
/* 	cmocka_unit_test(test_sum_float_vec), */
/* 	cmocka_unit_test(test_sum_double_vec), */
/* 	cmocka_unit_test(test_sum_ldouble_vec), */
/* 	cmocka_unit_test(test_average_char_vec), */
/* 	cmocka_unit_test(test_average_uchar_vec), */
/* 	cmocka_unit_test(test_average_short_vec), */
/* 	cmocka_unit_test(test_average_ushort_vec), */
/* 	cmocka_unit_test(test_average_int_vec), */
/* 	cmocka_unit_test(test_average_uint_vec), */
/* 	cmocka_unit_test(test_average_long_vec), */
/* 	cmocka_unit_test(test_average_ulong_vec), */
/* 	cmocka_unit_test(test_average_llong_vec), */
/* 	cmocka_unit_test(test_average_ullong_vec), */
/* 	cmocka_unit_test(test_average_float_vec), */
/* 	cmocka_unit_test(test_average_double_vec), */
/* 	cmocka_unit_test(test_average_ldouble_vec), */
/* 	cmocka_unit_test(test_stdev_char_vec), */
/* 	cmocka_unit_test(test_stdev_uchar_vec), */
/* 	cmocka_unit_test(test_stdev_short_vec), */
/* 	cmocka_unit_test(test_stdev_ushort_vec), */
/* 	cmocka_unit_test(test_stdev_int_vec), */
/* 	cmocka_unit_test(test_stdev_uint_vec), */
/* 	cmocka_unit_test(test_stdev_long_vec), */
/* 	cmocka_unit_test(test_stdev_ulong_vec), */
/* 	cmocka_unit_test(test_stdev_llong_vec), */
/* 	cmocka_unit_test(test_stdev_ullong_vec), */
/* 	cmocka_unit_test(test_stdev_float_vec), */
/* 	cmocka_unit_test(test_stdev_double_vec), */
/* 	cmocka_unit_test(test_stdev_ldouble_vec), */
/* 	cmocka_unit_test(test_max_char_vec), */
/* 	cmocka_unit_test(test_max_uchar_vec), */
/* 	cmocka_unit_test(test_max_short_vec), */
/* 	cmocka_unit_test(test_max_ushort_vec), */
/* 	cmocka_unit_test(test_max_int_vec), */
/* 	cmocka_unit_test(test_max_uint_vec), */
/* 	cmocka_unit_test(test_max_long_vec), */
/* 	cmocka_unit_test(test_max_ulong_vec), */
/* 	cmocka_unit_test(test_max_llong_vec), */
/* 	cmocka_unit_test(test_max_ullong_vec), */
/* 	cmocka_unit_test(test_max_float_vec), */
/* 	cmocka_unit_test(test_max_double_vec), */
/* 	cmocka_unit_test(test_max_ldouble_vec), */
/* 	cmocka_unit_test(test_min_char_vec), */
/* 	cmocka_unit_test(test_min_uchar_vec), */
/* 	cmocka_unit_test(test_min_short_vec), */
/* 	cmocka_unit_test(test_min_ushort_vec), */
/* 	cmocka_unit_test(test_min_int_vec), */
/* 	cmocka_unit_test(test_min_uint_vec), */
/* 	cmocka_unit_test(test_min_long_vec), */
/* 	cmocka_unit_test(test_min_ulong_vec), */
/* 	cmocka_unit_test(test_min_llong_vec), */
/* 	cmocka_unit_test(test_min_ullong_vec), */
/* 	cmocka_unit_test(test_min_float_vec), */
/* 	cmocka_unit_test(test_min_double_vec), */
/* 	cmocka_unit_test(test_min_ldouble_vec), */
/* 	cmocka_unit_test(test_range_char_vec), */
/* 	cmocka_unit_test(test_range_uchar_vec), */
/* 	cmocka_unit_test(test_range_short_vec), */
/* 	cmocka_unit_test(test_range_ushort_vec), */
/* 	cmocka_unit_test(test_range_int_vec), */
/* 	cmocka_unit_test(test_range_uint_vec), */
/* 	cmocka_unit_test(test_range_long_vec), */
/* 	cmocka_unit_test(test_range_ulong_vec), */
/* 	cmocka_unit_test(test_range_llong_vec), */
/* 	cmocka_unit_test(test_range_ullong_vec), */
/* 	cmocka_unit_test(test_range_float_vec), */
/* 	cmocka_unit_test(test_range_double_vec), */
/* 	cmocka_unit_test(test_range_ldouble_vec), */
/* 	cmocka_unit_test(test_copy_char_vec), */
/* 	cmocka_unit_test(test_copy_uchar_vec), */
/* 	cmocka_unit_test(test_copy_short_vec), */
/* 	cmocka_unit_test(test_copy_ushort_vec), */
/* 	cmocka_unit_test(test_copy_int_vec), */
/* 	cmocka_unit_test(test_copy_uint_vec), */
/* 	cmocka_unit_test(test_copy_long_vec), */
/* 	cmocka_unit_test(test_copy_ulong_vec), */
/* 	cmocka_unit_test(test_copy_llong_vec), */
/* 	cmocka_unit_test(test_copy_ullong_vec), */
/* 	cmocka_unit_test(test_copy_float_vec), */
/* 	cmocka_unit_test(test_copy_double_vec), */
/* 	cmocka_unit_test(test_copy_ldouble_vec), */
/* 	cmocka_unit_test(test_copy_bool_vec), */
/* 	cmocka_unit_test(test_copy_string_vec), */
/* 	cmocka_unit_test(test_char_vec_data), */
/* 	cmocka_unit_test(test_uchar_vec_data), */
/* 	cmocka_unit_test(test_short_vec_data), */
/* 	cmocka_unit_test(test_ushort_vec_data), */
/* 	cmocka_unit_test(test_int_vec_data), */
/* 	cmocka_unit_test(test_uint_vec_data), */
/* 	cmocka_unit_test(test_long_vec_data), */
/* 	cmocka_unit_test(test_ulong_vec_data), */
/* 	cmocka_unit_test(test_llong_vec_data), */
/* 	cmocka_unit_test(test_ullong_vec_data), */
/* 	cmocka_unit_test(test_float_vec_data), */
/* 	cmocka_unit_test(test_double_vec_data), */
/* 	cmocka_unit_test(test_ldouble_vec_data), */
/* 	cmocka_unit_test(test_bool_vec_data), */
/* 	cmocka_unit_test(test_string_vec_data), */
/* 	cmocka_unit_test(test_trim_char_vec), */
/* 	cmocka_unit_test(test_trim_uchar_vec), */
/* 	cmocka_unit_test(test_trim_short_vec), */
/* 	cmocka_unit_test(test_trim_ushort_vec), */
/* 	cmocka_unit_test(test_trim_int_vec), */
/* 	cmocka_unit_test(test_trim_uint_vec), */
/* 	cmocka_unit_test(test_trim_long_vec), */
/* 	cmocka_unit_test(test_trim_ulong_vec), */
/* 	cmocka_unit_test(test_trim_llong_vec), */
/* 	cmocka_unit_test(test_trim_ullong_vec), */
/* 	cmocka_unit_test(test_trim_float_vec), */
/* 	cmocka_unit_test(test_trim_double_vec), */
/* 	cmocka_unit_test(test_trim_ldouble_vec), */
/* 	cmocka_unit_test(test_trim_bool_vec), */
/* 	cmocka_unit_test(test_replace_index_char_vec), */
/* 	cmocka_unit_test(test_replace_index_uchar_vec), */
/* 	cmocka_unit_test(test_replace_index_short_vec), */
/* 	cmocka_unit_test(test_replace_index_ushort_vec), */
/* 	cmocka_unit_test(test_replace_index_int_vec), */
/* 	cmocka_unit_test(test_replace_index_uint_vec), */
/* 	cmocka_unit_test(test_replace_index_long_vec), */
/* 	cmocka_unit_test(test_replace_index_ulong_vec), */
/* 	cmocka_unit_test(test_replace_index_llong_vec), */
/* 	cmocka_unit_test(test_replace_index_ullong_vec), */
/* 	cmocka_unit_test(test_replace_index_float_vec), */
/* 	cmocka_unit_test(test_replace_index_double_vec), */
/* 	cmocka_unit_test(test_replace_index_ldouble_vec), */
/* 	cmocka_unit_test(test_replace_index_bool_vec), */
/* 	cmocka_unit_test(test_repeat_char_vec), */
/* 	cmocka_unit_test(test_repeat_uchar_vec), */
/* 	cmocka_unit_test(test_repeat_short_vec), */
/* 	cmocka_unit_test(test_repeat_ushort_vec), */
/* 	cmocka_unit_test(test_repeat_int_vec), */
/* 	cmocka_unit_test(test_repeat_uint_vec), */
/* 	cmocka_unit_test(test_repeat_long_vec), */
/* 	cmocka_unit_test(test_repeat_ulong_vec), */
/* 	cmocka_unit_test(test_repeat_llong_vec), */
/* 	cmocka_unit_test(test_repeat_ullong_vec), */
/* 	cmocka_unit_test(test_repeat_float_vec), */
/* 	cmocka_unit_test(test_repeat_double_vec), */
/* 	cmocka_unit_test(test_repeat_ldouble_vec), */
/* 	cmocka_unit_test(test_repeat_bool_vec), */
/* 	cmocka_unit_test(test_repeat_string_vec), */
/* 	cmocka_unit_test(test_short_vector_to_list), */
/* 	cmocka_unit_test(test_ushort_vector_to_list), */
/* 	cmocka_unit_test(test_int_vector_to_list), */
/* 	cmocka_unit_test(test_uint_vector_to_list), */
/* 	cmocka_unit_test(test_long_vector_to_list), */
/* 	cmocka_unit_test(test_ulong_vector_to_list), */
/* 	cmocka_unit_test(test_llong_vector_to_list), */
/* 	cmocka_unit_test(test_ullong_vector_to_list), */
/* 	cmocka_unit_test(test_char_vector_to_list), */
/* 	cmocka_unit_test(test_uchar_vector_to_list), */
/* 	cmocka_unit_test(test_float_vector_to_list), */
/* 	cmocka_unit_test(test_double_vector_to_list), */
/* 	cmocka_unit_test(test_ldouble_vector_to_list), */
/* 	cmocka_unit_test(test_bool_vector_to_list), */
/* 	cmocka_unit_test(test_string_vector_to_list), */
/* 	cmocka_unit_test(test_short_vector_to_btree), */
/* 	cmocka_unit_test(test_ushort_vector_to_btree), */
/* 	cmocka_unit_test(test_int_vector_to_btree), */
/* 	cmocka_unit_test(test_uint_vector_to_btree), */
/* 	cmocka_unit_test(test_long_vector_to_btree), */
/* 	cmocka_unit_test(test_ulong_vector_to_btree), */
/* 	cmocka_unit_test(test_llong_vector_to_btree), */
/* 	cmocka_unit_test(test_ullong_vector_to_btree), */
/* 	cmocka_unit_test(test_float_vector_to_btree), */
/* 	cmocka_unit_test(test_double_vector_to_btree), */
/* 	cmocka_unit_test(test_ldouble_vector_to_btree), */
/* 	cmocka_unit_test(test_char_vector_to_btree), */
/* 	cmocka_unit_test(test_uchar_vector_to_btree), */
/* }; */


// Test functions for test_swap
/* const struct CMUnitTest tests_list[] = { */
/* 	cmocka_unit_test(test_push_short_list), */
/*     cmocka_unit_test(test_push_ushort_list), */
/*     cmocka_unit_test(test_push_int_list), */
/*     cmocka_unit_test(test_push_uint_list), */
/* 	cmocka_unit_test(test_push_long_list), */
/*     cmocka_unit_test(test_push_ulong_list), */
/*     cmocka_unit_test(test_push_llong_list), */
/*     cmocka_unit_test(test_push_ullong_list), */
/*     cmocka_unit_test(test_push_float_list), */
/*     cmocka_unit_test(test_push_double_list), */
/*     cmocka_unit_test(test_push_ldouble_list), */
/*     cmocka_unit_test(test_push_char_list), */
/*     cmocka_unit_test(test_push_uchar_list), */
/*     cmocka_unit_test(test_push_bool_list), */
/* 	cmocka_unit_test(test_push_string_list), */
/*     cmocka_unit_test(test_insert_short_list), */
/* 	cmocka_unit_test(test_insert_ushort_list), */
/* 	cmocka_unit_test(test_insert_int_list), */
/* 	cmocka_unit_test(test_insert_uint_list), */
/* 	cmocka_unit_test(test_insert_long_list), */
/* 	cmocka_unit_test(test_insert_ulong_list), */
/* 	cmocka_unit_test(test_insert_llong_list), */
/* 	cmocka_unit_test(test_insert_ullong_list), */
/* 	cmocka_unit_test(test_insert_float_list), */
/* 	cmocka_unit_test(test_insert_double_list), */
/* 	cmocka_unit_test(test_insert_ldouble_list), */
/* 	cmocka_unit_test(test_insert_char_list), */
/* 	cmocka_unit_test(test_insert_uchar_list), */
/* 	cmocka_unit_test(test_insert_bool_list), */
/* 	cmocka_unit_test(test_replace_short_list_index), */
/*     cmocka_unit_test(test_replace_ushort_list_index), */
/*     cmocka_unit_test(test_replace_int_list_index), */
/*     cmocka_unit_test(test_replace_uint_list_index), */
/* 	cmocka_unit_test(test_replace_long_list_index), */
/*     cmocka_unit_test(test_replace_ulong_list_index), */
/*     cmocka_unit_test(test_replace_llong_list_index), */
/*     cmocka_unit_test(test_replace_ullong_list_index), */
/*     cmocka_unit_test(test_replace_char_list_index), */
/*     cmocka_unit_test(test_replace_uchar_list_index), */
/*     cmocka_unit_test(test_replace_float_list_index), */
/*     cmocka_unit_test(test_replace_double_list_index), */
/*     cmocka_unit_test(test_replace_ldouble_list_index), */
/*     cmocka_unit_test(test_replace_bool_list_index), */
/* 	cmocka_unit_test(test_replace_string_list_index), */
/* 	cmocka_unit_test(test_replace_short_list_values), */
/* 	cmocka_unit_test(test_replace_ushort_list_values), */
/* 	cmocka_unit_test(test_replace_int_list_values), */
/* 	cmocka_unit_test(test_replace_uint_list_values), */
/* 	cmocka_unit_test(test_replace_long_list_values), */
/* 	cmocka_unit_test(test_replace_ulong_list_values), */
/* 	cmocka_unit_test(test_replace_llong_list_values), */
/* 	cmocka_unit_test(test_replace_ullong_list_values), */
/* 	cmocka_unit_test(test_replace_float_list_values), */
/* 	cmocka_unit_test(test_replace_double_list_values), */
/* 	cmocka_unit_test(test_replace_ldouble_list_values), */
/* 	cmocka_unit_test(test_replace_char_list_values), */
/* 	cmocka_unit_test(test_replace_uchar_list_values), */
/* 	cmocka_unit_test(test_replace_bool_list_values), */
/* 	cmocka_unit_test(test_replace_string_list_values), */
/* 	cmocka_unit_test(test_delete_short_list_duplicates), */
/* 	cmocka_unit_test(test_delete_ushort_list_duplicates), */
/* 	cmocka_unit_test(test_delete_int_list_duplicates), */
/* 	cmocka_unit_test(test_delete_uint_list_duplicates), */
/* 	cmocka_unit_test(test_delete_long_list_duplicates), */
/* 	cmocka_unit_test(test_delete_ulong_list_duplicates), */
/* 	cmocka_unit_test(test_delete_llong_list_duplicates), */
/* 	cmocka_unit_test(test_delete_ullong_list_duplicates), */
/* 	cmocka_unit_test(test_delete_float_list_duplicates), */
/* 	cmocka_unit_test(test_delete_double_list_duplicates), */
/* 	cmocka_unit_test(test_delete_ldouble_list_duplicates), */
/* 	cmocka_unit_test(test_delete_char_list_duplicates), */
/* 	cmocka_unit_test(test_delete_uchar_list_duplicates), */
/* 	cmocka_unit_test(test_delete_bool_list_duplicates), */
/* 	cmocka_unit_test(test_delete_string_list_duplicates), */
/* 	cmocka_unit_test(test_reverse_short_list), */
/* 	cmocka_unit_test(test_reverse_ushort_list), */
/* 	cmocka_unit_test(test_reverse_int_list), */
/* 	cmocka_unit_test(test_reverse_uint_list), */
/* 	cmocka_unit_test(test_reverse_long_list), */
/* 	cmocka_unit_test(test_reverse_ulong_list), */
/* 	cmocka_unit_test(test_reverse_llong_list), */
/* 	cmocka_unit_test(test_reverse_ullong_list), */
/* 	cmocka_unit_test(test_reverse_float_list), */
/* 	cmocka_unit_test(test_reverse_double_list), */
/* 	cmocka_unit_test(test_reverse_ldouble_list), */
/* 	cmocka_unit_test(test_reverse_char_list), */
/*     cmocka_unit_test(test_reverse_uchar_list), */
/* 	cmocka_unit_test(test_reverse_bool_list), */
/* 	cmocka_unit_test(test_reverse_string_list), */
/* 	cmocka_unit_test(test_sort_short_list), */
/* 	cmocka_unit_test(test_sort_ushort_list), */
/* 	cmocka_unit_test(test_sort_int_list), */
/* 	cmocka_unit_test(test_sort_uint_list), */
/* 	cmocka_unit_test(test_sort_long_list), */
/* 	cmocka_unit_test(test_sort_ulong_list), */
/* 	cmocka_unit_test(test_sort_llong_list), */
/* 	cmocka_unit_test(test_sort_ullong_list), */
/* 	cmocka_unit_test(test_sort_float_list), */
/* 	cmocka_unit_test(test_sort_double_list), */
/* 	cmocka_unit_test(test_sort_ldouble_list), */
/* 	cmocka_unit_test(test_sort_char_list), */
/*     cmocka_unit_test(test_sort_uchar_list), */
/* 	cmocka_unit_test(test_sort_bool_list), */
/* 	cmocka_unit_test(test_sort_string_list), */
/* 	cmocka_unit_test(test_sum_short_list), */
/* 	cmocka_unit_test(test_sum_ushort_list), */
/* 	cmocka_unit_test(test_sum_int_list), */
/* 	cmocka_unit_test(test_sum_uint_list), */
/* 	cmocka_unit_test(test_sum_long_list), */
/* 	cmocka_unit_test(test_sum_ulong_list), */
/* 	cmocka_unit_test(test_sum_llong_list), */
/* 	cmocka_unit_test(test_sum_ullong_list), */
/* 	cmocka_unit_test(test_sum_float_list), */
/* 	cmocka_unit_test(test_sum_double_list), */
/* 	cmocka_unit_test(test_sum_ldouble_list), */
/* 	cmocka_unit_test(test_cumsum_short_list), */
/* 	cmocka_unit_test(test_cumsum_ushort_list), */
/* 	cmocka_unit_test(test_cumsum_int_list), */
/* 	cmocka_unit_test(test_cumsum_uint_list), */
/* 	cmocka_unit_test(test_cumsum_long_list), */
/* 	cmocka_unit_test(test_cumsum_ulong_list), */
/* 	cmocka_unit_test(test_cumsum_llong_list), */
/* 	cmocka_unit_test(test_cumsum_ullong_list), */
/* 	cmocka_unit_test(test_cumsum_float_list), */
/* 	cmocka_unit_test(test_cumsum_double_list), */
/* 	cmocka_unit_test(test_cumsum_ldouble_list), */
/* 	cmocka_unit_test(test_average_short_list), */
/* 	cmocka_unit_test(test_average_ushort_list), */
/* 	cmocka_unit_test(test_average_int_list), */
/* 	cmocka_unit_test(test_average_uint_list), */
/* 	cmocka_unit_test(test_average_long_list), */
/* 	cmocka_unit_test(test_average_ulong_list), */
/* 	cmocka_unit_test(test_average_llong_list), */
/* 	cmocka_unit_test(test_average_ullong_list), */
/* 	cmocka_unit_test(test_average_float_list), */
/* 	cmocka_unit_test(test_average_double_list), */
/* 	cmocka_unit_test(test_average_ldouble_list), */
/* 	cmocka_unit_test(test_stdev_short_list), */
/* 	cmocka_unit_test(test_stdev_ushort_list), */
/* 	cmocka_unit_test(test_stdev_int_list), */
/* 	cmocka_unit_test(test_stdev_uint_list), */
/* 	cmocka_unit_test(test_stdev_long_list), */
/* 	cmocka_unit_test(test_stdev_ulong_list), */
/* 	cmocka_unit_test(test_stdev_llong_list), */
/* 	cmocka_unit_test(test_stdev_ullong_list), */
/* 	cmocka_unit_test(test_stdev_float_list), */
/* 	cmocka_unit_test(test_stdev_double_list), */
/* 	cmocka_unit_test(test_stdev_ldouble_list), */
/* 	cmocka_unit_test(test_max_short_list), */
/* 	cmocka_unit_test(test_max_ushort_list), */
/* 	cmocka_unit_test(test_max_int_list), */
/* 	cmocka_unit_test(test_max_uint_list), */
/* 	cmocka_unit_test(test_max_long_list), */
/* 	cmocka_unit_test(test_max_ulong_list), */
/* 	cmocka_unit_test(test_max_llong_list), */
/* 	cmocka_unit_test(test_max_ullong_list), */
/* 	cmocka_unit_test(test_max_float_list), */
/* 	cmocka_unit_test(test_max_double_list), */
/* 	cmocka_unit_test(test_max_ldouble_list), */
/* 	cmocka_unit_test(test_min_ushort_list), */
/* 	cmocka_unit_test(test_min_int_list), */
/* 	cmocka_unit_test(test_min_uint_list), */
/* 	cmocka_unit_test(test_min_long_list), */
/* 	cmocka_unit_test(test_min_ulong_list), */
/* 	cmocka_unit_test(test_min_llong_list), */
/* 	cmocka_unit_test(test_min_ullong_list), */
/* 	cmocka_unit_test(test_min_float_list), */
/* 	cmocka_unit_test(test_min_double_list), */
/* 	cmocka_unit_test(test_min_ldouble_list), */
/* 	cmocka_unit_test(test_range_short_list), */
/* 	cmocka_unit_test(test_range_ushort_list), */
/* 	cmocka_unit_test(test_range_long_list), */
/* 	cmocka_unit_test(test_range_ulong_list), */
/* 	cmocka_unit_test(test_range_llong_list), */
/* 	cmocka_unit_test(test_range_ullong_list), */
/* 	cmocka_unit_test(test_range_float_list), */
/* 	cmocka_unit_test(test_range_double_list), */
/* 	cmocka_unit_test(test_range_ldouble_list), */
/*     cmocka_unit_test(test_copy_short_list), */
/* 	cmocka_unit_test(test_copy_ushort_list), */
/*     cmocka_unit_test(test_copy_int_list), */
/* 	cmocka_unit_test(test_copy_uint_list), */
/*     cmocka_unit_test(test_copy_long_list), */
/* 	cmocka_unit_test(test_copy_ulong_list), */
/*     cmocka_unit_test(test_copy_llong_list), */
/* 	cmocka_unit_test(test_copy_ullong_list), */
/* 	cmocka_unit_test(test_copy_char_list), */
/* 	cmocka_unit_test(test_copy_uchar_list), */
/*     cmocka_unit_test(test_copy_float_list), */
/* 	cmocka_unit_test(test_copy_double_list), */
/*     cmocka_unit_test(test_copy_ldouble_list), */
/* 	cmocka_unit_test(test_copy_bool_list), */
/*     cmocka_unit_test(test_copy_string_list), */
/*     cmocka_unit_test(test_repeat_char_list), */
/*     cmocka_unit_test(test_repeat_uchar_list), */
/*     cmocka_unit_test(test_repeat_short_list), */
/*     cmocka_unit_test(test_repeat_ushort_list), */
/*     cmocka_unit_test(test_repeat_int_list), */
/*     cmocka_unit_test(test_repeat_uint_list), */
/*     cmocka_unit_test(test_repeat_long_list), */
/*     cmocka_unit_test(test_repeat_ulong_list), */
/*     cmocka_unit_test(test_repeat_llong_list), */
/*     cmocka_unit_test(test_repeat_ullong_list), */
/*     cmocka_unit_test(test_repeat_float_list), */
/*     cmocka_unit_test(test_repeat_double_list), */
/*     cmocka_unit_test(test_repeat_ldouble_list), */
/*     cmocka_unit_test(test_repeat_bool_list), */
/*     cmocka_unit_test(test_repeat_string_list), */
/* 	cmocka_unit_test(test_short_list_to_vector), */
/*     cmocka_unit_test(test_ushort_list_to_vector), */
/* 	cmocka_unit_test(test_int_list_to_vector), */
/*     cmocka_unit_test(test_uint_list_to_vector), */
/* 	cmocka_unit_test(test_long_list_to_vector), */
/*     cmocka_unit_test(test_ulong_list_to_vector), */
/* 	cmocka_unit_test(test_llong_list_to_vector), */
/*     cmocka_unit_test(test_ullong_list_to_vector), */
/* 	cmocka_unit_test(test_char_list_to_vector), */
/*     cmocka_unit_test(test_uchar_list_to_vector), */
/* 	cmocka_unit_test(test_float_list_to_vector), */
/*     cmocka_unit_test(test_double_list_to_vector), */
/* 	cmocka_unit_test(test_ldouble_list_to_vector), */
/*     cmocka_unit_test(test_bool_list_to_vector), */
/* 	cmocka_unit_test(test_string_list_to_vector), */
/* }; */

/* // Test functions for test_swap */
/* const struct CMUnitTest tests_btree[] = { */
/* 	cmocka_unit_test(test_short_btree_push), */
/* 	cmocka_unit_test(test_ushort_btree_push), */
/* 	cmocka_unit_test(test_int_btree_push), */
/* 	cmocka_unit_test(test_uint_btree_push), */
/* 	cmocka_unit_test(test_long_btree_push), */
/* 	cmocka_unit_test(test_ulong_btree_push), */
/* 	cmocka_unit_test(test_llong_btree_push), */
/* 	cmocka_unit_test(test_ullong_btree_push), */
/* 	cmocka_unit_test(test_float_btree_push), */
/* 	cmocka_unit_test(test_double_btree_push), */
/* 	cmocka_unit_test(test_ldouble_btree_push), */
/* 	cmocka_unit_test(test_char_btree_push), */
/* 	cmocka_unit_test(test_string_btree_push), */
/* 	cmocka_unit_test(test_short_btree_pop), */
/* 	cmocka_unit_test(test_ushort_btree_pop), */
/* 	cmocka_unit_test(test_int_btree_pop), */
/* 	cmocka_unit_test(test_uint_btree_pop), */
/* 	cmocka_unit_test(test_long_btree_pop), */
/* 	cmocka_unit_test(test_ulong_btree_pop), */
/* 	cmocka_unit_test(test_llong_btree_pop), */
/* 	cmocka_unit_test(test_ullong_btree_pop), */
/* 	cmocka_unit_test(test_float_btree_pop), */
/* 	cmocka_unit_test(test_double_btree_pop), */
/* 	cmocka_unit_test(test_ldouble_btree_pop), */
/* 	cmocka_unit_test(test_char_btree_pop), */
/*     cmocka_unit_test(test_uchar_btree_pop), */
/* 	cmocka_unit_test(test_string_btree_pop), */
/* 	cmocka_unit_test(test_short_min_btree), */
/* 	cmocka_unit_test(test_ushort_min_btree), */
/* 	cmocka_unit_test(test_int_min_btree), */
/* 	cmocka_unit_test(test_uint_min_btree), */
/* 	cmocka_unit_test(test_long_min_btree), */
/* 	cmocka_unit_test(test_ulong_min_btree), */
/* 	cmocka_unit_test(test_llong_min_btree), */
/* 	cmocka_unit_test(test_ullong_min_btree), */
/* 	cmocka_unit_test(test_float_min_btree), */
/* 	cmocka_unit_test(test_double_min_btree), */
/* 	cmocka_unit_test(test_ldouble_min_btree), */
/* 	cmocka_unit_test(test_char_min_btree), */
/*     cmocka_unit_test(test_uchar_min_btree), */
/* 	cmocka_unit_test(test_string_min_btree), */
/* 	cmocka_unit_test(test_short_max_btree), */
/* 	cmocka_unit_test(test_ushort_max_btree), */
/* 	cmocka_unit_test(test_int_max_btree), */
/* 	cmocka_unit_test(test_uint_max_btree), */
/* 	cmocka_unit_test(test_long_max_btree), */
/* 	cmocka_unit_test(test_ulong_max_btree), */
/* 	cmocka_unit_test(test_llong_max_btree), */
/* 	cmocka_unit_test(test_ullong_max_btree), */
/* 	cmocka_unit_test(test_float_max_btree), */
/* 	cmocka_unit_test(test_double_max_btree), */
/* 	cmocka_unit_test(test_ldouble_max_btree), */
/* 	cmocka_unit_test(test_char_max_btree), */
/* 	cmocka_unit_test(test_uchar_max_btree), */
/* 	cmocka_unit_test(test_string_max_btree), */
/* }; */

// Begin code
int main(int argc, const char * argv[]) {
	int status;

    // Run the tests for test_swap
    /* status = cmocka_run_group_tests(tests_swap, NULL, NULL); */
    /* if (status != 0) { */
    /*     return status; */
    /* } */

    /* // Run the tests for test_vector */
    /* status = cmocka_run_group_tests(tests_vector, NULL, NULL); */
	/* if (status != 0) { */
		/* return status; */
	/* } */

	/* // Run the tests for test_list */
    /* status = cmocka_run_group_tests(tests_list, NULL, NULL); */
	/* if (status != 0) { */
		/* return status; */
	/* } */

	// Run the tests for test_binary_tree
    status = cmocka_run_group_tests(tests_string, NULL, NULL);
	return status;
}
// ================================================================================
// ================================================================================
// eof

