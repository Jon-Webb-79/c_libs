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

#include "vector.h"

// Begin code
void vector_mem_alloc(Vector *array, size_t num_indices) {
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

int string_vector_mem_alloc(StringVector *array, size_t num_indices) {
	// Determine the total memory allocation and assign to pointer
	void *pointer;
	pointer = malloc(num_indices * array->elem);

	// If memory is full fail gracefully
	if (pointer == NULL) {
		printf("Unable to allocate memory, exiting.\n");
		free(pointer);
		return 0;
	}
	// Allocate resources and instantiate Array
	else {
		array->array = pointer;
		array->len = 0;
		return 1;
	}
}
// --------------------------------------------------------------------------------

Vector init_vector(dat_type dat, size_t num_indices) {
	// Determine memory blocks based on data type
	int size;
	switch(dat) {
		case FLOAT:
			size = sizeof(float);
			break;
		case INT:
			size = sizeof(int);
			break;
		case DOUBLE:
			size = sizeof(double);
			break;
		case CHAR:
			size = sizeof(char);
			break;
		default:
			printf("Data type not correctly entered, instantiating int array!\n");
			size = sizeof(int);
			dat = INT;
	}

	// Allocate indice size and call array_mem_alloc
	Vector array;
	array.dat = dat;
    array.elem = size;
    vector_mem_alloc(&array, num_indices);
	return array;
}
// --------------------------------------------------------------------------------

StringVector init_string_vector() {
	StringVector array;
	array.dat = STRING;
	array.elem = sizeof(char);
	string_vector_mem_alloc(&array, array.elem);
	return array;
}
// --------------------------------------------------------------------------------

int append_vector(Vector *array, void *elements, size_t count) {
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

int append_string_vector(StringVector *array, char *value) {
	value = strdup(value);
	if (!value) {
		return -1;
	}
	array->len++;
	char **resized = realloc(array->array, sizeof(char *)*array->len + 1);
	if (!resized) {
		free(value);
		return -1;
	}
	resized[array->len-1] = value;
	array->array = resized;
	return 0;
}
// --------------------------------------------------------------------------------

int preappend_string_vector(StringVector *array, const char *value) {
	char *str;
	if (!value || !(str = strdup(value)))
		return -1;

	char **resized = realloc(array->array, sizeof(char *)*array->len + 1);
	if (!resized) {
		free(str);
		return -1;
	}
	array->array = resized;
	// memmove is not moving the array of pointers one to the right???
	memmove(array->array + 1, array->array, sizeof *array->array * array->len);
	array->array[0] = str;
	array->len++;
	return 0;
}
// --------------------------------------------------------------------------------

void free_vector(Vector *array) {
	// Free all memory in the array
	free(array->array);
	// Reset all variables in the struct
	array->array = NULL;
	array->size = 0;
    array->len = 0;
	array->elem = 0;
}
// --------------------------------------------------------------------------------

int int_vector_val(Vector *array, int indice) {
	// Ensure array contains integers
	if (array->dat != INT) {
		printf("Function can only return integer values, exiting function!\n");
		exit(0);
	}
	// Cast value to an integer and return
	int a = ((int *)array->array)[indice];
	return a;
}
// --------------------------------------------------------------------------------

float float_vector_val(Vector *array, int indice) {
	// Ensure array contains floats
	if (array->dat != FLOAT) {
		printf("Function can only return float values, exiting function!\n");
		exit(0);
	}
	// Cast value to an integer and return
	float a = ((float *)array->array)[indice];
	return a;
}
// --------------------------------------------------------------------------------

double double_vector_val(Vector *array, int indice) {
	// Ensure array contains floats
	if (array->dat != DOUBLE) {
		printf("Function can only return double values, exiting function!\n");
		exit(0);
	}
	// Cast value to an integer and return
	double a = ((double *)array->array)[indice];
	return a;
}
// --------------------------------------------------------------------------------

char char_vector_val(Vector *array, int indice) {
	// Ensure array contains floats
	if (array->dat != CHAR) {
		printf("Function can only return char values, exiting function!\n");
		exit(0);
	}
	// Cast value to an integer and return
	char a = ((char *)array->array)[indice];
	return a;
}
// --------------------------------------------------------------------------------

int preappend_vector(Vector *array, void *elements, size_t count) {
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

int pop_vector(Vector *array, int indice) {
	if (indice >= array->len) {
		printf("Indice %d out of bounds for pop_array", indice);
		return 0;
	}
	unsigned char *dst = (unsigned char*)array->array + indice * array->elem;
	memmove(dst, dst + array->elem, array->elem * (array->len - indice - 1));
	array->len -= 1;
	return 1;
}
// --------------------------------------------------------------------------------

Vector find_int_vector_indices(Vector *array, int integer) {
	int number = 0;
	int input;
	for (int i = 0; i < array->len; i++) {
		if (integer == int_vector_val(array, i)) {
			number++;
		}
	}
	dat_type dtype = INT;
	Vector indice_arr = init_vector(dtype, number);
	for (int i = 0; i < array->len; i++) {
		input = i;
		if (integer == int_vector_val(array, i)) {
			append_vector(&indice_arr, &input, 1);
		}
	}
	return indice_arr;
}
// --------------------------------------------------------------------------------

Vector find_float_vector_indices(Vector *array, float float_val) {
	int number = 0;
	int input;
	for (int i = 0; i < array->len; i++) {
		if (float_val == float_vector_val(array, i)) {
			number++;
		}
	}
	dat_type dtype = INT;
	Vector indice_arr = init_vector(dtype, number);
	for (int i = 0; i < array->len; i++) {
		if (float_val == float_vector_val(array, i)) {
			input = i;
			append_vector(&indice_arr, &input, 1);
		}
	}
	return indice_arr;
}
// --------------------------------------------------------------------------------

Vector find_double_vector_indices(Vector *array, double double_val) {
	int number = 0;
	int input;
	for (int i = 0; i < array->len; i++) {
		if (double_val == double_vector_val(array, i)) {
			number++;
		}
	}
	dat_type dtype = INT;
	Vector indice_arr = init_vector(dtype, number);
	for (int i = 0; i < array->len; i++) {
		if (double_val == double_vector_val(array, i)) {
			input = i;
			append_vector(&indice_arr, &input, 1);
		}
	}
	return indice_arr;
}
// --------------------------------------------------------------------------------

Vector find_char_vector_indices(Vector *array, char char_val) {
	int number = 0;
	int input;
	for (int i = 0; i < array->len; i++) {
		if (char_val == char_vector_val(array, i)) {
			number++;
		}
	}
	dat_type dtype = INT;
	Vector indice_arr = init_vector(dtype, number);
	for (int i = 0; i < array->len; i++) {
		if (char_val == char_vector_val(array, i)) {
			input = i;
			append_vector(&indice_arr, &input, 1);
		}
	}
	return indice_arr;
}
// --------------------------------------------------------------------------------

void delete_int_vec_values(Vector *array, int int_value) {
	Vector indices;
	// find the number of indices containing the value
	Vector indices_num = find_int_vector_indices(array, int_value);
	// Remove each appropriate indice
    for (int i = indices_num.len; i > 0; i--) {
        indices = find_int_vector_indices(array, int_value);
		pop_vector(array, int_vector_val(&indices, 0));
		free_vector(&indices);
	}
	free_vector(&indices_num);
}
// --------------------------------------------------------------------------------

void delete_float_vec_values(Vector *array, float float_value) {
	Vector indices;
	// find the number of indices containing the value
	Vector indices_num = find_float_vector_indices(array, float_value);
	// Remove each appropriate indice
    for (int i = indices_num.len; i > 0; i--) {
        indices = find_float_vector_indices(array, float_value);
		pop_vector(array, int_vector_val(&indices, 0));
		free_vector(&indices);
	}
	free_vector(&indices_num);
}
// --------------------------------------------------------------------------------

void delete_double_vec_values(Vector *array, double double_value) {
	Vector indices;
	// find the number of indices containing the value
	Vector indices_num = find_double_vector_indices(array, double_value);
	// Remove each appropriate indice
    for (int i = indices_num.len; i > 0; i--) {
        indices = find_double_vector_indices(array, double_value);
		pop_vector(array, int_vector_val(&indices, 0));
		free_vector(&indices);
	}
	free_vector(&indices_num);
}
// --------------------------------------------------------------------------------

void delete_char_vec_values(Vector *array, char char_value) {
	Vector indices;
	// find the number of indices containing the value
	Vector indices_num = find_char_vector_indices(array, char_value);
	// Remove each appropriate indice
    for (int i = indices_num.len; i > 0; i--) {
        indices = find_char_vector_indices(array, char_value);
		pop_vector(array, int_vector_val(&indices, 0));
		free_vector(&indices);
	}
	free_vector(&indices_num);
}
// --------------------------------------------------------------------------------

int replace_int_vector_index(Vector *array, int index, int replacement_value) {
	if (array->dat != INT) {
		printf("Array data type must be an INT");
		return 0;
	}
	if (index > array->len) {
		printf("Index is greater than array length");
		return 0;
	}
    // re-cast array indice to new value
	* (int *) ((char *) array->array + index * array->elem) = replacement_value;
	return 1;
}
// --------------------------------------------------------------------------------

int replace_float_vector_index(Vector *array, int index, float replacement_value) {
	if (array->dat != FLOAT) {
		printf("Array data type must be an FLOAT");
		return 0;
	}
	if (index > array->len) {
		printf("Index is greater than array length");
		return 0;
	}
    // re-cast array indice to new value
	* (float *) ((char *) array->array + index * array->elem) = replacement_value;
	return 1;
}
// --------------------------------------------------------------------------------

int replace_double_vector_index(Vector *array, int index, double replacement_value) {
	if (array->dat != DOUBLE) {
		printf("Array data type must be an DOUBLE");
		return 0;
	}
	if (index > array->len) {
		printf("Index is greater than array length");
		return 0;
	}
    // re-cast array indice to new value
	* (double *) ((char *) array->array + index * array->elem) = replacement_value;
	return 1;
}
// --------------------------------------------------------------------------------

int replace_char_vector_index(Vector *array, int index, char replacement_value) {
	if (array->dat != CHAR) {
		printf("Array data type must be an CHAR");
		return 0;
	}
	if (index > array->len) {
		printf("Index is greater than array length");
		return 0;
	}
    // re-cast array indice to new value
	* (char *) ((char *) array->array + index * array->elem) = replacement_value;
	return 1;
}
// --------------------------------------------------------------------------------

void replace_int_vector_element(Vector *array, int old_val, int new_val) {
	Vector indices;
	// find the number of indices containing the value
	Vector indices_num = find_int_vector_indices(array, old_val);
	// Remove each appropriate indice
    for (int i = indices_num.len; i > 0; i--) {
        indices = find_int_vector_indices(array, old_val);
		replace_int_vector_index(array, int_vector_val(&indices, 0), new_val);
		free_vector(&indices);
	}
	free_vector(&indices_num);
}
// --------------------------------------------------------------------------------

void replace_float_vector_element(Vector *array, float old_val, float new_val) {
	Vector indices;
	// find the number of indices containing the value
	Vector indices_num = find_float_vector_indices(array, old_val);
	// Remove each appropriate indice
    for (int i = indices_num.len; i > 0; i--) {
        indices = find_float_vector_indices(array, old_val);
	    replace_float_vector_index(array, int_vector_val(&indices, 0), new_val);
		free_vector(&indices);
	}
	free_vector(&indices_num);
}
// --------------------------------------------------------------------------------

void replace_double_vector_element(Vector *array, double old_val, double new_val) {
	Vector indices;
	// find the number of indices containing the value
	Vector indices_num = find_double_vector_indices(array, old_val);
	// Remove each appropriate indice
    for (int i = indices_num.len; i > 0; i--) {
        indices = find_double_vector_indices(array, old_val);
	    replace_double_vector_index(array, int_vector_val(&indices, 0), new_val);
		free_vector(&indices);
	}
	free_vector(&indices_num);
}
// --------------------------------------------------------------------------------

void replace_char_vector_element(Vector *array, char old_val, char new_val) {
	Vector indices;
	// find the number of indices containing the value
	Vector indices_num = find_char_vector_indices(array, old_val);
	// Remove each appropriate indice
    for (int i = indices_num.len; i > 0; i--) {
        indices = find_char_vector_indices(array, old_val);
	    replace_char_vector_index(array, int_vector_val(&indices, 0), new_val);
		free_vector(&indices);
	}
	free_vector(&indices_num);
}
// --------------------------------------------------------------------------------

void delete_int_duplicates_vec(Vector *array) {
	int length = array->len;
	for (int i = 0; ; i++) {
		if (i >= array->len) break;
		for (int j = i + 1; j < array->len; j++) {
			if (int_vector_val(array, i) == int_vector_val(array, j)) {
				pop_vector(array, j);
			}
		}
	}
}
// --------------------------------------------------------------------------------

void delete_float_duplicates_vec(Vector *array) {
	int length = array->len;
	for (int i = 0; ; i++) {
		if (i >= array->len) break;
		for (int j = i + 1; j < array->len; j++) {
			if (float_vector_val(array, i) == float_vector_val(array, j)) {
				pop_vector(array, j);
			}
		}
	}
}
// --------------------------------------------------------------------------------

void delete_double_duplicates_vec(Vector *array) {
	int length = array->len;
	for (int i = 0; ; i++) {
		if (i >= array->len) break;
		for (int j = i + 1; j < array->len; j++) {
			if (double_vector_val(array, i) == double_vector_val(array, j)) {
				pop_vector(array, j);
			}
		}
	}
}
// --------------------------------------------------------------------------------

void delete_char_duplicates_vec(Vector *array) {
	int length = array->len;
	for (int i = 0; ; i++) {
		if (i >= array->len) break;
		for (int j = i + 1; j < array->len; j++) {
			if (char_vector_val(array, i) == char_vector_val(array, j)) {
				pop_vector(array, j);
			}
		}
	}
}
// --------------------------------------------------------------------------------

void unique_int_vec(Vector *array) {
	int length = array->len;
	int repeat_status = 0;
	for (int i = 0; ; i++) {
		if (i >= array->len) break;
		for (int j = i + 1; j < array->len; j++) {
			if (int_vector_val(array, i) == int_vector_val(array, j)) {
				repeat_status = 1;
				pop_vector(array, j);
			}
		}
		if (repeat_status == 1) {
			pop_vector(array, i);
			repeat_status = 0;
			i -= 1;
		}
	}
}
// --------------------------------------------------------------------------------

void unique_float_vec(Vector *array) {
	int length = array->len;
	int repeat_status = 0;
	for (int i = 0; ; i++) {
		if (i >= array->len) break;
		for (int j = i + 1; j < array->len; j++) {
			if (float_vector_val(array, i) == float_vector_val(array, j)) {
				repeat_status = 1;
				pop_vector(array, j);
			}
		}
		if (repeat_status == 1) {
			pop_vector(array, i);
			repeat_status = 0;
			i -= 1;
		}
	}
}
// --------------------------------------------------------------------------------

void unique_double_vec(Vector *array) {
	int length = array->len;
	int repeat_status = 0;
	for (int i = 0; ; i++) {
		if (i >= array->len) break;
		for (int j = i + 1; j < array->len; j++) {
			if (double_vector_val(array, i) == double_vector_val(array, j)) {
				repeat_status = 1;
				pop_vector(array, j);
			}
		}
		if (repeat_status == 1) {
			pop_vector(array, i);
			repeat_status = 0;
			i -= 1;
		}
	}
}
// --------------------------------------------------------------------------------

void unique_char_vec(Vector *array) {
	int length = array->len;
	int repeat_status = 0;
	for (int i = 0; ; i++) {
		if (i >= array->len) break;
		for (int j = i + 1; j < array->len; j++) {
			if (char_vector_val(array, i) == char_vector_val(array, j)) {
				repeat_status = 1;
				pop_vector(array, j);
			}
		}
		if (repeat_status == 1) {
			pop_vector(array, i);
			repeat_status = 0;
			i -= 1;
		}
	}
}
// --------------------------------------------------------------------------------

void delete_duplicates_vec(Vector *array) {
	if (array->dat == INT)
		delete_int_duplicates_vec(array);
	else if (array->dat == FLOAT)
		delete_float_duplicates_vec(array);
	else if (array->dat == DOUBLE)
		delete_double_duplicates_vec(array);
	else if (array->dat == CHAR)
		delete_char_duplicates_vec(array);
	else
		printf("WARNING: Vector data type must be INT, FLOAT, DOUBLE, or CHAR");
}
// --------------------------------------------------------------------------------

void unique_vec(Vector *array) {
	if (array->dat == INT)
		unique_int_vec(array);
	else if (array->dat == FLOAT)
		unique_float_vec(array);
	else if (array->dat == DOUBLE)
		unique_double_vec(array);
	else if (array->dat == CHAR)
		unique_char_vec(array);
	else
		printf("WARNING: Vector data type must be INT, FLOAT, DOUBLE, or CHAR");
}
// --------------------------------------------------------------------------------

void sort_int_ascending_vec(Vector *array) {
	int i, j, min_idx;
    int var_one, var_two, temp;
	for (i = 0; i < array->len - 1; i++) {

		min_idx = i;
		temp = ((int *)array->array)[min_idx];
		for (j = i + 1; j < array->len; j++) {
			var_one = ((int *)array->array)[min_idx];
			var_two = ((int *)array->array)[j];
			if (var_two < var_one) {
				min_idx = j;
				temp = ((int *)array->array)[min_idx];
			}
		}
		* (int *) ((char *) array->array + min_idx * array->elem) = ((int *)array->array)[i];
		* (int *) ((char *) array->array + i * array->elem) = temp;
	}
}
// --------------------------------------------------------------------------------

void sort_float_ascending_vec(Vector *array) {
	int i, j, min_idx;
    float var_one, var_two, temp;
	for (i = 0; i < array->len - 1; i++) {

		min_idx = i;
		temp = ((float *)array->array)[min_idx];
		for (j = i + 1; j < array->len; j++) {
			var_one = ((float *)array->array)[min_idx];
			var_two = ((float *)array->array)[j];
			if (var_two < var_one) {
				min_idx = j;
				temp = ((float *)array->array)[min_idx];
			}
		}
		* (float *) ((char *) array->array + min_idx * array->elem) = ((float *)array->array)[i];
		* (float *) ((char *) array->array + i * array->elem) = temp;
	}
}
// --------------------------------------------------------------------------------

void sort_double_ascending_vec(Vector *array) {
	int i, j, min_idx;
    double var_one, var_two, temp;
	for (i = 0; i < array->len - 1; i++) {

		min_idx = i;
		temp = ((double *)array->array)[min_idx];
		for (j = i + 1; j < array->len; j++) {
			var_one = ((double *)array->array)[min_idx];
			var_two = ((double *)array->array)[j];
			if (var_two < var_one) {
				min_idx = j;
				temp = ((double *)array->array)[min_idx];
			}
		}
		* (double *) ((char *) array->array + min_idx * array->elem) = ((double *)array->array)[i];
		* (double *) ((char *) array->array + i * array->elem) = temp;
	}
}
// --------------------------------------------------------------------------------

void sort_char_ascending_vec(Vector *array) {
	int i, j, min_idx;
    char var_one, var_two, temp;
	for (i = 0; i < array->len - 2; i++) {

		min_idx = i;
		temp = ((char *)array->array)[min_idx];
		for (j = i + 1; j < array->len - 1; j++) {
			var_one = ((char *)array->array)[min_idx];
			var_two = ((char *)array->array)[j];
			if (var_two < var_one) {
				min_idx = j;
				temp = ((char *)array->array)[min_idx];
			}
		}
		* (char *) ((char *) array->array + min_idx * array->elem) = ((char *)array->array)[i];
		* (char *) ((char *) array->array + i * array->elem) = temp;
	}
}
// --------------------------------------------------------------------------------

void sort_int_descending_vec(Vector *array) {
	int i, j, max_idx;
    int var_one, var_two, temp;
	for (i = 0; i < array->len - 1; i++) {

		max_idx = i;
		temp = ((int *)array->array)[max_idx];
		for (j = i + 1; j < array->len; j++) {
			var_one = ((int *)array->array)[max_idx];
			var_two = ((int *)array->array)[j];
			if (var_two > var_one) {
				max_idx = j;
				temp = ((int *)array->array)[max_idx];
			}
		}
		* (int *) ((char *) array->array + max_idx * array->elem) = ((int *)array->array)[i];
		* (int *) ((char *) array->array + i * array->elem) = temp;
	}
}
// --------------------------------------------------------------------------------

void sort_float_descending_vec(Vector *array) {
	int i, j, max_idx;
    float var_one, var_two, temp;
	for (i = 0; i < array->len - 1; i++) {

		max_idx = i;
		temp = ((float *)array->array)[max_idx];
		for (j = i + 1; j < array->len; j++) {
			var_one = ((float *)array->array)[max_idx];
			var_two = ((float *)array->array)[j];
			if (var_two > var_one) {
				max_idx = j;
				temp = ((float *)array->array)[max_idx];
			}
		}
		* (float *) ((char *) array->array + max_idx * array->elem) = ((float *)array->array)[i];
		* (float *) ((char *) array->array + i * array->elem) = temp;
	}
}
// --------------------------------------------------------------------------------

void sort_double_descending_vec(Vector *array) {
	int i, j, max_idx;
    double var_one, var_two, temp;
	for (i = 0; i < array->len - 1; i++) {

		max_idx = i;
		temp = ((double *)array->array)[max_idx];
		for (j = i + 1; j < array->len; j++) {
			var_one = ((double *)array->array)[max_idx];
			var_two = ((double *)array->array)[j];
			if (var_two > var_one) {
				max_idx = j;
				temp = ((double *)array->array)[max_idx];
			}
		}
		* (double *) ((char *) array->array + max_idx * array->elem) = ((double *)array->array)[i];
		* (double *) ((char *) array->array + i * array->elem) = temp;
	}
}
// --------------------------------------------------------------------------------

void sort_char_descending_vec(Vector *array) {
	int i, j, max_idx;
    char var_one, var_two, temp;
	for (i = 0; i < array->len - 2; i++) {

		max_idx = i;
		temp = ((char *)array->array)[max_idx];
		for (j = i + 1; j < array->len - 1; j++) {
			var_one = ((char *)array->array)[max_idx];
			var_two = ((char *)array->array)[j];
			if (var_two > var_one) {
				max_idx = j;
				temp = ((char *)array->array)[max_idx];
			}
		}
		* (char *) ((char *) array->array + max_idx * array->elem) = ((char *)array->array)[i];
		* (char *) ((char *) array->array + i * array->elem) = temp;
	}
}
// --------------------------------------------------------------------------------

void sort_vec(Vector *array, order sort_order) {
	if (array->dat == INT && sort_order == FORWARD)
		sort_int_ascending_vec(array);
	else if (array->dat == FLOAT && sort_order == FORWARD)
		sort_float_ascending_vec(array);
	else if (array->dat == DOUBLE && sort_order == FORWARD)
		sort_double_ascending_vec(array);
	else if (array->dat == CHAR && sort_order == FORWARD)
		sort_char_ascending_vec(array);
	else if(array->dat == INT && sort_order == REVERSE)
		sort_int_descending_vec(array);
	else if(array->dat == FLOAT && sort_order == REVERSE)
		sort_float_descending_vec(array);
	else if(array->dat == DOUBLE && sort_order == REVERSE)
		sort_double_descending_vec(array);
	else if(array->dat == CHAR && sort_order == REVERSE)
		sort_char_descending_vec(array);
	else
		printf("WARNING: Vector data type must be INT, FLOAT, DOUBLE, or CHAR, or order must equal 0 or 1");
}
// --------------------------------------------------------------------------------

int median_int_vec(Vector *array) {
	// Sort array in ascending order
	sort_vec(array, 0);
	if (array->len % 2 == 0) {
		int mid = array->len / 2;
		return int_vector_val(array, mid-1);
	}
	else {
		int mid = ((array->len - 1) / 2) + 1;
		return int_vector_val(array, mid-1);
	}
}
// --------------------------------------------------------------------------------

float median_float_vec(Vector *array) {
	// Sort array in ascending order
	sort_vec(array, 0);
	if (array->len % 2 == 0) {
		int mid = array->len / 2;
		float val_one = float_vector_val(array, mid - 1);
		float val_two = float_vector_val(array, mid);
		return (val_one + val_two) / 2.0f;
	}
	else {
		int mid = ((array->len - 1) / 2) + 1;
		return float_vector_val(array, mid-1);
	}
}
// --------------------------------------------------------------------------------

double median_double_vec(Vector *array) {
	// Sort array in ascending order
	sort_vec(array, 0);
	if (array->len % 2 == 0) {
		int mid = array->len / 2;
		double val_one = double_vector_val(array, mid - 1);
		double val_two = double_vector_val(array, mid);
		return (val_one + val_two) / 2.0;
	}
	else {
		int mid = ((array->len - 1) / 2) + 1;
		return double_vector_val(array, mid-1);
	}
}
// --------------------------------------------------------------------------------

char median_char_vec(Vector *array) {
	// Sort array in ascending order
	sort_vec(array, 0);
	if (array->len % 2 == 0) {
		int mid = array->len / 2;
		return char_vector_val(array, mid-1);
	}
	else {
		int mid = ((array->len - 1) / 2) + 1;
		return char_vector_val(array, mid-1);
	}
}
// --------------------------------------------------------------------------------

int sum_int_vec(Vector *array) {
	int sum = 0;
	for (int i = 0; i < array->len; i++) {
		sum += int_vector_val(array, i);
	}
	return sum;
}
// --------------------------------------------------------------------------------

float sum_float_vec(Vector *array) {
	float sum = 0.0;
	for (int i = 0; i < array->len; i++) {
		sum += float_vector_val(array, i);
	}
	return sum;
}
// --------------------------------------------------------------------------------

double sum_double_vec(Vector *array) {
	double sum = 0.0;
	for (int i = 0; i < array->len; i++) {
		sum += double_vector_val(array, i);
	}
	return sum;
}
// --------------------------------------------------------------------------------

float average_int_vec(Vector *array) {
	int sum = sum_int_vec(array);
	return sum / (float) array->len;
}
// --------------------------------------------------------------------------------

float average_float_vec(Vector *array) {
	float sum = sum_float_vec(array);
	return sum / (float) array->len;
}
// --------------------------------------------------------------------------------

double average_double_vec(Vector *array) {
	double sum = sum_double_vec(array);
	return sum / (double) array->len;
}
// --------------------------------------------------------------------------------

float stdev_int_vec(Vector *array) {
	float sum, convert;
	float avg = average_int_vec(array);
	for (int i = 0; i < array->len; i++) {
		convert = (float) int_vector_val(array, i);
		sum += powf((convert - avg), 2.0f);
	}
	float sigma = sqrtf(sum / (float)array->len);
	return sigma;
}
// --------------------------------------------------------------------------------

float stdev_float_vec(Vector *array) {
	float sum, convert;
	float avg = average_float_vec(array);
	for (int i = 0; i < array->len; i++) {
		convert = float_vector_val(array, i);
		sum += powf((convert - avg), 2.0f);
	}
	float sigma = sqrtf(sum / (float)array->len);
	return sigma;
}
// --------------------------------------------------------------------------------

double stdev_double_vec(Vector *array) {
	double sum, convert;
	double avg = average_double_vec(array);
	for (int i = 0; i < array->len; i++) {
		convert = double_vector_val(array, i);
		sum += pow((convert - avg), 2.0);
	}
	double sigma = sqrtf(sum / (double)array->len);
	return sigma;
}
// --------------------------------------------------------------------------------

int* cumsum_int_vec(Vector *array) {
	int *vec = malloc(array->len * sizeof(int));
	int sum, value;
	sum = 0;
	for (int i = 0; i < array->len; i++) {
		value = int_vector_val(array, i);
		sum += value;
		vec[i] = sum;
	}
	return vec;
}
// --------------------------------------------------------------------------------

float* cumsum_float_vec(Vector *array) {
	float *vec = malloc(array->len * sizeof(float));
	float sum, value;
	sum = 0.0;
	for (int i = 0; i < array->len; i++) {
		value = float_vector_val(array, i);
		sum += value;
		vec[i] = sum;
	}
	return vec;
}
// --------------------------------------------------------------------------------

double* cumsum_double_vec(Vector *array) {
	double *vec = malloc(array->len * sizeof(double));
	double sum, value;
	sum = 0.0;
	for (int i = 0; i < array->len; i++) {
		value = double_vector_val(array, i);
		sum += value;
		vec[i] = sum;
	}
	return vec;
}
// --------------------------------------------------------------------------------

char* string_vector_val(StringVector *array, int indice) {
	// Ensure array contains strings
	if (array->dat != STRING) {
		printf("Function can only return string values, exiting function!\n");
		exit(0);
	}
	// Cast value to an integer and return
	char* a = array->array[indice];
	return a;
}
// --------------------------------------------------------------------------------

void free_string_array(StringVector *array) {
	if (array != NULL) {
		for (int i = 0; i < array->len; i++) {
			free(array->array[i]);
		}
	}
	free(array->array);
	// Reset all variables in the struct
	array->array = NULL;
    array->len = 0;
	array->elem = 0;
}
// --------------------------------------------------------------------------------

void pop_string_vector(StringVector *array, int index) {
	if (index >= array->len) {
		printf("Index %d out of bounds for pop_string_vector\n", index);
	}
	unsigned char *dst = (unsigned char*)array->array + index * array->elem;
	memmove(array->array + index, array->array + index + 1,  \
			sizeof *array->array * array->len -1);
	array->len -= 1;
}
// ================================================================================
// ================================================================================
// eof
