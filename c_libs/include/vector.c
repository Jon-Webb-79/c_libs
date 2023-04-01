// ==========================================================================================
// ==========================================================================================
// - File:    vector.c
// - Purpose: Describe the file purpose here
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    March 31, 2023
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ==========================================================================================
// ==========================================================================================
// Include modules here

#include "vector.h"


int init_short_vector(Short *vec, size_t length) {
	// Make initial vector allocation
	short int *ptr = malloc(length * sizeof(short int));
	if (ptr == NULL) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->dat_type = DYNAMIC;
	vec->allocated_length = length;
	vec->active_length = 0;
	vec->array = ptr;
	return 1;
}
// ------------------------------------------------------------------------------------------

int init_ushort_vector(UShort *vec, size_t length) {
	// Make initial vector allocation
	unsigned short int *ptr = malloc(length * sizeof(unsigned short int));
	if (ptr == NULL) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->dat_type = DYNAMIC;
	vec->allocated_length = length;
	vec->active_length = 0;
	vec->array = ptr;
	return 1;
}
// ------------------------------------------------------------------------------------------

int init_int_vector(Int *vec, size_t length) {
	// Make initial vector allocation
	int *ptr = malloc(length * sizeof(int));
	if (ptr == NULL) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->dat_type = DYNAMIC;
	vec->allocated_length = length;
	vec->active_length = 0;
	vec->array = ptr;
	return 1;
}
// ------------------------------------------------------------------------------------------

int init_uint_vector(UInt *vec, size_t length) {
	// Make initial vector allocation
	unsigned int *ptr = malloc(length * sizeof(unsigned int));
	if (ptr == NULL) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->dat_type = DYNAMIC;
	vec->allocated_length = length;
	vec->active_length = 0;
	vec->array = ptr;
	return 1;
}
// ------------------------------------------------------------------------------------------

int init_long_vector(LInt *vec, size_t length) {
	// Make initial vector allocation
	long int *ptr = malloc(length * sizeof(long int));
	if (ptr == NULL) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->dat_type = DYNAMIC;
	vec->allocated_length = length;
	vec->active_length = 0;
	vec->array = ptr;
	return 1;
}
// ------------------------------------------------------------------------------------------

int init_ulong_vector(ULInt *vec, size_t length) {
	// Make initial vector allocation
	unsigned long int *ptr = malloc(length * sizeof(unsigned long int));
	if (ptr == NULL) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->dat_type = DYNAMIC;
	vec->allocated_length = length;
	vec->active_length = 0;
	vec->array = ptr;
	return 1;
}
// ------------------------------------------------------------------------------------------
int init_llong_vector(LLInt *vec, size_t length) {
	// Make initial vector allocation
	long long int *ptr = malloc(length * sizeof(long long int));
	if (ptr == NULL) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->dat_type = DYNAMIC;
	vec->allocated_length = length;
	vec->active_length = 0;
	vec->array = ptr;
	return 1;
}
// ------------------------------------------------------------------------------------------

int init_ullong_vector(ULLInt *vec, size_t length) {
	// Make initial vector allocation
	unsigned long long int *ptr = malloc(length * sizeof(unsigned long long int));
	if (ptr == NULL) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->dat_type = DYNAMIC;
	vec->allocated_length = length;
	vec->active_length = 0;
	vec->array = ptr;
	return 1;
}
// ------------------------------------------------------------------------------------------

int init_float_vector(Flt *vec, size_t length) {
	// Make initial vector allocation
	float *ptr = malloc(length * sizeof(float));
	if (ptr == NULL) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->dat_type = DYNAMIC;
	vec->allocated_length = length;
	vec->active_length = 0;
	vec->array = ptr;
	return 1;
}
// ------------------------------------------------------------------------------------------

int init_double_vector(Dble *vec, size_t length) {
	// Make initial vector allocation
	double *ptr = malloc(length * sizeof(double));
	if (ptr == NULL) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->dat_type = DYNAMIC;
	vec->allocated_length = length;
	vec->active_length = 0;
	vec->array = ptr;
	return 1;
}
// ------------------------------------------------------------------------------------------

int init_ldouble_vector(LDble *vec, size_t length) {
	// Make initial vector allocation
	long double *ptr = malloc(length * sizeof(long double));
	if (ptr == NULL) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->dat_type = DYNAMIC;
	vec->allocated_length = length;
	vec->active_length = 0;
	vec->array = ptr;
	return 1;
}
// ------------------------------------------------------------------------------------------

int init_char_vector(Char *vec, size_t length) {
	// Make initial vector allocation
	char *ptr = malloc(length * sizeof(char));
	if (ptr == NULL) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->dat_type = DYNAMIC;
	vec->allocated_length = length;
	vec->active_length = 0;
	vec->array = ptr;
	return 1;
}
// ------------------------------------------------------------------------------------------

int init_uchar_vector(UChar *vec, size_t length) {
	// Make initial vector allocation
	unsigned char *ptr = malloc(length * sizeof(unsigned char));
	if (ptr == NULL) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->dat_type = DYNAMIC;
	vec->allocated_length = length;
	vec->active_length = 0;
	vec->array = ptr;
	return 1;
}
// ------------------------------------------------------------------------------------------

int init_bool_vector(Bool *vec, size_t length) {
	// Make initial vector allocation
	bool *ptr = malloc(length * sizeof(bool));
	if (ptr == NULL) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->dat_type = DYNAMIC;
	vec->allocated_length = length;
	vec->active_length = 0;
	vec->array = ptr;
	return 1;
}
// ------------------------------------------------------------------------------------------

int init_string_vector(String *vec) {
	vec->active_length = 0;
	vec->array = NULL;
	return 1;
}
// ==========================================================================================
// ==========================================================================================
// INIT_TYPE_ARRAY

void init_short_array(Short *vec, short int *arr, size_t allocated_length, size_t active_length) {
	vec->array = arr;
	vec->dat_type = STATIC;
	vec->active_length = active_length;
	vec->allocated_length = allocated_length;
}
// ------------------------------------------------------------------------------------------

void init_ushort_array(UShort *vec, unsigned short int *arr, size_t allocated_length, size_t active_length) {
	vec->array = arr;
	vec->dat_type = STATIC;
	vec->active_length = active_length;
	vec->allocated_length = allocated_length;
}
// ------------------------------------------------------------------------------------------

void init_int_array(Int *vec, int *arr, size_t allocated_length, size_t active_length) {
	vec->array = arr;
	vec->dat_type = STATIC;
	vec->active_length = active_length;
	vec->allocated_length = allocated_length;
}
// ------------------------------------------------------------------------------------------

void init_uint_array(UInt *vec, unsigned int *arr, size_t allocated_length, size_t active_length) {
	vec->array = arr;
	vec->dat_type = STATIC;
	vec->active_length = active_length;
	vec->allocated_length = allocated_length;
}
// ------------------------------------------------------------------------------------------

void init_long_array(LInt *vec, long int *arr, size_t allocated_length, size_t active_length) {
	vec->array = arr;
	vec->dat_type = STATIC;
	vec->active_length = active_length;
	vec->allocated_length = allocated_length;
}
// ------------------------------------------------------------------------------------------

void init_ulong_array(ULInt *vec, unsigned long int *arr, size_t allocated_length, size_t active_length) {
	vec->array = arr;
	vec->dat_type = STATIC;
	vec->active_length = active_length;
	vec->allocated_length = allocated_length;
}
// ------------------------------------------------------------------------------------------

void init_llong_array(LLInt *vec, long long int *arr, size_t allocated_length, size_t active_length) {
	vec->array = arr;
	vec->dat_type = STATIC;
	vec->active_length = active_length;
	vec->allocated_length = allocated_length;
}
// ------------------------------------------------------------------------------------------

void init_ullong_array(ULLInt *vec, unsigned long long int *arr, size_t allocated_length, size_t active_length) {
	vec->array = arr;
	vec->dat_type = STATIC;
	vec->active_length = active_length;
	vec->allocated_length = allocated_length;
}
// ------------------------------------------------------------------------------------------

void init_float_array(Flt *vec, float *arr, size_t allocated_length, size_t active_length) {
	vec->array = arr;
	vec->dat_type = STATIC;
	vec->active_length = active_length;
	vec->allocated_length = allocated_length;
}
// ------------------------------------------------------------------------------------------

void init_double_array(Dble *vec, double *arr, size_t allocated_length, size_t active_length) {
	vec->array = arr;
	vec->dat_type = STATIC;
	vec->active_length = active_length;
	vec->allocated_length = allocated_length;
}
// ------------------------------------------------------------------------------------------

void init_ldouble_array(LDble *vec, long double *arr, size_t allocated_length, size_t active_length) {
	vec->array = arr;
	vec->dat_type = STATIC;
	vec->active_length = active_length;
	vec->allocated_length = allocated_length;
}
// ------------------------------------------------------------------------------------------

void init_char_array(Char *vec, char *arr, size_t allocated_length, size_t active_length) {
	vec->array = arr;
	vec->dat_type = STATIC;
	vec->active_length = active_length;
	vec->allocated_length = allocated_length;
}
// ------------------------------------------------------------------------------------------

void init_uchar_array(UChar *vec, unsigned char *arr, size_t allocated_length, size_t active_length) {
	vec->array = arr;
	vec->dat_type = STATIC;
	vec->active_length = active_length;
	vec->allocated_length = allocated_length;
}
// ------------------------------------------------------------------------------------------

void init_bool_array(Bool *vec, bool *arr, size_t allocated_length, size_t active_length) {
	vec->array = arr;
	vec->dat_type = STATIC;
	vec->active_length = active_length;
	vec->allocated_length = allocated_length;
}
// ==========================================================================================
// ==========================================================================================
// eof
