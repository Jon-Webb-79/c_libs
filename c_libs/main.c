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
// TODO add array type
// TODO Fix doxygen to include function documentation
// TODO Add test for array memory kickover
// TODO Add float test for append_array
// TODO Add double test for append array
// TODO Add char test for append array
// TODO Add functions from array TODO list
int main(int argc, const char * argv[]) {
	size_t indices = 20;
	char name[5] = "array";
	Array int_test = init_array(sizeof(int), indices, name);

	int a[3] = {10, 9, 8};
	size_t test = sizeof(a) / sizeof(int);
	printf("%zu\n", test);
	append_array(&int_test, &a, 1);
}
// ================================================================================
// ================================================================================
// eof

