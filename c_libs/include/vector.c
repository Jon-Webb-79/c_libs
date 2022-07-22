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
		free(pointer);
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
		printf("Unable to allocate memory for init_type_vector, exiting.\n");
		free(vec.vector);
		return vec;
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

	// Ensure char vector has no null padding
	if (vec->dat_type == CHAR) {
		char value = ((char *)vec->vector)[vec->active_length - 1];
		if (value == '\0') pop_vector(vec, vec->active_length - 1);
	}
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
	// Do not allow function to read in a null padding
	if (vec->dat_type == CHAR && num_indices > 1) num_indices -= 1;
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
// --------------------------------------------------------------------------------

int sort_int_vector(Vector *vec, order method) {
	int i, j, min_idx;
    int var_one, var_two, temp;
	if(method < 0 || method > 1) {
		printf("method must be 0 or 1 for ascending or descending respectively!\n");
		return 0;
	}
	for (i = 0; i < vec->active_length - 1; i++) {
		min_idx = i;
		temp = ((int *)vec->vector)[min_idx];
		for (j = i + 1; j < vec->active_length; j++) {
			var_one = ((int *)vec->vector)[min_idx];
			var_two = ((int *)vec->vector)[j];
			if (var_two < var_one && method == FORWARD) {
				min_idx = j;
				temp = ((int *)vec->vector)[min_idx];
			}
			else if (var_two > var_one && method == REVERSE) {
				min_idx = j;
				temp = ((int *)vec->vector)[min_idx];
			}
		}
		* (int *) ((char *) vec->vector + min_idx * vec->num_bytes) = ((int *)vec->vector)[i];
		* (int *) ((char *) vec->vector + i * vec->num_bytes) = temp;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int sort_float_vector(Vector *vec, order method) {
	int i, j, min_idx;
    float var_one, var_two, temp;
	if(method < 0 || method > 1) {
		printf("method must be 0 or 1 for ascending or descending respectively!\n");
		return 0;
	}
	for (i = 0; i < vec->active_length - 1; i++) {
		min_idx = i;
		temp = ((float *)vec->vector)[min_idx];
		for (j = i + 1; j < vec->active_length; j++) {
			var_one = ((float *)vec->vector)[min_idx];
			var_two = ((float *)vec->vector)[j];
			if (var_two < var_one && method == FORWARD) {
				min_idx = j;
				temp = ((float *)vec->vector)[min_idx];
			}
			else if (var_two > var_one && method == REVERSE) {
				min_idx = j;
				temp = ((float *)vec->vector)[min_idx];
			}
		}
		* (float *) ((char *) vec->vector + min_idx * vec->num_bytes) = ((float *)vec->vector)[i];
		* (float *) ((char *) vec->vector + i * vec->num_bytes) = temp;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int sort_double_vector(Vector *vec, order method) {
	int i, j, min_idx;
    double var_one, var_two, temp;
	if(method < 0 || method > 1) {
		printf("method must be 0 or 1 for ascending or descending respectively!\n");
		return 0;
	}
	for (i = 0; i < vec->active_length - 1; i++) {
		min_idx = i;
		temp = ((double *)vec->vector)[min_idx];
		for (j = i + 1; j < vec->active_length; j++) {
			var_one = ((double *)vec->vector)[min_idx];
			var_two = ((double *)vec->vector)[j];
			if (var_two < var_one && method == FORWARD) {
				min_idx = j;
				temp = ((double *)vec->vector)[min_idx];
			}
			else if (var_two > var_one && method == REVERSE) {
				min_idx = j;
				temp = ((double *)vec->vector)[min_idx];
			}
		}
		* (double *) ((char *) vec->vector + min_idx * vec->num_bytes) = ((double *)vec->vector)[i];
		* (double *) ((char *) vec->vector + i * vec->num_bytes) = temp;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int sort_char_vector(Vector *vec, order method) {
	int i, j, min_idx;
    char var_one, var_two, temp;
	if(method < 0 || method > 1) {
		printf("method must be 0 or 1 for ascending or descending respectively!\n");
		return 0;
	}
	for (i = 0; i < vec->active_length - 1; i++) {
		min_idx = i;
		temp = ((char *)vec->vector)[min_idx];
		for (j = i + 1; j < vec->active_length; j++) {
			var_one = ((char *)vec->vector)[min_idx];
			var_two = ((char *)vec->vector)[j];
			if(strcmp(&var_two, &var_one) < 0 && method == FORWARD) {
				min_idx = j;
				temp = ((char *)vec->vector)[min_idx];
			}
			else if (strcmp(&var_two, &var_one) > 0 && method == REVERSE) {
				min_idx = j;
				temp = ((char *)vec->vector)[min_idx];
			}
		}
		* (char *) ((char *) vec->vector + min_idx * vec->num_bytes) = ((char *)vec->vector)[i];
		* (char *) ((char *) vec->vector + i * vec->num_bytes) = temp;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int sort_short_vector(Vector *vec, order method) {
	int i, j, min_idx;
    short var_one, var_two, temp;
	if(method < 0 || method > 1) {
		printf("method must be 0 or 1 for ascending or descending respectively!\n");
		return 0;
	}
	for (i = 0; i < vec->active_length - 1; i++) {
		min_idx = i;
		temp = ((short *)vec->vector)[min_idx];
		for (j = i + 1; j < vec->active_length; j++) {
			var_one = ((short *)vec->vector)[min_idx];
			var_two = ((short *)vec->vector)[j];
			if (var_two < var_one && method == FORWARD) {
				min_idx = j;
				temp = ((short *)vec->vector)[min_idx];
			}
			else if (var_two > var_one && method == REVERSE) {
				min_idx = j;
				temp = ((short *)vec->vector)[min_idx];
			}
		}
		* (short *) ((char *) vec->vector + min_idx * vec->num_bytes) = ((short *)vec->vector)[i];
		* (short *) ((char *) vec->vector + i * vec->num_bytes) = temp;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int sort_long_vector(Vector *vec, order method) {
	int i, j, min_idx;
    long var_one, var_two, temp;
	if(method < 0 || method > 1) {
		printf("method must be 0 or 1 for ascending or descending respectively!\n");
		return 0;
	}
	for (i = 0; i < vec->active_length - 1; i++) {
		min_idx = i;
		temp = ((long *)vec->vector)[min_idx];
		for (j = i + 1; j < vec->active_length; j++) {
			var_one = ((long *)vec->vector)[min_idx];
			var_two = ((long *)vec->vector)[j];
			if (var_two < var_one && method == FORWARD) {
				min_idx = j;
				temp = ((long *)vec->vector)[min_idx];
			}
			else if (var_two > var_one && method == REVERSE) {
				min_idx = j;
				temp = ((long *)vec->vector)[min_idx];
			}
		}
		* (long *) ((char *) vec->vector + min_idx * vec->num_bytes) = ((long *)vec->vector)[i];
		* (long *) ((char *) vec->vector + i * vec->num_bytes) = temp;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int sort_longlong_vector(Vector *vec, order method) {
	int i, j, min_idx;
    long long var_one, var_two, temp;
	if(method < 0 || method > 1) {
		printf("method must be 0 or 1 for ascending or descending respectively!\n");
		return 0;
	}
	for (i = 0; i < vec->active_length - 1; i++) {
		min_idx = i;
		temp = ((long long *)vec->vector)[min_idx];
		for (j = i + 1; j < vec->active_length; j++) {
			var_one = ((long long *)vec->vector)[min_idx];
			var_two = ((long long *)vec->vector)[j];
			if (var_two < var_one && method == FORWARD) {
				min_idx = j;
				temp = ((long long *)vec->vector)[min_idx];
			}
			else if (var_two > var_one && method == REVERSE) {
				min_idx = j;
				temp = ((long long *)vec->vector)[min_idx];
			}
		}
		* (long long *) ((char *) vec->vector + min_idx * vec->num_bytes) = ((long long *)vec->vector)[i];
		* (long long *) ((char *) vec->vector + i * vec->num_bytes) = temp;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int sort_vector(Vector *vec, order method) {

	if (vec->dat_type == FLOAT) sort_float_vector(vec, method);
	else if (vec->dat_type == DOUBLE) sort_double_vector(vec, method);
	else if (vec->dat_type == CHAR) sort_char_vector(vec, method);
	else if (vec->dat_type == INT) sort_int_vector(vec, method);
	else if (vec->dat_type == SHORTINT) sort_short_vector(vec, method);
	else if (vec->dat_type == LONG) sort_long_vector(vec, method);
	else if (vec->dat_type == LONGLONG) sort_longlong_vector(vec, method);
	else {
		printf("WARNING: Cannot sort vector type\n");
		return 0;
	}
	return 1;
}
// --------------------------------------------------------------------------------

void reverse_int_vector(Vector *vec) {
	int value;
	int num = 0;
	for (size_t i = vec->active_length - 1; i > 0; i--) {
		value = ((int *)vec->vector)[vec->active_length - 1];
		insert_vector(vec, &value, 1, num);
		num++;
		pop_vector(vec, vec->active_length - 1);
	}
}
// --------------------------------------------------------------------------------

void reverse_float_vector(Vector *vec) {
	float value;
	int num = 0;
	for (size_t i = vec->active_length - 1; i > 0; i--) {
		value = ((float *)vec->vector)[vec->active_length - 1];
		insert_vector(vec, &value, 1, num);
		num++;
		pop_vector(vec, vec->active_length - 1);
	}
}
// --------------------------------------------------------------------------------

void reverse_double_vector(Vector *vec) {
	double value;
	int num = 0;
	for (size_t i = vec->active_length - 1; i > 0; i--) {
		value = ((double *)vec->vector)[vec->active_length - 1];
		insert_vector(vec, &value, 1, num);
		num++;
		pop_vector(vec, vec->active_length - 1);
	}
}
// --------------------------------------------------------------------------------

void reverse_char_vector(Vector *vec) {
	char value;
	int num = 0;
	for (size_t i = vec->active_length - 1; i > 0; i--) {
		value = ((char *)vec->vector)[vec->active_length - 1];
		insert_vector(vec, &value, 1, num);
		num++;
		pop_vector(vec, vec->active_length - 1);
	}
}
// --------------------------------------------------------------------------------

void reverse_short_vector(Vector *vec) {
	short value;
	int num = 0;
	for (size_t i = vec->active_length - 1; i > 0; i--) {
		value = ((short *)vec->vector)[vec->active_length - 1];
		insert_vector(vec, &value, 1, num);
		num++;
		pop_vector(vec, vec->active_length - 1);
	}
}
// --------------------------------------------------------------------------------

void reverse_long_vector(Vector *vec) {
	long value;
	int num = 0;
	for (size_t i = vec->active_length - 1; i > 0; i--) {
		value = ((long *)vec->vector)[vec->active_length - 1];
		insert_vector(vec, &value, 1, num);
		num++;
		pop_vector(vec, vec->active_length - 1);
	}
}
// --------------------------------------------------------------------------------

void reverse_longlong_vector(Vector *vec) {
	long long value;
	int num = 0;
	for (size_t i = vec->active_length - 1; i > 0; i--) {
		value = ((long long *)vec->vector)[vec->active_length - 1];
		insert_vector(vec, &value, 1, num);
		num++;
		pop_vector(vec, vec->active_length - 1);
	}
}
// --------------------------------------------------------------------------------

int reverse_vector(Vector *vec) {
	if (vec->dat_type == INT) reverse_int_vector(vec);
	else if (vec->dat_type == FLOAT) reverse_float_vector(vec);
	else if (vec->dat_type == DOUBLE) reverse_double_vector(vec);
	else if (vec->dat_type == CHAR) reverse_char_vector(vec);
	else if (vec->dat_type == SHORTINT) reverse_short_vector(vec);
	else if (vec->dat_type == LONG) reverse_long_vector(vec);
	else if (vec->dat_type == LONGLONG) reverse_longlong_vector(vec);
	else {
		printf("Incorrect data type, cannot reverse vector\n");
		return 0;
	}
	return 1;
}
// --------------------------------------------------------------------------------

float median_int_vector(Vector *vec) {
	if (vec->active_length % 2 == 0) {
		size_t indice1, indice2;
		indice1 = (vec->active_length / 2) -1;
		indice2 = ((vec->active_length + 2) - 1) / 2;
		int value_one = ((int *)vec->vector)[indice1];
		int value_two = ((int *)vec->vector)[indice2];
		return ((float)value_one + (float)value_two) / 2.0f;
	}
	else {
		size_t indice = ((vec->active_length + 1) / 2) - 1;
		int value = ((int *)vec->vector)[indice];
		return (float)value;
	}
}
// --------------------------------------------------------------------------------

float median_float_vector(Vector *vec) {
	if (vec->active_length % 2 == 0) {
		size_t indice1, indice2;
		indice1 = (vec->active_length / 2) -1;
		indice2 = ((vec->active_length + 2) - 1) / 2;
		float value_one = ((float *)vec->vector)[indice1];
		float value_two = ((float *)vec->vector)[indice2];
		return ((float)value_one + (float)value_two) / 2.0f;
	}
	else {
		size_t indice = ((vec->active_length + 1) / 2) - 1;
		float value = ((float *)vec->vector)[indice];
		return value;
	}
}
// --------------------------------------------------------------------------------

double median_double_vector(Vector *vec) {
	if (vec->active_length % 2 == 0) {
		size_t indice1, indice2;
		indice1 = (vec->active_length / 2) -1;
		indice2 = ((vec->active_length + 2) - 1) / 2;
		double value_one = ((double *)vec->vector)[indice1];
		double value_two = ((double *)vec->vector)[indice2];
		return (value_one + value_two) / 2.0;
	}
	else {
		size_t indice = ((vec->active_length + 1) / 2) - 1;
		double value = ((double *)vec->vector)[indice];
		return value;
	}
}
// --------------------------------------------------------------------------------

double median_long_vector(Vector *vec) {
	if (vec->active_length % 2 == 0) {
		size_t indice1, indice2;
		indice1 = (vec->active_length / 2) -1;
		indice2 = ((vec->active_length + 2) - 1) / 2;
		long value_one = ((long *)vec->vector)[indice1];
		long value_two = ((long *)vec->vector)[indice2];
		return ((double)value_one + (double)value_two) / 2.0;
	}
	else {
		size_t indice = ((vec->active_length + 1) / 2) - 1;
		long value = ((long *)vec->vector)[indice];
		return (double)value;
	}
}
// --------------------------------------------------------------------------------

int sum_int_vector(Vector *vec) {
	int sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += ((int *)vec->vector)[i];
	}
	return sum;
}
// --------------------------------------------------------------------------------

float sum_float_vector(Vector *vec) {
	float sum = 0.0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += ((float *)vec->vector)[i];
	}
	return sum;
}
// --------------------------------------------------------------------------------

double sum_double_vector(Vector *vec) {
	double sum = 0.0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += ((double *)vec->vector)[i];
	}
	return sum;
}
// --------------------------------------------------------------------------------

short sum_short_vector(Vector *vec) {
	short sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += ((short *)vec->vector)[i];
	}
	return sum;
}
// --------------------------------------------------------------------------------

long sum_long_vector(Vector *vec) {
	long sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += ((long *)vec->vector)[i];
	}
	return sum;
}
// --------------------------------------------------------------------------------

long long sum_longlong_vector(Vector *vec) {
	long long sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += ((long long *)vec->vector)[i];
	}
	return sum;
}
// --------------------------------------------------------------------------------

float average_int_vector(Vector *vec) {
	int sum = sum_int_vector(vec);
	float num = (float)vec->active_length;
	return (float)sum / num;
}
// --------------------------------------------------------------------------------

float average_float_vector(Vector *vec) {
	float sum = sum_float_vector(vec);
	float num = (float)vec->active_length;
	return sum / num;
}
// --------------------------------------------------------------------------------

double average_double_vector(Vector *vec) {
	double sum = sum_double_vector(vec);
	double num = (double)vec->active_length;
	return sum / num;
}
// --------------------------------------------------------------------------------

double average_long_vector(Vector *vec) {
	long sum = sum_long_vector(vec);
	double num = (double)vec->active_length;
	return (double)sum / num;
}
// --------------------------------------------------------------------------------

float stdev_int_vector(Vector *vec) {
	float average = average_int_vector(vec);
	float var = 0;
	int value;
	for (size_t i = 0; i < vec->active_length; i++) {
		value = ((int *)vec->vector)[i];
		var += pow(((float)value - average), 2.0);
	}
	float interm = (1.0 / ((float)vec->active_length - 1.0)) * var;
	float stddev = sqrt(interm);
	return stddev;
}
// --------------------------------------------------------------------------------

float stdev_float_vector(Vector *vec) {
	float average = average_float_vector(vec);
	float var = 0;
	float value;
	for (size_t i = 0; i < vec->active_length; i++) {
		value = ((float *)vec->vector)[i];
		var += pow((value - average), 2.0);
	}
	float interm = (1.0 / ((float)vec->active_length - 1.0)) * var;
	float stddev = sqrt(interm);
	return stddev;
}
// --------------------------------------------------------------------------------

double stdev_double_vector(Vector *vec) {
	double average = average_double_vector(vec);
	double var = 0;
	double value;
	for (size_t i = 0; i < vec->active_length; i++) {
		value = ((double *)vec->vector)[i];
		var += pow((value - average), 2.0);
	}
	double interm = (1.0 / ((double)vec->active_length - 1.0)) * var;
	double stddev = sqrt(interm);
	return stddev;
}
// --------------------------------------------------------------------------------

double stdev_long_vector(Vector *vec) {
	long average = average_long_vector(vec);
	double var = 0;
	double value;
	for (size_t i = 0; i < vec->active_length; i++) {
		value = ((long *)vec->vector)[i];
		var += pow(((double)value - (double)average), 2.0);
	}
	double interm = (1.0 / ((double)vec->active_length - 1.0)) * var;
	double stddev = sqrt(interm);
	return stddev;
}
// --------------------------------------------------------------------------------

Vector cumsum_int_vector(Vector *vec) {
	int sum = 0;
	Vector csum = init_type_vector(INT, vec->active_length);
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += ((int *)vec->vector)[i];
		push_vector(&csum, &sum, 1);
	}
	return csum;
}
// --------------------------------------------------------------------------------

Vector cumsum_float_vector(Vector *vec) {
	float sum = 0.0;
	Vector csum = init_type_vector(FLOAT, vec->active_length);
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += ((float *)vec->vector)[i];
		push_vector(&csum, &sum, 1);
	}
	return csum;
}
// --------------------------------------------------------------------------------

Vector cumsum_double_vector(Vector *vec) {
	double sum = 0.0;
	Vector csum = init_type_vector(DOUBLE, vec->active_length);
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += ((double *)vec->vector)[i];
		push_vector(&csum, &sum, 1);
	}
	return csum;
}
// --------------------------------------------------------------------------------

Vector cumsum_short_vector(Vector *vec) {
	short sum = 0;
	Vector csum = init_type_vector(SHORTINT, vec->active_length);
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += ((short *)vec->vector)[i];
		push_vector(&csum, &sum, 1);
	}
	return csum;
}
// --------------------------------------------------------------------------------

Vector cumsum_long_vector(Vector *vec) {
	long sum = 0;
	Vector csum = init_type_vector(LONG, vec->active_length);
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += ((long *)vec->vector)[i];
		push_vector(&csum, &sum, 1);
	}
	return csum;
}
// --------------------------------------------------------------------------------

Vector cumsum_longlong_vector(Vector *vec) {
	long long sum = 0;
	Vector csum = init_type_vector(LONGLONG, vec->active_length);
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += ((long long *)vec->vector)[i];
		push_vector(&csum, &sum, 1);
	}
	return csum;
}
// ================================================================================
// ================================================================================
// STRING VECTOR IMPLMENTATION

StringVector init_string_vector() {

	StringVector vec;

	// Create small memory block to be reallocated later
	char **ptr = (char **)malloc(sizeof(char *));
	if (ptr == NULL) {
		printf("WARNING: Insufficient memory for init_string_vector, exiting!\n");
		free(ptr);
		return vec;
	}

	vec.dat_type = STRING;
	vec.num_indices = 0;
	vec.num_bytes = sizeof(char *);
	vec.length = 0;
	vec.vector = ptr;
	return vec;
}
// --------------------------------------------------------------------------------

int push_string_vector(StringVector *vec, char *value, size_t length) {
	// Verify all values have null terminator
	const char *test = ((char *)value) + length - 1;
	int cmp = strcmp(test, "\0");
	if (cmp != 0) {
		printf("WARNING: %s string does not container null terminator\n", value);
	}
	// Begin push
	value = strdup(value);
	if (!value) return 0;

	// Allocate enough memory for new char vector
	vec->num_indices += length;
	size_t size = sizeof(char) * vec->num_indices;
	char **resized = (char **)realloc(vec->vector, size);
	if (resized == NULL) {
		printf("Warning, Insufficient memory for push_string_vector!\n");
		free(resized);
		vec->num_indices -= length;
		return 0;
	}
	resized[vec->length] = value;
	vec->vector = resized;
	vec->length += 1;
	return 1;
}
// --------------------------------------------------------------------------------

void free_string_vector(StringVector *vec) {
	if (vec != NULL) {
		for (size_t i = 0; i < vec->length; i++) {
			free(vec->vector[i]);
		}
		free(vec->vector);
		vec->vector = NULL;
		vec->length = 0;
		vec->dat_type = 0;
		vec->num_bytes = 0;
		vec->num_indices = 0;
	}
}
// --------------------------------------------------------------------------------

int insert_string_vector(StringVector *vec, char *value, size_t length, size_t index) {
	// Verify all values have null terminator
	const char *test = ((char *)value) + length - 1;
	int cmp = strcmp(test, "\0");
	if (cmp != 0) {
		printf("WARNING: %s string does not container null terminator\n", value);
	}
	// remove null terminator from value if it exists

	// Allocate memory
	vec->num_indices += length;
	char **resized = (char **)realloc(vec->vector, vec->num_indices * sizeof(char));
	if (resized == NULL) {
		free(resized);
		vec->num_indices -= length;
		return 0;
	}
	// Assign memory and move indices
	vec->vector = resized;

	for (size_t i = vec->length + 1; i > index; i--) {
		vec->vector[i] = vec->vector[i-1];
	}
	vec->vector[index] = value;
	vec->length += 1;
	return 1;
}
// --------------------------------------------------------------------------------

void pop_string_vector(StringVector *vec, size_t index) {
	size_t length = strlen(vec->vector[index]);
	for (size_t i = index; i < vec->length - 1; i++) {
		vec->vector[i] = vec->vector[i + 1];
	}
	vec->num_indices -= length;
	vec->vector = (char **)realloc(vec->vector, vec->num_indices * sizeof(char));
	vec->length -= 1;
}
// ================================================================================
// ================================================================================
// eof
