// ==========================================================================================
// ==========================================================================================
// - File:    vector.h
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

#ifndef vector_H
#define vector_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "swap.h"

// ------------------------------------------------------------------------------------------
// SET UP RELEVANT ENUMS
//

/**
 * A collection of human readable integer representations that describe how
 * memory is allocated to a vector or array
 *
 * \param DYNAMIC An integer representing dynamic memory allocation on the heap
 * \param STATIC An integer representing static memory allocation on the stack
 */
typedef enum
{
	DYNAMIC,
	STATIC
} mem_type;
// ==========================================================================================

/**
 * This macro will produce a struct that is specifically designed to track all
 * attributes necessary for the maintenance of a dynamically, or statically allocated
 * array.  The macro has an attribute to a pointer for the array, allocated_length,
 * active_length, and mem_type.
 *
 * /param type The data type that will be assigned to the array pointer
 * /param dtype The name to be given to the typedef for the struct
 *
 * @code
 * // code to create a struct of type IntVector
 * VECTOR_STRUCT(float, IntVector)
 * IntVector vec;
 * @endcode
 */
#define VECTOR_STRUCT(type, dtype)													\
	typedef struct {type *array; size_t allocated_length; size_t active_length; mem_type dat_type; } dtype
// ==========================================================================================
// ==========================================================================================
// Pre-define struct_vectors

VECTOR_STRUCT(short, Short);
VECTOR_STRUCT(unsigned short int, UShort);
VECTOR_STRUCT(int, Int);
VECTOR_STRUCT(unsigned, UInt);
VECTOR_STRUCT(long, LInt);
VECTOR_STRUCT(unsigned long int, ULInt);
VECTOR_STRUCT(long long int, LLInt);
VECTOR_STRUCT(unsigned long long int, ULLInt);
VECTOR_STRUCT(float, Flt);
VECTOR_STRUCT(double, Dble);
VECTOR_STRUCT(long double, LDble);
VECTOR_STRUCT(char, Char);
VECTOR_STRUCT(unsigned char, UChar);
VECTOR_STRUCT(bool, Bool);
// ==========================================================================================
// String struct

typedef struct
{
	char **array;
	size_t active_length;
} String;
// ==========================================================================================
// ==========================================================================================
// INIT_VECTOR FUNCTIONS

/*
 * This function initialize a vector struct of type Short to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type Short
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_short_vector(Short *vec, size_t length);
// ------------------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type UShort to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type UShort
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_ushort_vector(UShort *vec, size_t length);
// ------------------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type Int to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type Int
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_int_vector(Int *vec, size_t length);
// ------------------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type UInt to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type UInt
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_uint_vector(UInt *vec, size_t length);
// ------------------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type LInt to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type LInt
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_long_vector(LInt *vec, size_t length);
// ------------------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type ULInt to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type ULInt
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_ulong_vector(ULInt *vec, size_t length);
// ------------------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type LLInt to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type LLInt
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_llong_vector(LLInt *vec, size_t length);
// ------------------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type ULLInt to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type ULLInt
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_ullong_vector(ULLInt *vec, size_t length);
// ------------------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type Flt to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type Flt
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_float_vector(Flt *vec, size_t length);
// ------------------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type Dble to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type Dble
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_double_vector(Dble *vec, size_t length);
// ------------------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type LDble to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type LDble
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_ldouble_vector(LDble *vec, size_t length);
// ------------------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type Char to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type Char
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_char_vector(Char *vec, size_t length);
// ------------------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type UChar to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type UChar
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_uchar_vector(UChar *vec, size_t length);
// ------------------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type Bool to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type Bool
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_bool_vector(Bool *vec, size_t length);
// ------------------------------------------------------------------------------------------

/**
 * This function initializes a vector struct of type String to contain a dynamically
 * allocated array of strings.
 *
 * /param vec A Vector struct of type String
 */
int init_string_vector(String *vec);
// ------------------------------------------------------------------------------------------

/**
 * This macro will allocate memory for an array and assign that memory to the
 * array pointer variable in a struct.  The macro will also assign the number of
 * allocated indices to allocated_length and assign active_length a size of 0.
 * This function requires the input of a struct instantiated with the VECTOR_STRUCT
 * method.
 *
 * /param vec A vector instantiated with the VECTOR_STRUCT macro.
 * /length The length of the array as a size_t variable
 *
 * @code
 * // Initialize a dynamically allocated Integer vector with 0 indices
 * Int vec;
 * INIT_VECTOR(vec, 20)
 * @endcode
 */
#define INIT_VECTOR(T, length) _Generic( (T), Short: init_short_vector, \
										           UShort: init_ushort_vector, \
										           Int: init_int_vector, \
										           UInt: init_uint_vector, \
										           LInt: init_long_vector, \
										           ULInt: init_ulong_vector, \
										           LLInt: init_llong_vector, \
										           ULLInt: init_ullong_vector, \
										           Flt: init_float_vector, \
										           Dble: init_double_vector, \
										           LDble: init_ldouble_vector, \
										           Char: init_char_vector, \
												   UChar: init_uchar_vector, \
												   Bool: init_bool_vector)(&T, length)
// ==========================================================================================
// ==========================================================================================
// INIT_TYPE_ARRAY FUNCTIONS

/**
 * This funciton will initialize an array struct container of type Short
 *
 * /param vec A vector struct container of type Short
 * /param arr An array of type short int
 * /param allocated_length The allocated length of the array
 * /param active_length The number of acticaly populated indices in the array arr
 *
 * @code
 * Short arr;
 * short int a[5] = {1, 2};
 * init_short_array(&arr, a, 5, 2);
 * // Since the array is statically allocated it does not need to be freed
 * @endcode
 *
 */
void init_short_array(Short *vec, short int *arr, size_t allocated_length, size_t active_length);
// --------------------------------------------------------------------------------

/**
 * This funciton will initialize an array struct container of type UShort
 *
 * /param vec A vector struct container of type UShort
 * /param arr An array of type unsigned short int
 * /param allocated_length The allocated length of the array
 * /param active_length The number of acticaly populated indices in the array arr
 *
 * @code
 * UShort arr;
 * unsigned short int a[5] = {1, 2};
 * init_ushort_array(&arr, a, 5, 2);
 * // Since the array is statically allocated it does not need to be freed
 * @endcode
 *
 */
void init_ushort_array(UShort *vec, unsigned short int *arr, size_t allocated_length,
		               size_t active_length);
// --------------------------------------------------------------------------------

/**
 * This funciton will initialize an array struct container of type Int
 *
 * /param vec A vector struct container of type Int
 * /param arr An array of type int
 * /param allocated_length The allocated length of the array
 * /param active_length The number of acticaly populated indices in the array arr
 *
 * @code
 * Int arr;
 * int a[5] = {1, 2};
 * init_int_array(&arr, a, 5, 2);
 * // Since the array is statically allocated it does not need to be freed
 * @endcode
 *
 */
void init_int_array(Int *vec, int *arr, size_t allocated_length, size_t active_length);
// --------------------------------------------------------------------------------

/**
 * This funciton will initialize an array struct container of type UInt
 *
 * /param vec A vector struct container of type UInt
 * /param arr An array of type unsigned unsigned int
 * /param allocated_length The allocated length of the array
 * /param active_length The number of acticaly populated indices in the array arr
 *
 * @code
 * UInt arr;
 * unsigned int a[5] = {1, 2};
 * init_uint_array(&arr, a, 5, 2);
 * // Since the array is statically allocated it does not need to be freed
 * @endcode
 *
 */
void init_uint_array(UInt *vec, unsigned int *arr, size_t allocated_length, size_t active_length);
// --------------------------------------------------------------------------------

/**
 * This funciton will initialize an array struct container of type LInt
 *
 * /param vec A vector struct container of type LInt
 * /param arr An array of type long int
 * /param allocated_length The allocated length of the array
 * /param active_length The number of acticaly populated indices in the array arr
 *
 * @code
 * LInt arr;
 * long int a[5] = {1, 2};
 * init_long_array(&arr, a, 5, 2);
 * // Since the array is statically allocated it does not need to be freed
 * @endcode
 *
 */
void init_long_array(LInt *vec, long int *arr, size_t allocated_length, size_t active_length);
// --------------------------------------------------------------------------------

/**
 * This funciton will initialize an array struct container of type ULInt
 *
 * /param vec A vector struct container of type ULInt
 * /param arr An array of type unsigned unsigned long int
 * /param allocated_length The allocated length of the array
 * /param active_length The number of acticaly populated indices in the array arr
 *
 * @code
 * ULInt arr;
 * unsigned long int a[5] = {1, 2};
 * init_ulong_array(&arr, a, 5, 2);
 * // Since the array is statically allocated it does not need to be freed
 * @endcode
 *
 */
void init_ulong_array(ULInt *vec, unsigned long int *arr, size_t allocated_length, size_t active_length);
// --------------------------------------------------------------------------------

/**
 * This funciton will initialize an array struct container of type LLInt
 *
 * /param vec A vector struct container of type LLInt
 * /param arr An array of type long long int
 * /param allocated_length The allocated length of the array
 * /param active_length The number of acticaly populated indices in the array arr
 *
 * @code
 * LLInt arr;
 * long long int a[5] = {1, 2};
 * init_llong_array(&arr, a, 5, 2);
 * // Since the array is statically allocated it does not need to be freed
 * @endcode
 *
 */
void init_llong_array(LLInt *vec, long long int *arr, size_t allocated_length, size_t active_length);
// --------------------------------------------------------------------------------

/**
 * This funciton will initialize an array struct container of type ULLInt
 *
 * /param vec A vector struct container of type ULLInt
 * /param arr An array of type unsigned unsigned long long int
 * /param allocated_length The allocated length of the array
 * /param active_length The number of acticaly populated indices in the array arr
 *
 * @code
 * ULLInt arr;
 * unsigned long long int a[5] = {1, 2};
 * init_ullong_array(&arr, a, 5, 2);
 * // Since the array is statically allocated it does not need to be freed
 * @endcode
 *
 */
void init_ullong_array(ULLInt *vec, unsigned long long int *arr, size_t allocated_length, size_t active_length);
// --------------------------------------------------------------------------------

/**
 * This funciton will initialize an array struct container of type Flt
 *
 * /param vec A vector struct container of type Flt
 * /param arr An array of type float
 * /param allocated_length The allocated length of the array
 * /param active_length The number of acticaly populated indices in the array arr
 *
 * @code
 * Flt arr;
 * float a[5] = {1.1, 2.2};
 * init_float_array(&arr, a, 5, 2);
 * // Since the array is statically allocated it does not need to be freed
 * @endcode
 *
 */
void init_float_array(Flt *vec, float *arr, size_t allocated_length, size_t active_length);
// --------------------------------------------------------------------------------

/**
 * This funciton will initialize an array struct container of type Dble
 *
 * /param vec A vector struct container of type Dble
 * /param arr An array of type unsigned double
 * /param allocated_length The allocated length of the array
 * /param active_length The number of acticaly populated indices in the array arr
 *
 * @code
 * Dble arr;
 * double a[5] = {1.1, 2.2};
 * init_double_array(&arr, a, 5, 2);
 * // Since the array is statically allocated it does not need to be freed
 * @endcode
 *
 */
void init_double_array(Dble *vec, double *arr, size_t allocated_length, size_t active_length);
// --------------------------------------------------------------------------------

/**
 * This funciton will initialize an array struct container of type LDble
 *
 * /param vec A vector struct container of type LDble
 * /param arr An array of type long double
 * /param allocated_length The allocated length of the array
 * /param active_length The number of acticaly populated indices in the array arr
 *
 * @code
 * LDble arr;
 * long doub;e a[5] = {1.1, 2.2};
 * init_ldouble_array(&arr, a, 5, 2);
 * // Since the array is statically allocated it does not need to be freed
 * @endcode
 *
 */
void init_ldouble_array(LDble *vec, long double *arr, size_t allocated_length, size_t active_length);
// --------------------------------------------------------------------------------

/**
 * This funciton will initialize an array struct container of type Char
 *
 * /param vec A vector struct container of type Char
 * /param arr An array of type unsigned char
 * /param allocated_length The allocated length of the array
 * /param active_length The number of acticaly populated indices in the array arr
 *
 * @code
 * Char arr;
 * char a[5] = {'a', 'b'};
 * init_char_array(&arr, a, 5, 2);
 * // Since the array is statically allocated it does not need to be freed
 * @endcode
 *
 */
void init_char_array(Char *vec, char *arr, size_t allocated_length, size_t active_length);
// --------------------------------------------------------------------------------

/**
 * This funciton will initialize an array struct container of type UChar
 *
 * /param vec A vector struct container of type UChar
 * /param arr An array of type unsigned unsigned char
 * /param allocated_length The allocated length of the array
 * /param active_length The number of acticaly populated indices in the array arr
 *
 * @code
 * UChar arr;
 * unsigned char a[5] = {'a', 'b'};
 * init_uchar_array(&arr, a, 5, 2);
 * // Since the array is statically allocated it does not need to be freed
 * @endcode
 *
 */
void init_uchar_array(UChar *vec, unsigned char *arr, size_t allocated_length, size_t active_length);
// --------------------------------------------------------------------------------

/**
 * This funciton will initialize an array struct container of type Bool
 *
 * /param vec A vector struct container of type Bool
 * /param arr An array of type unsigned bool
 * /param allocated_length The allocated length of the array
 * /param active_length The number of acticaly populated indices in the array arr
 *
 * @code
 * Char arr;
 * char a[5] = {trye, true};
 * init_bool_array(&arr, a, 5, 2);
 * // Since the array is statically allocated it does not need to be freed
 * @endcode
 *
 */
void init_bool_array(Bool *vec, bool *arr, size_t allocated_length, size_t active_length);
// --------------------------------------------------------------------------------
// INIT_ARRAY GENERIC OPERATOR

// Controlling expression to define function type for INIT_VECTOR macro
#define INIT_ARRAY(T, arr, aloc_len, active_len) _Generic( (T), Short: init_short_array, \
										           UShort: init_ushort_array, \
										           Int: init_int_array, \
										           UInt: init_uint_array, \
										           LInt: init_long_array, \
										           ULInt: init_ulong_array, \
										           LLInt: init_llong_array, \
										           ULLInt: init_ullong_array, \
										           Flt: init_float_array, \
										           Dble: init_double_array, \
										           LDble: init_ldouble_array, \
										           Char: init_char_array, \
												   UChar: init_uchar_array)(&T, arr, aloc_len, active_len)
#endif /* vector_H */
// ==========================================================================================
// ==========================================================================================
// eof
