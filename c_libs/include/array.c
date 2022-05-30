// ================================================================================
// ================================================================================
// - File:    array.c
// - Purpose: Describe the file purpose here
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
int pop_int_array(int *array, int index, int size) {
	if (index >= size) return 0;
	unsigned char *dst = (unsigned char*)array + index * sizeof(int);
	memmove(dst, dst + sizeof(int), sizeof(int) * (size - index - 1));
	return 1;
}
// --------------------------------------------------------------------------------

int pop_float_array(float *array, int index, int size) {
	if (index >= size) return 0;
	unsigned char *dst = (unsigned char*)array + index * sizeof(float);
	memmove(dst, dst + sizeof(float), sizeof(float) * (size - index - 1));
	return 1;
}
// --------------------------------------------------------------------------------

int pop_double_array(double *array, int index, int size) {
	if (index >= size) return 0;
	unsigned char *dst = (unsigned char*)array + index * sizeof(double);
	memmove(dst, dst + sizeof(double), sizeof(double) * (size - index - 1));
	return 1;
}
// --------------------------------------------------------------------------------

int pop_char_array(char *array, int index, int size) {
	if (index >= size) return 0;
	unsigned char *dst = (unsigned char*)array + index * sizeof(char);
	memmove(dst, dst + sizeof(char), sizeof(char) * (size - index - 1));
	return 1;
}
// --------------------------------------------------------------------------------

void append_int_array(int *parent_array, int len, int *child_array, size_t count) {
	memcpy((char *)parent_array + len * sizeof(int), child_array, count * sizeof(int));
}
// --------------------------------------------------------------------------------

void append_float_array(float *parent_array, int len, float *child_array, size_t count) {
	memcpy((char *)parent_array + len * sizeof(float), child_array, count * sizeof(float));
}
// --------------------------------------------------------------------------------

void append_double_array(double *parent_array, int len, double *child_array, size_t count) {
	memcpy((char *)parent_array + len * sizeof(double), child_array, count * sizeof(double));
}
// --------------------------------------------------------------------------------

void append_char_array(char *parent_array, int len, char *child_array, size_t count) {
	memcpy((char *)parent_array + len * sizeof(char), child_array, count * sizeof(char));
}
// --------------------------------------------------------------------------------

void preappend_int_array(int *parent_array, int len, int *child_array, size_t count) {
	// Preappend variables and increment the array length
    memmove(
    ((char *) parent_array) + count * sizeof(int), parent_array, len * sizeof(int));
    memcpy(parent_array, child_array, count * sizeof(int));
}
// --------------------------------------------------------------------------------

void preappend_float_array(float *parent_array, int len, float *child_array, size_t count) {
	// Preappend variables and increment the array length
    memmove(
    ((char *) parent_array) + count * sizeof(float), parent_array, len * sizeof(float));
    memcpy(parent_array, child_array, count * sizeof(float));
}
// --------------------------------------------------------------------------------

void preappend_double_array(double *parent_array, int len, double *child_array, size_t count) {
	// Preappend variables and increment the array length
    memmove(
    ((char *) parent_array) + count * sizeof(double), parent_array, len * sizeof(double));
    memcpy(parent_array, child_array, count * sizeof(double));
}
// --------------------------------------------------------------------------------

void preappend_char_array(char *parent_array, int len, char *child_array, size_t count) {
	// Preappend variables and increment the array length
    memmove(
    ((char *) parent_array) + count * sizeof(char), parent_array, len * sizeof(char));
    memcpy(parent_array, child_array, count * sizeof(char));
}
// ================================================================================
// ================================================================================
// eof
