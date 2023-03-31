// ================================================================================
// ================================================================================
// - File:    test.h
// - Purpose: Describe the file purpose here
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    August 31, 2022
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// Test swap functions

#ifndef test_H
#define test_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

#include "../include/swap.h"

void test_swap_short(void **state);
void test_swap_ushort(void **state);
void test_swap_int(void **state);
void test_swap_uint(void **state);
void test_swap_long(void **state);
void test_swap_ulong(void **state);
void test_swap_llong(void **state);
void test_swap_ullong(void **state);
void test_swap_float(void **state);
void test_swap_double(void **state);
void test_swap_ldouble(void **state);
void test_swap_bool(void **state);
void test_swap_char(void **state);

#endif /* test_H */
// ================================================================================
// ================================================================================
// eof
