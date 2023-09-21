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

#endif /* test_H */
// ================================================================================
// ================================================================================
// eof
