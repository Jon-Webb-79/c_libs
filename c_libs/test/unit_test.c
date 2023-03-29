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

// Begin code
int main(int argc, const char * argv[]) {
	const struct CMUnitTest test_swap[] = {
		cmocka_unit_test(test_swap_int8),
		cmocka_unit_test(test_swap_uint8),
		cmocka_unit_test(test_swap_int16),
		cmocka_unit_test(test_swap_uint16),
		cmocka_unit_test(test_swap_int32),
		cmocka_unit_test(test_swap_uint32),
		cmocka_unit_test(test_swap_int64),
		cmocka_unit_test(test_swap_uint64),
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
		cmocka_unit_test(test_swap_bool)
	};
	return cmocka_run_group_tests(test_swap, NULL, NULL);
}
// ================================================================================
// ================================================================================
// eof

