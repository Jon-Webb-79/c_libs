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

int push_short_vector(Short *vec, short int value, size_t index) {
	if (index >= vec->active_length + 1) {
		fprintf(stderr, "Index in file %s on line %d is out of bounds\n", __FILE__, __LINE__);
		return -1;
	}
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + 1) * 2;
		short int *ptr = (short int *)realloc(vec->array, size * sizeof(short int));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (index + 1) * sizeof(short int),
			((char *)vec->array) + index * sizeof(short int),
			(vec->active_length - index) * sizeof(short int));
	vec->array[index] = value;
	vec->active_length += 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int push_ushort_vector(UShort *vec, unsigned short int value, size_t index) {
	if (index >= vec->active_length + 1) {
		fprintf(stderr, "Index in file %s on line %d is out of bounds\n", __FILE__, __LINE__);
		return -1;
	}
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + 1) * 2;
		unsigned short int *ptr = (unsigned short int *)realloc(vec->array, size * sizeof(unsigned short int));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (index + 1) * sizeof(unsigned short int),
			((char *)vec->array) + index * sizeof(unsigned short int),
			(vec->active_length - index) * sizeof(unsigned short int));
	vec->array[index] = value;
	vec->active_length += 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int push_int_vector(Int *vec, int value, size_t index) {
	if (index >= vec->active_length + 1) {
		fprintf(stderr, "Index in file %s on line %d is out of bounds\n", __FILE__, __LINE__);
		return -1;
	}
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + 1) * 2;
		int *ptr = (int *)realloc(vec->array, size * sizeof(int));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (index + 1) * sizeof(int),
			((char *)vec->array) + index * sizeof(int),
			(vec->active_length - index) * sizeof(int));
	vec->array[index] = value;
	vec->active_length += 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int push_uint_vector(UInt *vec, unsigned int value, size_t index) {
	if (index >= vec->active_length + 1) {
		fprintf(stderr, "Index in file %s on line %d is out of bounds\n", __FILE__, __LINE__);
		return -1;
	}
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + 1) * 2;
		unsigned int *ptr = (unsigned int *)realloc(vec->array, size * sizeof(unsigned int));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (index + 1) * sizeof(unsigned int),
			((char *)vec->array) + index * sizeof(unsigned int),
			(vec->active_length - index) * sizeof(unsigned int));
	vec->array[index] = value;
	vec->active_length += 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int push_long_vector(LInt *vec, long int value, size_t index) {
	if (index >= vec->active_length + 1) {
		fprintf(stderr, "Index in file %s on line %d is out of bounds\n", __FILE__, __LINE__);
		return -1;
	}
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + 1) * 2;
		long int *ptr = (long int *)realloc(vec->array, size * sizeof(long int));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (index + 1) * sizeof(long int),
			((char *)vec->array) + index * sizeof(long int),
			(vec->active_length - index) * sizeof(long int));
	vec->array[index] = value;
	vec->active_length += 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int push_ulong_vector(ULInt *vec, unsigned long int value, size_t index) {
	if (index >= vec->active_length + 1) {
		fprintf(stderr, "Index in file %s on line %d is out of bounds\n", __FILE__, __LINE__);
		return -1;
	}
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + 1) * 2;
		unsigned long int *ptr = (unsigned long int *)realloc(vec->array, size * sizeof(unsigned long int));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (index + 1) * sizeof(unsigned long int),
			((char *)vec->array) + index * sizeof(unsigned long int),
			(vec->active_length - index) * sizeof(unsigned long int));
	vec->array[index] = value;
	vec->active_length += 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int push_llong_vector(LLInt *vec, long long int value, size_t index) {
	if (index >= vec->active_length + 1) {
		fprintf(stderr, "Index in file %s on line %d is out of bounds\n", __FILE__, __LINE__);
		return -1;
	}
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + 1) * 2;
		long long int *ptr = (long long int *)realloc(vec->array, size * sizeof(long long int));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (index + 1) * sizeof(long long int),
			((char *)vec->array) + index * sizeof(long long int),
			(vec->active_length - index) * sizeof(long long int));
	vec->array[index] = value;
	vec->active_length += 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int push_ullong_vector(ULLInt *vec, unsigned long long int value, size_t index) {
	if (index >= vec->active_length + 1) {
		fprintf(stderr, "Index in file %s on line %d is out of bounds\n", __FILE__, __LINE__);
		return -1;
	}
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + 1) * 2;
		unsigned long long int *ptr = (unsigned long long int *)realloc(vec->array, size * sizeof(unsigned long long int));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (index + 1) * sizeof(unsigned long long int),
			((char *)vec->array) + index * sizeof(unsigned long long int),
			(vec->active_length - index) * sizeof(unsigned long long int));
	vec->array[index] = value;
	vec->active_length += 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int push_float_vector(Flt *vec, float value, size_t index) {
	if (index >= vec->active_length + 1) {
		fprintf(stderr, "Index in file %s on line %d is out of bounds\n", __FILE__, __LINE__);
		return -1;
	}
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + 1) * 2;
		float *ptr = (float *)realloc(vec->array, size * sizeof(float));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (index + 1) * sizeof(float),
			((char *)vec->array) + index * sizeof(float),
			(vec->active_length - index) * sizeof(float));
	vec->array[index] = value;
	vec->active_length += 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int push_double_vector(Dble *vec, double value, size_t index) {
	if (index >= vec->active_length + 1) {
		fprintf(stderr, "Index in file %s on line %d is out of bounds\n", __FILE__, __LINE__);
		return -1;
	}
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + 1) * 2;
		double *ptr = (double *)realloc(vec->array, size * sizeof(double));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (index + 1) * sizeof(double),
			((char *)vec->array) + index * sizeof(double),
			(vec->active_length - index) * sizeof(double));
	vec->array[index] = value;
	vec->active_length += 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int push_ldouble_vector(LDble *vec, long double value, size_t index) {
	if (index >= vec->active_length + 1) {
		fprintf(stderr, "Index in file %s on line %d is out of bounds\n", __FILE__, __LINE__);
		return -1;
	}
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + 1) * 2;
		long double *ptr = (long double *)realloc(vec->array, size * sizeof(long double));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (index + 1) * sizeof(long double),
			((char *)vec->array) + index * sizeof(long double),
			(vec->active_length - index) * sizeof(long double));
	vec->array[index] = value;
	vec->active_length += 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int push_char_vector(Char *vec, char value, size_t index) {
	if (index >= vec->active_length + 1) {
		fprintf(stderr, "Index in fsize_tile %s on line %d is out of bounds\n", __FILE__, __LINE__);
		return -1;
	}
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + 1) * 2;
		char *ptr = (char *)realloc(vec->array, size * sizeof(char));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (index + 1) * sizeof(char),
			((char *)vec->array) + index * sizeof(char),
			(vec->active_length - index) * sizeof(char));
	vec->array[index] = value;
	vec->active_length += 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int push_uchar_vector(UChar *vec, unsigned char value, size_t index) {
	if (index >= vec->active_length + 1) {
		fprintf(stderr, "Index in fsize_tile %s on line %d is out of bounds\n", __FILE__, __LINE__);
		return -1;
	}
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + 1) * 2;
		unsigned char *ptr = (unsigned char *)realloc(vec->array, size * sizeof(unsigned char));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((unsigned char *)vec->array) + (index + 1) * sizeof(unsigned char),
			((unsigned char *)vec->array) + index * sizeof(unsigned char),
			(vec->active_length - index) * sizeof(unsigned char));
	vec->array[index] = value;
	vec->active_length += 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int push_bool_vector(Bool *vec, bool value, size_t index) {
	if (index >= vec->active_length + 1) {
		fprintf(stderr, "Index in fsize_tile %s on line %d is out of bounds\n", __FILE__, __LINE__);
		return -1;
	}
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + 1 > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + 1) * 2;
		bool *ptr = (bool *)realloc(vec->array, size * sizeof(bool));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (index + 1) * sizeof(bool),
			((char *)vec->array) + index * sizeof(bool),
			(vec->active_length - index) * sizeof(bool));
	vec->array[index] = value;
	vec->active_length += 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int push_string_vector(String *vec, char *value, size_t index) {
	if (index > vec->active_length) {
		fprintf(stderr, "String index out of range in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	char **resized = realloc(vec->array, sizeof(*vec->array) * (vec->active_length + 1));
	if (!resized) {
		fprintf(stderr, "realloc failed in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	value = strdup(value);
	vec->array = resized;
	if (index < vec->active_length) {
		memmove(vec->array + index + 1, vec->array + index, sizeof(*vec->array) * (vec->active_length - index));
	}
	vec->array[index] = value;
	vec->active_length++;
	return 1;
}
// ==========================================================================================
// ==========================================================================================

int insert_short_vector(Short *vec, short int *elements,
		             size_t num_indices, size_t index) {
	// Ensure that the index is within the active_length
	if (index > vec->active_length) {
		printf("WARNING: The selected index is larger than the active length\n");
		return 0;
	}
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + num_indices) * 2;
		short int *ptr = (short int *)realloc(vec->array, size * sizeof(short int));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Failure on file=%s, line=%d", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (num_indices + index) * sizeof(short int),
			((char *)vec->array) + index * sizeof(short int),
			(vec->active_length - index) * sizeof(short int));
	memcpy(((char *)vec->array) + index * sizeof(short int), elements,
			num_indices * sizeof(short int));
	vec->active_length += num_indices;
	return 1;
}
// ------------------------------------------------------------------------------------------

int insert_ushort_vector(UShort *vec, unsigned short int *elements,
		              size_t num_indices, size_t index) {
	// Ensure that the index is within the active_length
	if (index > vec->active_length) {
		printf("WARNING: The selected index is larger than the active length\n");
		return 0;
	}
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + num_indices) * 2;
		unsigned short int *ptr = (unsigned short int *)realloc(vec->array, size * sizeof(unsigned short int));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Failure on file=%s, line=%d", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (num_indices + index) * sizeof(unsigned short int),
			((char *)vec->array) + index * sizeof(unsigned short int),
			(vec->active_length - index) * sizeof(unsigned short int));
	memcpy(((char *)vec->array) + index * sizeof(unsigned short int), elements,
			num_indices * sizeof(unsigned short int));
	vec->active_length += num_indices;
	return 1;
}
// ------------------------------------------------------------------------------------------

int insert_int_vector(Int *vec, int *elements,
		           size_t num_indices, size_t index) {
	// Ensure that the index is within the active_length
	if (index > vec->active_length) {
		printf("WARNING: The selected index is larger than the active length\n");
		return 0;
	}
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + num_indices) * 2;
		int *ptr = (int *)realloc(vec->array, size * sizeof(int));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Failure on file=%s, line=%d", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (num_indices + index) * sizeof(int),
			((char *)vec->array) + index * sizeof(int),
			(vec->active_length - index) * sizeof(int));
	memcpy(((char *)vec->array) + index * sizeof(int), elements,
			num_indices * sizeof(int));
	vec->active_length += num_indices;
	return 1;
}
// ------------------------------------------------------------------------------------------

int insert_uint_vector(UInt *vec, unsigned int *elements,
		            size_t num_indices, size_t index) {
	// Ensure that the index is within the active_length
	if (index > vec->active_length) {
		printf("WARNING: The selected index is larger than the active length\n");
		return 0;
	}
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + num_indices) * 2;
		unsigned int *ptr = (unsigned int *)realloc(vec->array, size * sizeof(unsigned int));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Failure on file=%s, line=%d", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (num_indices + index) * sizeof(unsigned int),
			((char *)vec->array) + index * sizeof(unsigned int),
			(vec->active_length - index) * sizeof(unsigned int));
	memcpy(((char *)vec->array) + index * sizeof(unsigned int), elements,
			num_indices * sizeof(unsigned int));
	vec->active_length += num_indices;
	return 1;
}
// ------------------------------------------------------------------------------------------

int insert_long_vector(LInt *vec, long int *elements,
		            size_t num_indices, size_t index) {
	// Ensure that the index is within the active_length
	if (index > vec->active_length) {
		printf("WARNING: The selected index is larger than the active length\n");
		return 0;
	}
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + num_indices) * 2;
		long int *ptr = (long int *)realloc(vec->array, size * sizeof(long int));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Failure on file=%s, line=%d", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (num_indices + index) * sizeof(long int),
			((char *)vec->array) + index * sizeof(long int),
			(vec->active_length - index) * sizeof(long int));
	memcpy(((char *)vec->array) + index * sizeof(long int), elements,
			num_indices * sizeof(long int));
	vec->active_length += num_indices;
	return 1;
}
// ------------------------------------------------------------------------------------------

int insert_ulong_vector(ULInt *vec, unsigned long int *elements,
		             size_t num_indices, size_t index) {
	// Ensure that the index is within the active_length
	if (index > vec->active_length) {
		printf("WARNING: The selected index is larger than the active length\n");
		return 0;
	}
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + num_indices) * 2;
		unsigned long int *ptr = (unsigned long int *)realloc(vec->array, size * sizeof(unsigned long int));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Failure on file=%s, line=%d", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (num_indices + index) * sizeof(unsigned long int),
			((char *)vec->array) + index * sizeof(unsigned long int),
			(vec->active_length - index) * sizeof(unsigned long int));
	memcpy(((char *)vec->array) + index * sizeof(unsigned long int), elements,
			num_indices * sizeof(unsigned long int));
	vec->active_length += num_indices;
	return 1;
}
// ------------------------------------------------------------------------------------------

int insert_llong_vector(LLInt *vec, long long int *elements,
		             size_t num_indices, size_t index) {
	// Ensure that the index is within the active_length
	if (index > vec->active_length) {
		printf("WARNING: The selected index is larger than the active length\n");
		return 0;
	}
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + num_indices) * 2;
		long long int *ptr = (long long int *)realloc(vec->array, size * sizeof(long long int));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Failure on file=%s, line=%d", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (num_indices + index) * sizeof(long long int),
			((char *)vec->array) + index * sizeof(long long int),
			(vec->active_length - index) * sizeof(long long int));
	memcpy(((char *)vec->array) + index * sizeof(long long int), elements,
			num_indices * sizeof(long long int));
	vec->active_length += num_indices;
	return 1;
}
// ------------------------------------------------------------------------------------------

int insert_ullong_vector(ULLInt *vec, unsigned long long int *elements,
		              size_t num_indices, size_t index) {
	// Ensure that the index is within the active_length
	if (index > vec->active_length) {
		printf("WARNING: The selected index is larger than the active length\n");
		return 0;
	}
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + num_indices) * 2;
		unsigned long long int *ptr = (unsigned long long int *)realloc(vec->array, size * sizeof(unsigned long long int));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Failure on file=%s, line=%d", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (num_indices + index) * sizeof(unsigned long long int),
			((char *)vec->array) + index * sizeof(unsigned long long int),
			(vec->active_length - index) * sizeof(unsigned long long int));
	memcpy(((char *)vec->array) + index * sizeof(unsigned long long int), elements,
			num_indices * sizeof(unsigned long long int));
	vec->active_length += num_indices;
	return 1;
}
// ------------------------------------------------------------------------------------------

int insert_float_vector(Flt *vec, float *elements,
		             size_t num_indices, size_t index) {
	// Ensure that the index is within the active_length
	if (index > vec->active_length) {
		printf("WARNING: The selected index is larger than the active length\n");
		return 0;
	}
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + num_indices) * 2;
		float *ptr = (float *)realloc(vec->array, size * sizeof(float));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Failure on file=%s, line=%d", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (num_indices + index) * sizeof(float),
			((char *)vec->array) + index * sizeof(float),
			(vec->active_length - index) * sizeof(float));
	memcpy(((char *)vec->array) + index * sizeof(float), elements,
			num_indices * sizeof(float));
	vec->active_length += num_indices;
	return 1;
}
// ------------------------------------------------------------------------------------------

int insert_double_vector(Dble *vec, double *elements,
		              size_t num_indices, size_t index) {
	// Ensure that the index is within the active_length
	if (index > vec->active_length) {
		printf("WARNING: The selected index is larger than the active length\n");
		return 0;
	}
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + num_indices) * 2;
		double *ptr = (double *)realloc(vec->array, size * sizeof(double));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Failure on file=%s, line=%d", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (num_indices + index) * sizeof(double),
			((char *)vec->array) + index * sizeof(double),
			(vec->active_length - index) * sizeof(double));
	memcpy(((char *)vec->array) + index * sizeof(double), elements,
			num_indices * sizeof(double));
	vec->active_length += num_indices;
	return 1;
}
// ------------------------------------------------------------------------------------------

int insert_ldouble_vector(LDble *vec, long double *elements,
		               size_t num_indices, size_t index) {
	// Ensure that the index is within the active_length
	if (index > vec->active_length) {
		printf("WARNING: The selected index is larger than the active length\n");
		return 0;
	}
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + num_indices) * 2;
		long double *ptr = (long double *)realloc(vec->array, size * sizeof(long double));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Failure on file=%s, line=%d", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (num_indices + index) * sizeof(long double),
			((char *)vec->array) + index * sizeof(long double),
			(vec->active_length - index) * sizeof(long double));
	memcpy(((char *)vec->array) + index * sizeof(long double), elements,
			num_indices * sizeof(long double));
	vec->active_length += num_indices;
	return 1;
}
// ------------------------------------------------------------------------------------------

int insert_char_vector(Char *vec, char *elements,
		            size_t num_indices, size_t index) {
	// Ensure that the index is within the active_length
	if (index > vec->active_length) {
		printf("WARNING: The selected index is larger than the active length\n");
		return 0;
	}
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + num_indices) * 2;
		char *ptr = (char *)realloc(vec->array, size * sizeof(char));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Failure on file=%s, line=%d", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (num_indices + index) * sizeof(char),
			((char *)vec->array) + index * sizeof(char),
			(vec->active_length - index) * sizeof(char));
	memcpy(((char *)vec->array) + index * sizeof(char), elements,
			num_indices * sizeof(char));
	vec->active_length += num_indices;
	return 1;
}
// ------------------------------------------------------------------------------------------

int insert_uchar_vector(UChar *vec, unsigned char *elements,
		            size_t num_indices, size_t index) {
	// Ensure that the index is within the active_length
	if (index > vec->active_length) {
		printf("WARNING: The selected index is larger than the active length\n");
		return 0;
	}
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + num_indices) * 2;
		unsigned char *ptr = (unsigned char *)realloc(vec->array, size * sizeof(unsigned char));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Failure on file=%s, line=%d", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((unsigned char *)vec->array) + (num_indices + index) * sizeof(unsigned char),
			((unsigned char *)vec->array) + index * sizeof(unsigned char),
			(vec->active_length - index) * sizeof(unsigned char));
	memcpy(((unsigned char *)vec->array) + index * sizeof(unsigned char), elements,
			num_indices * sizeof(unsigned char));
	vec->active_length += num_indices;
	return 1;
}
// ------------------------------------------------------------------------------------------

int insert_bool_vector(Bool *vec, bool *elements,
		               size_t num_indices, size_t index) {
	// Ensure that the index is within the active_length
	if (index > vec->active_length) {
		printf("WARNING: The selected index is larger than the active length\n");
		return 0;
	}
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == STATIC) {
		fprintf(stderr, "Cannont extend static array allocation in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	// Allocate memory if necessary
	if ((vec->active_length + num_indices > vec->allocated_length) && vec->dat_type == DYNAMIC) {
		size_t size = (vec->active_length + num_indices) * 2;
		bool *ptr = (bool *)realloc(vec->array, size * sizeof(bool));
		// Verify that sufficient memory exists
		if (ptr == NULL) {
			fprintf(stderr, "Failure on file=%s, line=%d", __FILE__, __LINE__);
			free(ptr);
			return -1;
		}
		// allocate memory
		vec->array = ptr;
		vec->allocated_length = size;
	}
	// Add variables and update metadata
	memmove(((char *)vec->array) + (num_indices + index) * sizeof(bool),
			((char *)vec->array) + index * sizeof(bool),
			(vec->active_length - index) * sizeof(bool));
	memcpy(((char *)vec->array) + index * sizeof(bool), elements,
			num_indices * sizeof(bool));
	vec->active_length += num_indices;
	return 1;
}
// ==========================================================================================
// ==========================================================================================
/// pop_type_stack_index functions

int pop_short_vector_index(Short *vec, size_t index) {
	if (index >= vec->active_length) {
		fprintf(stderr, "index, out of bounds in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	unsigned char *dst = (unsigned char *)vec->array + index * sizeof(short int);
	memmove(dst, dst + sizeof(short int), sizeof(short int) * (vec->active_length - index - 1));
	vec->array[vec->active_length - 1] = 0;
	vec->active_length -= 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int pop_ushort_vector_index(UShort *vec, size_t index) {
	if (index >= vec->active_length) {
		fprintf(stderr, "index, out of bounds in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	unsigned char *dst = (unsigned char *)vec->array + index * sizeof(unsigned short int);
	memmove(dst, dst + sizeof(unsigned short int), sizeof(unsigned short int) * (vec->active_length - index - 1));
	vec->array[vec->active_length - 1] = 0;
	vec->active_length -= 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int pop_int_vector_index(Int *vec, size_t index) {
	if (index >= vec->active_length) {
		fprintf(stderr, "index, out of bounds in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	unsigned char *dst = (unsigned char *)vec->array + index * sizeof(int);
	memmove(dst, dst + sizeof(int), sizeof(int) * (vec->active_length - index - 1));
	vec->array[vec->active_length - 1] = 0;
	vec->active_length -= 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int pop_uint_vector_index(UInt *vec, size_t index) {
	if (index >= vec->active_length) {
		fprintf(stderr, "index, out of bounds in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	unsigned char *dst = (unsigned char *)vec->array + index * sizeof(unsigned int);
	memmove(dst, dst + sizeof(unsigned int), sizeof(unsigned int) * (vec->active_length - index - 1));
	vec->array[vec->active_length - 1] = 0;
	vec->active_length -= 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int pop_long_vector_index(LInt *vec, size_t index) {
	if (index >= vec->active_length) {
		fprintf(stderr, "index, out of bounds in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	unsigned char *dst = (unsigned char *)vec->array + index * sizeof(long int);
	memmove(dst, dst + sizeof(long int), sizeof(long int) * (vec->active_length - index - 1));
	vec->array[vec->active_length - 1] = 0;
	vec->active_length -= 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int pop_ulong_vector_index(ULInt *vec, size_t index) {
	if (index >= vec->active_length) {
		fprintf(stderr, "index, out of bounds in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	unsigned char *dst = (unsigned char *)vec->array + index * sizeof(unsigned long int);
	memmove(dst, dst + sizeof(unsigned long int), sizeof(unsigned long int) * (vec->active_length - index - 1));
	vec->array[vec->active_length - 1] = 0;
	vec->active_length -= 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int pop_llong_vector_index(LLInt *vec, size_t index) {
	if (index >= vec->active_length) {
		fprintf(stderr, "index, out of bounds in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	unsigned char *dst = (unsigned char *)vec->array + index * sizeof(long long int);
	memmove(dst, dst + sizeof(long long int), sizeof(long long int) * (vec->active_length - index - 1));
	vec->array[vec->active_length - 1] = 0;
	vec->active_length -= 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int pop_ullong_vector_index(ULLInt *vec, size_t index) {
	if (index >= vec->active_length) {
		fprintf(stderr, "index, out of bounds in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	unsigned char *dst = (unsigned char *)vec->array + index * sizeof(unsigned long long int);
	memmove(dst, dst + sizeof(unsigned long long int), sizeof(unsigned long long int) * (vec->active_length - index - 1));
	vec->array[vec->active_length - 1] = 0;
	vec->active_length -= 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int pop_float_vector_index(Flt *vec, size_t index) {
	if (index >= vec->active_length) {
		fprintf(stderr, "index, out of bounds in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	unsigned char *dst = (unsigned char *)vec->array + index * sizeof(float);
	memmove(dst, dst + sizeof(float), sizeof(float) * (vec->active_length - index - 1));
	vec->array[vec->active_length - 1] = 0;
	vec->active_length -= 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int pop_double_vector_index(Dble *vec, size_t index) {
	if (index >= vec->active_length) {
		fprintf(stderr, "index, out of bounds in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	unsigned char *dst = (unsigned char *)vec->array + index * sizeof(double);
	memmove(dst, dst + sizeof(double), sizeof(double) * (vec->active_length - index - 1));
	vec->array[vec->active_length - 1] = 0;
	vec->active_length -= 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int pop_ldouble_vector_index(LDble *vec, size_t index) {
	if (index >= vec->active_length) {
		fprintf(stderr, "index, out of bounds in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	unsigned char *dst = (unsigned char *)vec->array + index * sizeof(long double);
	memmove(dst, dst + sizeof(long double), sizeof(long double) * (vec->active_length - index - 1));
	vec->array[vec->active_length - 1] = 0;
	vec->active_length -= 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int pop_char_vector_index(Char *vec, size_t index) {
	if (index >= vec->active_length) {
		fprintf(stderr, "index, out of bounds in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	char *dst = (char *)vec->array + index * sizeof(char);
	memmove(dst, dst + sizeof(char), sizeof(char) * (vec->active_length - index - 1));
	vec->array[vec->active_length - 1] = 0;
	vec->active_length -= 1;
	return 1;
}
// ------------------------------------------------------------------------------------------
int pop_uchar_vector_index(UChar *vec, size_t index) {
	if (index >= vec->active_length) {
		fprintf(stderr, "index, out of bounds in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	unsigned char *dst = (unsigned char *)vec->array + index * sizeof(unsigned char);
	memmove(dst, dst + sizeof(char), sizeof(char) * (vec->active_length - index - 1));
	vec->array[vec->active_length - 1] = 0;
	vec->active_length -= 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int pop_bool_vector_index(Bool *vec, size_t index) {
	if (index >= vec->active_length) {
		fprintf(stderr, "index, out of bounds in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	unsigned char *dst = (unsigned char *)vec->array + index * sizeof(bool);
	memmove(dst, dst + sizeof(bool), sizeof(bool) * (vec->active_length - index - 1));
	vec->array[vec->active_length - 1] = 0;
	vec->active_length -= 1;
	return 1;
}
// ------------------------------------------------------------------------------------------

int pop_string_vector_index(String *vec, size_t index) {
	if (index + 1 > vec->active_length) {
		fprintf(stderr, "Index out of range at file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	char *value = vec->array[index];
	if (index + 1 < vec->active_length) {
		memmove(vec->array + index, vec->array + index + 1, sizeof(*vec->array) * (vec->active_length - index - 1));
	}
	char **resized = realloc(vec->array, sizeof(*vec->array) * (vec->active_length - 1));
	if (!resized) {
		fprintf(stderr, "String index out of range in file %s on line %d\n", __FILE__, __LINE__);
		memmove(vec->array + index + 1, vec->array + index, sizeof(char *) * (vec->active_length - index - 1));
		vec->array[index] = value;
		return -1;
	}
	vec->array = resized;
	vec->active_length--;
	free(value);
	return 1;
}
// ==========================================================================================
// ==========================================================================================
// REPLACE_TYPE_VALUES FUNCTIONS


void replace_short_vector_values(Short *vec, short int old_value, short int new_value) {
	for (size_t i = 0; i < vec->active_length; i++) {
		if (vec->array[i] == old_value) vec->array[i] = new_value;
	}
}
// ------------------------------------------------------------------------------------------

void replace_ushort_vector_values(UShort *vec, unsigned short int old_value, unsigned short int new_value) {
	for (size_t i = 0; i < vec->active_length; i++) {
		if (vec->array[i] == old_value) vec->array[i] = new_value;
	}
}
// ------------------------------------------------------------------------------------------

void replace_int_vector_values(Int *vec, int old_value, int new_value) {
	for (size_t i = 0; i < vec->active_length; i++) {
		if (vec->array[i] == old_value) vec->array[i] = new_value;
	}
}
// ------------------------------------------------------------------------------------------

void replace_uint_vector_values(UInt *vec, unsigned int old_value, unsigned int new_value) {
	for (size_t i = 0; i < vec->active_length; i++) {
		if (vec->array[i] == old_value) vec->array[i] = new_value;
	}
}
// ------------------------------------------------------------------------------------------

void replace_long_vector_values(LInt *vec, long int old_value, long int new_value) {
	for (size_t i = 0; i < vec->active_length; i++) {
		if (vec->array[i] == old_value) vec->array[i] = new_value;
	}
}
// ------------------------------------------------------------------------------------------

void replace_ulong_vector_values(ULInt *vec, unsigned long int old_value, unsigned long int new_value) {
	for (size_t i = 0; i < vec->active_length; i++) {
		if (vec->array[i] == old_value) vec->array[i] = new_value;
	}
}
// ------------------------------------------------------------------------------------------

void replace_llong_vector_values(LLInt *vec, long long int old_value, long long int new_value) {
	for (size_t i = 0; i < vec->active_length; i++) {
		if (vec->array[i] == old_value) vec->array[i] = new_value;
	}
}
// ------------------------------------------------------------------------------------------

void replace_ullong_vector_values(ULLInt *vec, unsigned long long int old_value, unsigned long long int new_value) {
	for (size_t i = 0; i < vec->active_length; i++) {
		if (vec->array[i] == old_value) vec->array[i] = new_value;
	}
}
// ------------------------------------------------------------------------------------------

void replace_float_vector_values(Flt *vec, float old_value, float new_value) {
	for (size_t i = 0; i < vec->active_length; i++) {
		if (vec->array[i] == old_value) vec->array[i] = new_value;
	}
}
// ------------------------------------------------------------------------------------------

void replace_double_vector_values(Dble *vec, double old_value, double new_value) {
	for (size_t i = 0; i < vec->active_length; i++) {
		if (vec->array[i] == old_value) vec->array[i] = new_value;
	}
}
// ------------------------------------------------------------------------------------------

void replace_ldouble_vector_values(LDble *vec, long double old_value, long double new_value) {
	for (size_t i = 0; i < vec->active_length; i++) {
		if (vec->array[i] == old_value) vec->array[i] = new_value;
	}
}
// ------------------------------------------------------------------------------------------

void replace_char_vector_values(Char *vec, char old_value, char new_value) {
	for (size_t i = 0; i < vec->active_length; i++) {
		if (vec->array[i] == old_value) vec->array[i] = new_value;
	}
}
// ------------------------------------------------------------------------------------------

void replace_uchar_vector_values(UChar *vec, unsigned char old_value, unsigned char new_value) {
	for (size_t i = 0; i < vec->active_length; i++) {
		if (vec->array[i] == old_value) vec->array[i] = new_value;
	}
}
// ------------------------------------------------------------------------------------------

void replace_bool_vector_values(Bool *vec, bool old_value, char new_value) {
	for (size_t i = 0; i < vec->active_length; i++) {
		if (vec->array[i] == old_value) vec->array[i] = new_value;
	}
}
// ------------------------------------------------------------------------------------------

void replace_string_vector_values(String *vec, char *old_value, char *new_value) {
	int cmp;
	for (size_t i = 0; i < vec->active_length; i++) {
		cmp = strcmp(vec->array[i], old_value);
		if (cmp == 0) {
			pop_string_vector_index(vec, i);
			push_string_vector(vec, new_value, i);
		}
	}
}
// ==========================================================================================
// ==========================================================================================
// FREE_TYPE_VEC FUNCTIONS

void free_short_vector(Short *vec) {
	if (vec->dat_type == DYNAMIC) {
		free(vec->array);
		vec->array = NULL;
		vec->active_length = 0;
		vec->allocated_length = 0;
	}
	else {
		fprintf(stderr, "Struct in file %s on line %d must be DYNAMIC\n", __FILE__, __LINE__);
	}
}
// ------------------------------------------------------------------------------------------

void free_ushort_vector(UShort *vec) {
	if (vec->dat_type == DYNAMIC) {
		free(vec->array);
		vec->array = NULL;
		vec->active_length = 0;
		vec->allocated_length = 0;
	}
	else {
		fprintf(stderr, "Struct in file %s on line %d must be DYNAMIC\n", __FILE__, __LINE__);
	}
}
// ------------------------------------------------------------------------------------------

void free_int_vector(Int *vec) {
	if (vec->dat_type == DYNAMIC) {
		free(vec->array);
		vec->array = NULL;
		vec->active_length = 0;
		vec->allocated_length = 0;
	}
	else {
		fprintf(stderr, "Struct in file %s on line %d must be DYNAMIC\n", __FILE__, __LINE__);
	}
}
// ------------------------------------------------------------------------------------------

void free_uint_vector(UInt *vec) {
	if (vec->dat_type == DYNAMIC) {
		free(vec->array);
		vec->array = NULL;
		vec->active_length = 0;
		vec->allocated_length = 0;
	}
	else {
		fprintf(stderr, "Struct in file %s on line %d must be DYNAMIC\n", __FILE__, __LINE__);
	}
}
// ------------------------------------------------------------------------------------------

void free_long_vector(LInt *vec) {
	if (vec->dat_type == DYNAMIC) {
		free(vec->array);
		vec->array = NULL;
		vec->active_length = 0;
		vec->allocated_length = 0;
	}
	else {
		fprintf(stderr, "Struct in file %s on line %d must be DYNAMIC\n", __FILE__, __LINE__);
	}
}
// ------------------------------------------------------------------------------------------

void free_ulong_vector(ULInt *vec) {
	if (vec->dat_type == DYNAMIC) {
		free(vec->array);
		vec->array = NULL;
		vec->active_length = 0;
		vec->allocated_length = 0;
	}
	else {
		fprintf(stderr, "Struct in file %s on line %d must be DYNAMIC\n", __FILE__, __LINE__);
	}
}
// ------------------------------------------------------------------------------------------

void free_llong_vector(LLInt *vec) {
	if (vec->dat_type == DYNAMIC) {
		free(vec->array);
		vec->array = NULL;
		vec->active_length = 0;
		vec->allocated_length = 0;
	}
	else {
		fprintf(stderr, "Struct in file %s on line %d must be DYNAMIC\n", __FILE__, __LINE__);
	}
}
// ------------------------------------------------------------------------------------------

void free_ullong_vector(ULLInt *vec) {
	if (vec->dat_type == DYNAMIC) {
		free(vec->array);
		vec->array = NULL;
		vec->active_length = 0;
		vec->allocated_length = 0;
	}
	else {
		fprintf(stderr, "Struct in file %s on line %d must be DYNAMIC\n", __FILE__, __LINE__);
	}
}
// ------------------------------------------------------------------------------------------

void free_float_vector(Flt *vec) {
	if (vec->dat_type == DYNAMIC) {
		free(vec->array);
		vec->array = NULL;
		vec->active_length = 0;
		vec->allocated_length = 0;
	}
	else {
		fprintf(stderr, "Struct in file %s on line %d must be DYNAMIC\n", __FILE__, __LINE__);
	}
}
// ------------------------------------------------------------------------------------------

void free_double_vector(Dble *vec) {
	if (vec->dat_type == DYNAMIC) {
		free(vec->array);
		vec->array = NULL;
		vec->active_length = 0;
		vec->allocated_length = 0;
	}
	else {
		fprintf(stderr, "Struct in file %s on line %d must be DYNAMIC\n", __FILE__, __LINE__);
	}
}
// ------------------------------------------------------------------------------------------

void free_ldouble_vector(LDble *vec) {
	if (vec->dat_type == DYNAMIC) {
		free(vec->array);
		vec->array = NULL;
		vec->active_length = 0;
		vec->allocated_length = 0;
	}
	else {
		fprintf(stderr, "Struct in file %s on line %d must be DYNAMIC\n", __FILE__, __LINE__);
	}
}
// ------------------------------------------------------------------------------------------

void free_char_vector(Char *vec) {
	if (vec->dat_type == DYNAMIC) {
		free(vec->array);
		vec->array = NULL;
		vec->active_length = 0;
		vec->allocated_length = 0;
	}
	else {
		fprintf(stderr, "Struct in file %s on line %d must be DYNAMIC\n", __FILE__, __LINE__);
	}
}
// ------------------------------------------------------------------------------------------

void free_uchar_vector(UChar *vec) {
	if (vec->dat_type == DYNAMIC) {
		free(vec->array);
		vec->array = NULL;
		vec->active_length = 0;
		vec->allocated_length = 0;
	}
	else {
		fprintf(stderr, "Struct in file %s on line %d must be DYNAMIC\n", __FILE__, __LINE__);
	}
}
// ------------------------------------------------------------------------------------------

void free_bool_vector(Bool *vec) {
	if (vec->dat_type == DYNAMIC) {
		free(vec->array);
		vec->array = NULL;
		vec->active_length = 0;
		vec->allocated_length = 0;
	}
	else {
		fprintf(stderr, "Struct in file %s on line %d must be DYNAMIC\n", __FILE__, __LINE__);
	}
}
// ------------------------------------------------------------------------------------------

void free_string_vector(String *vec) {
	if (vec != NULL) {
		for (size_t i = 0; i < vec->active_length; i++) {
			free(vec->array[i]);
		}
		free(vec->array);
		vec->array = NULL;
		vec->active_length = 0;
	}
}
// ==========================================================================================
// ==========================================================================================
// delete_type_stack_duplicates functions

void delete_short_vector_duplicates(Short *vec) {
	for (size_t i = 0; i < vec->active_length - 1; i++) {
		for (size_t j = i + 1; j < vec->active_length; j++) {
			if (vec->array[j] == vec->array[i]) {
				pop_short_vector_index(vec, j);
				j--;
			}
		}
	}
}
// --------------------------------------------------------------------------------

void delete_ushort_vector_duplicates(UShort *vec) {
	for (size_t i = 0; i < vec->active_length - 1; i++) {
		for (size_t j = i + 1; j < vec->active_length; j++) {
			if (vec->array[j] == vec->array[i]) {
				pop_ushort_vector_index(vec, j);
				j--;
			}
		}
	}
}
// --------------------------------------------------------------------------------

void delete_int_vector_duplicates(Int *vec) {
	for (size_t i = 0; i < vec->active_length - 1; i++) {
		for (size_t j = i + 1; j < vec->active_length; j++) {
			if (vec->array[j] == vec->array[i]) {
				pop_int_vector_index(vec, j);
				j--;
			}
		}
	}
}
// --------------------------------------------------------------------------------

void delete_uint_vector_duplicates(UInt *vec) {
	for (size_t i = 0; i < vec->active_length - 1; i++) {
		for (size_t j = i + 1; j < vec->active_length; j++) {
			if (vec->array[j] == vec->array[i]) {
				pop_uint_vector_index(vec, j);
				j--;
			}
		}
	}
}
// --------------------------------------------------------------------------------

void delete_long_vector_duplicates(LInt *vec) {
	for (size_t i = 0; i < vec->active_length - 1; i++) {
		for (size_t j = i + 1; j < vec->active_length; j++) {
			if (vec->array[j] == vec->array[i]) {
				pop_long_vector_index(vec, j);
				j--;
			}
		}
	}
}
// --------------------------------------------------------------------------------

void delete_ulong_vector_duplicates(ULInt *vec) {
	for (size_t i = 0; i < vec->active_length - 1; i++) {
		for (size_t j = i + 1; j < vec->active_length; j++) {
			if (vec->array[j] == vec->array[i]) {
				pop_ulong_vector_index(vec, j);
				j--;
			}
		}
	}
}
// --------------------------------------------------------------------------------

void delete_llong_vector_duplicates(LLInt *vec) {
	for (size_t i = 0; i < vec->active_length - 1; i++) {
		for (size_t j = i + 1; j < vec->active_length; j++) {
			if (vec->array[j] == vec->array[i]) {
				pop_llong_vector_index(vec, j);
				j--;
			}
		}
	}
}
// --------------------------------------------------------------------------------

void delete_ullong_vector_duplicates(ULLInt *vec) {
	for (size_t i = 0; i < vec->active_length - 1; i++) {
		for (size_t j = i + 1; j < vec->active_length; j++) {
			if (vec->array[j] == vec->array[i]) {
				pop_ullong_vector_index(vec, j);
				j--;
			}
		}
	}
}
// --------------------------------------------------------------------------------

void delete_float_vector_duplicates(Flt *vec) {
	for (size_t i = 0; i < vec->active_length - 1; i++) {
		for (size_t j = i + 1; j < vec->active_length; j++) {
			if (vec->array[j] == vec->array[i]) {
				pop_float_vector_index(vec, j);
				j--;
			}
		}
	}
}
// --------------------------------------------------------------------------------

void delete_double_vector_duplicates(Dble *vec) {
	for (size_t i = 0; i < vec->active_length - 1; i++) {
		for (size_t j = i + 1; j < vec->active_length; j++) {
			if (vec->array[j] == vec->array[i]) {
				pop_double_vector_index(vec, j);
				j--;
			}
		}
	}
}
// --------------------------------------------------------------------------------

void delete_ldouble_vector_duplicates(LDble *vec) {
	for (size_t i = 0; i < vec->active_length - 1; i++) {
		for (size_t j = i + 1; j < vec->active_length; j++) {
			if (vec->array[j] == vec->array[i]) {
				pop_ldouble_vector_index(vec, j);
				j--;
			}
		}
	}
}
// --------------------------------------------------------------------------------

void delete_char_vector_duplicates(Char *vec) {
	for (size_t i = 0; i < vec->active_length - 1; i++) {
		for (size_t j = i + 1; j < vec->active_length; j++) {
			if (vec->array[j] == vec->array[i]) {
				pop_char_vector_index(vec, j);
				j--;
			}
		}
	}
}
// --------------------------------------------------------------------------------

void delete_bool_vector_duplicates(Bool *vec) {
	for (size_t i = 0; i < vec->active_length - 1; i++) {
		for (size_t j = i + 1; j < vec->active_length; j++) {
			if (vec->array[j] == vec->array[i]) {
				pop_bool_vector_index(vec, j);
				j--;
			}
		}
	}
}
// --------------------------------------------------------------------------------

void delete_string_vector_duplicates(String *vec) {
	int test;
	for (size_t i = 0; i < vec->active_length - 1; i++) {
		for (size_t j = i + 1; j < vec->active_length; j++) {
			test = strcmp(vec->array[i], vec->array[j]);
			if (test == 0) {
				pop_string_vector_index(vec, j);
				j--;
			}
		}
	}
}
// ==========================================================================================
// ==========================================================================================
// REVERSE_TYPE VEC FUNCTIONS

void reverse_short_vector(Short *vec) {
	size_t start = 0;
	size_t end = vec->active_length - 1;
	while (start < end) {
		short int *a = &vec->array[start];
		short int *b = &vec->array[end];
		short int temp= *a;
		*a = *b;
		*b = temp;
		++start;
		--end;
	}
}
// ------------------------------------------------------------------------------------------

void reverse_ushort_vector(UShort *vec) {
	size_t start = 0;
	size_t end = vec->active_length - 1;
	while (start < end) {
		unsigned short int *a = &vec->array[start];
		unsigned short int *b = &vec->array[end];
		unsigned short int temp= *a;
		*a = *b;
		*b = temp;
		++start;
		--end;
	}
}
// ------------------------------------------------------------------------------------------

void reverse_int_vector(Int *vec) {
	size_t start = 0;
	size_t end = vec->active_length - 1;
	while (start < end) {
		int *a = &vec->array[start];
		int *b = &vec->array[end];
		int temp= *a;
		*a = *b;
		*b = temp;
		++start;
		--end;
	}
}
// ------------------------------------------------------------------------------------------

void reverse_uint_vector(UInt *vec) {
	size_t start = 0;
	size_t end = vec->active_length - 1;
	//unsigned int *a = &vec->array[start];
	//unsigned int *b = &vec->array[end];
	while (start < end) {
		unsigned int *a = &vec->array[start];
		unsigned int *b = &vec->array[end];
		unsigned int temp= *a;
		*a = *b;
		*b = temp;
		++start;
		--end;
	}
}
// ------------------------------------------------------------------------------------------

void reverse_long_vector(LInt *vec) {
	size_t start = 0;
	size_t end = vec->active_length - 1;
	while (start < end) {
		long int *a = &vec->array[start];
		long int *b = &vec->array[end];
		long int temp= *a;
		*a = *b;
		*b = temp;
		++start;
		--end;
	}
}
// ------------------------------------------------------------------------------------------

void reverse_ulong_vector(ULInt *vec) {
	size_t start = 0;
	size_t end = vec->active_length - 1;
	while (start < end) {
		unsigned long int *a = &vec->array[start];
		unsigned long int *b = &vec->array[end];
		unsigned long int temp= *a;
		*a = *b;
		*b = temp;
		++start;
		--end;
	}
}
// ------------------------------------------------------------------------------------------

void reverse_llong_vector(LLInt *vec) {
	size_t start = 0;
	size_t end = vec->active_length - 1;
	while (start < end) {
		long long int *a = &vec->array[start];
		long long int *b = &vec->array[end];
		long long int temp= *a;
		*a = *b;
		*b = temp;
		++start;
		--end;
	}
}
// ------------------------------------------------------------------------------------------

void reverse_ullong_vector(ULLInt *vec) {
	size_t start = 0;
	size_t end = vec->active_length - 1;
	while (start < end) {
		unsigned long long int *a = &vec->array[start];
		unsigned long long int *b = &vec->array[end];
		unsigned long long int temp= *a;
		*a = *b;
		*b = temp;
		++start;
		--end;
	}
}
// ------------------------------------------------------------------------------------------

void reverse_float_vector(Flt *vec) {
	size_t start = 0;
	size_t end = vec->active_length - 1;
	while (start < end) {
		float *a = &vec->array[start];
		float *b = &vec->array[end];
		float temp= *a;
		*a = *b;
		*b = temp;
		++start;
		--end;
	}
}
// ------------------------------------------------------------------------------------------

void reverse_double_vector(Dble *vec) {
	size_t start = 0;
	size_t end = vec->active_length - 1;
	while (start < end) {
		double *a = &vec->array[start];
		double *b = &vec->array[end];
		double temp= *a;
		*a = *b;
		*b = temp;
		++start;
		--end;
	}
}
// ------------------------------------------------------------------------------------------

void reverse_ldouble_vector(LDble *vec) {
	size_t start = 0;
	size_t end = vec->active_length - 1;
	while (start < end) {
		long double *a = &vec->array[start];
		long double *b = &vec->array[end];
		long double temp= *a;
		*a = *b;
		*b = temp;
		++start;
		--end;
	}
}
// ------------------------------------------------------------------------------------------

void reverse_char_vector(Char *vec) {
	size_t start = 0;
	size_t end = vec->active_length - 1;
	while (start < end) {
		char *a = &vec->array[start];
		char *b = &vec->array[end];
		char temp= *a;
		*a = *b;
		*b = temp;
		++start;
		--end;
	}
}
// ------------------------------------------------------------------------------------------

void reverse_uchar_vector(UChar *vec) {
	size_t start = 0;
	size_t end = vec->active_length - 1;
	while (start < end) {
		unsigned char *a = &vec->array[start];
		unsigned char *b = &vec->array[end];
		unsigned char temp= *a;
		*a = *b;
		*b = temp;
		++start;
		--end;
	}
}
// ------------------------------------------------------------------------------------------

void reverse_bool_vector(Bool *vec) {
	size_t start = 0;
	size_t end = vec->active_length - 1;
	while (start < end) {
		bool *a = &vec->array[start];
		bool *b = &vec->array[end];
		bool temp= *a;
		*a = *b;
		*b = temp;
		++start;
		--end;
	}
}
// ------------------------------------------------------------------------------------------

void reverse_string_vector(String *vec) {
	size_t start = 0;
	size_t end = vec->active_length - 1;
	while (start < end) {
		push_string_vector(vec, vec->array[end], start);
		push_string_vector(vec, vec->array[start+1], end+1);
		pop_string_vector_index(vec, start+1);
		pop_string_vector_index(vec, end+1);
		++start;
		--end;
	}
}
// ==========================================================================================
// ==========================================================================================
// SORT_TYPE VEC FUNCTIONS

size_t partition_short_vec(short int *arr, size_t low, size_t high, sort_order order) {
	int i = low;
    int j = high;
    short int pivot = arr[low];
    while (i < j)
    {
        while (i < high && pivot >= arr[i] && order == FORWARD)
            i++;
        while (j > low && pivot < arr[j] && order == FORWARD)
            j--;
		while (i < high && pivot <= arr[i] && order == REVERSE)
			i++;
		while (j > low && pivot > arr[j] && order == REVERSE)
			j--;
        if (i < j) {
			short int *a = &arr[i];
			short int *b = &arr[j];
			short int temp = *a;
			*a = *b;
			*b = temp;
		}
    }
			short int *a = &arr[low];
			short int *b = &arr[j];
			short int temp = *a;
			*a = *b;
			*b = temp;
    return j;
}

void sort_short_vector(Short *vec, size_t low, size_t high, sort_order order) {
	if (low < high)
	{
		size_t pivot = partition_short_vec(vec->array, low, high, order);
		sort_short_vector(vec, low, pivot - 1, order);
		sort_short_vector(vec, pivot + 1, high, order);
	}
}
// --------------------------------------------------------------------------------

size_t partition_ushort_vec(unsigned short int *arr, size_t low, size_t high, sort_order order) {
	int i = low;
    int j = high;
    unsigned short int pivot = arr[low];
    while (i < j)
    {
        while (i < high && pivot >= arr[i] && order == FORWARD)
            i++;
        while (j > low && pivot < arr[j] && order == FORWARD)
            j--;
		while (i < high && pivot <= arr[i] && order == REVERSE)
			i++;
		while (j > low && pivot > arr[j] && order == REVERSE)
			j--;
        if (i < j) {
			unsigned short int *a = &arr[i];
			unsigned short int *b = &arr[j];
			unsigned short int temp = *a;
			*a = *b;
			*b = temp;
		}
    }
			unsigned short int *a = &arr[low];
			unsigned short int *b = &arr[j];
			unsigned short int temp = *a;
			*a = *b;
			*b = temp;
    return j;
}

void sort_ushort_vector(UShort *vec, size_t low, size_t high, sort_order order) {
	if (low < high)
	{
		size_t pivot = partition_ushort_vec(vec->array, low, high, order);
		sort_ushort_vector(vec, low, pivot - 1, order);
		sort_ushort_vector(vec, pivot + 1, high, order);
	}
}
// --------------------------------------------------------------------------------

size_t partition_int_vec(int *arr, size_t low, size_t high, sort_order order) {
	int i = low;
    int j = high;
    int pivot = arr[low];
    while (i < j)
    {
        while (i < high && pivot >= arr[i] && order == FORWARD)
            i++;
        while (j > low && pivot < arr[j] && order == FORWARD)
            j--;
		while (i < high && pivot <= arr[i] && order == REVERSE)
			i++;
		while (j > high && pivot > arr[j] && order == REVERSE)
			j--;
        if (i < j) {
			int *a = &arr[i];
			int *b = &arr[j];
			int temp = *a;
			*a = *b;
			*b = temp;
		}
    }
			int *a = &arr[low];
			int *b = &arr[j];
			int temp = *a;
			*a = *b;
			*b = temp;
    return j;
}

void sort_int_vector(Int *vec, size_t low, size_t high, sort_order order) {
	if (low < high)
	{
		size_t pivot = partition_int_vec(vec->array, low, high, order);
		sort_int_vector(vec, low, pivot - 1, order);
		sort_int_vector(vec, pivot + 1, high, order);
	}
}
// --------------------------------------------------------------------------------

size_t partition_uint_vec(unsigned int *arr, size_t low, size_t high, sort_order order) {
	int i = low;
    int j = high;
    unsigned int pivot = arr[low];
    while (i < j)
    {
        while (i < high && pivot >= arr[i] && order == FORWARD)
            i++;
        while (j > low && pivot < arr[j] && order == FORWARD)
            j--;
		while (i < high && pivot <= arr[i] && order == REVERSE)
			i++;
		while (j > low && pivot > arr[j] && order == REVERSE)
			j--;
        if (i < j) {
			unsigned int *a = &arr[i];
			unsigned int *b = &arr[j];
			unsigned int temp = *a;
			*a = *b;
			*b = temp;
		}
    }
			unsigned int *a = &arr[low];
			unsigned int *b = &arr[j];
			unsigned int temp = *a;
			*a = *b;
			*b = temp;
    return j;
}

void sort_uint_vector(UInt *vec, size_t low, size_t high, sort_order order) {
	if (low < high)
	{
		size_t pivot = partition_uint_vec(vec->array, low, high, order);
		sort_uint_vector(vec, low, pivot - 1, order);
		sort_uint_vector(vec, pivot + 1, high, order);
	}
}
// --------------------------------------------------------------------------------

size_t partition_long_vec(long int *arr, size_t low, size_t high, sort_order order) {
	int i = low;
    int j = high;
    long int pivot = arr[low];
    while (i < j)
    {
        while (i < high && pivot >= arr[i] && order == FORWARD)
            i++;
        while (j > low && pivot < arr[j] && order == FORWARD)
            j--;
		while (i < high && pivot <= arr[i] && order == REVERSE)
			i++;
		while (j > low && pivot > arr[j] && order == REVERSE)
			j--;
        if (i < j) {
			long int *a = &arr[i];
			long int *b = &arr[j];
			long int temp = *a;
			*a = *b;
			*b = temp;
		}
    }
			long int *a = &arr[low];
			long int *b = &arr[j];
			long int temp = *a;
			*a = *b;
			*b = temp;
    return j;
}

void sort_long_vector(LInt *vec, size_t low, size_t high, sort_order order) {
	if (low < high)
	{
		size_t pivot = partition_long_vec(vec->array, low, high, order);
		sort_long_vector(vec, low, pivot - 1, order);
		sort_long_vector(vec, pivot + 1, high, order);
	}
}
// --------------------------------------------------------------------------------

size_t partition_ulong_vec(unsigned long int *arr, size_t low, size_t high, sort_order order) {
	int i = low;
    int j = high;
    unsigned long int pivot = arr[low];
    while (i < j)
    {
        while (i < high && pivot >= arr[i] && order == FORWARD)
            i++;
        while (j > low && pivot < arr[j] && order == FORWARD)
            j--;
		while (i < high && pivot <= arr[i] && order == REVERSE)
			i++;
		while (j > low && pivot > arr[j] && order == REVERSE)
			j--;
        if (i < j) {
			unsigned long int *a = &arr[i];
			unsigned long int *b = &arr[j];
			unsigned long int temp = *a;
			*a = *b;
			*b = temp;
		}
    }
			unsigned long int *a = &arr[low];
			unsigned long int *b = &arr[j];
			unsigned long int temp = *a;
			*a = *b;
			*b = temp;
    return j;
}

void sort_ulong_vector(ULInt *vec, size_t low, size_t high, sort_order order) {
	if (low < high)
	{
		size_t pivot = partition_ulong_vec(vec->array, low, high, order);
		sort_ulong_vector(vec, low, pivot - 1, order);
		sort_ulong_vector(vec, pivot + 1, high, order);
	}
}
// --------------------------------------------------------------------------------

size_t partition_llong_vec(long long int *arr, size_t low, size_t high, sort_order order) {
	int i = low;
    int j = high;
    long long int pivot = arr[low];
    while (i < j)
    {
        while (i < high && pivot >= arr[i] && order == FORWARD)
            i++;
        while (j > low && pivot < arr[j] && order == FORWARD)
            j--;
		while (i < high && pivot <= arr[i] && order == REVERSE)
			i++;
		while (j > low && pivot > arr[j] && order == REVERSE)
			j--;
        if (i < j) {
			long long int *a = &arr[i];
			long long int *b = &arr[j];
			long long int temp = *a;
			*a = *b;
			*b = temp;
		}
    }
			long long int *a = &arr[low];
			long long int *b = &arr[j];
			long long int temp = *a;
			*a = *b;
			*b = temp;
    return j;
}

void sort_llong_vector(LLInt *vec, size_t low, size_t high, sort_order order) {
	if (low < high)
	{
		size_t pivot = partition_llong_vec(vec->array, low, high, order);
		sort_llong_vector(vec, low, pivot - 1, order);
		sort_llong_vector(vec, pivot + 1, high, order);
	}
}
// --------------------------------------------------------------------------------

size_t partition_ullong_vec(unsigned long long int *arr, size_t low, size_t high, sort_order order) {
	int i = low;
    int j = high;
    unsigned long long int pivot = arr[low];
    while (i < j)
    {
        while (i < high && pivot >= arr[i] && order == FORWARD)
            i++;
        while (j > low && pivot < arr[j] && order == FORWARD)
            j--;
		while (i < high && pivot <= arr[i] && order == REVERSE)
			i++;
		while (j > low && pivot > arr[j] && order == REVERSE)
			j--;
        if (i < j) {
			unsigned long long int *a = &arr[i];
			unsigned long long int *b = &arr[j];
			unsigned long long int temp = *a;
			*a = *b;
			*b = temp;
		}
    }
			unsigned long long int *a = &arr[low];
			unsigned long long int *b = &arr[j];
			unsigned long long int temp = *a;
			*a = *b;
			*b = temp;
    return j;
}

void sort_ullong_vector(ULLInt *vec, size_t low, size_t high, sort_order order) {
	if (low < high)
	{
		size_t pivot = partition_ullong_vec(vec->array, low, high, order);
		sort_ullong_vector(vec, low, pivot - 1, order);
		sort_ullong_vector(vec, pivot + 1, high, order);
	}
}
// --------------------------------------------------------------------------------

size_t partition_float_vec(float *arr, size_t low, size_t high, sort_order order) {
	int i = low;
    int j = high;
    float pivot = arr[low];
    while (i < j)
    {
        while (i < high && pivot >= arr[i] && order == FORWARD)
            i++;
        while (j > low && pivot < arr[j] && order == FORWARD)
            j--;
		while (i < high && pivot <= arr[i] && order == REVERSE)
			i++;
		while (j > low && pivot > arr[j] && order == REVERSE)
			j--;
        if (i < j) {
			float *a = &arr[i];
			float *b = &arr[j];
			float temp = *a;
			*a = *b;
			*b = temp;
		}
    }
			float *a = &arr[low];
			float *b = &arr[j];
			float temp = *a;
			*a = *b;
			*b = temp;
    return j;
}

void sort_float_vector(Flt *vec, size_t low, size_t high, sort_order order) {
	if (low < high)
	{
		size_t pivot = partition_float_vec(vec->array, low, high, order);
		sort_float_vector(vec, low, pivot - 1, order);
		sort_float_vector(vec, pivot + 1, high, order);
	}
}
// --------------------------------------------------------------------------------

size_t partition_double_vec(double *arr, size_t low, size_t high, sort_order order) {
	int i = low;
    int j = high;
    double pivot = arr[low];
    while (i < j)
    {
        while (i < high && pivot >= arr[i] && order == FORWARD)
            i++;
        while (j > low && pivot < arr[j] && order == FORWARD)
            j--;
		while (i < high && pivot <= arr[i] && order == REVERSE)
			i++;
		while (j > low && pivot > arr[j] && order == REVERSE)
			j--;
        if (i < j) {
			double *a = &arr[i];
			double *b = &arr[j];
			double temp = *a;
			*a = *b;
			*b = temp;
		}
    }
			double *a = &arr[low];
			double *b = &arr[j];
			double temp = *a;
			*a = *b;
			*b = temp;
    return j;
}

void sort_double_vector(Dble *vec, size_t low, size_t high, sort_order order) {
	if (low < high)
	{
		size_t pivot = partition_double_vec(vec->array, low, high, order);
		sort_double_vector(vec, low, pivot - 1, order);
		sort_double_vector(vec, pivot + 1, high, order);
	}
}
// --------------------------------------------------------------------------------

size_t partition_ldouble_vec(long double *arr, size_t low, size_t high, sort_order order) {
	int i = low;
    int j = high;
    long double pivot = arr[low];
    while (i < j)
    {
        while (i < high && pivot >= arr[i] && order == FORWARD)
            i++;
        while (j > low && pivot < arr[j] && order == FORWARD)
            j--;
		while (i < high && pivot <= arr[i] && order == REVERSE)
			i++;
		while (j > low && pivot > arr[j] && order == REVERSE)
			j--;
        if (i < j) {
			long double *a = &arr[i];
			long double *b = &arr[j];
			long double temp = *a;
			*a = *b;
			*b = temp;
		}
    }
			long double *a = &arr[low];
			long double *b = &arr[j];
			long double temp = *a;
			*a = *b;
			*b = temp;
    return j;
}

void sort_ldouble_vector(LDble *vec, size_t low, size_t high, sort_order order) {
	if (low < high)
	{
		size_t pivot = partition_ldouble_vec(vec->array, low, high, order);
		sort_ldouble_vector(vec, low, pivot - 1, order);
		sort_ldouble_vector(vec, pivot + 1, high, order);
	}
}
// --------------------------------------------------------------------------------

size_t partition_char_vec(char *arr, size_t low, size_t high, sort_order order) {
	int i = low;
    int j = high;
    char pivot = arr[low];
    while (i < j)
    {
        while (i < high && pivot >= arr[i] && order == FORWARD)
            i++;
        while (j > low && pivot < arr[j] && order == FORWARD)
            j--;
		while (i < high && pivot <= arr[i] && order == REVERSE)
			i++;
		while (j > low && pivot > arr[j] && order == REVERSE)
			j--;
        if (i < j) {
			char *a = &arr[i];
			char *b = &arr[j];
			char temp = *a;
			*a = *b;
			*b = temp;
		}
    }
			char *a = &arr[low];
			char *b = &arr[j];
			char temp = *a;
			*a = *b;
			*b = temp;
    return j;
}

void sort_char_vector(Char *vec, size_t low, size_t high, sort_order order) {
	if (low < high)
	{
		size_t pivot = partition_char_vec(vec->array, low, high, order);
		sort_char_vector(vec, low, pivot - 1, order);
		sort_char_vector(vec, pivot + 1, high, order);
	}
}
// ------------------------------------------------------------------------------------------

size_t partition_uchar_vec(unsigned char *arr, size_t low, size_t high, sort_order order) {
	int i = low;
    int j = high;
    unsigned char pivot = arr[low];
    while (i < j)
    {
        while (i < high && pivot >= arr[i] && order == FORWARD)
            i++;
        while (j > low && pivot < arr[j] && order == FORWARD)
            j--;
		while (i < high && pivot <= arr[i] && order == REVERSE)
			i++;
		while (j > low && pivot > arr[j] && order == REVERSE)
			j--;
        if (i < j) {
			unsigned char *a = &arr[i];
			unsigned char *b = &arr[j];
			unsigned char temp = *a;
			*a = *b;
			*b = temp;
		}
    }
			unsigned char *a = &arr[low];
			unsigned char *b = &arr[j];
			unsigned char temp = *a;
			*a = *b;
			*b = temp;
    return j;
}

void sort_uchar_vector(UChar *vec, size_t low, size_t high, sort_order order) {
	if (low < high)
	{
		size_t pivot = partition_uchar_vec(vec->array, low, high, order);
		sort_uchar_vector(vec, low, pivot - 1, order);
		sort_uchar_vector(vec, pivot + 1, high, order);
	}
}
// ------------------------------------------------------------------------------------------

static int forward_comparator(const void* str1, const void* str2) {
	if (strcmp(*(const char**) str1, *(const char**)str2) >=0)
		return 1;
	else
		return 0;
}

static int reverse_comparator(const void* str1, const void* str2) {
	if (strcmp(*(const char**) str1, *(const char**)str2) <=0)
		return 1;
	else
		return 0;
}

void sort_string_vector(String *vec, size_t low, size_t high, sort_order order) {
	if (order == FORWARD)
		qsort(vec->array, vec->active_length, sizeof(const char*), forward_comparator);
	else
		qsort(vec->array, vec->active_length, sizeof(const char*), reverse_comparator);
}
// ==========================================================================================
// ==========================================================================================
// FREE_TYPE_VEC FUNCTIONS

char sum_char_vector(Char *vec) {
	char sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
	}
	return sum;
}
// ------------------------------------------------------------------------------------------

unsigned char sum_uchar_vector(UChar *vec) {
	unsigned char sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
	}
	return sum;
}
// ------------------------------------------------------------------------------------------

short int sum_short_vector(Short *vec) {
	short int sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
	}
	return sum;
}
// ------------------------------------------------------------------------------------------

unsigned short int sum_ushort_vector(UShort *vec) {
	unsigned short int sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
	}
	return sum;
}
// ------------------------------------------------------------------------------------------

int sum_int_vector(Int *vec) {
	int sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
	}
	return sum;
}
// ------------------------------------------------------------------------------------------

unsigned int sum_uint_vector(UInt *vec) {
	unsigned int sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
	}
	return sum;
}
// ------------------------------------------------------------------------------------------

long int sum_long_vector(LInt *vec) {
	long int sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
	}
	return sum;
}
// ------------------------------------------------------------------------------------------

unsigned long int sum_ulong_vector(ULInt *vec) {
	unsigned long int sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
	}
	return sum;
}
// ------------------------------------------------------------------------------------------

long long int sum_llong_vector(LLInt *vec) {
	long long int sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
	}
	return sum;
}
// ------------------------------------------------------------------------------------------

unsigned long long int sum_ullong_vector(ULLInt *vec) {
	unsigned long long int sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
	}
	return sum;
}
// ------------------------------------------------------------------------------------------

float sum_float_vector(Flt *vec) {
	float sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
	}
	return sum;
}
// ------------------------------------------------------------------------------------------

double sum_double_vector(Dble *vec) {
	double sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
	}
	return sum;
}
// ------------------------------------------------------------------------------------------

long double sum_ldouble_vector(LDble *vec) {
	long double sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
	}
	return sum;
}
// ==========================================================================================
// ==========================================================================================
// CUMSUM_TYPE_VEC FUNCTIONS

Char cumsum_char_vector(Char *vec) {
	Char new_vec;
	init_char_vector(&new_vec, vec->active_length);
	char sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
		push_char_vector(&new_vec, sum, new_vec.active_length);
	}
	return new_vec;
}
// ------------------------------------------------------------------------------------------

UChar cumsum_uchar_vector(UChar *vec) {
	UChar new_vec;
	init_uchar_vector(&new_vec, vec->active_length);
	unsigned char sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
		push_uchar_vector(&new_vec, sum, new_vec.active_length);
	}
	return new_vec;
}
// -----------------------------------------------------------------------------------------

Short cumsum_short_vector(Short *vec) {
	Short new_vec;
	init_short_vector(&new_vec, vec->active_length);
	short int sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
		push_short_vector(&new_vec, sum, new_vec.active_length);
	}
	return new_vec;
}
// --------------------------------------------------------------------------------

UShort cumsum_ushort_vector(UShort *vec) {
	UShort new_vec;
	init_ushort_vector(&new_vec, vec->active_length);
	unsigned short int sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
		push_ushort_vector(&new_vec, sum, new_vec.active_length);
	}
	return new_vec;
}
// --------------------------------------------------------------------------------

Int cumsum_int_vector(Int *vec) {
	Int new_vec;
	init_int_vector(&new_vec, vec->active_length);
	int sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
		push_int_vector(&new_vec, sum, new_vec.active_length);
	}
	return new_vec;
}
// --------------------------------------------------------------------------------

UInt cumsum_uint_vector(UInt *vec) {
	UInt new_vec;
	init_uint_vector(&new_vec, vec->active_length);
	unsigned int sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
		push_uint_vector(&new_vec, sum, new_vec.active_length);
	}
	return new_vec;
}
// --------------------------------------------------------------------------------

LInt cumsum_long_vector(LInt *vec) {
	LInt new_vec;
	init_long_vector(&new_vec, vec->active_length);
	long int sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
		push_long_vector(&new_vec, sum, new_vec.active_length);
	}
	return new_vec;
}
// --------------------------------------------------------------------------------

ULInt cumsum_ulong_vector(ULInt *vec) {
	ULInt new_vec;
	init_ulong_vector(&new_vec, vec->active_length);
	unsigned long int sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
		push_ulong_vector(&new_vec, sum, new_vec.active_length);
	}
	return new_vec;
}
// --------------------------------------------------------------------------------

LLInt cumsum_llong_vector(LLInt *vec) {
	LLInt new_vec;
	init_llong_vector(&new_vec, vec->active_length);
	long long int sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
		push_llong_vector(&new_vec, sum, new_vec.active_length);
	}
	return new_vec;
}
// --------------------------------------------------------------------------------

ULLInt cumsum_ullong_vector(ULLInt *vec) {
	ULLInt new_vec;
	init_ullong_vector(&new_vec, vec->active_length);
	unsigned long long int sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
		push_ullong_vector(&new_vec, sum, new_vec.active_length);
	}
	return new_vec;
}
// --------------------------------------------------------------------------------

Flt cumsum_float_vector(Flt *vec) {
	Flt new_vec;
	init_float_vector(&new_vec, vec->active_length);
	float sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
		push_float_vector(&new_vec, sum, new_vec.active_length);
	}
	return new_vec;
}
// --------------------------------------------------------------------------------

Dble cumsum_double_vector(Dble *vec) {
	Dble new_vec;
	init_double_vector(&new_vec, vec->active_length);
	double sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
		push_double_vector(&new_vec, sum, new_vec.active_length);
	}
	return new_vec;
}
// --------------------------------------------------------------------------------

LDble cumsum_ldouble_vector(LDble *vec) {
	LDble new_vec;
	init_ldouble_vector(&new_vec, vec->active_length);
	long double sum = 0;
	for (size_t i = 0; i < vec->active_length; i++) {
		sum += vec->array[i];
		push_ldouble_vector(&new_vec, sum, new_vec.active_length);
	}
	return new_vec;
}
// ==========================================================================================
// ==========================================================================================
// AVERAGE_TYPE_VEC FUNCTIONS

char average_char_vector(Char *vec) {
	char sum = sum_char_vector(vec);
	char avg = sum / (char)vec->active_length;
	return avg;
}
// ------------------------------------------------------------------------------------------

unsigned char average_uchar_vector(UChar *vec) {
	unsigned char sum = sum_uchar_vector(vec);
	unsigned char avg = sum / (unsigned char)vec->active_length;
	return avg;
}
// ------------------------------------------------------------------------------------------
float average_short_vector(Short *vec) {
	short int sum = sum_short_vector(vec);
	float avg = sum / (float)vec->active_length;
	return avg;
}
// --------------------------------------------------------------------------------

float average_ushort_vector(UShort *vec) {
	unsigned short int sum = sum_ushort_vector(vec);
	float avg = sum / (float)vec->active_length;
	return avg;
}
// --------------------------------------------------------------------------------

float average_int_vector(Int *vec) {
	int sum = sum_int_vector(vec);
	float avg = sum / (float)vec->active_length;
	return avg;
}
// --------------------------------------------------------------------------------

float average_uint_vector(UInt *vec) {
	unsigned int sum = sum_uint_vector(vec);
	float avg = sum / (float)vec->active_length;
	return avg;
}
// --------------------------------------------------------------------------------

double average_long_vector(LInt *vec) {
	long int sum = sum_long_vector(vec);
	double avg = sum / (double)vec->active_length;
	return avg;
}
// --------------------------------------------------------------------------------

double average_ulong_vector(ULInt *vec) {
	unsigned long int sum = sum_ulong_vector(vec);
	double avg = sum / (double)vec->active_length;
	return avg;
}
// --------------------------------------------------------------------------------

long double average_llong_vector(LLInt *vec) {
	long long int sum = sum_llong_vector(vec);
	long double avg = sum / (long double)vec->active_length;
	return avg;
}
// --------------------------------------------------------------------------------

long double average_ullong_vector(ULLInt *vec) {
	unsigned long long int sum = sum_ullong_vector(vec);
	long double avg = sum / (long double)vec->active_length;
	return avg;
}
// --------------------------------------------------------------------------------

float average_float_vector(Flt *vec) {
	float sum = sum_float_vector(vec);
	float avg = sum / (float)vec->active_length;
	return avg;
}
// --------------------------------------------------------------------------------

double average_double_vector(Dble *vec) {
	double sum = sum_double_vector(vec);
	double avg = sum / (double)vec->active_length;
	return avg;
}
// --------------------------------------------------------------------------------

long double average_ldouble_vector(LDble *vec) {
	long double sum = sum_ldouble_vector(vec);
	long double avg = sum / (long double)vec->active_length;
	return avg;
}
// ==========================================================================================
// ==========================================================================================
// STDEV_TYPE_VEC FUNCTIONS

char stdev_char_vector(Char *vec) {
	char average = average_char_vector(vec);
	char var = 0.0;
	char value;
	for (size_t i = 0; i < vec->active_length; i++) {
		value = (float)vec->array[i];
		var += ((value - average) * (value - average));
	}
	char interm = (1.0f / ((float)vec->active_length - 1.0f)) * var;

	char number = interm;
    char start = 0.0f, end = number;
    char mid;

    // To store the answer
    char ans = 0.;
    // To find integral part of square
    // root of number
    while (start <= end) {
        // Find mid
        mid = (start + end) / 2;
        // If number is perfect square
        // then break
        if (mid * mid == number) {
            ans = mid;
            break;
        }
        // Increment start if integral
        // part lies on right side
        // of the mid
        if (mid * mid < number) {
          //first start value should be added to answer
            ans=start;
          //then start should be changed
            start = mid + 1.f;
        }
        // Decrement end if integral part
        // lies on the left side of the mid
        else {
            end = mid - 1.f;
        }
    }
    // To find the fractional part
    // of square root upto 5 decimal
    float increment = 0.1f;
    for (int i = 0; i < 5; i++) {
        while (ans * ans <= number) {
            ans += increment;
        }
        // Loop terminates,
        // when ans * ans > number
        ans = ans - increment;
        increment = increment / 10;
    }
	return ans;
}
// ------------------------------------------------------------------------------------------

char stdev_uchar_vector(UChar *vec) {
	char average = average_uchar_vector(vec);
	char var = 0.0;
	char value;
	for (size_t i = 0; i < vec->active_length; i++) {
		value = (float)vec->array[i];
		var += ((value - average) * (value - average));
	}
	char interm = (1.0f / ((float)vec->active_length - 1.0f)) * var;

	char number = interm;
    char start = 0.0f, end = number;
    char mid;

    // To store the answer
    char ans = 0.;
    // To find integral part of square
    // root of number
    while (start <= end) {
        // Find mid
        mid = (start + end) / 2;
        // If number is perfect square
        // then break
        if (mid * mid == number) {
            ans = mid;
            break;
        }
        // Increment start if integral
        // part lies on right side
        // of the mid
        if (mid * mid < number) {
          //first start value should be added to answer
            ans=start;
          //then start should be changed
            start = mid + 1.f;
        }
        // Decrement end if integral part
        // lies on the left side of the mid
        else {
            end = mid - 1.f;
        }
    }
    // To find the fractional part
    // of square root upto 5 decimal
    float increment = 0.1f;
    for (int i = 0; i < 5; i++) {
        while (ans * ans <= number) {
            ans += increment;
        }
        // Loop terminates,
        // when ans * ans > number
        ans = ans - increment;
        increment = increment / 10;
    }
	return ans;
}
// ------------------------------------------------------------------------------------------

float stdev_short_vector(Short *vec) {
	float average = average_short_vector(vec);
	float var = 0.0;
	float value;
	for (size_t i = 0; i < vec->active_length; i++) {
		value = (float)vec->array[i];
		var += ((value - average) * (value - average));
	}
	float interm = (1.0f / ((float)vec->active_length - 1.0f)) * var;

	float number = interm;
    float start = 0.0f, end = number;
    float mid;

    // To store the answer
    float ans = 0.;
    // To find integral part of square
    // root of number
    while (start <= end) {
        // Find mid
        mid = (start + end) / 2;
        // If number is perfect square
        // then break
        if (mid * mid == number) {
            ans = mid;
            break;
        }
        // Increment start if integral
        // part lies on right side
        // of the mid
        if (mid * mid < number) {
          //first start value should be added to answer
            ans=start;
          //then start should be changed
            start = mid + 1.f;
        }
        // Decrement end if integral part
        // lies on the left side of the mid
        else {
            end = mid - 1.f;
        }
    }
    // To find the fractional part
    // of square root upto 5 decimal
    float increment = 0.1f;
    for (int i = 0; i < 5; i++) {
        while (ans * ans <= number) {
            ans += increment;
        }
        // Loop terminates,
        // when ans * ans > number
        ans = ans - increment;
        increment = increment / 10;
    }
	return ans;
}
// --------------------------------------------------------------------------------

float stdev_ushort_vector(UShort *vec) {
	float average = average_ushort_vector(vec);
	float var = 0.0;
	float value;
	for (size_t i = 0; i < vec->active_length; i++) {
		value = (float)vec->array[i];
		var += ((value - average) * (value - average));
	}
	float interm = (1.0f / ((float)vec->active_length - 1.0f)) * var;

	float number = interm;
    float start = 0.0f, end = number;
    float mid;

    // To store the answer
    float ans = 0.;
    // To find integral part of square
    // root of number
    while (start <= end) {
        // Find mid
        mid = (start + end) / 2;
        // If number is perfect square
        // then break
        if (mid * mid == number) {
            ans = mid;
            break;
        }
        // Increment start if integral
        // part lies on right side
        // of the mid
        if (mid * mid < number) {
          //first start value should be added to answer
            ans=start;
          //then start should be changed
            start = mid + 1.f;
        }
        // Decrement end if integral part
        // lies on the left side of the mid
        else {
            end = mid - 1.f;
        }
    }
    // To find the fractional part
    // of square root upto 5 decimal
    float increment = 0.1;
    for (int i = 0; i < 5; i++) {
        while (ans * ans <= number) {
            ans += increment;
        }
        // Loop terminates,
        // when ans * ans > number
        ans = ans - increment;
        increment = increment / 10;
    }
	return ans;
}
// --------------------------------------------------------------------------------

float stdev_int_vector(Int *vec) {
	float average = average_int_vector(vec);
	float var = 0.0;
	float value;
	for (size_t i = 0; i < vec->active_length; i++) {
		value = (float)vec->array[i];
		var += ((value - average) * (value - average));
	}
	float interm = (1.0f / ((float)vec->active_length - 1.0f)) * var;

	float number = interm;
    float start = 0.0f, end = number;
    float mid;

    // To store the answer
    float ans = 0.;
    // To find integral part of square
    // root of number
    while (start <= end) {
        // Find mid
        mid = (start + end) / 2;
        // If number is perfect square
        // then break
        if (mid * mid == number) {
            ans = mid;
            break;
        }
        // Increment start if integral
        // part lies on right side
        // of the mid
        if (mid * mid < number) {
          //first start value should be added to answer
            ans=start;
          //then start should be changed
            start = mid + 1.f;
        }
        // Decrement end if integral part
        // lies on the left side of the mid
        else {
            end = mid - 1.f;
        }
    }
    // To find the fractional part
    // of square root upto 5 decimal
    float increment = 0.1;
    for (int i = 0; i < 5; i++) {
        while (ans * ans <= number) {
            ans += increment;
        }
        // Loop terminates,
        // when ans * ans > number
        ans = ans - increment;
        increment = increment / 10;
    }
	return ans;
}
// --------------------------------------------------------------------------------

float stdev_uint_vector(UInt *vec) {
	float average = average_uint_vector(vec);
	float var = 0.0;
	float value;
	for (size_t i = 0; i < vec->active_length; i++) {
		value = (float)vec->array[i];
		var += ((value - average) * (value - average));
	}
	float interm = (1.0f / ((float)vec->active_length - 1.0f)) * var;

	float number = interm;
    float start = 0.0f, end = number;
    float mid;

    // To store the answer
    float ans = 0.;
    // To find integral part of square
    // root of number
    while (start <= end) {
        // Find mid
        mid = (start + end) / 2;
        // If number is perfect square
        // then break
        if (mid * mid == number) {
            ans = mid;
            break;
        }
        // Increment start if integral
        // part lies on right side
        // of the mid
        if (mid * mid < number) {
          //first start value should be added to answer
            ans=start;
          //then start should be changed
            start = mid + 1.f;
        }
        // Decrement end if integral part
        // lies on the left side of the mid
        else {
            end = mid - 1.f;
        }
    }
    // To find the fractional part
    // of square root upto 5 decimal
    float increment = 0.1;
    for (int i = 0; i < 5; i++) {
        while (ans * ans <= number) {
            ans += increment;
        }
        // Loop terminates,
        // when ans * ans > number
        ans = ans - increment;
        increment = increment / 10;
    }
	return ans;
}
// --------------------------------------------------------------------------------

double stdev_long_vector(LInt *vec) {
	double average = average_long_vector(vec);
	double var = 0.0;
	double value;
	for (size_t i = 0; i < vec->active_length; i++) {
		value = (double)vec->array[i];
		var += ((value - average) * (value - average));
	}
	double interm = (1.0 / ((double)vec->active_length - 1.0)) * var;

	double number = interm;
    double start = 0.0, end = number;
    double mid;

    // To store the answer
    double ans = 0.;
    // To find integral part of square
    // root of number
    while (start <= end) {
        // Find mid
        mid = (start + end) / 2;
        // If number is perfect square
        // then break
        if (mid * mid == number) {
            ans = mid;
            break;
        }
        // Increment start if integral
        // part lies on right side
        // of the mid
        if (mid * mid < number) {
          //first start value should be added to answer
            ans=start;
          //then start should be changed
            start = mid + 1.;
        }
        // Decrement end if integral part
        // lies on the left side of the mid
        else {
            end = mid - 1.;
        }
    }
    // To find the fractional part
    // of square root upto 5 decimal
    double increment = 0.1;
    for (int i = 0; i < 5; i++) {
        while (ans * ans <= number) {
            ans += increment;
        }
        // Loop terminates,
        // when ans * ans > number
        ans = ans - increment;
        increment = increment / 10;
    }
	return ans;
}
// --------------------------------------------------------------------------------

double stdev_ulong_vector(ULInt *vec) {
	double average = average_ulong_vector(vec);
	double var = 0.0;
	double value;
	for (size_t i = 0; i < vec->active_length; i++) {
		value = (double)vec->array[i];
		var += ((value - average) * (value - average));
	}
	double interm = (1.0 / ((double)vec->active_length - 1.0)) * var;

	double number = interm;
    double start = 0.0, end = number;
    double mid;

    // To store the answer
    double ans = 0.;
    // To find integral part of square
    // root of number
    while (start <= end) {
        // Find mid
        mid = (start + end) / 2;
        // If number is perfect square
        // then break
        if (mid * mid == number) {
            ans = mid;
            break;
        }
        // Increment start if integral
        // part lies on right side
        // of the mid
        if (mid * mid < number) {
          //first start value should be added to answer
            ans=start;
          //then start should be changed
            start = mid + 1.;
        }
        // Decrement end if integral part
        // lies on the left side of the mid
        else {
            end = mid - 1.;
        }
    }
    // To find the fractional part
    // of square root upto 5 decimal
    double increment = 0.1;
    for (int i = 0; i < 5; i++) {
        while (ans * ans <= number) {
            ans += increment;
        }
        // Loop terminates,
        // when ans * ans > number
        ans = ans - increment;
        increment = increment / 10;
    }
	return ans;
}
// --------------------------------------------------------------------------------

long double stdev_llong_vector(LLInt *vec) {
	long double average = average_llong_vector(vec);
	long double var = 0.0;
	long double value;
	for (size_t i = 0; i < vec->active_length; i++) {
		value = (long double)vec->array[i];
		var += ((value - average) * (value - average));
	}
	long double interm = (1.0 / ((long double)vec->active_length - 1.0)) * var;

	long double number = interm;
    long double start = 0.0, end = number;
    long double mid;

    // To store the answer
    long double ans = 0.;
    // To find integral part of square
    // root of number
    while (start <= end) {
        // Find mid
        mid = (start + end) / 2;
        // If number is perfect square
        // then break
        if (mid * mid == number) {
            ans = mid;
            break;
        }
        // Increment start if integral
        // part lies on right side
        // of the mid
        if (mid * mid < number) {
          //first start value should be added to answer
            ans=start;
          //then start should be changed
            start = mid + 1.;
        }
        // Decrement end if integral part
        // lies on the left side of the mid
        else {
            end = mid - 1.;
        }
    }
    // To find the fractional part
    // of square root upto 5 decimal
    long double increment = 0.1;
    for (int i = 0; i < 5; i++) {
        while (ans * ans <= number) {
            ans += increment;
        }
        // Loop terminates,
        // when ans * ans > number
        ans = ans - increment;
        increment = increment / 10;
    }
	return ans;
}
// --------------------------------------------------------------------------------

long double stdev_ullong_vector(ULLInt *vec) {
	long double average = average_ullong_vector(vec);
	long double var = 0.0;
	long double value;
	for (size_t i = 0; i < vec->active_length; i++) {
		value = (long double)vec->array[i];
		var += ((value - average) * (value - average));
	}
	long double interm = (1.0 / ((long double)vec->active_length - 1.0)) * var;

	long double number = interm;
    long double start = 0.0, end = number;
    long double mid;

    // To store the answer
    long double ans = 0.;
    // To find integral part of square
    // root of number
    while (start <= end) {
        // Find mid
        mid = (start + end) / 2;
        // If number is perfect square
        // then break
        if (mid * mid == number) {
            ans = mid;
            break;
        }
        // Increment start if integral
        // part lies on right side
        // of the mid
        if (mid * mid < number) {
          //first start value should be added to answer
            ans=start;
          //then start should be changed
            start = mid + 1.;
        }
        // Decrement end if integral part
        // lies on the left side of the mid
        else {
            end = mid - 1.;
        }
    }
    // To find the fractional part
    // of square root upto 5 decimal
    long double increment = 0.1;
    for (int i = 0; i < 5; i++) {
        while (ans * ans <= number) {
            ans += increment;
        }
        // Loop terminates,
        // when ans * ans > number
        ans = ans - increment;
        increment = increment / 10;
    }
	return ans;
}
// --------------------------------------------------------------------------------

float stdev_float_vector(Flt *vec) {
	float average = average_float_vector(vec);
	float var = 0.0;
	float value;
	for (size_t i = 0; i < vec->active_length; i++) {
		value = (float)vec->array[i];
		var += ((value - average) * (value - average));
	}
	float interm = (1.0f / ((float)vec->active_length - 1.0f)) * var;

	float number = interm;
    float start = 0.0, end = number;
    float mid;

    // To store the answer
    float ans = 0.;
    // To find integral part of square
    // root of number
    while (start <= end) {
        // Find mid
        mid = (start + end) / 2;
        // If number is perfect square
        // then break
        if (mid * mid == number) {
            ans = mid;
            break;
        }
        // Increment start if integral
        // part lies on right side
        // of the mid
        if (mid * mid < number) {
          //first start value should be added to answer
            ans=start;
          //then start should be changed
            start = mid + 1.f;
        }
        // Decrement end if integral part
        // lies on the left side of the mid
        else {
            end = mid - 1.f;
        }
    }
    // To find the fractional part
    // of square root upto 5 decimal
    float increment = 0.1;
    for (int i = 0; i < 5; i++) {
        while (ans * ans <= number) {
            ans += increment;
        }
        // Loop terminates,
        // when ans * ans > number
        ans = ans - increment;
        increment = increment / 10;
    }
	return ans;
}
// --------------------------------------------------------------------------------

double stdev_double_vector(Dble *vec) {
	double average = average_double_vector(vec);
	double var = 0.0;
	double value;
	for (size_t i = 0; i < vec->active_length; i++) {
		value = (double)vec->array[i];
		var += ((value - average) * (value - average));
	}
	double interm = (1.0 / ((double)vec->active_length - 1.0)) * var;

	double number = interm;
    double start = 0.0, end = number;
    double mid;

    // To store the answer
    double ans = 0.;
    // To find integral part of square
    // root of number
    while (start <= end) {
        // Find mid
        mid = (start + end) / 2;
        // If number is perfect square
        // then break
        if (mid * mid == number) {
            ans = mid;
            break;
        }
        // Increment start if integral
        // part lies on right side
        // of the mid
        if (mid * mid < number) {
          //first start value should be added to answer
            ans=start;
          //then start should be changed
            start = mid + 1.;
        }
        // Decrement end if integral part
        // lies on the left side of the mid
        else {
            end = mid - 1.;
        }
    }
    // To find the fractional part
    // of square root upto 5 decimal
    double increment = 0.1;
    for (int i = 0; i < 5; i++) {
        while (ans * ans <= number) {
            ans += increment;
        }
        // Loop terminates,
        // when ans * ans > number
        ans = ans - increment;
        increment = increment / 10;
    }
	return ans;
}
// --------------------------------------------------------------------------------

long double stdev_ldouble_vector(LDble *vec) {
	long double average = average_ldouble_vector(vec);
	long double var = 0.0;
	long double value;
	for (size_t i = 0; i < vec->active_length; i++) {
		value = (long double)vec->array[i];
		var += ((value - average) * (value - average));
	}
	long double interm = (1.0 / ((long double)vec->active_length - 1.0)) * var;

	long double number = interm;
    long double start = 0.0, end = number;
    long double mid;

    // To store the answer
    long double ans = 0.;
    // To find integral part of square
    // root of number
    while (start <= end) {
        // Find mid
        mid = (start + end) / 2;
        // If number is perfect square
        // then break
        if (mid * mid == number) {
            ans = mid;
            break;
        }
        // Increment start if integral
        // part lies on right side
        // of the mid
        if (mid * mid < number) {
          //first start value should be added to answer
            ans=start;
          //then start should be changed
            start = mid + 1.;
        }
        // Decrement end if integral part
        // lies on the left side of the mid
        else {
            end = mid - 1.;
        }
    }
    // To find the fractional part
    // of square root upto 5 decimal
    long double increment = 0.1;
    for (int i = 0; i < 5; i++) {
        while (ans * ans <= number) {
            ans += increment;
        }
        // Loop terminates,
        // when ans * ans > number
        ans = ans - increment;
        increment = increment / 10;
    }
	return ans;
}
// ==========================================================================================
// ==========================================================================================
// MAX_TYPE_VEC FUNCTIONS

char max_char_vector(Char *vec) {
	if (vec->active_length == 1) return vec->array[0];

	char max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max < vec->array[i]) max = vec->array[i];
	}
	return max;
}
// ------------------------------------------------------------------------------------------

unsigned char max_uchar_vector(UChar *vec) {
	if (vec->active_length == 1) return vec->array[0];

	unsigned char max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max < vec->array[i]) max = vec->array[i];
	}
	return max;
}
// ------------------------------------------------------------------------------------------

short int max_short_vector(Short *vec) {
	if (vec->active_length == 1) return vec->array[0];

	short int max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max < vec->array[i]) max = vec->array[i];
	}
	return max;
}
// --------------------------------------------------------------------------------

unsigned short int max_ushort_vector(UShort *vec) {
	if (vec->active_length == 1) return vec->array[0];

	unsigned short int max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max < vec->array[i]) max = vec->array[i];
	}
	return max;
}
// --------------------------------------------------------------------------------

int max_int_vector(Int *vec) {
	if (vec->active_length == 1) return vec->array[0];

	int max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max < vec->array[i]) max = vec->array[i];
	}
	return max;
}
// --------------------------------------------------------------------------------

unsigned int max_uint_vector(UInt *vec) {
	if (vec->active_length == 1) return vec->array[0];

	unsigned int max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max < vec->array[i]) max = vec->array[i];
	}
	return max;
}
// --------------------------------------------------------------------------------

long int max_long_vector(LInt *vec) {
	if (vec->active_length == 1) return vec->array[0];

	long int max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max < vec->array[i]) max = vec->array[i];
	}
	return max;
}
// --------------------------------------------------------------------------------

unsigned long int max_ulong_vector(ULInt *vec) {
	if (vec->active_length == 1) return vec->array[0];

	unsigned long int max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max < vec->array[i]) max = vec->array[i];
	}
	return max;
}
// --------------------------------------------------------------------------------

long long int max_llong_vector(LLInt *vec) {
	if (vec->active_length == 1) return vec->array[0];

	long long int max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max < vec->array[i]) max = vec->array[i];
	}
	return max;
}
// --------------------------------------------------------------------------------

unsigned long long int max_ullong_vector(ULLInt *vec) {
	if (vec->active_length == 1) return vec->array[0];

	unsigned long long int max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max < vec->array[i]) max = vec->array[i];
	}
	return max;
}
// --------------------------------------------------------------------------------

float max_float_vector(Flt *vec) {
	if (vec->active_length == 1) return vec->array[0];

	float max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max < vec->array[i]) max = vec->array[i];
	}
	return max;
}
// --------------------------------------------------------------------------------

double max_double_vector(Dble *vec) {
	if (vec->active_length == 1) return vec->array[0];

	double max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max < vec->array[i]) max = vec->array[i];
	}
	return max;
}
// --------------------------------------------------------------------------------

long double max_ldouble_vector(LDble *vec) {
	if (vec->active_length == 1) return vec->array[0];

	long double max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max < vec->array[i]) max = vec->array[i];
	}
	return max;
}
// ==========================================================================================
// ==========================================================================================
// MIN_TYPE_VEC FUNCTIONS

char min_char_vector(Char *vec) {
	if (vec->active_length == 1) return vec->array[0];

	char max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max > vec->array[i]) max = vec->array[i];
	}
	return max;
}
// ------------------------------------------------------------------------------------------

unsigned char min_uchar_vector(UChar *vec) {
	if (vec->active_length == 1) return vec->array[0];

	unsigned char max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max > vec->array[i]) max = vec->array[i];
	}
	return max;
}
// ------------------------------------------------------------------------------------------

short int min_short_vector(Short *vec) {
	if (vec->active_length == 1) return vec->array[0];

	short int max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max > vec->array[i]) max = vec->array[i];
	}
	return max;
}
// --------------------------------------------------------------------------------

unsigned short int min_ushort_vector(UShort *vec) {
	if (vec->active_length == 1) return vec->array[0];

	unsigned short int max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max > vec->array[i]) max = vec->array[i];
	}
	return max;
}
// --------------------------------------------------------------------------------

int min_int_vector(Int *vec) {
	if (vec->active_length == 1) return vec->array[0];

	int max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max > vec->array[i]) max = vec->array[i];
	}
	return max;
}
// --------------------------------------------------------------------------------

unsigned int min_uint_vector(UInt *vec) {
	if (vec->active_length == 1) return vec->array[0];

	unsigned int max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max > vec->array[i]) max = vec->array[i];
	}
	return max;
}
// --------------------------------------------------------------------------------

long int min_long_vector(LInt *vec) {
	if (vec->active_length == 1) return vec->array[0];

	long int max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max > vec->array[i]) max = vec->array[i];
	}
	return max;
}
// --------------------------------------------------------------------------------

unsigned long int min_ulong_vector(ULInt *vec) {
	if (vec->active_length == 1) return vec->array[0];

	unsigned long int max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max > vec->array[i]) max = vec->array[i];
	}
	return max;
}
// --------------------------------------------------------------------------------

long long int min_llong_vector(LLInt *vec) {
	if (vec->active_length == 1) return vec->array[0];

	long long int max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max > vec->array[i]) max = vec->array[i];
	}
	return max;
}
// --------------------------------------------------------------------------------

unsigned long long int min_ullong_vector(ULLInt *vec) {
	if (vec->active_length == 1) return vec->array[0];

	unsigned long long int max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max > vec->array[i]) max = vec->array[i];
	}
	return max;
}
// --------------------------------------------------------------------------------

float min_float_vector(Flt *vec) {
	if (vec->active_length == 1) return vec->array[0];

	float max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max > vec->array[i]) max = vec->array[i];
	}
	return max;
}
// --------------------------------------------------------------------------------

double min_double_vector(Dble *vec) {
	if (vec->active_length == 1) return vec->array[0];

	double max = vec->array[0];
	for (size_t i = 1; i < vec->active_length; i++) {
		if (max > vec->array[i]) max = vec->array[i];
	}
	return max;
}
// ==========================================================================================
// ==========================================================================================
// RANGE_TYPE_VEC FUNCTIONS

void range_char_vector(Char *vec, char start, char end, char delta) {
	char num = (end - start) / delta;
	char advance = start;
	for (size_t i = 0; i < num + 1; i++) {
		push_char_vector(vec, advance, vec->active_length);
		advance += delta;
	}
}
// ------------------------------------------------------------------------------------------

void range_uchar_vector(UChar *vec, unsigned char start, unsigned char end, unsigned char delta) {
	unsigned char num = (end - start) / delta;
	unsigned char advance = start;
	for (size_t i = 0; i < num + 1; i++) {
		push_uchar_vector(vec, advance, vec->active_length);
		advance += delta;
	}
}
// ------------------------------------------------------------------------------------------

void range_short_vector(Short *vec, short int start, short int end, short int delta) {
	short int num = (end - start) / delta;
	short int advance = start;
	for (size_t i = 0; i < num + 1; i++) {
		push_short_vector(vec, advance, vec->active_length);
		advance += delta;
	}
}
// --------------------------------------------------------------------------------

void range_ushort_vector(UShort *vec, unsigned short int start, unsigned short int end,
		              unsigned short int delta) {
	unsigned short int num = (end - start) / delta;
	unsigned short int advance = start;
	for (size_t i = 0; i < num + 1; i++) {
		push_ushort_vector(vec, advance, vec->active_length);
		advance += delta;
	}
}
// --------------------------------------------------------------------------------

void range_int_vector(Int *vec, int start, int end, int delta) {
	int num = (end - start) / delta;
	int advance = start;
	for (size_t i = 0; i < num + 1; i++) {
		push_int_vector(vec, advance, vec->active_length);
		advance += delta;
	}
}
// --------------------------------------------------------------------------------

void range_uint_vector(UInt *vec, unsigned int start, unsigned int end,
		            unsigned int delta) {
	unsigned int num = (end - start) / delta;
	unsigned int advance = start;
	for (size_t i = 0; i < num + 1; i++) {
		push_uint_vector(vec, advance, vec->active_length);
		advance += delta;
	}
}
// --------------------------------------------------------------------------------

void range_long_vector(LInt *vec, long int start, long int end, long int delta) {
	long int num = (end - start) / delta;
	long int advance = start;
	for (size_t i = 0; i < num + 1; i++) {
		push_long_vector(vec, advance, vec->active_length);
		advance += delta;
	}
}
// --------------------------------------------------------------------------------

void range_ulong_vector(ULInt *vec, unsigned long int start, unsigned long int end,
		             unsigned long int delta) {
	unsigned long int num = (end - start) / delta;
	unsigned long int advance = start;
	for (size_t i = 0; i < num + 1; i++) {
		push_ulong_vector(vec, advance, vec->active_length);
		advance += delta;
	}
}
// --------------------------------------------------------------------------------

void range_llong_vector(LLInt *vec, long long int start, long long int end, long long int delta) {
	long long int num = (end - start) / delta;
	long long int advance = start;
	for (size_t i = 0; i < num + 1; i++) {
		push_llong_vector(vec, advance, vec->active_length);
		advance += delta;
	}
}
// --------------------------------------------------------------------------------

void range_ullong_vector(ULLInt *vec, unsigned long long int start, unsigned long long int end,
		             unsigned long long int delta) {
	unsigned long long int num = (end - start) / delta;
	unsigned long long int advance = start;
	for (size_t i = 0; i < num + 1; i++) {
		push_ullong_vector(vec, advance, vec->active_length);
		advance += delta;
	}
}
// --------------------------------------------------------------------------------

void range_float_vector(Flt *vec, float start, float end, float delta) {
	float num = (end - start) / delta;
	float advance = start;
	for (size_t i = 0; i < num + 1; i++) {
		push_float_vector(vec, advance, vec->active_length);
		advance += delta;
	}
}
// --------------------------------------------------------------------------------

void range_double_vector(Dble *vec, double start, double end,
		              double delta) {
	double num = (end - start) / delta;
	double advance = start;
	for (size_t i = 0; i < num + 1; i++) {
		push_double_vector(vec, advance, vec->active_length);
		advance += delta;
	}
}
// --------------------------------------------------------------------------------

void range_ldouble_vector(LDble *vec, long double start, long double end,
		               long double delta) {
	long double num = (end - start) / delta;
	long double advance = start;
	for (size_t i = 0; i < num + 1; i++) {
		push_ldouble_vector(vec, advance, vec->active_length);
		advance += delta;
	}
}
// ==========================================================================================
// ==========================================================================================
// TYPE_VECTOR_DATA FUNCTIONS

short int short_vector_data(Short *vec, size_t index) { return vec->array[index]; }
// --------------------------------------------------------------------------------

unsigned short int ushort_vector_data(UShort *vec, size_t index) { return vec->array[index]; }
// --------------------------------------------------------------------------------

int int_vector_data(Int *vec, size_t index) { return vec->array[index]; }
// --------------------------------------------------------------------------------

unsigned int uint_vector_data(UInt *vec, size_t index) { return vec->array[index]; }
// --------------------------------------------------------------------------------

long int long_vector_data(LInt *vec, size_t index) { return vec->array[index]; }
// --------------------------------------------------------------------------------

unsigned long int ulong_vector_data(ULInt *vec, size_t index) { return vec->array[index]; }
// --------------------------------------------------------------------------------

long long int llong_vector_data(LLInt *vec, size_t index) { return vec->array[index]; }
// --------------------------------------------------------------------------------

unsigned long long int ullong_vector_data(ULLInt *vec, size_t index) { return vec->array[index]; }
// --------------------------------------------------------------------------------

float float_vector_data(Flt *vec, size_t index) { return vec->array[index]; }
// --------------------------------------------------------------------------------

double double_vector_data(Dble *vec, size_t index) { return vec->array[index]; }
// --------------------------------------------------------------------------------

long double ldouble_vector_data(LDble *vec, size_t index) { return vec->array[index]; }
// --------------------------------------------------------------------------------

char char_vector_data(Char *vec, size_t index) { return vec->array[index]; }
// --------------------------------------------------------------------------------

bool bool_vector_data(Bool *vec, size_t index) { return vec->array[index]; }
// --------------------------------------------------------------------------------

char* string_vector_data(String *vec, size_t index) { return vec->array[index]; }
// ==========================================================================================
// ==========================================================================================
// COPY_TYPE_VECTOR FUNCTIONS

Short copy_short_vector(Short *vec) {
	Short new_vec;
	init_short_vector(&new_vec, vec->active_length);
	insert_short_vector(&new_vec, vec->array, vec->active_length, 0);
	return new_vec;
}
// --------------------------------------------------------------------------------

UShort copy_ushort_vector(UShort *vec) {
	UShort new_vec;
	init_ushort_vector(&new_vec, vec->active_length);
	insert_ushort_vector(&new_vec, vec->array, vec->active_length, 0);
	return new_vec;
}
// --------------------------------------------------------------------------------

Int copy_int_vector(Int *vec) {
	Int new_vec;
	init_int_vector(&new_vec, vec->active_length);
	insert_int_vector(&new_vec, vec->array, vec->active_length, 0);
	return new_vec;
}
// --------------------------------------------------------------------------------

UInt copy_uint_vector(UInt *vec) {
	UInt new_vec;
	init_uint_vector(&new_vec, vec->active_length);
	insert_uint_vector(&new_vec, vec->array, vec->active_length, 0);
	return new_vec;
}
// --------------------------------------------------------------------------------

LInt copy_long_vector(LInt *vec) {
	LInt new_vec;
	init_long_vector(&new_vec, vec->active_length);
	insert_long_vector(&new_vec, vec->array, vec->active_length, 0);
	return new_vec;
}
// --------------------------------------------------------------------------------

ULInt copy_ulong_vector(ULInt *vec) {
	ULInt new_vec;
	init_ulong_vector(&new_vec, vec->active_length);
	insert_ulong_vector(&new_vec, vec->array, vec->active_length, 0);
	return new_vec;
}
// --------------------------------------------------------------------------------

LLInt copy_llong_vector(LLInt *vec) {
	LLInt new_vec;
	init_llong_vector(&new_vec, vec->active_length);
	insert_llong_vector(&new_vec, vec->array, vec->active_length, 0);
	return new_vec;
}
// --------------------------------------------------------------------------------

ULLInt copy_ullong_vector(ULLInt *vec) {
	ULLInt new_vec;
	init_ullong_vector(&new_vec, vec->active_length);
	insert_ullong_vector(&new_vec, vec->array, vec->active_length, 0);
	return new_vec;
}
// --------------------------------------------------------------------------------

Flt copy_float_vector(Flt *vec) {
	Flt new_vec;
	init_float_vector(&new_vec, vec->active_length);
	insert_float_vector(&new_vec, vec->array, vec->active_length, 0);
	return new_vec;
}
// --------------------------------------------------------------------------------

Dble copy_double_vector(Dble *vec) {
	Dble new_vec;
	init_double_vector(&new_vec, vec->active_length);
	insert_double_vector(&new_vec, vec->array, vec->active_length, 0);
	return new_vec;
}
// --------------------------------------------------------------------------------

LDble copy_ldouble_vector(LDble *vec) {
	LDble new_vec;
	init_ldouble_vector(&new_vec, vec->active_length);
	insert_ldouble_vector(&new_vec, vec->array, vec->active_length, 0);
	return new_vec;
}
// --------------------------------------------------------------------------------

Char copy_char_vector(Char *vec) {
	Char new_vec;
	init_char_vector(&new_vec, vec->active_length);
	insert_char_vector(&new_vec, vec->array, vec->active_length, 0);
	return new_vec;
}
// --------------------------------------------------------------------------------

Bool copy_bool_vector(Bool *vec) {
	Bool new_vec;
	init_bool_vector(&new_vec, vec->active_length);
	insert_bool_vector(&new_vec, vec->array, vec->active_length, 0);
	return new_vec;
}
// --------------------------------------------------------------------------------

String copy_string_vector(String *vec) {
	String new_vec;
	init_string_vector(&new_vec);
	for (size_t i = 0; i < vec->active_length; i++) {
		push_string_vector(&new_vec, vec->array[i], new_vec.active_length);
	}
	return new_vec;
}
// ==========================================================================================
// ==========================================================================================
// TRIM_TYPE_VECTOR FUNCTIONS

void trim_short_vector(Short *vec) {
	short *ptr = (short *)realloc(vec->array, vec->active_length * sizeof(short));
	// Verify that sufficient memory exists
	if (ptr == NULL) {
		fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
	}
	// allocate memory
	vec->array = ptr;
	vec->allocated_length = vec->active_length;
}
// --------------------------------------------------------------------------------

void trim_ushort_vector(UShort *vec) {
	unsigned short *ptr = (unsigned short *)realloc(vec->array, vec->active_length * sizeof(unsigned short));
	// Verify that sufficient memory exists
	if (ptr == NULL) {
		fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
	}
	// allocate memory
	vec->array = ptr;
	vec->allocated_length = vec->active_length;
}
// --------------------------------------------------------------------------------

void trim_int_vector(Int *vec) {
	int *ptr = (int *)realloc(vec->array, vec->active_length * sizeof(int));
	// Verify that sufficient memory exists
	if (ptr == NULL) {
		fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
	}
	// allocate memory
	vec->array = ptr;
	vec->allocated_length = vec->active_length;
}
// --------------------------------------------------------------------------------

void trim_uint_vector(UInt *vec) {
	unsigned int *ptr = (unsigned int *)realloc(vec->array, vec->active_length * sizeof(unsigned int));
	// Verify that sufficient memory exists
	if (ptr == NULL) {
		fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
	}
	// allocate memory
	vec->array = ptr;
	vec->allocated_length = vec->active_length;
}
// --------------------------------------------------------------------------------

void trim_long_vector(LInt *vec) {
	long *ptr = (long *)realloc(vec->array, vec->active_length * sizeof(long));
	// Verify that sufficient memory exists
	if (ptr == NULL) {
		fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
	}
	// allocate memory
	vec->array = ptr;
	vec->allocated_length = vec->active_length;
}
// --------------------------------------------------------------------------------

void trim_ulong_vector(ULInt *vec) {
	unsigned long *ptr = (unsigned long *)realloc(vec->array, vec->active_length * sizeof(unsigned long));
	// Verify that sufficient memory exists
	if (ptr == NULL) {
		fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
	}
	// allocate memory
	vec->array = ptr;
	vec->allocated_length = vec->active_length;
}
// --------------------------------------------------------------------------------

void trim_llong_vector(LLInt *vec) {
	long long *ptr = (long long *)realloc(vec->array, vec->active_length * sizeof(long long));
	// Verify that sufficient memory exists
	if (ptr == NULL) {
		fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
	}
	// allocate memory
	vec->array = ptr;
	vec->allocated_length = vec->active_length;
}
// --------------------------------------------------------------------------------

void trim_ullong_vector(ULLInt *vec) {
	unsigned long long *ptr = (unsigned long long *)realloc(vec->array, vec->active_length * sizeof(unsigned long long));
	// Verify that sufficient memory exists
	if (ptr == NULL) {
		fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
	}
	// allocate memory
	vec->array = ptr;
	vec->allocated_length = vec->active_length;
}
// --------------------------------------------------------------------------------

void trim_float_vector(Flt *vec) {
	float *ptr = (float *)realloc(vec->array, vec->active_length * sizeof(float));
	// Verify that sufficient memory exists
	if (ptr == NULL) {
		fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
	}
	// allocate memory
	vec->array = ptr;
	vec->allocated_length = vec->active_length;
}
// --------------------------------------------------------------------------------

void trim_double_vector(Dble *vec) {
	double *ptr = (double *)realloc(vec->array, vec->active_length * sizeof(double));
	// Verify that sufficient memory exists
	if (ptr == NULL) {
		fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
	}
	// allocate memory
	vec->array = ptr;
	vec->allocated_length = vec->active_length;
}
// --------------------------------------------------------------------------------

void trim_ldouble_vector(LDble *vec) {
	long double *ptr = (long double *)realloc(vec->array, vec->active_length * sizeof(long double));
	// Verify that sufficient memory exists
	if (ptr == NULL) {
		fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
	}
	// allocate memory
	vec->array = ptr;
	vec->allocated_length = vec->active_length;
}
// --------------------------------------------------------------------------------

void trim_char_vector(Char *vec) {
	char *ptr = (char *)realloc(vec->array, vec->active_length * sizeof(char));
	// Verify that sufficient memory exists
	if (ptr == NULL) {
		fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
	}
	// allocate memory
	vec->array = ptr;
	vec->allocated_length = vec->active_length;
}
// ------------------------------------------------------------------------------------------

void trim_uchar_vector(UChar *vec) {
	unsigned char *ptr = (unsigned char *)realloc(vec->array, vec->active_length * sizeof(unsigned char));
	// Verify that sufficient memory exists
	if (ptr == NULL) {
		fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
	}
	// allocate memory
	vec->array = ptr;
	vec->allocated_length = vec->active_length;
}
// --------------------------------------------------------------------------------

void trim_bool_vector(Bool *vec) {
	bool *ptr = (bool *)realloc(vec->array, vec->active_length * sizeof(bool));
	// Verify that sufficient memory exists
	if (ptr == NULL) {
		fprintf(stderr, "Realloc failed in file %s on line %d\n", __FILE__, __LINE__);
	}
	// allocate memory
	vec->array = ptr;
	vec->allocated_length = vec->active_length;
}
// ==========================================================================================
// ==========================================================================================
// REPLACE_TYPE_VECTOR_INDEX

int replace_short_vector_index(Short *vec, short int new_value, size_t index) {
	if (index > vec->active_length || index < 0) {
		fprintf(stderr, "Index out of bounds in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->array[index] = new_value;
	return 1;
}
// --------------------------------------------------------------------------------

int replace_ushort_vector_index(UShort *vec, unsigned short int new_value, size_t index) {
	if (index > vec->active_length || index < 0) {
		fprintf(stderr, "Index out of bounds in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->array[index] = new_value;
	return 1;
}
// --------------------------------------------------------------------------------

int replace_int_vector_index(Int *vec, int new_value, size_t index) {
	if (index > vec->active_length || index < 0) {
		fprintf(stderr, "Index out of bounds in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->array[index] = new_value;
	return 1;
}
// --------------------------------------------------------------------------------

int replace_uint_vector_index(UInt *vec, unsigned int new_value, size_t index) {
	if (index > vec->active_length || index < 0) {
		fprintf(stderr, "Index out of bounds in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->array[index] = new_value;
	return 1;
}
// --------------------------------------------------------------------------------

int replace_long_vector_index(LInt *vec, long int new_value, size_t index) {
	if (index > vec->active_length || index < 0) {
		fprintf(stderr, "Index out of bounds in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->array[index] = new_value;
	return 1;
}
// --------------------------------------------------------------------------------

int replace_ulong_vector_index(ULInt *vec, unsigned long int new_value, size_t index) {
	if (index > vec->active_length || index < 0) {
		fprintf(stderr, "Index out of bounds in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->array[index] = new_value;
	return 1;
}
// --------------------------------------------------------------------------------

int replace_llong_vector_index(LLInt *vec, long long int new_value, size_t index) {
	if (index > vec->active_length || index < 0) {
		fprintf(stderr, "Index out of bounds in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->array[index] = new_value;
	return 1;
}
// --------------------------------------------------------------------------------

int replace_ullong_vector_index(ULLInt *vec, unsigned long long int new_value, size_t index) {
	if (index > vec->active_length || index < 0) {
		fprintf(stderr, "Index out of bounds in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->array[index] = new_value;
	return 1;
}
// --------------------------------------------------------------------------------

int replace_float_vector_index(Flt *vec, float new_value, size_t index) {
	if (index > vec->active_length || index < 0) {
		fprintf(stderr, "Index out of bounds in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->array[index] = new_value;
	return 1;
}
// --------------------------------------------------------------------------------

int replace_double_vector_index(Dble *vec, double new_value, size_t index) {
	if (index > vec->active_length || index < 0) {
		fprintf(stderr, "Index out of bounds in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->array[index] = new_value;
	return 1;
}
// --------------------------------------------------------------------------------

int replace_ldouble_vector_index(LDble *vec, long double new_value, size_t index) {
	if (index > vec->active_length || index < 0) {
		fprintf(stderr, "Index out of bounds in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->array[index] = new_value;
	return 1;
}
// --------------------------------------------------------------------------------

int replace_char_vector_index(Char *vec, char new_value, size_t index) {
	if (index > vec->active_length || index < 0) {
		fprintf(stderr, "Index out of bounds in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->array[index] = new_value;
	return 1;
}
// ------------------------------------------------------------------------------------------

int replace_uchar_vector_index(UChar *vec, unsigned char new_value, size_t index) {
	if (index > vec->active_length || index < 0) {
		fprintf(stderr, "Index out of bounds in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->array[index] = new_value;
	return 1;
}
// --------------------------------------------------------------------------------

int replace_bool_vector_index(Bool *vec, bool new_value, size_t index) {
	if (index > vec->active_length || index < 0) {
		fprintf(stderr, "Index out of bounds in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->array[index] = new_value;
	return 1;
}
// --------------------------------------------------------------------------------

int replace_string_vector_index(String *vec, char *new_value, size_t index) {
	if (index > vec->active_length || index < 0) {
		fprintf(stderr, "Index out of bounds in file %s on line %d\n", __FILE__, __LINE__);
		return -1;
	}
	vec->array[index] = new_value;
	return 1;
}
// ==========================================================================================
// ==========================================================================================
// REPEAT_TYPE_VECTOR FUNCTIONS

int repeat_short_vector(Short *vec, short int value, size_t num) {
	int j;
	for (size_t i = 0; i < num; i++) {
		j = push_short_vector(vec, value, vec->active_length);
		if (j < 0) return -1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int repeat_ushort_vector(UShort *vec, unsigned short int value, size_t num) {
	int j;
	for (size_t i = 0; i < num; i++) {
		j = push_ushort_vector(vec, value, vec->active_length);
		if (j < 0) return -1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int repeat_int_vector(Int *vec, int value, size_t num) {
	int j;
	for (size_t i = 0; i < num; i++) {
		j = push_int_vector(vec, value, vec->active_length);
		if (j < 0) return -1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int repeat_uint_vector(UInt *vec, unsigned int value, size_t num) {
	int j;
	for (size_t i = 0; i < num; i++) {
		j = push_uint_vector(vec, value, vec->active_length);
		if (j < 0) return -1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int repeat_long_vector(LInt *vec, long int value, size_t num) {
	int j;
	for (size_t i = 0; i < num; i++) {
		j = push_long_vector(vec, value, vec->active_length);
		if (j < 0) return -1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int repeat_ulong_vector(ULInt *vec, unsigned long int value, size_t num) {
	int j;
	for (size_t i = 0; i < num; i++) {
		j = push_ulong_vector(vec, value, vec->active_length);
		if (j < 0) return -1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int repeat_llong_vector(LLInt *vec, long long int value, size_t num) {
	int j;
	for (size_t i = 0; i < num; i++) {
		j = push_llong_vector(vec, value, vec->active_length);
		if (j < 0) return -1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int repeat_ullong_vector(ULLInt *vec, unsigned long long int value, size_t num) {
	int j;
	for (size_t i = 0; i < num; i++) {
		j = push_ullong_vector(vec, value, vec->active_length);
		if (j < 0) return -1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int repeat_float_vector(Flt *vec, float value, size_t num) {
	int j;
	for (size_t i = 0; i < num; i++) {
		j = push_float_vector(vec, value, vec->active_length);
		if (j < 0) return -1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int repeat_double_vector(Dble *vec, double value, size_t num) {
	int j;
	for (size_t i = 0; i < num; i++) {
		j = push_double_vector(vec, value, vec->active_length);
		if (j < 0) return -1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int repeat_ldouble_vector(LDble *vec, long double value, size_t num) {
	int j;
	for (size_t i = 0; i < num; i++) {
		j = push_ldouble_vector(vec, value, vec->active_length);
		if (j < 0) return -1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int repeat_bool_vector(Bool *vec, bool value, size_t num) {
	int j;
	for (size_t i = 0; i < num; i++) {
		j = push_bool_vector(vec, value, vec->active_length);
		if (j < 0) return -1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int repeat_char_vector(Char *vec, char value, size_t num) {
	int j;
	for (size_t i = 0; i < num; i++) {
		j = push_char_vector(vec, value, vec->active_length);
		if (j < 0) return -1;
	}
	return 1;
}
// ------------------------------------------------------------------------------------------

int repeat_uchar_vector(UChar *vec, unsigned char value, size_t num) {
	int j;
	for (size_t i = 0; i < num; i++) {
		j = push_uchar_vector(vec, value, vec->active_length);
		if (j < 0) return -1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int repeat_string_vector(String *vec, char *value, size_t num) {
	int j;
	for (size_t i = 0; i < num; i++) {
		j = push_string_vector(vec, value, vec->active_length);
		if (j < 0) return -1;
	}
	return 1;
}
// ==========================================================================================
// ==========================================================================================
// eof
