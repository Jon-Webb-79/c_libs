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
void test_cleanup_with_manual_deallocation(void **state);
void test_append_string_manual_cleanup(void **state);
void test_copy_memory(void **state);
void test_copy_memory_overflow(void **state);
void test_copy_memory_null(void **state);
void test_move_memory(void **state);
void test_move_memory_overflow(void **state);
void test_move_memory_null(void **state);
void test_replace_string_literal(void **state);
void test_replace_string_str(void **state);
void test_compare_equal_strings(void **state);
void test_compare_larger_strings(void **state);
void test_compare_smaller_strings(void **state);
void test_literal_string_length(void **state);
void test_copy_string_literal(void **state);
void test_move_string_literal(void **state);
void test_last_token_occurance_null(void **state);
void test_last_token_occurance(void **state);
void test_last_token_empty(void **state);
void test_pop_string_token(void **state);
void test_pop_string_int(void **state);
void test_resize_string(void **state);
void test_remove_string_token(void **state);
void test_remove_string_int(void **state);
void test_concat_literal(void **state);
void test_add_strings_literal(void **state);
void test_add_strings_str(void **state);

#endif /* test_H */
// ================================================================================
// ================================================================================
// eof
