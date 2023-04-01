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
#include <string.h>

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
// ==========================================================================================
// ==========================================================================================

/*
 * This function pushes a scalar short value to a user defined indice
 * in a Short vector struc.
 *
 * /param vec A vector struct of type Short
 * /param value The scalar value of type short
 * /param index The index where the data will be pushed.
 *
 * @code
 * #include "vector.h"
 * #include "print.h"
 *
 * Short vec;
 * init_short_vector(vec, 3);
 * push_short_vector(vec, 1, vec.active_length);
 * push_short_vector(vec, 2, vec.active_length);
 * push_short_vector(vec, 5, 0);
 * PRINT(vec);
 * // >> [ 5, 1, 2 ]
 * free_short_vector(vec)'
 * @endcode
 */
int push_short_vector(Short *vec, short int value, size_t index);
// ------------------------------------------------------------------------------------------

/*
 * This function pushes a scalar unsigned short value to a user defined indice
 * in a UShort vector struc.
 *
 * /param vec A vector struct of type UShort
 * /param value The scalar value of type unsigned short
 * /param index The index where the data will be pushed.
 *
 * @code
 * #include "vector.h"
 * #include "print.h"
 *
 * UShort vec;
 * init_ushort_vector(vec, 3);
 * push_ushort_vector(vec, 1, vec.active_length);
 * push_ushort_vector(vec, 2, vec.active_length);
 * push_ushort_vector(vec, 5, 0);
 * PRINT(vec);
 * // >> [ 5, 1, 2 ]
 * free_ushort_vector(vec)'
 * @endcode
 */
int push_ushort_vector(UShort *vec, unsigned short int value, size_t index);
// ------------------------------------------------------------------------------------------

/*
 * This function pushes a scalar int value to a user defined indice
 * in a Int vector struc.
 *
 * /param vec A vector struct of type Int
 * /param value The scalar value of type int
 * /param index The index where the data will be pushed.
 *
 * @code
 * #include "vector.h"
 * #include "print.h"
 *
 * Int vec;
 * init_int_vector(vec, 3);
 * push_int_vector(vec, 1, vec.active_length);
 * push_int_vector(vec, 2, vec.active_length);
 * push_int_vector(vec, 5, 0);
 * PRINT(vec);
 * // >> [ 5, 1, 2 ]
 * free_int_vector(vec)'
 * @endcode
 */
int push_int_vector(Int *vec, int value, size_t index);
// ------------------------------------------------------------------------------------------

/*
 * This function pushes a scalar unsigned int value to a user defined indice
 * in a UInt vector struc.
 *
 * /param vec A vector struct of type UInt
 * /param value The scalar value of type unsigned int
 * /param index The index where the data will be pushed.
 *
 * @code
 * #include "vector.h"
 * #include "print.h"
 *
 * UInt vec;
 * init_uint_vector(vec, 3);
 * push_uint_vector(vec, 1, vec.active_length);
 * push_uint_vector(vec, 2, vec.active_length);
 * push_uint_vector(vec, 5, 0);
 * PRINT(vec);
 * // >> [ 5, 1, 2 ]
 * free_uint_vector(vec)'
 * @endcode
 */
int push_uint_vector(UInt *vec, unsigned int value, size_t index);
// ------------------------------------------------------------------------------------------

/*
 * This function pushes a scalar long int value to a user defined indice
 * in a LInt vector struc.
 *
 * /param vec A vector struct of type LInt
 * /param value The scalar value of type long int
 * /param index The index where the data will be pushed.
 *
 * @code
 * #include "vector.h"
 * #include "print.h"
 *
 * LInt vec;
 * init_long_vector(vec, 3);
 * push_long_vector(vec, 1, vec.active_length);
 * push_long_vector(vec, 2, vec.active_length);
 * push_long_vector(vec, 5, 0);
 * PRINT(vec);
 * // >> [ 5, 1, 2 ]
 * free_long_vector(vec)'
 * @endcode
 */
int push_long_vector(LInt *vec, long int value, size_t index);
// ------------------------------------------------------------------------------------------

/*
 * This function pushes a scalar unsigned long int value to a user defined indice
 * in a ULInt vector struc.
 *
 * /param vec A vector struct of type ULInt
 * /param value The scalar value of type unsigned long int
 * /param index The index where the data will be pushed.
 *
 * @code
 * #include "vector.h"
 * #include "print.h"
 *
 * ULInt vec;
 * init_ulong_vector(vec, 3);
 * push_ulong_vector(vec, 1, vec.active_length);
 * push_ulong_vector(vec, 2, vec.active_length);
 * push_ulong_vector(vec, 5, 0);
 * PRINT(vec);
 * // >> [ 5, 1, 2 ]
 * free_ulong_vector(vec)'
 * @endcode
 */
int push_ulong_vector(ULInt *vec, unsigned long int value, size_t index);
// ------------------------------------------------------------------------------------------

/*
 * This function pushes a scalar long long int value to a user defined indice
 * in a LLInt vector struc.
 *
 * /param vec A vector struct of type LLInt
 * /param value The scalar value of type long long int
 * /param index The index where the data will be pushed.
 *
 * @code
 * #include "vector.h"
 * #include "print.h"
 *
 * LLInt vec;
 * inint_llong_vector(vec, 3);
 * push_llong_vector(vec, 1, vec.active_length);
 * push_llong_vector(vec, 2, vec.active_length);
 * push_llong_vector(vec, 5, 0);
 * PRINT(vec);
 * // >> [ 5, 1, 2 ]
 * free_llong_vector(vec)'
 * @endcode
 */
int push_llong_vector(LLInt *vec, long long int value, size_t index);
// ------------------------------------------------------------------------------------------

/*
 * This function pushes a scalar unsigned long long int value to a user defined indice
 * in a ULLInt vector struc.
 *
 * /param vec A vector struct of type ULLInt
 * /param value The scalar value of type unsigned long long int
 * /param index The index where the data will be pushed.
 *
 * @code
 * #include "vector.h"
 * #include "print.h"
 *
 * ULLInt vec;
 * init_ullong_vector(vec, 3);
 * push_ullong_vector(vec, 1, vec.active_length);
 * push_ullong_vector(vec, 2, vec.active_length);
 * push_ullong_vector(vec, 5, 0);
 * PRINT(vec);
 * // >> [ 5, 1, 2 ]
 * free_ullong_vector(vec)'
 * @endcode
 */
int push_ullong_vector(ULLInt *vec, unsigned long long int value, size_t index);
// ------------------------------------------------------------------------------------------

/*
 * This function pushes a scalar unsigned float value to a user defined indice
 * in a Flt vector struc.
 *
 * /param vec A vector struct of type Flt
 * /param value The scalar value of type float
 * /param index The index where the data will be pushed.
 *
 * @code
 * #include "vector.h"
 * #include "print.h"
 *
 * Flt vec;
 * init_float_vector(vec, 3);
 * push_float_vector(vec, 1.f, vec.active_length);
 * push_float_vector(vec, 2.f, vec.active_length);
 * push_float_vector(vec, 5.f, 0);
 * PRINT(vec);
 * // >> [ 5.000, 1.000, 2.000 ]
 * free_float_vector(vec)'
 * @endcode
 */
int push_float_vector(Flt *vec, float value, size_t index);
// ------------------------------------------------------------------------------------------

/*
 * This function pushes a scalar unsigned double value to a user defined indice
 * in a Dble vector struc.
 *
 * /param vec A vector struct of type Dble
 * /param value The scalar value of type double
 * /param index The index where the data will be pushed.
 *
 * @code
 * #include "vector.h"
 * #include "print.h"
 *
 * Dble vec;
 * init_double_vector(vec, 3);
 * push_double_vector(vec, 1., vec.active_length);
 * push_double_vector(vec, 2., vec.active_length);
 * push_double_vector(vec, 5., 0);
 * PRINT(vec);
 * // >> [ 5.000, 1.000, 2.000 ]
 * free_double_vector(vec)'
 * @endcode
 */
int push_double_vector(Dble *vec, double value, size_t index);
// ------------------------------------------------------------------------------------------

/*
 * This function pushes a scalar unsigned long double value to a user defined indice
 * in a LDble vector struc.
 *
 * /param vec A vector struct of type LDble
 * /param value The scalar value of type long double
 * /param index The index where the data will be pushed.
 *
 * @code
 * #include "vector.h"
 * #include "print.h"
 *
 * LDble vec;
 * init_ldouble_vector(vec, 3);
 * push_ldouble_vector(vec, 1., vec.active_length);
 * push_ldouble_vector(vec, 2., vec.active_length);
 * push_ldouble_vector(vec, 5., 0);
 * PRINT(vec);
 * // >> [ 5.000, 1.000, 2.000 ]
 * free_ldouble_vector(vec)'
 * @endcode
 */
int push_ldouble_vector(LDble *vec, long double value, size_t index);
// ------------------------------------------------------------------------------------------

/*
 * This function pushes a scalar char value to a user defined indice
 * in a Char vector struc.
 *
 * /param vec A vector struct of type Char
 * /param value The scalar value of type char
 * /param index The index where the data will be pushed.
 *
 * @code
 * #include "vector.h"
 * #include "print.h"
 *
 * Char vec;
 * init_char_vector(vec, 3);
 * push_char_vector(vec, 'a', vec.active_length);
 * push_char_vector(vec, 'b', vec.active_length);
 * push_char_vector(vec, 'c', 0);
 * PRINT(vec);
 * // >> [ c, a, b ]
 * free_char_vector(vec)'
 * @endcode
 */
int push_char_vector(Char *vec, char value, size_t index);
// ------------------------------------------------------------------------------------------

/*
 * This function pushes a scalar char value to a user defined indice
 * in a Char vector struc.
 *
 * /param vec A vector struct of type Char
 * /param value The scalar value of type char
 * /param index The index where the data will be pushed.
 *
 * @code
 * #include "vector.h"
 * #include "print.h"
 *
 * Char vec;
 * init_uchar_vector(vec, 3);
 * push_uchar_vector(vec, 'a', vec.active_length);
 * push_uchar_vector(vec, 'b', vec.active_length);
 * push_uchar_vector(vec, 'c', 0);
 * PRINT(vec);
 * // >> [ c, a, b ]
 * free_uchar_vector(vec)'
 * @endcode
 */
int push_uchar_vector(UChar *vec, unsigned char value, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will push a single string to an existing string vector container
 *
 * /param vec A vector struct of type String
 * /param value A string
 * /param index The index where the string is to be pushed
 *
 * @code
 * #include "vector.h"
 * #include "print.h"
 *
 * String vec;
 * init_string_vector(vec);
 * push_string_vector(&vec, "Hello", 0);
 * push_string_vector(&vec, "Goodbye", 1);
 * push_string_vector(&vec, "Again", 0);
 * PRINT(vec);
 * // >> [ Again, Hello, Goodbye ]
 * free_string_vector(&vec);
 * @endcode
 */
int push_string_vector(String *vec, char *value, size_t index);
// ------------------------------------------------------------------------------------------

/*
 * This function pushes a scalar bool value to a user defined indice
 * in a Bool vector struc.
 *
 * /param vec A vector struct of type Bool
 * /param value The scalar value of type bool
 * /param index The index where the data will be pushed.
 *
 * @code
 * #include "vector.h"
 * #include "print.h"
 *
 * Bool vec;
 * init_bool_vector(vec, 3);
 * push_bool_vector(vec, true, vec.active_length);
 * push_bool_vector(vec, true, vec.active_length);
 * push_bool_vector(vec, false, 0);
 * PRINT(vec);
 * // >> [ true, true, false ]
 * free_bool_vector(vec)'
 * @endcode
 */
int push_bool_vector(Bool *vec, bool value, size_t index);
// ==========================================================================================
// ==========================================================================================
// INSERT_TYPE_VECTOR

/**
 * This function will allow a user to insert a scalar short or an array of short
 * values into a vector struct of Short type.
 *
 * /param vec A vector struct of type Short
 * /param elements An array or scalar of type short
 * /param num_indices The number of data points in elements
 * /param index The index where the scalar or array is to be inserted
 *
 * @code
 * #include "vector.h"
 * #include "print.h"*
 *
 * Short vec;
 * init_short_vector(vec, 6);
 * push_short_vector(vec, 1);
 * push_short_vector(vec, 2);
 * push_short_vector(vec, 3);
 * short a[3] = {5, 6, 7};
 * insert_short_vector(vec, a, 3, 1);
 * PRINT(vec);
 * // >> [ 1, 5, 6, 7, 2, 3 ]
 * free_short_vector(&vec);
 * @endcode
 */
int insert_short_vector(Short *vec, short int *elements, size_t num_indices, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will allow a user to insert a scalar unsigned short or an array of unsigned short
 * values into a vector struct of UShort type.
 *
 * /param vec A vector struct of type UShort
 * /param elements An array or scalar of type unsigned short
 * /param num_indices The number of data points in elements
 * /param index The index where the scalar or array is to be inserted
 *
 * @code
 * #include "vector.h"
 * #include "print.h"*
 *
 * UShort vec;
 * init_ushort_vector(vec, 6);
 * push_ushort_vector(vec, 1);
 * push_ushort_vector(vec, 2);
 * push_ushort_vector(vec, 3);
 * unsigned short a[3] = {5, 6, 7};
 * insert_ushort_vector(vec, a, 3, 1);
 * PRINT(vec);
 * // >> [ 1, 5, 6, 7, 2, 3 ]
 * free_ushort_vector(&vec);
 * @endcode
 */
int insert_ushort_vector(UShort *vec, unsigned short int *elements, size_t num_indices, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will allow a user to insert a scalar int or an array of int
 * values into a vector struct of Int type.
 *
 * /param vec A vector struct of type Int
 * /param elements An array or scalar of type int
 * /param num_indices The number of data points in elements
 * /param index The index where the scalar or array is to be inserted
 *
 * @code
 * #include "vector.h"
 * #include "print.h"*
 *
 * Int vec;
 * init_int_vector(vec, 6);
 * push_int_vector(vec, 1);
 * push_int_vector(vec, 2);
 * push_int_vector(vec, 3);
 * int a[3] = {5, 6, 7};
 * insert_int_vector(vec, a, 3, 1);
 * PRINT(vec);
 * // >> [ 1, 5, 6, 7, 2, 3 ]
 * free_int_vector(&vec);
 * @endcode
 */
int insert_int_vector(Int *vec, int *elements, size_t num_indices, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will allow a user to insert a scalar unsigned int or an array of unsigned int
 * values into a vector struct of UInt type.
 *
 * /param vec A vector struct of type UInt
 * /param elements An array or scalar of type unsigned int
 * /param num_indices The number of data points in elements
 * /param index The index where the scalar or array is to be inserted
 *
 * @code
 * #include "vector.h"
 * #include "print.h"*
 *
 * UInt vec;
 * init_uint_vector(vec, 6);
 * push_uint_vector(vec, 1);
 * push_uint_vector(vec, 2);
 * push_uint_vector(vec, 3);
 * unsigned int a[3] = {5, 6, 7};
 * insert_uint_vector(vec, a, 3, 1);
 * PRINT(vec);
 * // >> [ 1, 5, 6, 7, 2, 3 ]
 * free_uint_vector(&vec);
 * @endcode
 */
int insert_uint_vector(UInt *vec, unsigned int *elements, size_t num_indices, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will allow a user to insert a scalar long or an array of long
 * values into a vector struct of LInt type.
 *
 * /param vec A vector struct of type LInt
 * /param elements An array or scalar of type long int
 * /param num_indices The number of data points in elements
 * /param index The index where the scalar or array is to be inserted
 *
 * @code
 * #include "vector.h"
 * #include "print.h"*
 *
 * LInt vec;
 * init_long_vector(vec, 6);
 * push_long_vector(vec, 1);
 * push_long_vector(vec, 2);
 * push_long_vector(vec, 3);
 * long int a[3] = {5, 6, 7};
 * insert_long_vector(vec, a, 3, 1);
 * PRINT(vec);
 * // >> [ 1, 5, 6, 7, 2, 3 ]
 * free_long_vector(&vec);
 * @endcode
 */
int insert_long_vector(LInt *vec, long int *elements, size_t num_indices, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will allow a user to insert a scalar unsigned long or an array of unsigned long
 * values into a vector struct of ULInt type.
 *
 * /param vec A vector struct of type ULInt
 * /param elements An array or scalar of type unsigned long int
 * /param num_indices The number of data points in elements
 * /param index The index where the scalar or array is to be inserted
 *
 * @code
 * #include "vector.h"
 * #include "print.h"*
 *
 * ULInt vec;
 * init_ulong_vector(vec, 6);
 * push_ulong_vector(vec, 1);
 * push_ulong_vector(vec, 2);
 * push_ulong_vector(vec, 3);
 * unsigned long int a[3] = {5, 6, 7};
 * insert_ulong_vector(vec, a, 3, 1);
 * PRINT(vec);
 * // >> [ 1, 5, 6, 7, 2, 3 ]
 * free_ulong_vector(&vec);
 * @endcode
 */
int insert_ulong_vector(ULInt *vec, unsigned long int *elements, size_t num_indices, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will allow a user to insert a scalar long long or an array of long long
 * values into a vector struct of LLInt type.
 *
 * /param vec A vector struct of type LLInt
 * /param elements An array or scalar of type long long int
 * /param num_indices The number of data points in elements
 * /param index The index where the scalar or array is to be inserted
 *
 * @code
 * #include "vector.h"
 * #include "print.h"*
 *
 * LLInt vec;
 * init_llong_vector(vec, 6);
 * push_llong_vector(vec, 1);
 * push_llong_vector(vec, 2);
 * push_llong_vector(vec, 3);
 * long long int a[3] = {5, 6, 7};
 * insert_llong_vector(vec, a, 3, 1);
 * PRINT(vec);
 * // >> [ 1, 5, 6, 7, 2, 3 ]
 * free_llong_vector(&vec);
 * @endcode
 */
int insert_llong_vector(LLInt *vec, long long int *elements, size_t num_indices, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will allow a user to insert a scalar unsigned long long or an array of unsigned long long
 * values into a vector struct of ULLInt type.
 *
 * /param vec A vector struct of type ULLInt
 * /param elements An array or scalar of type unsigned long long int
 * /param num_indices The number of data points in elements
 * /param index The index where the scalar or array is to be inserted
 *
 * @code
 * #include "vector.h"
 * #include "print.h"*
 *
 * ULLInt vec;
 * init_ullong_vector(vec, 6);
 * push_ullong_vector(vec, 1);
 * push_ullong_vector(vec, 2);
 * push_ullong_vector(vec, 3);
 * unsigned long long int a[3] = {5, 6, 7};
 * insert_ullong_vector(vec, a, 3, 1);
 * PRINT(vec);
 * // >> [ 1, 5, 6, 7, 2, 3 ]
 * free_ullong_vector(&vec);
 * @endcode
 */
int insert_ullong_vector(ULLInt *vec, unsigned long long int *elements, size_t num_indices, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will allow a user to insert a scalar float or an array of float
 * values into a vector struct of Flt type.
 *
 * /param vec A vector struct of type Flt
 * /param elements An array or scalar of type float
 * /param num_indices The number of data points in elements
 * /param index The index where the scalar or array is to be inserted
 *
 * @code
 * #include "vector.h"
 * #include "print.h"*
 *
 * Flt vec;
 * init_float_vector(vec, 6);
 * push_float_vector(vec, 1);
 * push_float_vector(vec, 2);
 * push_float_vector(vec, 3);
 * float a[3] = {5, 6, 7};
 * insert_float_vector(vec, a, 3, 1);
 * PRINT(vec);
 * // >> [ 1, 5, 6, 7, 2, 3 ]
 * free_float_vector(&vec);
 * @endcode
 */
int insert_float_vector(Flt *vec, float *elements, size_t num_indices, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will allow a user to insert a scalar double or an array of double
 * values into a vector struct of Dble type.
 *
 * /param vec A vector struct of type Dble
 * /param elements An array or scalar of type double
 * /param num_indices The number of data points in elements
 * /param index The index where the scalar or array is to be inserted
 *
 * @code
 * #include "vector.h"
 * #include "print.h"*
 *
 * Dble vec;
 * init_double_vector(vec, 6);
 * push_double_vector(vec, 1);
 * push_double_vector(vec, 2);
 * push_double_vector(vec, 3);
 * double a[3] = {5, 6, 7};
 * insert_double_vector(vec, a, 3, 1);
 * PRINT(vec);
 * // >> [ 1, 5, 6, 7, 2, 3 ]
 * free_double_vector(&vec);
 * @endcode
 */
int insert_double_vector(Dble *vec, double *elements, size_t num_indices, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will allow a user to insert a scalar long double or an array of long double
 * values into a vector struct of LDble type.
 *
 * /param vec A vector struct of type LDble
 * /param elements An array or scalar of type long double
 * /param num_indices The number of data points in elements
 * /param index The index where the scalar or array is to be inserted
 *
 * @code
 * #include "vector.h"
 * #include "print.h"*
 *
 * LDble vec;
 * init_ldouble_vector(vec, 6);
 * push_ldouble_vector(vec, 1);
 * push_ldouble_vector(vec, 2);
 * push_ldouble_vector(vec, 3);
 * long double a[3] = {5, 6, 7};
 * insert_ldouble_vector(vec, a, 3, 1);
 * PRINT(vec);
 * // >> [ 1, 5, 6, 7, 2, 3 ]
 * free_ldouble_vector(&vec);
 * @endcode
 */
int insert_ldouble_vector(LDble *vec, long double *elements, size_t num_indices, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will allow a user to insert a scalar char or an array of char
 * values into a vector struct of Char type.
 *
 * /param vec A vector struct of type Char
 * /param elements An array or scalar of type char
 * /param num_indices The number of data points in elements
 * /param index The index where the scalar or array is to be inserted
 *
 * @code
 * #include "vector.h"
 * #include "print.h"*
 *
 * Char vec;
 * init_char_vector(vec, 6);
 * push_char_vector(vec, 'a');
 * push_char_vector(vec, 'b');
 * push_char_vector(vec, 'c';
 * char a[3] = {'x', 'y', 'z'};
 * insert_ldouble_vector(vec, a, 3, 1);
 * PRINT(vec);
 * // >> [ a, x, y, z, b, c ]
 * free_char_vector(&vec);
 * @endcode
 */
int insert_char_vector(Char *vec, char *elements, size_t num_indices, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will allow a user to insert a scalar char or an array of char
 * values into a vector struct of Char type.
 *
 * /param vec A vector struct of type Char
 * /param elements An array or scalar of type char
 * /param num_indices The number of data points in elements
 * /param index The index where the scalar or array is to be inserted
 *
 * @code
 * #include "vector.h"
 * #include "print.h"*
 *
 * UChar vec;
 * init_uchar_vector(vec, 6);
 * push_uchar_vector(vec, 'a');
 * push_uchar_vector(vec, 'b');
 * push_uchar_vector(vec, 'c';
 * char a[3] = {'x', 'y', 'z'};
 * insert_uchar_vector(vec, a, 3, 1);
 * PRINT(vec);
 * // >> [ a, x, y, z, b, c ]
 * free_char_vector(&vec);
 * @endcode
 */
int insert_uchar_vector(UChar *vec, unsigned char *elements, size_t num_indices, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will allow a user to insert a scalar char or an array of bool
 * values into a vector struct of Bool type.
 *
 * /param vec A vector struct of type Bool
 * /param elements An array or scalar of type bool
 * /param num_indices The number of data points in elements
 * /param index The index where the scalar or array is to be inserted
 *
 * @code
 * #include "vector.h"
 * #include "print.h"*
 *
 * Bool vec;
 * init_bool_vector(vec, 6);
 * push_bool_vector(vec, true);
 * push_bool_vector(vec, true);
 * push_bool_vector(vec, false;
 * char a[3] = {false, false, false};
 * insert_bool_vector(vec, a, 3, 1);
 * PRINT(vec);
 * // >> [ true, false, false, false, true, false ]
 * free_bool_vector(&vec);
 * @endcode
 */
int insert_bool_vector(Bool *vec, bool *elements, size_t num_indices, size_t index);

#endif /* vector_H */
// ==========================================================================================
// ==========================================================================================
// eof
