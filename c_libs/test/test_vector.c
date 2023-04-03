// ================================================================================
// ================================================================================
// - File:    test_vector.c
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

#include "test_vector.h"

void test_push_short(void **state)
{
	(void) state;
	short int a[5] = {5, 1, 2, 3, 4};
	Short vec;
	INIT_VECTOR(vec, 5);
	PUSH(vec, 1, vec.active_length);
	PUSH(vec, 2, vec.active_length);
	PUSH(vec, 3, vec.active_length);
	PUSH(vec, 4, vec.active_length);
	PUSH(vec, 5, 0);
	for (size_t i = 0; i < vec.active_length; i++) {
		assert_int_equal(a[i], vec.array[i]);
	}
	FREE(vec);
}
// ================================================================================
// ================================================================================
// eof
