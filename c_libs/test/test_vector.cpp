// ================================================================================
// ================================================================================
// - File>    test_vec.cpp
// - Purpose: This file implements google test as a method to test c code.
//            Describe the type of testing to be completed
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    June 06, 2022
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// - Begin test

#include <gtest/gtest.h>

extern "C" {
	#include "vector.h"
}

TEST(test_initialize_vector, notype_vec) {
	size_t size = sizeof(int);
    size_t length = 5;
	Vector vec = init_vector(size, length);
	EXPECT_EQ(vec.num_bytes, 4);
	EXPECT_EQ(vec.allocated_length, 5);
	EXPECT_EQ(vec.active_length, 0);
	free(vec.vector);
}
// ================================================================================
// ================================================================================
// eof
