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
// eof
