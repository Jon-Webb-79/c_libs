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
// --------------------------------------------------------------------------------

int replace_array_index(Array *arr, size_t index, void *value) {
	if (index > arr->allocated_length) {
		printf("WARNING: index larger than allocated length for replace_array_index\n");
		return 0;
	}
	memcpy(((char *)arr->array) + (index * arr->num_bytes),
			value, arr->num_bytes);
	return 1;
}
// --------------------------------------------------------------------------------

void replace_int_array_values(Array *arr, int old_value, int new_value) {
	for (size_t i = 0; i < arr->active_length; i++) {
		int a = ((int *)arr->array)[i];
		if (a == old_value) replace_array_index(arr, i, &new_value);
	}
}
// --------------------------------------------------------------------------------

void replace_float_array_values(Array *arr, float old_value, float new_value) {
	for (size_t i = 0; i < arr->active_length; i++) {
		float a = ((float *)arr->array)[i];
		if (a == old_value) replace_array_index(arr, i, &new_value);
	}
}
// --------------------------------------------------------------------------------

void replace_double_array_values(Array *arr, double old_value, double new_value) {
	for (size_t i = 0; i < arr->active_length; i++) {
		double a = ((double *)arr->array)[i];
		if (a == old_value) replace_array_index(arr, i, &new_value);
	}
}
// --------------------------------------------------------------------------------

void replace_char_array_values(Array *arr, char old_value, char new_value) {
	for (size_t i = 0; i < arr->active_length; i++) {
		char a = ((char *)arr->array)[i];
		if (a == old_value) replace_array_index(arr, i, &new_value);
	}
}
// --------------------------------------------------------------------------------

void replace_short_array_values(Array *arr, short old_value, short new_value) {
	for (size_t i = 0; i < arr->active_length; i++) {
		short a = ((short *)arr->array)[i];
		if (a == old_value) replace_array_index(arr, i, &new_value);
	}
}
// --------------------------------------------------------------------------------

void replace_long_array_values(Array *arr, long old_value, long new_value) {
	for (size_t i = 0; i < arr->active_length; i++) {
		long a = ((long *)arr->array)[i];
		if (a == old_value) replace_array_index(arr, i, &new_value);
	}
}
// --------------------------------------------------------------------------------

void replace_longlong_array_values(Array *arr, long long old_value, long long new_value) {
	for (size_t i = 0; i < arr->active_length; i++) {
		long long a = ((long long *)arr->array)[i];
		if (a == old_value) replace_array_index(arr, i, &new_value);
	}
}
// ================================================================================
// ================================================================================
// eof
