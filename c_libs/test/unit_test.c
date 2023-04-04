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
    cmocka_unit_test(test_push_short),
    cmocka_unit_test(test_push_ushort),
    cmocka_unit_test(test_push_int),
    cmocka_unit_test(test_push_uint),
    cmocka_unit_test(test_push_long),
    cmocka_unit_test(test_push_ulong),
    cmocka_unit_test(test_push_llong),
    cmocka_unit_test(test_push_ullong),
    cmocka_unit_test(test_push_char),
    cmocka_unit_test(test_push_uchar),
	cmocka_unit_test(test_push_float),
    cmocka_unit_test(test_push_double),
	cmocka_unit_test(test_push_ldouble),
    cmocka_unit_test(test_push_bool),
	cmocka_unit_test(test_push_string),
	cmocka_unit_test(test_insert_short),
    cmocka_unit_test(test_insert_ushort),
	cmocka_unit_test(test_push_int),
	cmocka_unit_test(test_insert_uint),
	cmocka_unit_test(test_push_long),
	cmocka_unit_test(test_insert_ulong),
	cmocka_unit_test(test_push_llong),
	cmocka_unit_test(test_insert_ullong),
	cmocka_unit_test(test_push_float),
	cmocka_unit_test(test_insert_double),
	cmocka_unit_test(test_insert_ldouble),
	cmocka_unit_test(test_insert_bool),
	cmocka_unit_test(test_insert_string)
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

