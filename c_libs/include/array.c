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

int pop_array(void *array, size_t index, size_t size, size_t num_bytes) {
	if (index >= size) {
		printf("WARNING: index greater than array size\n");
		return 0;
	}
	unsigned char *dst = (unsigned char*)array + (index * num_bytes);
	memmove(dst, dst + num_bytes, num_bytes * (size - index - 1));
	return 1;
}
// --------------------------------------------------------------------------------

void push_array(void *parent_array, size_t par_len, void *child_array,
		        size_t child_len, size_t num_bytes) {
	memcpy(((char *)parent_array) + (par_len * num_bytes),
			child_array,
            child_len * num_bytes);
}
// --------------------------------------------------------------------------------

void insert_array(void *parent_array, size_t par_len, size_t index, void *child_array,
		          size_t child_len, size_t num_bytes) {
	memmove(((char *)parent_array) + (index + child_len) * num_bytes,
			((char *)parent_array) + (index * num_bytes),
			(par_len - index) * num_bytes);
	memcpy(((char *)parent_array) + (index * num_bytes),
			child_array,
			child_len * num_bytes);
}
// --------------------------------------------------------------------------------

/* Vector find_int_array_indices(int *array, int value, int len) { */
/* 	int number = 0; */
/* 	int input; */
/* 	for (int i = 0; i < len; i++) { */
/* 		if (value == array[i]) number++; */
/* 	} */

/* 	dat_type dtype = INT; */
/* 	Vector indice_arr = init_vector(dtype, number); */
/* 	int j = 0; */
/* 	for (int i = 0; i < len; i++) { */
/* 		input = i; */
/* 		if(value == array[i]) append_vector(&indice_arr, &input, 1); */
/* 	} */
/* 	return indice_arr; */
/* } */
// --------------------------------------------------------------------------------

/* Vector find_float_array_indices(float *array, float value, int len) { */
/* 	int number = 0; */
/* 	int input; */
/* 	for (int i = 0; i < len; i++) { */
/* 		if (value == array[i]) number++; */
/* 	} */

/* 	dat_type dtype = INT; */
/* 	Vector indice_arr = init_vector(dtype, number); */
/* 	int j = 0; */
/* 	for (int i = 0; i < len; i++) { */
/* 		input = i; */
/* 		if(value == array[i]) append_vector(&indice_arr, &input, 1); */
/* 	} */
/* 	return indice_arr; */
/* } */
// --------------------------------------------------------------------------------

/* Vector find_double_array_indices(double *array, double value, int len) { */
/* 	int number = 0; */
/* 	int input; */
/* 	for (int i = 0; i < len; i++) { */
/* 		if (value == array[i]) number++; */
/* 	} */

/* 	dat_type dtype = INT; */
/* 	Vector indice_arr = init_vector(dtype, number); */
/* 	int j = 0; */
/* 	for (int i = 0; i < len; i++) { */
/* 		input = i; */
/* 		if(value == array[i]) append_vector(&indice_arr, &input, 1); */
/* 	} */
/* 	return indice_arr; */
/* } */
// --------------------------------------------------------------------------------

/* Vector find_char_array_indices(char *array, char value, int len) { */
/* 	int number = 0; */
/* 	int input; */
/* 	for (int i = 0; i < len; i++) { */
/* 		if (value == array[i]) number++; */
/* 	} */

/* 	dat_type dtype = INT; */
/* 	Vector indice_arr = init_vector(dtype, number); */
/* 	int j = 0; */
/* 	for (int i = 0; i < len; i++) { */
/* 		input = i; */
/* 		if(value == array[i]) append_vector(&indice_arr, &input, 1); */
/* 	} */
/* 	return indice_arr; */
/* } */
// ================================================================================
// ================================================================================
// eof
