// ================================================================================
// ================================================================================
// - File:    main.c
// - Purpose: Describe the file purpose here
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    March 26, 2022
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// Include modules here

#include <stdio.h>
#include "array.h"
// Begin code
int main(int argc, const char * argv[]) {
	size_t indices = 20;
	Array int_test = init_array(sizeof(int), indices);

	int a[3] = {10, 9, 8};
	size_t test = sizeof(a) / sizeof(int);
	printf("%zu\n", test);
	append_array(&int_test, &a, 1);
}
// ================================================================================
// ================================================================================
// eof

