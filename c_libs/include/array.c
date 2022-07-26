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

void replace_array_values(Array *arr, void *old_value, void *new_value) {
	int compare;
	// Instantiate vector container with an estimated size of 10
	for (size_t i = 0; i < arr->active_length; i++) {
		compare = memcmp(arr->array + (i * arr->num_bytes), old_value, arr->num_bytes);
		if (compare == 0) {
			memmove((char *)arr->array + (i * arr->num_bytes), new_value, arr->num_bytes);
		}
	}
}
// --------------------------------------------------------------------------------

void delete_array_values(Array *arr, void *value) {
	int compare;
	char *val = (char *)value;
	char *dst;
	// Instantiate vector container with an estimated size of 10
	for (size_t i = 0; ; i++) {
		if (i >= arr->active_length) break;
		dst = (char *) arr->array + (i * arr->num_bytes);
		compare = memcmp(dst, val, arr->num_bytes);
		if (compare == 0) {
			pop_array(arr, i);
			i -= 1;
		}
	}
}
// --------------------------------------------------------------------------------

void delete_array_duplicates(Array *arr) {
	int compare;
	for (size_t i = 0; i < arr->active_length; i++) {
		for (size_t j = i + 1; j < arr->active_length; j++) {
			compare = memcmp(arr->array + (i * arr->num_bytes),
							 arr->array + (j * arr->num_bytes),
							 arr->num_bytes);
			if (compare == 0) {
				pop_array(arr, j);
				j -= 1;
			}
		}
	}
}
// --------------------------------------------------------------------------------

void unique_array_values(Array *arr) {
	int compare;
	int flag = 0;
	for (size_t i = 0; i < arr->active_length; i++) {
		for (size_t j = i + 1; j < arr->active_length; j++) {
			compare = memcmp(arr->array + (i * arr->num_bytes),
							 arr->array + (j * arr->num_bytes),
							 arr->num_bytes);
			if (compare == 0) {
				pop_array(arr, j);
				flag = 1;
				j -= 1;
			}
		}
		if (flag == 1) {
			pop_array(arr, i);
			flag = 0;
			i -= 1;
		}
	}
}
// --------------------------------------------------------------------------------

int sort_int_array(Array *arr, order method) {
	int i, j, min_idx;
    int var_one, var_two, temp;
	if(method != FORWARD && method != REVERSE) {
		printf("method must be FORWARD or REVERSE for ascending or descending respectively!\n");
		return 0;
	}
	for (i = 0; i < arr->active_length - 1; i++) {
		min_idx = i;
		temp = ((int *)arr->array)[min_idx];
		for (j = i + 1; j < arr->active_length; j++) {
			var_one = ((int *)arr->array)[min_idx];
			var_two = ((int *)arr->array)[j];
			if (var_two < var_one && method == FORWARD) {
				min_idx = j;
				temp = ((int *)arr->array)[min_idx];
			}
			else if (var_two > var_one && method == REVERSE) {
				min_idx = j;
				temp = ((int *)arr->array)[min_idx];
			}
		}
		* (int *) ((char *) arr->array + min_idx * arr->num_bytes) = ((int *)arr->array)[i];
		* (int *) ((char *) arr->array + i * arr->num_bytes) = temp;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int sort_float_array(Array *arr, order method) {
	int i, j, min_idx;
    float var_one, var_two, temp;
	if(method != FORWARD && method != REVERSE) {
		printf("method must be FORWARD or REVERSE for ascending or descending respectively!\n");
		return 0;
	}
	for (i = 0; i < arr->active_length - 1; i++) {
		min_idx = i;
		temp = ((float *)arr->array)[min_idx];
		for (j = i + 1; j < arr->active_length; j++) {
			var_one = ((float *)arr->array)[min_idx];
			var_two = ((float *)arr->array)[j];
			if (var_two < var_one && method == FORWARD) {
				min_idx = j;
				temp = ((float *)arr->array)[min_idx];
			}
			else if (var_two > var_one && method == REVERSE) {
				min_idx = j;
				temp = ((float *)arr->array)[min_idx];
			}
		}
		* (float *) ((char *) arr->array + min_idx * arr->num_bytes) = ((float *)arr->array)[i];
		* (float *) ((char *) arr->array + i * arr->num_bytes) = temp;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int sort_double_array(Array *arr, order method) {
	int i, j, min_idx;
    double var_one, var_two, temp;
	if(method != FORWARD && method != REVERSE) {
		printf("method must be FORWARD or REVERSE for ascending or descending respectively!\n");
		return 0;
	}
	for (i = 0; i < arr->active_length - 1; i++) {
		min_idx = i;
		temp = ((double *)arr->array)[min_idx];
		for (j = i + 1; j < arr->active_length; j++) {
			var_one = ((double *)arr->array)[min_idx];
			var_two = ((double *)arr->array)[j];
			if (var_two < var_one && method == FORWARD) {
				min_idx = j;
				temp = ((double *)arr->array)[min_idx];
			}
			else if (var_two > var_one && method == REVERSE) {
				min_idx = j;
				temp = ((double *)arr->array)[min_idx];
			}
		}
		* (double *) ((char *) arr->array + min_idx * arr->num_bytes) = ((double *)arr->array)[i];
		* (double *) ((char *) arr->array + i * arr->num_bytes) = temp;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int sort_char_array(Array *arr, order method) {
	int i, j, min_idx;
    char var_one, var_two, temp;
	if(method != FORWARD && method != REVERSE) {
		printf("method must be FORWARD or REVERSE for ascending or descending respectively!\n");
		return 0;
	}
	for (i = 0; i < arr->active_length - 1; i++) {
		min_idx = i;
		temp = ((char *)arr->array)[min_idx];
		for (j = i + 1; j < arr->active_length; j++) {
			var_one = ((char *)arr->array)[min_idx];
			var_two = ((char *)arr->array)[j];
			if (var_two < var_one && method == FORWARD) {
				min_idx = j;
				temp = ((char *)arr->array)[min_idx];
			}
			else if (var_two > var_one && method == REVERSE) {
				min_idx = j;
				temp = ((char *)arr->array)[min_idx];
			}
		}
		* (char *) ((char *) arr->array + min_idx * arr->num_bytes) = ((char *)arr->array)[i];
		* (char *) ((char *) arr->array + i * arr->num_bytes) = temp;
	}
	// The NULL must be moved to the end if it exists in original array
	char term = '\0';
	size_t t_length = arr->active_length;
	delete_array_values(arr, &term);
    if (arr->active_length != t_length)
		push_array(arr, &term, 1);
	return 1;
}
// --------------------------------------------------------------------------------

int sort_short_array(Array *arr, order method) {
	int i, j, min_idx;
    short var_one, var_two, temp;
	if(method != FORWARD && method != REVERSE) {
		printf("method must be FORWARD or REVERSE for ascending or descending respectively!\n");
		return 0;
	}
	for (i = 0; i < arr->active_length - 1; i++) {
		min_idx = i;
		temp = ((short *)arr->array)[min_idx];
		for (j = i + 1; j < arr->active_length; j++) {
			var_one = ((short *)arr->array)[min_idx];
			var_two = ((short *)arr->array)[j];
			if (var_two < var_one && method == FORWARD) {
				min_idx = j;
				temp = ((short *)arr->array)[min_idx];
			}
			else if (var_two > var_one && method == REVERSE) {
				min_idx = j;
				temp = ((short *)arr->array)[min_idx];
			}
		}
		* (short *) ((char *) arr->array + min_idx * arr->num_bytes) = ((short *)arr->array)[i];
		* (short *) ((char *) arr->array + i * arr->num_bytes) = temp;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int sort_long_array(Array *arr, order method) {
	int i, j, min_idx;
    long var_one, var_two, temp;
	if(method != FORWARD && method != REVERSE) {
		printf("method must be FORWARD or REVERSE for ascending or descending respectively!\n");
		return 0;
	}
	for (i = 0; i < arr->active_length - 1; i++) {
		min_idx = i;
		temp = ((long *)arr->array)[min_idx];
		for (j = i + 1; j < arr->active_length; j++) {
			var_one = ((long *)arr->array)[min_idx];
			var_two = ((long *)arr->array)[j];
			if (var_two < var_one && method == FORWARD) {
				min_idx = j;
				temp = ((long *)arr->array)[min_idx];
			}
			else if (var_two > var_one && method == REVERSE) {
				min_idx = j;
				temp = ((long *)arr->array)[min_idx];
			}
		}
		* (long *) ((char *) arr->array + min_idx * arr->num_bytes) = ((long *)arr->array)[i];
		* (long *) ((char *) arr->array + i * arr->num_bytes) = temp;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int sort_longlong_array(Array *arr, order method) {
	int i, j, min_idx;
    long var_one, var_two, temp;
	if(method != FORWARD && method != REVERSE) {
		printf("method must be FORWARD or REVERSE for ascending or descending respectively!\n");
		return 0;
	}
	for (i = 0; i < arr->active_length - 1; i++) {
		min_idx = i;
		temp = ((long long *)arr->array)[min_idx];
		for (j = i + 1; j < arr->active_length; j++) {
			var_one = ((long long *)arr->array)[min_idx];
			var_two = ((long long *)arr->array)[j];
			if (var_two < var_one && method == FORWARD) {
				min_idx = j;
				temp = ((long long *)arr->array)[min_idx];
			}
			else if (var_two > var_one && method == REVERSE) {
				min_idx = j;
				temp = ((long long *)arr->array)[min_idx];
			}
		}
		* (long long *) ((char *) arr->array + min_idx * arr->num_bytes) = ((long long *)arr->array)[i];
		* (long long *) ((char *) arr->array + i * arr->num_bytes) = temp;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int sort_array(Array *arr, order method) {

	if (arr->dat_type == FLOAT) sort_float_array(arr, method);
	else if (arr->dat_type == DOUBLE) sort_double_array(arr, method);
	else if (arr->dat_type == CHAR) sort_char_array(arr, method);
	else if (arr->dat_type == INT) sort_int_array(arr, method);
	else if (arr->dat_type == SHORTINT) sort_short_array(arr, method);
	else if (arr->dat_type == LONG) sort_long_array(arr, method);
	else if (arr->dat_type == LONGLONG) sort_longlong_array(arr, method);
	else {
		printf("WARNING: Cannot sort vector type\n");
		return 0;
	}
	return 1;
}
// --------------------------------------------------------------------------------

void reverse_int_array(Array *arr) {
	int value;
	int num = 0;
	for (size_t i = arr->active_length - 1; i > 0; i--) {
		value = ((int *)arr->array)[arr->active_length - 1];
		pop_array(arr, arr->active_length - 1);
		insert_array(arr, &value, 1, num);
		num++;
	}
}
// --------------------------------------------------------------------------------

void reverse_float_array(Array *arr) {
	float value;
	int num = 0;
	for (size_t i = arr->active_length - 1; i > 0; i--) {
		value = ((float *)arr->array)[arr->active_length - 1];
		pop_array(arr, arr->active_length - 1);
		insert_array(arr, &value, 1, num);
		num++;
	}
}
// --------------------------------------------------------------------------------

void reverse_double_array(Array *arr) {
	double value;
	int num = 0;
	for (size_t i = arr->active_length - 1; i > 0; i--) {
		value = ((double *)arr->array)[arr->active_length - 1];
		pop_array(arr, arr->active_length - 1);
		insert_array(arr, &value, 1, num);
		num++;
	}
}
// --------------------------------------------------------------------------------

void reverse_char_array(Array *arr) {
	char value;
	int num = 0;
	for (size_t i = arr->active_length - 1; i > 0; i--) {
		value = ((char *)arr->array)[arr->active_length - 1];
		pop_array(arr, arr->active_length - 1);
		insert_array(arr, &value, 1, num);
		num++;
	}
	char compare = ((char *)arr->array)[0];
	char term = '\0';
	if (compare == term) {
		pop_array(arr, 0);
		push_array(arr, &term, 1);
	}
}
// --------------------------------------------------------------------------------

void reverse_short_array(Array *arr) {
	short value;
	int num = 0;
	for (size_t i = arr->active_length - 1; i > 0; i--) {
		value = ((short *)arr->array)[arr->active_length - 1];
		pop_array(arr, arr->active_length - 1);
		insert_array(arr, &value, 1, num);
		num++;
	}
}
// --------------------------------------------------------------------------------

void reverse_long_array(Array *arr) {
	long value;
	int num = 0;
	for (size_t i = arr->active_length - 1; i > 0; i--) {
		value = ((long *)arr->array)[arr->active_length - 1];
		pop_array(arr, arr->active_length - 1);
		insert_array(arr, &value, 1, num);
		num++;
	}
}
// --------------------------------------------------------------------------------

void reverse_longlong_array(Array *arr) {
	long long value;
	int num = 0;
	for (size_t i = arr->active_length - 1; i > 0; i--) {
		value = ((long long *)arr->array)[arr->active_length - 1];
		pop_array(arr, arr->active_length - 1);
		insert_array(arr, &value, 1, num);
		num++;
	}
}
// --------------------------------------------------------------------------------

int reverse_array(Array *arr) {
	if (arr->dat_type == INT) reverse_int_array(arr);
	else if (arr->dat_type == FLOAT) reverse_float_array(arr);
	else if (arr->dat_type == DOUBLE) reverse_double_array(arr);
	else if (arr->dat_type == CHAR) reverse_char_array(arr);
	else if (arr->dat_type == SHORTINT) reverse_short_array(arr);
	else if (arr->dat_type == LONG) reverse_long_array(arr);
	else if (arr->dat_type == LONGLONG) reverse_longlong_array(arr);
	else {
		printf("Incorrect data type, cannot reverse vector\n");
		return 0;
	}
	return 1;
}
// --------------------------------------------------------------------------------

float median_int_array(Array *arr) {
	if (arr->active_length % 2 == 0) {
		size_t indice1, indice2;
		indice1 = (arr->active_length / 2) -1;
		indice2 = ((arr->active_length + 2) - 1) / 2;
		int value_one = ((int *)arr->array)[indice1];
		int value_two = ((int *)arr->array)[indice2];
		return ((float)value_one + (float)value_two) / 2.0f;
	}
	else {
		size_t indice = ((arr->active_length + 1) / 2) - 1;
		int value = ((int *)arr->array)[indice];
		return (float)value;
	}
}
// --------------------------------------------------------------------------------

float median_float_array(Array *arr) {
	if (arr->active_length % 2 == 0) {
		size_t indice1, indice2;
		indice1 = (arr->active_length / 2) -1;
		indice2 = ((arr->active_length + 2) - 1) / 2;
		float value_one = ((float *)arr->array)[indice1];
		float value_two = ((float *)arr->array)[indice2];
		return ((float)value_one + (float)value_two) / 2.0f;
	}
	else {
		size_t indice = ((arr->active_length + 1) / 2) - 1;
		float value = ((float *)arr->array)[indice];
		return (float)value;
	}
}
// --------------------------------------------------------------------------------

double median_double_array(Array *arr) {
	if (arr->active_length % 2 == 0) {
		size_t indice1, indice2;
		indice1 = (arr->active_length / 2) -1;
		indice2 = ((arr->active_length + 2) - 1) / 2;
		double value_one = ((double *)arr->array)[indice1];
		double value_two = ((double *)arr->array)[indice2];
		return ((double)value_one + (double)value_two) / 2.0;
	}
	else {
		size_t indice = ((arr->active_length + 1) / 2) - 1;
		double value = ((double *)arr->array)[indice];
		return (double)value;
	}
}
// --------------------------------------------------------------------------------

double median_long_array(Array *arr) {
	if (arr->active_length % 2 == 0) {
		size_t indice1, indice2;
		indice1 = (arr->active_length / 2) -1;
		indice2 = ((arr->active_length + 2) - 1) / 2;
		long value_one = ((long *)arr->array)[indice1];
		long value_two = ((long *)arr->array)[indice2];
		return ((double)value_one + (double)value_two) / 2.0;
	}
	else {
		size_t indice = ((arr->active_length + 1) / 2) - 1;
		long value = ((long *)arr->array)[indice];
		return (double)value;
	}
}
// --------------------------------------------------------------------------------

int sum_int_array(Array *arr) {
	int sum = 0;
	for (size_t i = 0; i < arr->active_length; i++) {
		sum += ((int *)arr->array)[i];
	}
	return sum;
}
// --------------------------------------------------------------------------------

float sum_float_array(Array *arr) {
	int sum = 0;
	for (size_t i = 0; i < arr->active_length; i++) {
		sum += ((float *)arr->array)[i];
	}
	return sum;
}
// --------------------------------------------------------------------------------

double sum_double_array(Array *arr) {
	int sum = 0;
	for (size_t i = 0; i < arr->active_length; i++) {
		sum += ((double *)arr->array)[i];
	}
	return sum;
}
// --------------------------------------------------------------------------------

short sum_short_array(Array *arr) {
	int sum = 0;
	for (size_t i = 0; i < arr->active_length; i++) {
		sum += ((short *)arr->array)[i];
	}
	return sum;
}
// --------------------------------------------------------------------------------

long sum_long_array(Array *arr) {
	int sum = 0;
	for (size_t i = 0; i < arr->active_length; i++) {
		sum += ((long *)arr->array)[i];
	}
	return sum;
}
// --------------------------------------------------------------------------------

long long sum_longlong_array(Array *arr) {
	int sum = 0;
	for (size_t i = 0; i < arr->active_length; i++) {
		sum += ((long long *)arr->array)[i];
	}
	return sum;
}
// --------------------------------------------------------------------------------

float average_int_array(Array *arr) {
	int sum = sum_int_array(arr);
	float num = (float)arr->active_length;
	return (float)sum / num;
}
// --------------------------------------------------------------------------------

float average_float_array(Array *arr) {
	float sum = sum_float_array(arr);
	float num = (float)arr->active_length;
	return (float)sum / num;
}
// --------------------------------------------------------------------------------

double average_double_array(Array *arr) {
	double sum = sum_double_array(arr);
	double num = (double)arr->active_length;
	return (double)sum / num;
}
// --------------------------------------------------------------------------------

double average_long_array(Array *arr) {
	long sum = sum_long_array(arr);
	double num = (double)arr->active_length;
	return (double)sum / num;
}
// ================================================================================
// ================================================================================
// eof
