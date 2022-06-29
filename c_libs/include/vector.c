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
Vector init_vector(size_t num_bytes, size_t num_indices) {
	void *pointer;
	pointer = malloc(num_indices * num_bytes);
	Vector vec;
	if (pointer == NULL) {
		printf("Unable to allocate memory, exiting.\n");
		free(vec.vector);
		exit(0);
	}
	else {
		vec.dat_type = NONE;
		vec.num_bytes = num_bytes;
		vec.active_length = 0;
		vec.allocated_length = num_indices;
		vec.vector = pointer;
	}
	return vec;
}
// --------------------------------------------------------------------------------

Vector init_type_vector(dtype dat_type, size_t num_indices) {
	int num_bytes;
	switch(dat_type) {
		case FLOAT:
			num_bytes = sizeof(float);
			break;
		case INT:
			num_bytes = sizeof(int);
			break;
		case DOUBLE:
			num_bytes = sizeof(double);
			break;
		case CHAR:
			num_bytes = sizeof(char);
			break;
		case SHORTINT:
			num_bytes = sizeof(short);
			break;
		case LONG:
			num_bytes = sizeof(long);
			break;
		case LONGLONG:
			num_bytes = sizeof(long long);
			break;
		default:
			printf("Data type not correctly entered, instantiating int array!\n");
			num_bytes = sizeof(int);
			dat_type = INT;
	}
	void *pointer;
	pointer = malloc(num_indices * num_bytes);
	Vector vec;
	if (pointer == NULL) {
		printf("Unable to allocate memory, exiting.\n");
		free(vec.vector);
		exit(0);
	}
	else {
		vec.dat_type = dat_type;
		vec.num_bytes = num_bytes;
		vec.active_length = 0;
		vec.allocated_length = num_indices;
		vec.vector = pointer;
	}
	return vec;
}
// --------------------------------------------------------------------------------

int push_vector(Vector *vec, void *elements, size_t num_indices) {
	// Allocate more heap memory if necessary
	if (vec->active_length + num_indices > vec->allocated_length) {
		size_t size = (vec->active_length + num_indices) * 2;
		void *pointer = realloc(vec->vector, size * vec->num_bytes);
		// If memory is full return to main function
		if (pointer == NULL) {
			printf("Unable to allocate memory, exiting.\n");
			return 0;
		}
		// Allocate memory to variable and increment array size
		vec->vector = pointer;
		vec->allocated_length = size;
	}
	memcpy((char *)vec->vector + vec->active_length * vec->num_bytes, elements,
			num_indices * vec->num_bytes);
	vec->active_length += num_indices;
	return 1;
}
// --------------------------------------------------------------------------------

void free_vector(Vector *vec) {
	// Free all memory in the heap array
	free(vec->vector);
	// Reset all vairables in the struct
	vec->vector = NULL;
	vec->active_length = 0;
	vec->allocated_length = 0;
	vec->num_bytes = 0;
}
// --------------------------------------------------------------------------------

int insert_vector(Vector *vec, void *elements, size_t num_indices, size_t indice) {
	// Check data for size
	if (indice > vec->active_length) {
		printf("WARNING: The selected indice is larger than the active array length\n");
		return 0;
	}
	// Re-allocate memory if necessary
	if (vec->active_length + num_indices > vec->allocated_length) {
		size_t size = (vec->active_length + num_indices) * 2;
		void *pointer = realloc(vec->vector, size * vec->num_bytes);
		// If memory is full return operations
		if (pointer == NULL) {
			printf("Unable to allocate memory, exiting\n");
			return 0;
		}
		// allocate memory to variables and increment array length
		vec->vector = pointer;
		vec->allocated_length = size;
	}
	size_t mem = vec->active_length - indice;
	// - Move vector to the left num_indices to the right to make room
	//   for elements
	memmove(
		((char *)vec->vector) + (num_indices + indice) * vec->num_bytes,
		 ((char *)vec->vector) + indice * vec->num_bytes,
		 mem * vec->num_bytes);

	// Copy elements to the correct vecto indices
	memcpy(
		((char *)vec->vector) + indice * vec->num_bytes,
		 elements,
		 num_indices * vec->num_bytes);

	// increment number of elements
	vec->active_length += num_indices;
	return 1;
}
// --------------------------------------------------------------------------------

int pop_vector(Vector *vec, size_t index) {
	if (index >= vec->active_length) {
		printf("Index %ld out of the active bounds for pop_array\n", index);
		return 0;
	}
	unsigned char *dst = (unsigned char *)vec->vector + index * vec->num_bytes;
	memmove(dst, dst + vec->num_bytes, vec->num_bytes * (vec->allocated_length - index - 1));
	vec->active_length -= 1;
	return 1;
}
// --------------------------------------------------------------------------------

Vector find_vector_indices(Vector *vec, void *value) {
	int compare;
	char *val = (char *)value;
	char *dst;
	Vector indices = init_type_vector(INT, 10);
	// Instantiate vector container with an estimated size of 10
	for (size_t i = 0; i < vec->active_length; i++) {
		dst = (char *) vec->vector + (i * vec->num_bytes);
		compare = memcmp(dst, val, vec->num_bytes);
		if (compare == 0) push_vector(&indices, &i, 1);
	}
	return indices;
}
// --------------------------------------------------------------------------------

void delete_vector_values(Vector *vec, void *value) {
	int compare;
	char *val = (char *)value;
	char *dst;
	// Instantiate vector container with an estimated size of 10
	for (size_t i = 0; ; i++) {
		if (i >= vec->active_length) break;
		dst = (char *) vec->vector + (i * vec->num_bytes);
		compare = memcmp(dst, val, vec->num_bytes);
		if (compare == 0) {
			pop_vector(vec, i);
			i -= 1;
		}
	}
}
// --------------------------------------------------------------------------------

int replace_vector_index(Vector *vec, size_t index, void *replacement_value) {
	if (index > vec->active_length || index < 0) {
		printf("Index out of bounds\n");
		return 0;
	}
	memmove((char *)vec->vector + (index * vec->num_bytes), replacement_value,
			vec->num_bytes);
	return 1;
}
// --------------------------------------------------------------------------------

void replace_vector_values(Vector *vec, void *old_value, void *new_value) {
	int compare;
	// Instantiate vector container with an estimated size of 10
	for (size_t i = 0; i < vec->active_length; i++) {
		compare = memcmp(vec->vector + (i * vec->num_bytes), old_value, vec->num_bytes);
		if (compare == 0) {
			memmove((char *)vec->vector + (i * vec->num_bytes), new_value, vec->num_bytes);
		}
	}
}
// --------------------------------------------------------------------------------

void delete_vector_duplicates(Vector *vec) {
	int compare;
	for (size_t i = 0; i < vec->active_length; i++) {
		for (size_t j = i + 1; j < vec->active_length; j++) {
			compare = memcmp(vec->vector + (i * vec->num_bytes),
							 vec->vector + (j * vec->num_bytes),
							 vec->num_bytes);
			if (compare == 0) {
				pop_vector(vec, j);
				j -= 1;
			}
		}
	}
}
// --------------------------------------------------------------------------------

void unique_vector_values(Vector *vec) {
	int compare;
	int flag = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		for (size_t j = i + 1; j < vec->active_length; j++) {
			compare = memcmp(vec->vector + (i * vec->num_bytes),
							 vec->vector + (j * vec->num_bytes),
							 vec->num_bytes);
			if (compare == 0) {
				pop_vector(vec, j);
				flag = 1;
				j -= 1;
			}
		}
		if (flag == 1) {
			pop_vector(vec, i);
			flag = 0;
			i -= 1;
		}
	}
}
// ================================================================================
// ================================================================================
// eof
