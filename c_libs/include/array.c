// ================================================================================
// ================================================================================
// - File:    array.c
// - Purpose: THis file contains all functions necessary to manipulate C arrays
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    May 17, 2022
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// Include modules here

#include "array.h"

// Begin code

Array init_array(size_t allocated_length, size_t active_length,
		         void *array, dtype data_type) {
	Array arr;

	// Check data types
	if (data_type == FLOAT) arr.num_bytes = sizeof(float);
	else if (data_type == DOUBLE) arr.num_bytes = sizeof(double);
	else if (data_type == CHAR) arr.num_bytes = sizeof(char);
	else if(data_type == INT) arr.num_bytes = sizeof(int);
	else if (data_type == SHORTINT) arr.num_bytes = sizeof(short);
	else if (data_type == LONG) arr.num_bytes = sizeof(long);
	else if (data_type == LONGLONG) arr.num_bytes = sizeof(long long);
	else {
		printf("WARNING: Data type passed to init_array is incorrect, exiting!\n");
		return arr;
	}
	arr.dat_type = data_type;
	arr.active_length = active_length;
	arr.allocated_length = allocated_length;
	arr.array = array;
	return arr;
}
// --------------------------------------------------------------------------------

int push_array(Array *arr, void *array, size_t active_indices) {
	if (arr->active_length + active_indices > arr->allocated_length) {
		printf("WARNING: Not enough memory for push_array, exiting\n");
		return 0;
	}
	memcpy(((char *)arr->array) + (arr->active_length * arr->num_bytes),
			array, (active_indices * arr->num_bytes));
	arr->active_length += active_indices;
	return 1;
}
// --------------------------------------------------------------------------------

int insert_array(Array *arr, void *array, size_t active_indices, size_t insert_index) {
	if (arr->active_length + active_indices > arr->allocated_length) {
		printf("WARNING: Not enough memory for insert_array, exiting\n");
		return 0;
	}

	if (arr->allocated_length - insert_index < active_indices) {
		printf("Not enough space after insert_index for insert_array data\n");
		return 0;
	}
	memmove(((char *)arr->array) + ((insert_index + active_indices) * arr->num_bytes),
			((char *)arr->array) + (insert_index * arr->num_bytes),
			(arr->allocated_length - insert_index) * arr->num_bytes);

	memcpy(((char *)arr->array) + (insert_index * arr->num_bytes),
			array, (active_indices * arr->num_bytes));
	arr->active_length += active_indices;
	return 1;
}
// --------------------------------------------------------------------------------

int pop_array(Array *arr, size_t index) {
	if (index > arr->allocated_length) {
		printf("WARNING: index in pop_array is greater than allocated_length\n");
		return 0;
	}
	memmove(((char *)arr->array) + (index * arr->num_bytes),
			((char *)arr->array) + ((index + 1) * arr->num_bytes),
			(arr->active_length - index) * arr->num_bytes);
	arr->active_length -= 1;
	return 1;
}
// ================================================================================
// ================================================================================
// eof
