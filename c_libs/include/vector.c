// ================================================================================
// ================================================================================
// - File:    vec.c
// - Purpose: Describe the file purpose here
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    June 06, 2022
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// Include modules here

#include "vector.h"

// Begin code

void print_int_vec(int *vec, size_t cols, size_t length) {
	size_t rows;
	size_t temp = length;
	size_t ncols = cols; size_t index = 0;
	if (length % cols == 0) rows = length / cols;
	else rows = (length / cols) + 1;

	printf("[ ");
	for (size_t i = 0; i < rows; i++) {
		if (temp <= cols) ncols = temp - 1;
		for (size_t j = 0; j < ncols; j++) {
			printf("%d, ", vec[index]);
			index++;
		}
		temp -= ncols;
		if (temp == 1) break;
		printf("\n");
		printf("  ");
	}
	printf("%d ", vec[length - 1]);
	printf("]\n");
}
// --------------------------------------------------------------------------------

void print_short_vec(short *vec, size_t cols, size_t length) {
	size_t rows;
	size_t temp = length;
	size_t ncols = cols;
	size_t index = 0;
	if (length % cols == 0) rows = length / cols;
	else rows = (length / cols) + 1;

	printf("[ ");
	for (size_t i = 0; i < rows; i++) {
		if (temp <= cols) ncols = temp - 1;
		for (size_t j = 0; j < ncols; j++) {
			printf("%hd, ", vec[index]);
			index++;
		}
		temp -= ncols;
		if (temp == 1) break;
		printf("\n");
		printf("  ");
	}
	printf("%hd ", vec[length - 1]);
	printf("]\n");
}
// --------------------------------------------------------------------------------

void print_long_vec(long *vec, size_t cols, size_t length) {
	size_t rows;
	size_t temp = length;
	size_t ncols = cols;
	size_t index = 0;
	if (length % cols == 0) rows = length / cols;
	else rows = (length / cols) + 1;

	printf("[ ");
	for (size_t i = 0; i < rows; i++) {
		if (temp <= cols) ncols = temp - 1;
		for (size_t j = 0; j < ncols; j++) {
			printf("%ld, ", vec[index]);
			index++;
		}
		temp -= ncols;
		if (temp == 1) break;
		printf("\n");
		printf("  ");
	}
	printf("%ld ", vec[length - 1]);
	printf("]\n");
}
// --------------------------------------------------------------------------------

void print_longlong_vec(long long *vec, size_t cols, size_t length) {
	size_t rows;
	size_t temp = length;
	size_t ncols = cols;
	size_t index = 0;
	if (length % cols == 0) rows = length / cols;
	else rows = (length / cols) + 1;

	printf("[ ");
	for (size_t i = 0; i < rows; i++) {
		if (temp <= cols) ncols = temp - 1;
		for (size_t j = 0; j < ncols; j++) {
			printf("%lld, ", vec[index]);
			index++;
		}
		temp -= ncols;
		if (temp == 1) break;
		printf("\n");
		printf("  ");
	}
	printf("%lld ", vec[length - 1]);
	printf("]\n");
}
// ================================================================================
// ================================================================================
// eof
