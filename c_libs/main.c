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
#include "include/array.h"
// Begin code
// TODO Give write array functions an int type with exit 1 for failure
// TODO Write a return array function
// TODO Test return array function
// TODO Write prepend function
int main(int argc, const char * argv[]) {
	size_t indices = 20;
	char name[5] = "array";
	char dtype[4] = "int";
	Array int_test = init_array(dtype, indices, name);
//
	int a[3] = {10, 9, 8};
//	size_t test = sizeof(a) / sizeof(int);
//	printf("%zu\n", test);

	append_array(&int_test, a, 3);
	for (int i = 0; i < 3; i++){
		printf("%d\n", ((int *) int_test.array)[i]);
	}
	printf("%s\n", int_test.dtype);
}
// ================================================================================
// ================================================================================
// eof

