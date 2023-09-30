// ================================================================================
// ================================================================================
// - File:    test_string.h
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

#include "../include/str.h"
#include "../include/print.h"

void test_append_string_free(void **state);
void test_append_string_cleanup(void **state);
void test_copy_memory(void **state);
void test_move_memory(void **state);

#endif /* test_H */
// ================================================================================
// ================================================================================
// eof
