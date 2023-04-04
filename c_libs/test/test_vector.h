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

void test_push_short(void **state);
void test_push_ushort(void **state);
void test_push_int(void **state);
void test_push_uint(void **state);
void test_push_long(void **state);
void test_push_ulong(void **state);
void test_push_llong(void **state);
void test_push_ullong(void **state);
void test_push_char(void **state);
void test_push_uchar(void **state);
void test_push_float(void **state);
void test_push_double(void **state);
void test_push_ldouble(void **state);
void test_push_bool(void **state);
void test_push_string(void **state);
// ==========================================================================================
// ==========================================================================================
// TEST_INSERT_TYPE FUNCTIONS

void test_insert_short(void **state);
void test_insert_ushort(void **state);
void test_insert_int(void **state);
void test_insert_uint(void **state);
void test_insert_long(void **state);
void test_insert_ulong(void **state);
void test_insert_llong(void **state);
void test_insert_ullong(void **state);
void test_insert_char(void **state);
void test_insert_uchar(void **state);
void test_insert_float(void **state);
void test_insert_double(void **state);
void test_insert_ldouble(void **state);
void test_insert_bool(void **state);
void test_insert_string(void **state);

#endif /* test_vector_H */
// ==========================================================================================
// ==========================================================================================
// eof
