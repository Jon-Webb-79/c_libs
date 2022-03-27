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
	// Determine the total memory allocation and assign to pointer
	void *pointer;
	pointer = malloc(num_indices * array->elem);

	// If memory is full fail gracefully
	if (pointer == NULL) {
		printf("Unable to allocate memory, exiting.\n");
		free(pointer);
		exit(0);
	}
	// Allocate resources and instantiate Array
	else {
		array->array = pointer;
		array->len = 0;
		array->size = num_indices;
	}
}
// --------------------------------------------------------------------------------

Array init_array(int size, size_t num_indices) {
	// Allocate indice size and call initiate_array
	Array array;
    array.elem = size;
    initiate_array(&array, num_indices);
	return array;
}
// --------------------------------------------------------------------------------

int append_array(Array *array, void *elements, size_t count) {
	// Allocae more memory if necessary
    if (array->len + count > array->size) {
        size_t size = (array->len + count) * 2;
        void *pointer = realloc(array->array, size * array->elem);
		// If memory is full return operations
        if (pointer == NULL) {
			printf("Unable to allocate memory, exiting.\n");
            return 0;
        }
		// Allocate memory to variables and increment array size
        array->array = pointer;
        array->size = size;
    }
	// Append variables and increment the array length
    memcpy((char *)array->array + array->len * array->elem, elements, count * array->elem);
    array->len += count;
    return 1;
}
// ================================================================================
// ================================================================================
// eof
