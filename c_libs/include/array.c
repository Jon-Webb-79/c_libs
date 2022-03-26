// ================================================================================
// ================================================================================
// - File:    array.c
// - Purpose: This file contains the function implementations that are use
//            for the instantiation and operation of C arrays
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    March 26, 2022
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// Include modules here

#include "array.h"

// Begin code

void initiate_array(Array *array, size_t num_indices) {
	void *pointer;
	pointer = malloc(num_indices * array->elem);

	if (pointer == NULL) {
		printf("Unable to allocate memory, exiting.\n");
		free(pointer);
		exit(0);
	}
	else {
		array->array = pointer;
		array->len = 0;
		array->size = num_indices;
	}
}
// ================================================================================
// ================================================================================
// eof
