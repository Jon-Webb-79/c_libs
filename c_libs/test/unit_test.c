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
	cmocka_unit_test(test_replace_string_values_vec)
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
    return status;
}
// ================================================================================
// ================================================================================
// eof

