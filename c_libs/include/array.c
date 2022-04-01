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
void array_mem_alloc(Array *array, size_t num_indices) {
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

Array init_array(char *dtype, size_t num_indices, char *name) {
	// Determine memory blocks based on data type
	int size;
	if (strcmp(dtype, "float") == 0) size = sizeof(float);
	else if (strcmp(dtype, "int") == 0) size = sizeof(int);
	else if (strcmp(dtype, "double") == 0) size = sizeof(double);
	else if (strcmp(dtype, "char") == 0) size = sizeof(char);
	else {
		printf("Data type not correctly entered into init_array, exiting program!\n");
		exit(0);
	}

	// Allocate indice size and call array_mem_alloc
	Array array;
	array.dtype = dtype;
    array.elem = size;
    array_mem_alloc(&array, num_indices);
	array.name = name;
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
// --------------------------------------------------------------------------------

void free_array(Array *array) {
	// Free all memory in the array
	free(array->array);
	// Reset all variables in the struct
	array->array = NULL;
	array->size = 0;
    array->len = 0;
	array->elem = 0;
}
// --------------------------------------------------------------------------------

int int_array_val(Array *array, int indice) {
	// Ensure array contains integers
	if (strcmp(array->dtype, "int") != 0) {
		printf("Function can only return integer values, exiting function!\n");
		exit(0);
	}
	// Cast value to an integer and return
	int a = ((int *)array->array)[indice];
	return a;
}
// --------------------------------------------------------------------------------

float float_array_val(Array *array, int indice) {
	// Ensure array contains floats
	if (strcmp(array->dtype, "float") != 0) {
		printf("Function can only return float values, exiting function!\n");
		exit(0);
	}
	// Cast value to an integer and return
	float a = ((float *)array->array)[indice];
	return a;
}
// --------------------------------------------------------------------------------

double double_array_val(Array *array, int indice) {
	// Ensure array contains floats
	if (strcmp(array->dtype, "double") != 0) {
		printf("Function can only return double values, exiting function!\n");
		exit(0);
	}
	// Cast value to an integer and return
	double a = ((double *)array->array)[indice];
	return a;
}
// --------------------------------------------------------------------------------

char char_array_val(Array *array, int indice) {
	// Ensure array contains floats
	if (strcmp(array->dtype, "char") != 0) {
		printf("Function can only return char values, exiting function!\n");
		exit(0);
	}
	// Cast value to an integer and return
	char a = ((char *)array->array)[indice];
	return a;
}
// --------------------------------------------------------------------------------

int preappend_array(Array *array, void *elements, size_t count) {
	// Allocae more memory if necessary
    if (array->len + count > array->size) {
        size_t size = (array->len + count) * 2;
        void *pointer = realloc(array->array, size * array->elem);
		// If memory is full return operations
        if (pointer == NULL) {
			printf("Unable to allocate memory, exiting.\n");
            exit(0);
        }
		// Allocate memory to variables and increment array size
        array->array = pointer;
        array->size = size;
    }
	// Preappend variables and increment the array length
    memmove(
    ((char *) array->array) + count * array->elem,
    array->array,
    array->len * array->elem);

    memcpy(array->array, elements, count * array->elem);
    array->len += count;
    return 1;
}
// --------------------------------------------------------------------------------

int pop_array(Array *array, int indice) {
	if (indice >= array->len) {
		printf("Indice %d out of bounds for pop_array", indice);
		return 0;
	}
	unsigned char *dst = (unsigned char*)array->array + indice * array->elem;
	memmove(dst, dst + array->elem, array->elem * (array->len - indice - 1));
	array->len -= 1;
	return 1;
}
// ================================================================================
// ================================================================================
// eof
