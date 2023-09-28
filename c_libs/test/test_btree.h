// ================================================================================
// ================================================================================
// - File:    test_btree.h
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

#ifndef test_btree_H
#define test_btree_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <stdint.h>
#include <cmocka.h>
#include <stdbool.h>

#include "../include/print.h"
#include "../include/btree.h"
#include "../include/data_structures.h"

void test_short_btree_push(void **state);
void test_ushort_btree_push(void **state);
void test_int_btree_push(void **state);
void test_uint_btree_push(void **state);
void test_long_btree_push(void **state);
void test_ulong_btree_push(void **state);
void test_llong_btree_push(void **state);
void test_ullong_btree_push(void **state);
void test_float_btree_push(void **state);
void test_double_btree_push(void **state);
void test_ldouble_btree_push(void **state);
void test_char_btree_push(void **state);
void test_uchar_btree_push(void **state);
void test_string_btree_push(void **state);
// ================================================================================
// ================================================================================
// TEST_TYPE_BTREE_POP FUNCTIONS

void test_short_btree_pop(void **state);
void test_ushort_btree_pop(void **state);
void test_int_btree_pop(void **state);
void test_uint_btree_pop(void **state);
void test_long_btree_pop(void **state);
void test_ulong_btree_pop(void **state);
void test_llong_btree_pop(void **state);
void test_ullong_btree_pop(void **state);
void test_float_btree_pop(void **state);
void test_double_btree_pop(void **state);
void test_ldouble_btree_pop(void **state);
void test_char_btree_pop(void **state);
void test_uchar_btree_pop(void **state);
void test_string_btree_pop(void **state);
// ================================================================================
// ================================================================================
// TEST_TYPE_MIN_BTREE FUNCTIONS

void test_short_min_btree(void **state);
void test_ushort_min_btree(void **state);
void test_int_min_btree(void **state);
void test_uint_min_btree(void **state);
void test_long_min_btree(void **state);
void test_ulong_min_btree(void **state);
void test_llong_min_btree(void **state);
void test_ullong_min_btree(void **state);
void test_float_min_btree(void **state);
void test_double_min_btree(void **state);
void test_ldouble_min_btree(void **state);
void test_char_min_btree(void **state);
void test_uchar_min_btree(void **state);
void test_string_min_btree(void **state);

// ================================================================================
// ================================================================================
// TEST_TYPE_MAX_BTREE FUNCTIONS

void test_short_max_btree(void **state);
void test_ushort_max_btree(void **state);
void test_int_max_btree(void **state);
void test_uint_max_btree(void **state);
void test_long_max_btree(void **state);
void test_ulong_max_btree(void **state);
void test_llong_max_btree(void **state);
void test_ullong_max_btree(void **state);
void test_float_max_btree(void **state);
void test_double_max_btree(void **state);
void test_ldouble_max_btree(void **state);
void test_char_max_btree(void **state);
void test_uchar_max_btree(void **state);
void test_string_max_btree(void **state);
#endif /* test_btree_H */
// ================================================================================
// ================================================================================
// eof
