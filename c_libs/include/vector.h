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
 * A collection of human readable integer representations that describe
 * whether an array is to be sorted in the forward or reverse direction
 */
typedef enum
{
	FORWARD,
	REVERSE
} sort_order;
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
												   UChar: init_uchar_array, \
												   Bool: init_bool_array)(&T, arr, aloc_len, active_len)
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
// ------------------------------------------------------------------------------------------

/**
 * This function will allow a user to insert a scalar char or an array of bool
 * values into a vector struct of String type.
 *
 * /param vec A vector struct of type String
 * /param elements An array or scalar of type char*
 * /param num_indices The number of data points in elements
 * /param index The index where the scalar or array is to be inserted
 *
 * @code
 * #include "vector.h"
 * #include "print.h"*
 *
 * String vec;
 * init_string_vector(vec);
 * push_string_vector(vec, "One");
 * push_string_vector(vec, "Two");
 * push_string_vector(vec, "Three");
 * char *a[3] = {"Four", "Five", "Six"};
 * insert_string_vector(vec, a, 3, 1);
 * PRINT(vec);
 * // >> [ One, Four, Five, Six, Two, Three ]
 * free_string_vector(&vec);
 * @endcode
 */
int insert_string_vector(String *vec, char **elements, size_t num_indices, size_t index);
// ==========================================================================================
// ==========================================================================================
// POP_VEC_INDEX prototypes

/**
 * This function will pop a value from an Short struct container as a user defined
 * index.  This function runs fastest, when the index is the last populated index.
 *
 * /param vec An struct container of type Short
 * /param index The index from which data is to be popped.
 *
 * @code
 * Short vec;
 * init_short_vector(vec, 5);
 * push_short_vector(vec, 1);
 * push_short_vector(vec, 2);
 * push_short_vector(vec, 3);
 * push_short_vector(vec, 4);
 * push_short_vector(vec, 5);
 * pop_short_vector_index(vec, 0);
 * pop_short_vector_index(vec, vec.active_length);
 * PRINT(vec);
 * [ 2, 3, 4 ]
 * free_short_vector(&vec);
 * @endcode
 */
int pop_short_vector_index(Short *vec, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will pop a value from an UShort struct container as a user defined
 * index.  This function runs fastest, when the index is the last populated index.
 *
 * /param vec An struct container of type UShort
 * /param index The index from which data is to be popped.
 *
 * @code
 * UShort vec;
 * init_ushort_vector(vec, 5);
 * push_ushort_vector(vec, 1);
 * push_ushort_vector(vec, 2);
 * push_ushort_vector(vec, 3);
 * push_ushort_vector(vec, 4);
 * push_ushort_vector(vec, 5);
 * pop_ushort_vector_index(vec, 0);
 * pop_ushort_vector_index(vec, vec.active_length);
 * PRINT(vec);
 * [ 2, 3, 4 ]
 * free_ushort_vector(&vec);
 * @endcode
 */
int pop_ushort_vector_index(UShort *vec, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will pop a value from an Int struct container as a user defined
 * index.  This function runs fastest, when the index is the last populated index.
 *
 * /param vec An struct container of type Int
 * /param index The index from which data is to be popped.
 *
 * @code
 * Int vec;
 * init_int_vector(vec, 5);
 * push_int_vector(vec, 1);
 * push_int_vector(vec, 2);
 * push_int_vector(vec, 3);
 * push_int_vector(vec, 4);
 * push_int_vector(vec, 5);
 * pop_int_vector_index(vec, 0);
 * pop_int_vector_index(vec, vec.active_length);
 * PRINT(vec);
 * [ 2, 3, 4 ]
 * free_int_vector(&vec);
 * @endcode
 */
int pop_int_vector_index(Int *vec, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will pop a value from an UInt struct container as a user defined
 * index.  This function runs fastest, when the index is the last populated index.
 *
 * /param vec An struct container of type UInt
 * /param index The index from which data is to be popped.
 *
 * @code
 * UInt vec;
 * init_uint_vector(vec, 5);
 * push_uint_vector(vec, 1);
 * push_uint_vector(vec, 2);
 * push_uint_vector(vec, 3);
 * push_uint_vector(vec, 4);
 * push_uint_vector(vec, 5);
 * pop_uint_vector_index(vec, 0);
 * pop_uint_vector_index(vec, vec.active_length);
 * PRINT(vec);
 * [ 2, 3, 4 ]
 * free_uint_vector(&vec);
 * @endcode
 */
int pop_uint_vector_index(UInt *vec, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will pop a value from an LInt struct container as a user defined
 * index.  This function runs fastest, when the index is the last populated index.
 *
 * /param vec An struct container of type LInt
 * /param index The index from which data is to be popped.
 *
 * @code
 * LInt vec;
 * init_long_vector(vec, 5);
 * push_long_vector(vec, 1);
 * push_long_vector(vec, 2);
 * push_long_vector(vec, 3);
 * push_long_vector(vec, 4);
 * push_long_vector(vec, 5);
 * pop_long_vector_index(vec, 0);
 * pop_long_vector_index(vec, vec.active_length);
 * PRINT(vec);
 * [ 2, 3, 4 ]
 * free_long_vector(&vec);
 * @endcode
 */
int pop_long_vector_index(LInt *vec, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will pop a value from an ULInt struct container as a user defined
 * index.  This function runs fastest, when the index is the last populated index.
 *
 * /param vec An struct container of type ULInt
 * /param index The index from which data is to be popped.
 *
 * @code
 * ULInt vec;
 * init_ulong_vector(vec, 5);
 * push_ulong_vector(vec, 1);
 * push_ulong_vector(vec, 2);
 * push_ulong_vector(vec, 3);
 * push_ulong_vector(vec, 4);
 * push_ulong_vector(vec, 5);
 * pop_ulong_vector_index(vec, 0);
 * pop_ulong_vector_index(vec, vec.active_length);
 * PRINT(vec);
 * [ 2, 3, 4 ]
 * free_ulong_vector(&vec);
 * @endcode
 */
int pop_ulong_vector_index(ULInt *vec, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will pop a value from an LLInt struct container as a user defined
 * index.  This function runs fastest, when the index is the last populated index.
 *
 * /param vec An struct container of type LLInt
 * /param index The index from which data is to be popped.
 *
 * @code
 * LLInt vec;
 * init_llong_vector(vec, 5);
 * push_llong_vector(vec, 1);
 * push_llong_vector(vec, 2);
 * push_llong_vector(vec, 3);
 * push_llong_vector(vec, 4);
 * push_llong_vector(vec, 5);
 * pop_llong_vector_index(vec, 0);
 * pop_llong_vector_index(vec, vec.active_length);
 * PRINT(vec);
 * [ 2, 3, 4 ]
 * free_llong_vector(&vec);
 * @endcode
 */
int pop_llong_vector_index(LLInt *vec, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will pop a value from an ULLInt struct container as a user defined
 * index.  This function runs fastest, when the index is the last populated index.
 *
 * /param vec An struct container of type ULLInt
 * /param index The index from which data is to be popped.
 *
 * @code
 * ULLInt vec;
 * init_ullong_vector(vec, 5);
 * push_ullong_vector(vec, 1);
 * push_ullong_vector(vec, 2);
 * push_ullong_vector(vec, 3);
 * push_ullong_vector(vec, 4);
 * push_ullong_vector(vec, 5);
 * pop_ullong_vector_index(vec, 0);
 * pop_ullong_vector_index(vec, vec.active_length);
 * PRINT(vec);
 * [ 2, 3, 4 ]
 * free_ullong_vector(&vec);
 * @endcode
 */
int pop_ullong_vector_index(ULLInt *vec, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will pop a value from an Flt struct container as a user defined
 * index.  This function runs fastest, when the index is the last populated index.
 *
 * /param vec An struct container of type Flt
 * /param index The index from which data is to be popped.
 *
 * @code
 * Flt vec;
 * init_float_vector(vec, 5);
 * push_float_vector(vec, 1);
 * push_float_vector(vec, 2);
 * push_float_vector(vec, 3);
 * push_float_vector(vec, 4);
 * push_float_vector(vec, 5);
 * pop_float_vector_index(vec, 0);
 * pop_float_vector_index(vec, vec.active_length);
 * PRINT(vec);
 * [ 2, 3, 4 ]
 * free_float_vector(&vec);
 * @endcode
 */
int pop_float_vector_index(Flt *vec, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will pop a value from an Dble struct container as a user defined
 * index.  This function runs fastest, when the index is the last populated index.
 *
 * /param vec An struct container of type Dble
 * /param index The index from which data is to be popped.
 *
 * @code
 * Dble vec;
 * init_double_vector(vec, 5);
 * push_double_vector(vec, 1);
 * push_double_vector(vec, 2);
 * push_double_vector(vec, 3);
 * push_double_vector(vec, 4);
 * push_double_vector(vec, 5);
 * pop_double_vector_index(vec, 0);
 * pop_double_vector_index(vec, vec.active_length);
 * PRINT(vec);
 * [ 2, 3, 4 ]
 * free_double_vector(&vec);
 * @endcode
 */
int pop_double_vector_index(Dble *vec, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will pop a value from an LDble struct container as a user defined
 * index.  This function runs fastest, when the index is the last populated index.
 *
 * /param vec An struct container of type LDble
 * /param index The index from which data is to be popped.
 *
 * @code
 * LDble vec;
 * init_ldouble_vector(vec, 5);
 * push_ldouble_vector(vec, 1);
 * push_ldouble_vector(vec, 2);
 * push_ldouble_vector(vec, 3);
 * push_ldouble_vector(vec, 4);
 * push_ldouble_vector(vec, 5);
 * pop_ldouble_vector_index(vec, 0);
 * pop_ldouble_vector_index(vec, vec.active_length);
 * PRINT(vec);
 * [ 2, 3, 4 ]
 * free_ldouble_vector(&vec);
 * @endcode
 */
int pop_ldouble_vector_index(LDble *vec, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will pop a value from an Char struct container as a user defined
 * index.  This function runs fastest, when the index is the last populated index.
 *
 * /param vec An struct container of type Char
 * /param index The index from which data is to be popped.
 *
 * @code
 * Char vec;
 * init_char_vector(vec, 5);
 * push_char_vector(vec, 1);
 * push_char_vector(vec, 2);
 * push_char_vector(vec, 3);
 * push_char_vector(vec, 4);
 * push_char_vector(vec, 5);
 * pop_char_vector_index(vec, 0);
 * pop_char_vector_index(vec, vec.active_length);
 * PRINT(vec);
 * [ 2, 3, 4 ]
 * free_char_vector(&vec);
 * @endcode
 */
int pop_char_vector_index(Char *vec, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will pop a value from an Char struct container as a user defined
 * index.  This function runs fastest, when the index is the last populated index.
 *
 * /param vec An struct container of type UChar
 * /param index The index from which data is to be popped.
 *
 * @code
 * UChar vec;
 * init_uchar_vector(vec, 5);
 * push_uchar_vector(vec, 1);
 * push_uchar_vector(vec, 2);
 * push_uchar_vector(vec, 3);
 * push_uchar_vector(vec, 4);
 * push_uchar_vector(vec, 5);
 * pop_uchar_vector_index(vec, 0);
 * pop_uchar_vector_index(vec, vec.active_length);
 * PRINT(vec);
 * [ 2, 3, 4 ]
 * free_uchar_vector(&vec);
 * @endcode
 */
int pop_uchar_vector_index(UChar *vec, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will pop a value from an Bool struct container as a user defined
 * index.  This function runs fastest, when the index is the last populated index.
 *
 * /param vec An struct container of type Bool
 * /param index The index from which data is to be popped.
 *
 * @code
 * Bool vec;
 * init_bool_vector(vec, 5);
 * push_bool_vector(vec, true);
 * push_bool_vector(vec, true);
 * push_bool_vector(vec, true);
 * push_bool_vector(vec, false);
 * push_bool_vector(vec, false);
 * pop_bool_vector_index(vec, 0);
 * pop_bool_vector_index(vec, vec.active_length);
 * PRINT(vec);
 * [ true, true, false ]
 * free_char_vector(&vec);
 * @endcode
 */
int pop_bool_vector_index(Bool *vec, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will pop a value from an Char struct container as a user defined
 * index.  This function runs fastest, when the index is the last populated index.
 *
 * /param vec An struct container of type Char
 * /param index The index from which data is to be popped.
 *
 * @code
 * String vec;
 * init_string_vector(vec);
 * push_string_vector(vec, "Hello", vec.active_length);
 * push_string_vector(vec, "Goodbye", vec.active_length);
 * push_string_vector(vec, "again", vec.active_length);
 * push_string_vector(vec, Test", vec.active_length);
 * push_string_vector(vec, "One", vec.active_length);
 * pop_string_vector_index(vec, 0);
 * PRINT(vec);
 * [ Goodbye, again, Test, One ]
 * free_string_vector(&vec);
 * @endcode
 */
int pop_string_vector_index(String *vec, size_t index);
// ==========================================================================================
// ==========================================================================================
// REPLACE_TYPE_VALUES FUNCTIONS

/**
 * This function will replace all instances of a scalar value in an Short
 * struct container.
 *
 * /param vec A struct container of type Short
 * /param old_value An short int scalar variable to be replaced
 * /param new_value An short int scalar variable to replace old_value with
 *
 * @code
 * Short vec;
 * init_short_vector(vec, 5);
 * push_short_vector(vec, 1);
 * push_short_vector(vec, 1);
 * push_short_vector(vec, 2);
 * push_short_vector(vec, 1);
 * push_short_vector(vec, 3);
 * replace_short_vector_values(vec, 1, 5);
 * PRINT(vec);
 * //>> [ 5, 5, 2, 5, 3 ]
 * free_short_vector(&vec);
 * @endcode
 */
void replace_short_vector_values(Short *vec, short int old_value, short int new_value);
// ------------------------------------------------------------------------------------------

/**
 * This function will replace all instances of a scalar value in an UShort
 * struct container.
 *
 * /param vec A struct container of type UShort
 * /param old_value An unsigned short int scalar variable to be replaced
 * /param new_value An unsigned short int scalar variable to replace old_value with
 *
 * @code
 * UShort vec;
 * init_ushort_vector(vec, 5);
 * push_ushort_vector(vec, 1);
 * push_ushort_vector(vec, 1);
 * push_ushort_vector(vec, 2);
 * push_ushort_vector(vec, 1);
 * push_ushort_vector(vec, 3);
 * replace_ushort_vector_values(vec, 1, 5);
 * PRINT(vec);
 * //>> [ 5, 5, 2, 5, 3 ]
 * free_ushort_vector(&vec);
 * @endcode
 */
void replace_ushort_vector_values(UShort *vec, unsigned short int old_value, unsigned short int new_value);
// ------------------------------------------------------------------------------------------

/**
 * This function will replace all instances of a scalar value in an Int
 * struct container.
 *
 * /param vec A struct container of type Int
 * /param old_value An int scalar variable to be replaced
 * /param new_value An int scalar variable to replace old_value with
 *
 * @code
 * Int vec;
 * init_int_vector(vec, 5);
 * push_int_vector(vec, 1);
 * push_int_vector(vec, 1);
 * push_int_vector(vec, 2);
 * push_int_vector(vec, 1);
 * push_int_vector(vec, 3);
 * replace_int_vector_values(vec, 1, 5);
 * PRINT(vec);
 * //>> [ 5, 5, 2, 5, 3 ]
 * free_int_vector(&vec);
 * @endcode
 */
void replace_int_vector_values(Int *vec, int old_value, int new_value);
// ------------------------------------------------------------------------------------------

/**
 * This function will replace all instances of a scalar value in an UInt
 * struct container.
 *
 * /param vec A struct container of type UInt
 * /param old_value An unsigned int scalar variable to be replaced
 * /param new_value An unsigned int scalar variable to replace old_value with
 *
 * @code
 * UInt vec;
 * init_uint_vector(vec, 5);
 * push_uint_vector(vec, 1);
 * push_uint_vector(vec, 1);
 * push_uint_vector(vec, 2);
 * push_uint_vector(vec, 1);
 * push_uint_vector(vec, 3);
 * replace_uint_vector_values(vec, 1, 5);
 * PRINT(vec);
 * //>> [ 5, 5, 2, 5, 3 ]
 * free_uint_vector(&vec);
 * @endcode
 */
void replace_uint_vector_values(UInt *vec, unsigned int old_value, unsigned int new_value);
// ------------------------------------------------------------------------------------------

/**
 * This function will replace all instances of a scalar value in an LInt
 * struct container.
 *
 * /param vec A struct container of type LInt
 * /param old_value An long int scalar variable to be replaced
 * /param new_value An long int scalar variable to replace old_value with
 *
 * @code
 * LInt vec;
 * init_long_vector(vec, 5);
 * push_long_vector(vec, 1);
 * push_long_vector(vec, 1);
 * push_long_vector(vec, 2);
 * push_long_vector(vec, 1);
 * push_long_vector(vec, 3);
 * replace_long_vector_values(vec, 1, 5);
 * PRINT(vec);
 * //>> [ 5, 5, 2, 5, 3 ]
 * free_long_vector(&vec);
 * @endcode
 */
void replace_long_vector_values(LInt *vec, long int old_value, long int new_value);
// ------------------------------------------------------------------------------------------

/**
 * This function will replace all instances of a scalar value in an ULInt
 * struct container.
 *
 * /param vec A struct container of type ULInt
 * /param old_value An unsigned long int scalar variable to be replaced
 * /param new_value An unsigned long int scalar variable to replace old_value with
 *
 * @code
 * ULInt vec;
 * init_ulong_vector(vec, 5);
 * push_ulong_vector(vec, 1);
 * push_ulong_vector(vec, 1);
 * push_ulong_vector(vec, 2);
 * push_ulong_vector(vec, 1);
 * push_ulong_vector(vec, 3);
 * replace_ulong_vector_values(vec, 1, 5);
 * PRINT(vec);
 * //>> [ 5, 5, 2, 5, 3 ]
 * free_ulong_vector(&vec);
 * @endcode
 */
void replace_ulong_vector_values(ULInt *vec, unsigned long int old_value, unsigned long int new_value);
// ------------------------------------------------------------------------------------------

/**
 * This function will replace all instances of a scalar value in an LLInt
 * struct container.
 *
 * /param vec A struct container of type LLInt
 * /param old_value An long long int scalar variable to be replaced
 * /param new_value An long long int scalar variable to replace old_value with
 *
 * @code
 * LLInt vec;
 * init_llong_vector(vec, 5);
 * push_llong_vector(vec, 1);
 * push_llong_vector(vec, 1);
 * push_llong_vector(vec, 2);
 * push_llong_vector(vec, 1);
 * push_llong_vector(vec, 3);
 * replace_llong_vector_values(vec, 1, 5);
 * PRINT(vec);
 * //>> [ 5, 5, 2, 5, 3 ]
 * free_llong_vector(&vec);
 * @endcode
 */
void replace_llong_vector_values(LLInt *vec, long long int old_value, long long int new_value);
// ------------------------------------------------------------------------------------------

/**
 * This function will replace all instances of a scalar value in an ULLInt
 * struct container.
 *
 * /param vec A struct container of type ULLInt
 * /param old_value An unsigned long long int scalar variable to be replaced
 * /param new_value An unsigned long long int scalar variable to replace old_value with
 *
 * @code
 * ULLInt vec;
 * init_ullong_vector(vec, 5);
 * push_ullong_vector(vec, 1);
 * push_ullong_vector(vec, 1);
 * push_ullong_vector(vec, 2);
 * push_ullong_vector(vec, 1);
 * push_ullong_vector(vec, 3);
 * replace_ullong_vector_values(vec, 1, 5);
 * PRINT(vec);
 * //>> [ 5, 5, 2, 5, 3 ]
 * free_ullong_vector(&vec);
 * @endcode
 */
void replace_ullong_vector_values(ULLInt *vec, unsigned long long int old_value, unsigned long long int new_value);
// ------------------------------------------------------------------------------------------

/**
 * This function will replace all instances of a scalar value in an Flt
 * struct container.
 *
 * /param vec A struct container of type Flt
 * /param old_value An float scalar variable to be replaced
 * /param new_value An float scalar variable to replace old_value with
 *
 * @code
 * Flt vec;
 * init_float_vector(vec, 5);
 * push_float_vector(vec, 1);
 * push_float_vector(vec, 1);
 * push_float_vector(vec, 2);
 * push_float_vector(vec, 1);
 * push_float_vector(vec, 3);
 * replace_float_vector_values(vec, 1, 5);
 * PRINT(vec);
 * //>> [ 5, 5, 2, 5, 3 ]
 * free_float_vector(&vec);
 * @endcode
 */
void replace_float_vector_values(Flt *vec, float old_value, float new_value);
// ------------------------------------------------------------------------------------------

/**
 * This function will replace all instances of a scalar value in an Dble
 * struct container.
 *
 * /param vec A struct container of type Dble
 * /param old_value An double scalar variable to be replaced
 * /param new_value An double scalar variable to replace old_value with
 *
 * @code
 * Dble vec;
 * init_double_vector(vec, 5);
 * push_double_vector(vec, 1);
 * push_double_vector(vec, 1);
 * push_double_vector(vec, 2);
 * push_double_vector(vec, 1);
 * push_double_vector(vec, 3);
 * replace_double_vector_values(vec, 1, 5);
 * PRINT(vec);
 * //>> [ 5, 5, 2, 5, 3 ]
 * free_double_vector(&vec);
 * @endcode
 */
void replace_double_vector_values(Dble *vec, double old_value, double new_value);
// ------------------------------------------------------------------------------------------

/**
 * This function will replace all instances of a scalar value in an LDble
 * struct container.
 *
 * /param vec A struct container of type LDble
 * /param old_value A long double scalar variable to be replaced
 * /param new_value A long double scalar variable to replace old_value with
 *
 * @code
 * LDble vec;
 * init_ldouble_vector(vec, 5);
 * push_ldouble_vector(vec, 1);
 * push_ldouble_vector(vec, 1);
 * push_ldouble_vector(vec, 2);
 * push_ldouble_vector(vec, 1);
 * push_ldouble_vector(vec, 3);
 * replace_ldouble_vector_values(vec, 1, 5);
 * PRINT(vec);
 * //>> [ 5, 5, 2, 5, 3 ]
 * free_ldouble_vector(&vec);
 * @endcode
 */
void replace_ldouble_vector_values(LDble *vec, long double old_value, long double new_value);
// ------------------------------------------------------------------------------------------

/**
 * This function will replace all instances of a scalar value in an Char
 * struct container.
 *
 * /param vec A struct container of type Char
 * /param old_value A char scalar variable to be replaced
 * /param new_value A char scalar variable to replace old_value with
 *
 * @code
 * Char vec;
 * init_char_vector(vec, 5);
 * push_char_vector(vec, 1);
 * push_char_vector(vec, 1);
 * push_char_vector(vec, 2);
 * push_char_vector(vec, 1);
 * push_char_vector(vec, 3);
 * replace_char_vector_values(vec, 1, 5);
 * PRINT(vec);
 * //>> [ 5, 5, 2, 5, 3 ]
 * free_char_vector(&vec);
 * @endcode
 */
void replace_char_vector_values(Char *vec, char old_value, char new_value);
// ------------------------------------------------------------------------------------------

/**
 * This function will replace all instances of a scalar value in an Char
 * struct container.
 *
 * /param vec A struct container of type UChar
 * /param old_value A char scalar variable to be replaced
 * /param new_value A char scalar variable to replace old_value with
 *
 * @code
 * UChar vec;
 * init_uchar_vector(vec, 5);
 * push_uchar_vector(vec, 1);
 * push_uchar_vector(vec, 1);
 * push_uchar_vector(vec, 2);
 * push_uchar_vector(vec, 1);
 * push_uchar_vector(vec, 3);
 * replace_uchar_vector_values(vec, 1, 5);
 * PRINT(vec);
 * //>> [ 5, 5, 2, 5, 3 ]
 * free_uchar_vector(&vec);
 * @endcode
 */
void replace_uchar_vector_values(UChar *vec, unsigned char old_value, unsigned char new_value);
// ------------------------------------------------------------------------------------------

/**
 * This function will replace all instances of a scalar value in an Bool
 * struct container.
 *
 * /param vec A struct container of type Bool
 * /param old_value A bool scalar variable to be replaced
 * /param new_value A bool scalar variable to replace old_value with
 *
 * @code
 * Char vec;
 * init_bool_vector(vec, 5);
 * push_bool_vector(vec, true);
 * push_bool_vector(vec, true);
 * push_bool_vector(vec, false);
 * push_bool_vector(vec, true);
 * push_bool_vector(vec, true);
 * replace_bool_vector_values(vec, true, false);
 * PRINT(vec);
 * //>> [ false, false, false, false, false ]
 * free_bool_vector(&vec);
 * @endcode
 */
void replace_bool_vector_values(Bool *vec, bool old_value, char new_value);
// ------------------------------------------------------------------------------------------

/**
 * This function will replace all instances of a string within a String vector struct
 *
 * /param vec A struct container of type String
 * /param old_value The old string value
 * /param new_value The new string value
 *
 * @code
 * String vec;
 * init_string_vector(vec);
 * push_string_vector(vec, "Hello", 0);
 * push_string_vector(vec, "Goodbye", 1);
 * push_string_vector(vec, "Hello", 2);
 * push_string_vector(vec, "Goodbye", 3);
 * replace_string_vector_values(vec, "Hello", "Wrong");
 * PRINT(vec);
 * // >> [ Wrong, Goodbye, Wrong, Goodbye);
 * free_string_vector(&vec);
 * @endcode
 */
void replace_string_vector_values(String *vec, char *old_value, char *new_value);
// ==========================================================================================
// ==========================================================================================
// FREE_TYPE_VEC FUNCTIONS

/**
 * This function will free all memory from an Short data type assuming the
 * type was used for dynamically allocated memory.  If the type was initialized
 * for statically allocated memory, this function will write an error to
 * stderror and return a value of -1 to the calling program.
 *
 * /param vec A struct container of type Short
 */
void free_short_vector(Short *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will free all memory from an UShort data type assuming the
 * type was used for dynamically allocated memory.  If the type was initialized
 * for statically allocated memory, this function will write an error to
 * stderror and return a value of -1 to the calling program.
 *
 * /param vec A struct container of type UShort
 */
void free_ushort_vector(UShort *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will free all memory from an Int data type assuming the
 * type was used for dynamically allocated memory.  If the type was initialized
 * for statically allocated memory, this function will write an error to
 * stderror and return a value of -1 to the calling program.
 *
 * /param vec A struct container of type Int
 */
void free_int_vector(Int *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will free all memory from an UInt data type assuming the
 * type was used for dynamically allocated memory.  If the type was initialized
 * for statically allocated memory, this function will write an error to
 * stderror and return a value of -1 to the calling program.
 *
 * /param vec A struct container of type UInt
 */
void free_uint_vector(UInt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will free all memory from an LInt data type assuming the
 * type was used for dynamically allocated memory.  If the type was initialized
 * for statically allocated memory, this function will write an error to
 * stderror and return a value of -1 to the calling program.
 *
 * /param vec A struct container of type LInt
 */
void free_long_vector(LInt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will free all memory from an ULInt data type assuming the
 * type was used for dynamically allocated memory.  If the type was initialized
 * for statically allocated memory, this function will write an error to
 * stderror and return a value of -1 to the calling program.
 *
 * /param vec A struct container of type ULInt
 */
void free_ulong_vector(ULInt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will free all memory from an LLInt data type assuming the
 * type was used for dynamically allocated memory.  If the type was initialized
 * for statically allocated memory, this function will write an error to
 * stderror and return a value of -1 to the calling program.
 *
 * /param vec A struct container of type LLInt
 */
void free_llong_vector(LLInt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will free all memory from an ULLInt data type assuming the
 * type was used for dynamically allocated memory.  If the type was initialized
 * for statically allocated memory, this function will write an error to
 * stderror and return a value of -1 to the calling program.
 *
 * /param vec A struct container of type ULLInt
 */
void free_ullong_vector(ULLInt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will free all memory from an Flt data type assuming the
 * type was used for dynamically allocated memory.  If the type was initialized
 * for statically allocated memory, this function will write an error to
 * stderror and return a value of -1 to the calling program.
 *
 * /param vec A struct container of type Flt
 */
void free_float_vector(Flt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will free all memory from an Dble data type assuming the
 * type was used for dynamically allocated memory.  If the type was initialized
 * for statically allocated memory, this function will write an error to
 * stderror and return a value of -1 to the calling program.
 *
 * /param vec A struct container of type Dble
 */
void free_double_vector(Dble *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will free all memory from an LDble data type assuming the
 * type was used for dynamically allocated memory.  If the type was initialized
 * for statically allocated memory, this function will write an error to
 * stderror and return a value of -1 to the calling program.
 *
 * /param vec A struct container of type LDble
 */
void free_ldouble_vector(LDble *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will free all memory from an Char data type assuming the
 * type was used for dynamically allocated memory.  If the type was initialized
 * for statically allocated memory, this function will write an error to
 * stderror and return a value of -1 to the calling program.
 *
 * /param vec A struct container of type Char
 */
void free_char_vector(Char *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will free all memory from an Char data type assuming the
 * type was used for dynamically allocated memory.  If the type was initialized
 * for statically allocated memory, this function will write an error to
 * stderror and return a value of -1 to the calling program.
 *
 * /param vec A struct container of type UChar
 */
void free_uchar_vector(UChar *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will free all memory from an Bool data type assuming the
 * type was used for dynamically allocated memory.  If the type was initialized
 * for statically allocated memory, this function will write an error to
 * stderror and return a value of -1 to the calling program.
 *
 * /param vec A struct container of type Bool
 */
void free_bool_vector(Bool *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will free all memory from anString data type assuming the
 * type was used for dynamically allocated memory.
 *
 * /param vec A struct container of type String
 */
void free_string_vector(String *vec);
// ==========================================================================================
// ==========================================================================================
// DELETE_VEC_DUPLICATES Prototypes

/**
 * This function will delete all duplicate values in an Short struct, with
 * exception of the first instance of the variable.
 *
 * /param vec A struct container of type Short
 *
 * @code
 * Short vec;
 * init_short_vector(vec, 6);
 * push_short_vector(vec, 1);
 * push_short_vector(vec, 1);
 * push_short_vector(vec, 2);
 * push_short_vector(vec, 2);
 * push_short_vector(vec, 3);
 * push_short_vector(vec, 3);
 * delete_short_vector_duplicates(vec);
 * PRINT(vec);
 * [ 1, 2, 3 ]
 * free_short_vector(&vec);
 * @endcode
 */
void delete_short_vector_duplicates(Short *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will delete all duplicate values in an UShort struct, with
 * exception of the first instance of the variable.
 *
 * /param vec A struct container of type UShort
 *
 * @code
 * UShort vec;
 * init_ushort_vector(vec, 6);
 * push_ushort_vector(vec, 1);
 * push_ushort_vector(vec, 1);
 * push_ushort_vector(vec, 2);
 * push_ushort_vector(vec, 2);
 * push_ushort_vector(vec, 3);
 * push_ushort_vector(vec, 3);
 * delete_ushort_vector_duplicates(vec);
 * PRINT(vec);
 * [ 1, 2, 3 ]
 * free_ushort_vector(&vec);
 * @endcode
 */
void delete_ushort_vector_duplicates(UShort *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will delete all duplicate values in an Int struct, with
 * exception of the first instance of the variable.
 *
 * /param vec A struct container of type Int
 *
 * @code
 * Int vec;
 * init_int_vector(vec, 6);
 * push_int_vector(vec, 1);
 * push_int_vector(vec, 1);
 * push_int_vector(vec, 2);
 * push_int_vector(vec, 2);
 * push_int_vector(vec, 3);
 * push_int_vector(vec, 3);
 * delete_int_vector_duplicates(vec);
 * PRINT(vec);
 * [ 1, 2, 3 ]
 * free_int_vector(&vec);
 * @endcode
 */
void delete_int_vector_duplicates(Int *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will delete all duplicate values in a UInt struct, with
 * exception of the first instance of the variable.
 *
 * /param vec A struct container of type UInt
 *
 * @code
 * UInt vec;
 * init_uint_vector(vec, 6);
 * push_uint_vector(vec, 1);
 * push_uint_vector(vec, 1);
 * push_uint_vector(vec, 2);
 * push_uint_vector(vec, 2);
 * push_uint_vector(vec, 3);
 * push_uint_vector(vec, 3);
 * delete_uint_vector_duplicates(vec);
 * PRINT(vec);
 * [ 1, 2, 3 ]
 * free_uint_vector(&vec);
 * @endcode
 */
void delete_uint_vector_duplicates(UInt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will delete all duplicate values in a LInt struct, with
 * exception of the first instance of the variable.
 *
 * /param vec A struct container of type LInt
 *
 * @code
 * LInt vec;
 * init_long_vector(vec, 6);
 * push_long_vector(vec, 1);
 * push_long_vector(vec, 1);
 * push_long_vector(vec, 2);
 * push_long_vector(vec, 2);
 * push_long_vector(vec, 3);
 * push_long_vector(vec, 3);
 * delete_long_vector_duplicates(vec);
 * PRINT(vec);
 * [ 1, 2, 3 ]
 * free_long_vector(&vec);
 * @endcode
 */
void delete_long_vector_duplicates(LInt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will delete all duplicate values in a ULInt struct, with
 * exception of the first instance of the variable.
 *
 * /param vec A struct container of type ULInt
 *
 * @code
 * ULInt vec;
 * init_ulong_vector(vec, 6);
 * push_ulong_vector(vec, 1);
 * push_ulong_vector(vec, 1);
 * push_ulong_vector(vec, 2);
 * push_ulong_vector(vec, 2);
 * push_ulong_vector(vec, 3);
 * push_ulong_vector(vec, 3);
 * delete_ulong_vector_duplicates(vec);
 * PRINT(vec);
 * [ 1, 2, 3 ]
 * free_ulong_vector(&vec);
 * @endcode
 */
void delete_ulong_vector_duplicates(ULInt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will delete all duplicate values in a LLInt struct, with
 * exception of the first instance of the variable.
 *
 * /param vec A struct container of type LLInt
 *
 * @code
 * LLInt vec;
 * init_llong_vector(vec, 6);
 * push_llong_vector(vec, 1);
 * push_llong_vector(vec, 1);
 * push_llong_vector(vec, 2);
 * push_llong_vector(vec, 2);
 * push_llong_vector(vec, 3);
 * push_llong_vector(vec, 3);
 * delete_llong_vector_duplicates(vec);
 * PRINT(vec);
 * [ 1, 2, 3 ]
 * free_llong_vector(&vec);
 * @endcode
 */
void delete_llong_vector_duplicates(LLInt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will delete all duplicate values in a ULLInt struct, with
 * exception of the first instance of the variable.
 *
 * /param vec A struct container of type ULLInt
 *
 * @code
 * ULLInt vec;
 * init_ullong_vector(vec, 6);
 * push_ullong_vector(vec, 1);
 * push_ullong_vector(vec, 1);
 * push_ullong_vector(vec, 2);
 * push_ullong_vector(vec, 2);
 * push_ullong_vector(vec, 3);
 * push_ullong_vector(vec, 3);
 * delete_ullong_vector_duplicates(vec);
 * PRINT(vec);
 * [ 1, 2, 3 ]
 * free_ullong_vector(&vec);
 * @endcode
 */
void delete_ullong_vector_duplicates(ULLInt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will delete all duplicate values in a Flt struct, with
 * exception of the first instance of the variable.
 *
 * /param vec A struct container of type Flt
 *
 * @code
 * Flt vec;
 * init_float_vector(vec, 6);
 * push_float_vector(vec, 1.f);
 * push_float_vector(vec, 1.f);
 * push_float_vector(vec, 2.f);
 * push_float_vector(vec, 2.f);
 * push_float_vector(vec, 3.f);
 * push_float_vector(vec, 3.f);
 * delete_float_vector_duplicates(vec);
 * PRINT(vec);
 * [ 1, 2, 3 ]
 * free_float_vector(&vec);
 * @endcode
 */
void delete_float_vector_duplicates(Flt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will delete all duplicate values in a Dble struct, with
 * exception of the first instance of the variable.
 *
 * /param vec A struct container of type Dble
 *
 * @code
 * Dble vec;
 * init_double_vector(vec, 6);
 * push_double_vector(vec, 1.);
 * push_double_vector(vec, 1.);
 * push_double_vector(vec, 2.);
 * push_double_vector(vec, 2.);
 * push_double_vector(vec, 3.);
 * push_double_vector(vec, 3.);
 * delete_double_vector_duplicates(vec);
 * PRINT(vec);
 * [ 1, 2, 3 ]
 * free_double_vector(&vec);
 * @endcode
 */
void delete_double_vector_duplicates(Dble *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will delete all duplicate values in a LDble struct, with
 * exception of the first instance of the variable.
 *
 * /param vec A struct container of type LDble
 *
 * @code
 * LDble vec;
 * init_ldouble_vector(vec, 6);
 * push_ldouble_vector(vec, 1.);
 * push_ldouble_vector(vec, 1.);
 * push_ldouble_vector(vec, 2.);
 * push_ldouble_vector(vec, 2.);
 * push_ldouble_vector(vec, 3.);
 * push_ldouble_vector(vec, 3.);
 * delete_ldouble_vector_duplicates(vec);
 * PRINT(vec);
 * [ 1, 2, 3 ]
 * free_ldouble_vector(&vec);
 * @endcode
 */
void delete_ldouble_vector_duplicates(LDble *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will delete all duplicate values in a Char struct, with
 * exception of the first instance of the variable.
 *
 * /param vec A struct container of type Char
 *
 * @code
 * Char vec;
 * init_char_vector(vec, 6);
 * push_char_vector(vec, 'a');
 * push_char_vector(vec, 'a');
 * push_char_vector(vec, 'b');
 * push_char_vector(vec, 'b');
 * push_char_vector(vec, 'c');
 * push_char_vector(vec, 'c');
 * delete_char_vector_duplicates(vec);
 * PRINT(vec);
 * [ a, b, c ]
 * free_char_vector(&vec);
 * @endcode
 */
void delete_char_vector_duplicates(Char *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will delete all duplicate values in a Char struct, with
 * exception of the first instance of the variable.
 *
 * /param vec A struct container of type Char
 *
 * @code
 * UChar vec;
 * init_uchar_vector(vec, 6);
 * push_uchar_vector(vec, 'a');
 * push_uchar_vector(vec, 'a');
 * push_uchar_vector(vec, 'b');
 * push_uchar_vector(vec, 'b');
 * push_uchar_vector(vec, 'c');
 * push_uchar_vector(vec, 'c');
 * delete_uchar_vector_duplicates(vec);
 * PRINT(vec);
 * [ a, b, c ]
 * free_uchar_vector(&vec);
 * @endcode
 */
void delete_uchar_vector_duplicates(UChar *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will delete all duplicate values in a Bool struct, with
 * exception of the first instance of the variable.
 *
 * /param vec A struct container of type Bool
 *
 * @code
 * Char vec;
 * init_bool_vector(vec, 6);
 * push_bool_vector(vec, true);
 * push_bool_vector(vec, true);
 * push_bool_vector(vec, false);
 * push_bool_vector(vec, false);
 * push_bool_vector(vec, true);
 * push_bool_vector(vec, true);
 * delete_bool_vector_duplicates(vec);
 * PRINT(vec);
 * [ true, false ]
 * free_bool_vector(&vec);
 * @endcode
 */
void delete_bool_vector_duplicates(Bool *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will delete all duplicate values in a String struct, with
 * exception of the first instance of the variable
 *
 * /param vec A struct container of type String
 *
 * @code
 * init_string_vector(vec);
 * push_string_vector(vec, "One", 0);
 * push_string_vector(vec, "Two", 1);
 * push_string_vector(vec, "One", 2);
 * push_string_vector(vec, "One", 3);
 * push_string_vector(vec, "Three", 4);
 * push_string_vector(vec, "Two", 5);
 * delete_string_vector_duplicates(vec);
 * PRINT(vec);
 * // >> [One, Two, Three ]
 * free_string_vector(&vec);
 * @endcode
 */
void delete_string_vector_duplicates(String *vec);
// ==========================================================================================
// ==========================================================================================
// REVERSE_TYPE_VEC FUCNTIONS

/**
 * This function will reverse the order of the array in a struct of
 * type Short.
 *
 * /param vec A vector struct container of type Short
 *
 * @code
 * Short vec;
 * init_short_vector(vec, 4);
 * short a[4] = {1, 2, 3, 4};
 * insert_short_vector(vec, a, 4, 0);
 * reverse_short_vector(vec);
 * PRINT(vec);
 * [ 4, 3, 2, 1 ]
 * free_short_vector(&vec);
 * @endcode
 */
void reverse_short_vector(Short *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will reverse the order of the array in a struct of
 * type UShort.
 *
 * /param A vector struct container of type UShort
 *
 * @code
 * UShort vec;
 * init_ushort_vector(vec, 4);
 * ushort a[4] = {1, 2, 3, 4};
 * insert_ushort_vector(vec, a, 4, 0);
 * reverse_ushort_vector(vec);
 * PRINT(vec);
 * [ 4, 3, 2, 1 ]
 * free_ushort_vector(&vec);
 * @endcode
 */
void reverse_ushort_vector(UShort *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will reverse the order of the array in a struct of
 * type Int.
 *
 * /param vec A vector struct container of type Int
 *
 * @code
 * Int vec;
 * init_int_vector(vec, 4);
 * int a[4] = {1, 2, 3, 4};
 * insert_int_vector(vec, a, 4, 0);
 * reverse_int_vector(vec);
 * PRINT(vec);
 * [ 4, 3, 2, 1 ]
 * free_int_vector(&vec);
 * @endcode
 */
void reverse_int_vector(Int *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will reverse the order of the array in a struct of
 * type UInt.
 *
 * /param vec A vector struct container of type UInt
 *
 * @code
 * UInt vec;
 * init_uint_vector(vec, 4);
 * uint a[4] = {1, 2, 3, 4};
 * insert_uint_vector(vec, a, 4, 0);
 * reverse_uint_vector(vec);
 * PRINT(vec);
 * [ 4, 3, 2, 1 ]
 * free_uint_vector(&vec);
 * @endcode
 */
void reverse_uint_vector(UInt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will reverse the order of the array in a struct of
 * type LInt.
 *
 * /param vec A vector struct container of type LInt
 *
 * @code
 * LInt vec;
 * init_long_vector(vec, 4);
 * long int a[4] = {1, 2, 3, 4};
 * insert_long_vector(vec, a, 4, 0);
 * reverse_long_vector(vec);
 * PRINT(vec);
 * [ 4, 3, 2, 1 ]
 * free_long_vector(&vec);
 * @endcode
 */
void reverse_long_vector(LInt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will reverse the order of the array in a struct of
 * type ULInt.
 *
 * /param vec A vector struct container of type ULInt
 *
 * @code
 * ULInt vec;
 * init_ulong_vector(vec, 4);
 * unsigned long int a[4] = {1, 2, 3, 4};
 * insert_ulong_vector(vec, a, 4, 0);
 * reverse_ulong_vector(vec);
 * PRINT(vec);
 * [ 4, 3, 2, 1 ]
 * free_ulong_vector(&vec);
 * @endcode
 */
void reverse_ulong_vector(ULInt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will reverse the order of the array in a struct of
 * type LLInt.
 *
 * /param vec A vector struct container of type LLInt
 *
 * @code
 * LLInt vec;
 * init_llong_vector(vec, 4);
 * unsigned long long int a[4] = {1, 2, 3, 4};
 * insert_llong_vector(vec, a, 4, 0);
 * reverse_llong_vector(vec);
 * PRINT(vec);
 * [ 4, 3, 2, 1 ]
 * free_llong_vector(&vec);
 * @endcode
 */
void reverse_llong_vector(LLInt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will reverse the order of the array in a struct of
 * type ULLInt.
 *
 * /param vec A vector struct container of type ULLInt
 *
 * @code
 * LLInt vec;
 * init_llong_vector(vec, 4);
 * unsigned long long int a[4] = {1, 2, 3, 4};
 * insert_llong_vector(vec, a, 4, 0);
 * reverse_llong_vector(vec);
 * PRINT(vec);
 * [ 4, 3, 2, 1 ]
 * free_ullong_vector(&vec);
 * @endcode
 */
void reverse_ullong_vector(ULLInt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will reverse the order of the array in a struct of
 * type Flt.
 *
 * /param vec A vector struct container of type Flt
 *
 * @code
 * Flt vec;
 * init_float_vector(vec, 4);
 * float a[4] = {1, 2, 3, 4};
 * insert_float_vector(vec, a, 4, 0);
 * reverse_float_vector(vec);
 * PRINT(vec);
 * [ 4, 3, 2, 1 ]
 * free_float_vector(&vec);
 * @endcode
 */
void reverse_float_vector(Flt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will reverse the order of the array in a struct of
 * type Dble.
 *
 * /param vec A vector struct container of type Dble
 *
 * @code
 * Dble vec;
 * init_double_vector(vec, 4);
 * double a[4] = {1, 2, 3, 4};
 * insert_double_vector(vec, a, 4, 0);
 * reverse_double_vector(vec);
 * PRINT(vec);
 * [ 4, 3, 2, 1 ]
 * free_double_vector(&vec);
 * @endcode
 */
void reverse_double_vector(Dble *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will reverse the order of the array in a struct of
 * type LDble.
 *
 * /param vec A vector struct container of type LDble
 *
 * @code
 * LDble vec;
 * init_ldouble_vector(vec, 4);
 * long double a[4] = {1, 2, 3, 4};
 * insert_ldouble_vector(vec, a, 4, 0);
 * reverse_ldouble_vector(vec);
 * PRINT(vec);
 * [ 4, 3, 2, 1 ]
 * free_ldouble_vector(&vec);
 * @endcode
 */
void reverse_ldouble_vector(LDble *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will reverse the order of the array in a struct of
 * type Char.
 *
 * /param vec A vector struct container of type Char
 *
 * @code
 * Char vec;
 * init_char_vector(vec, 4);
 * char a[4] = {1, 2, 3, 4};
 * insert_char_vector(&vec, a, 4, 0);
 * reverse_char_vector(&vec);
 * PRINT(vec);
 * [ 4, 3, 2, 1 ]
 * free_char_vector(&vec);
 * @endcode
 */
void reverse_char_vector(Char *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will reverse the order of the array in a struct of
 * type UChar.
 *
 * /param vec A vector struct container of type Char
 *
 * @code
 * UChar vec;
 * init_uchar_vector(vec, 4);
 * unsigned char a[4] = {1, 2, 3, 4};
 * insert_uchar_vector(&vec, a, 4, 0);
 * reverse_uchar_vector(&vec);
 * PRINT(vec);
 * [ 4, 3, 2, 1 ]
 * free_uchar_vector(&vec);
 * @endcode
 */
void reverse_uchar_vector(UChar *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will reverse the order of the array in a struct of
 * type Bool.
 *
 * /param vec A vector struct container of type Bool
 *
 * @code
 * Bool vec;
 * init_bool_vector(vec, 4);
 * bool a[4] = {true, true, false, false};
 * insert_bool_vector(&vec, a, 4, 0);
 * reverse_bool_vector(&vec);
 * PRINT(vec);
 * [ 4, 3, 2, 1 ]
 * free_bool_vector(&vec);
 * @endcode
 */
void reverse_bool_vector(Bool *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will reverse the order of the array in a struct of
 * type String.
 *
 * /param vec A vector struct container of type String
 *
 * @code
 * String vec;
 * init_string_vector(&vec);
 * push_string_vec(&vec, "One", vec.active_length)
 * push_string_vec(&vec, "Two", vec.active_length)
 * push_string_vec(&vec, "Three", vec.active_length)
 * push_string_vec(&vec, "Four", vec.active_length)
 * reverse_string_vector(&vec);
 * PRINT(vec);
 * [ Four, Three, Two, One ]
 * free_string_vector(&vec);
 * @endcode
 */
void reverse_string_vector(String *vec);
// ==========================================================================================
// ==========================================================================================
// SORT_TYPE_VEC FUNCTIONS

/**
 * This function will sort a vector data structure of type Short in
 * forward or reverse order
 *
 * /param vec A vector data structure of type Short
 * /param low The lowest indice for partitioning, recommended to be 0
 * /param high The highest indice for sorting, recommended to be the last index
 *             in the data structure
 * /param order FORWARD for a forward sort, REVERSE for a reverse sort
 *
 * @code
 * Short vec;
 * init_short_vector(vec, 5);
 * short int a[5] = {4, 2, 1, 3, 5};
 * insert_short_vector(&vec, a, 5, 0);
 * sort_short_vector(&vec, 0, 5, FORWARD);
 * PRINT(vec);
 * // >> [ 1, 2, 3, 4, 5 ]
 * sort_short_vector(&vec, 0, 5, REVERSE);
 * PRINT(vec);
 * // >> [ 5, 4, 3, 2, 1 ]
 * free_short_vector(&vec);
 * @endcode
 */
void sort_short_vector(Short *vec, size_t low, size_t high, sort_order order);
// --------------------------------------------------------------------------------

/**
 * This function will sort a vector data structure of type UShort in
 * forward or reverse order
 *
 * /param vec A vector data structure of type UShort
 * /param low The lowest indice for partitioning, recommended to be 0
 * /param high The highest indice for sorting, recommended to be the last index
 *             in the data structure
 * /param order FORWARD for a forward sort, REVERSE for a reverse sort
 *
 * @code
 * UShort vec;
 * init_ushort_vector(vec, 5);
 * unsigned short int a[5] = {4, 2, 1, 3, 5};
 * insert_ushort_vector(&vec, a, 5, 0);
 * sort_ushort_vector(&vec, 0, 5, FORWARD);
 * PRINT(vec);
 * // >> [ 1, 2, 3, 4, 5 ]
 * sort_ushort_vector(&vec, 0, 5, REVERSE);
 * PRINT(vec);
 * // >> [ 5, 4, 3, 2, 1 ]
 * free_ushort_vector(&vec);
 * @endcode
 */
void sort_ushort_vector(UShort *vec, size_t low, size_t high, sort_order order);
// --------------------------------------------------------------------------------

/**
 * This function will sort a vector data structure of type Int in
 * forward or reverse order
 *
 * /param vec A vector data structure of type Int
 * /param low The lowest indice for partitioning, recommended to be 0
 * /param high The highest indice for sorting, recommended to be the last index
 *             in the data structure
 * /param order FORWARD for a forward sort, REVERSE for a reverse sort
 *
 * @code
 * Int vec;
 * init_int_vector(vec, 5);
 * int a[5] = {4, 2, 1, 3, 5};
 * insert_int_vector(&vec, a, 5, 0);
 * sort_int_vector(&vec, 0, 5, FORWARD);
 * PRINT(vec);
 * // >> [ 1, 2, 3, 4, 5 ]
 * sort_int_vector(&vec, 0, 5, REVERSE);
 * PRINT(vec);
 * // >> [ 5, 4, 3, 2, 1 ]
 * free_int_vector(&vec);
 * @endcode
 */
void sort_int_vector(Int *vec, size_t low, size_t high, sort_order order);
// --------------------------------------------------------------------------------

/**
 * This function will sort a vector data structure of type UInt in
 * forward or reverse order
 *
 * /param vec A vector data structure of type UInt
 * /param low The lowest indice for partitioning, recommended to be 0
 * /param high The highest indice for sorting, recommended to be the last index
 *             in the data structure
 * /param order FORWARD for a forward sort, REVERSE for a reverse sort
 *
 * @code
 * UInt vec;
 * init_uint_vector(vec, 5);
 * unsigned int a[5] = {4, 2, 1, 3, 5};
 * insert_uint_vector(&vec, a, 5, 0);
 * sort_uint_vector(&vec, 0, 5, FORWARD);
 * PRINT(vec);
 * // >> [ 1, 2, 3, 4, 5 ]
 * sort_uint_vector(&vec, 0, 5, REVERSE);
 * PRINT(vec);
 * // >> [ 5, 4, 3, 2, 1 ]
 * free_uint_vector(&vec);
 * @endcode
 */
void sort_uint_vector(UInt *vec, size_t low, size_t high, sort_order order);
// --------------------------------------------------------------------------------

/**
 * This function will sort a vector data structure of type LInt in
 * forward or reverse order
 *
 * /param vec A vector data structure of type LInt
 * /param low The lowest indice for partitioning, recommended to be 0
 * /param high The highest indice for sorting, recommended to be the last index
 *             in the data structure
 * /param order FORWARD for a forward sort, REVERSE for a reverse sort
 *
 * @code
 * LInt vec;
 * init_long_vector(vec, 5);
 * long int a[5] = {4, 2, 1, 3, 5};
 * insert_long_vector(&vec, a, 5, 0);
 * sort_long_vector(&vec, 0, 5, FORWARD);
 * PRINT(vec);
 * // >> [ 1, 2, 3, 4, 5 ]
 * sort_long_vector(&vec, 0, 5, REVERSE);
 * PRINT(vec);
 * // >> [ 5, 4, 3, 2, 1 ]
 * free_long_vector(&vec);
 * @endcode
 */
void sort_long_vector(LInt *vec, size_t low, size_t high, sort_order order);
// --------------------------------------------------------------------------------

/**
 * This function will sort a vector data structure of type ULInt in
 * forward or reverse order
 *
 * /param vec A vector data structure of type ULInt
 * /param low The lowest indice for partitioning, recommended to be 0
 * /param high The highest indice for sorting, recommended to be the last index
 *             in the data structure
 * /param order FORWARD for a forward sort, REVERSE for a reverse sort
 *
 * @code
 * ULInt vec;
 * init_ulong_vector(vec, 5);
 * unsigned long int a[5] = {4, 2, 1, 3, 5};
 * insert_ulong_vector(&vec, a, 5, 0);
 * sort_ulong_vector(&vec, 0, 5, FORWARD);
 * PRINT(vec);
 * // >> [ 1, 2, 3, 4, 5 ]
 * sort_ulong_vector(&vec, 0, 5, REVERSE);
 * PRINT(vec);
 * // >> [ 5, 4, 3, 2, 1 ]
 * free_ulong_vector(&vec);
 * @endcode
 */
void sort_ulong_vector(ULInt *vec, size_t low, size_t high, sort_order order);
// --------------------------------------------------------------------------------

/**
 * This function will sort a vector data structure of type LLInt in
 * forward or reverse order
 *
 * /param vec A vector data structure of type LLInt
 * /param low The lowest indice for partitioning, recommended to be 0
 * /param high The highest indice for sorting, recommended to be the last index
 *             in the data structure
 * /param order FORWARD for a forward sort, REVERSE for a reverse sort
 *
 * @code
 * LLInt vec;
 * init_llong_vector(vec, 5);
 * long long int a[5] = {4, 2, 1, 3, 5};
 * insert_llong_vector(&vec, a, 5, 0);
 * sort_llong_vector(&vec, 0, 5, FORWARD);
 * PRINT(vec);
 * // >> [ 1, 2, 3, 4, 5 ]
 * sort_llong_vector(&vec, 0, 5, REVERSE);
 * PRINT(vec);
 * // >> [ 5, 4, 3, 2, 1 ]
 * free_llong_vector(&vec);
 * @endcode
 */
void sort_llong_vector(LLInt *vec, size_t low, size_t high, sort_order order);
// --------------------------------------------------------------------------------

/**
 * This function will sort a vector data structure of type ULLInt in
 * forward or reverse order
 *
 * /param vec A vector data structure of type ULLInt
 * /param low The lowest indice for partitioning, recommended to be 0
 * /param high The highest indice for sorting, recommended to be the last index
 *             in the data structure
 * /param order FORWARD for a forward sort, REVERSE for a reverse sort
 *
 * @code
 * ULLInt vec;
 * init_ullong_vector(vec, 5);
 * unsigned long long int a[5] = {4, 2, 1, 3, 5};
 * insert_ullong_vector(&vec, a, 5, 0);
 * sort_ullong_vector(&vec, 0, 5, FORWARD);
 * PRINT(vec);
 * // >> [ 1, 2, 3, 4, 5 ]
 * sort_ullong_vector(&vec, 0, 5, REVERSE);
 * PRINT(vec);
 * // >> [ 5, 4, 3, 2, 1 ]
 * free_ullong_vector(&vec);
 * @endcode
 */
void sort_ullong_vector(ULLInt *vec, size_t low, size_t high, sort_order order);
// --------------------------------------------------------------------------------

/**
 * This function will sort a vector data structure of type Flt in
 * forward or reverse order
 *
 * /param vec A vector data structure of type Flt
 * /param low The lowest indice for partitioning, recommended to be 0
 * /param high The highest indice for sorting, recommended to be the last index
 *             in the data structure
 * /param order FORWARD for a forward sort, REVERSE for a reverse sort
 *
 * @code
 * Flt vec;
 * init_float_vector(vec, 5);
 * float a[5] = {4., 2., 1., 3., 5.};
 * insert_float_vector(&vec, a, 5, 0);
 * sort_float_vector(&vec, 0, 5, FORWARD);
 * PRINT(vec);
 * // >> [ 1., 2., 3., 4., 5. ]
 * sort_float_vector(&vec, 0, 5, REVERSE);
 * PRINT(vec);
 * // >> [ 5., 4., 3., 2., 1. ]
 * free_float_vector(&vec);
 * @endcode
 */
void sort_float_vector(Flt *vec, size_t low, size_t high, sort_order order);
// --------------------------------------------------------------------------------

/**
 * This function will sort a vector data structure of type Dble in
 * forward or reverse order
 *
 * /param vec A vector data structure of type Dble
 * /param low The lowest indice for partitioning, recommended to be 0
 * /param high The highest indice for sorting, recommended to be the last index
 *             in the data structure
 * /param order FORWARD for a forward sort, REVERSE for a reverse sort
 *
 * @code
 * Dble vec;
 * init_double_vector(vec, 5);
 * double a[5] = {4., 2., 1., 3., 5.};
 * insert_double_vector(&vec, a, 5, 0);
 * sort_double_vector(&vec, 0, 5, FORWARD);
 * PRINT(vec);
 * // >> [ 1., 2., 3., 4., 5. ]
 * sort_double_vector(&vec, 0, 5, REVERSE);
 * PRINT(vec);
 * // >> [ 5., 4., 3., 2., 1. ]
 * free_double_vector(&vec);
 * @endcode
 */
void sort_double_vector(Dble *vec, size_t low, size_t high, sort_order order);
// --------------------------------------------------------------------------------

/**
 * This function will sort a vector data structure of type LDble in
 * forward or reverse order
 *
 * /param vec A vector data structure of type LDble
 * /param low The lowest indice for partitioning, recommended to be 0
 * /param high The highest indice for sorting, recommended to be the last index
 *             in the data structure
 * /param order FORWARD for a forward sort, REVERSE for a reverse sort
 *
 * @code
 * LDble vec;
 * init_ldouble_vector(vec, 5);
 * long double a[5] = {4., 2., 1., 3., 5.};
 * insert_ldouble_vector(&vec, a, 5, 0);
 * sort_ldouble_vector(&vec, 0, 5, FORWARD);
 * PRINT(vec);
 * // >> [ 1., 2., 3., 4., 5. ]
 * sort_ldouble_vector(&vec, 0, 5, REVERSE);
 * PRINT(vec);
 * // >> [ 5., 4., 3., 2., 1. ]
 * free_ldouble_vector(&vec);
 * @endcode
 */
void sort_ldouble_vector(LDble *vec, size_t low, size_t high, sort_order order);
// --------------------------------------------------------------------------------

/**
 * This function will sort a vector data structure of type Char in
 * forward or reverse order
 *
 * /param vec A vector data structure of type Char
 * /param low The lowest indice for partitioning, recommended to be 0
 * /param high The highest indice for sorting, recommended to be the last index
 *             in the data structure
 * /param order FORWARD for a forward sort, REVERSE for a reverse sort
 *
 * @code
 * Char vec;
 * init_char_vector(vec, 5);
 * char a[5] = {'e', 'b', 'a', 'c', 'e'};
 * insert_char_vector(&vec, a, 5, 0);
 * sort_char_vector(&vec, 0, 5, FORWARD);
 * PRINT(vec);
 * // >> [ a, b, c, d, e ]
 * sort_ldouble_vector(&vec, 0, 5, REVERSE);
 * PRINT(vec);
 * // >> [ e, d, c, b, a ]
 * free_char_vector(&vec);
 * FREE(vec);
 * @endcode
 */
void sort_char_vector(Char *vec, size_t low, size_t high, sort_order order);
// ------------------------------------------------------------------------------------------

/**
 * This function will sort a vector data structure of type UChar in
 * forward or reverse order
 *
 * /param vec A vector data structure of type UChar
 * /param low The lowest indice for partitioning, recommended to be 0
 * /param high The highest indice for sorting, recommended to be the last index
 *             in the data structure
 * /param order FORWARD for a forward sort, REVERSE for a reverse sort
 *
 * @code
 * UChar vec;
 * init_uchar_vector(vec, 5);
 * unsigned char a[5] = {'e', 'b', 'a', 'c', 'e'};
 * insert_uchar_vector(&vec, a, 5, 0);
 * sort_uchar_vector(&vec, 0, 5, FORWARD);
 * PRINT(vec);
 * // >> [ a, b, c, d, e ]
 * sort_uchar_vector(&vec, 0, 5, REVERSE);
 * PRINT(vec);
 * // >> [ e, d, c, b, a ]
 * free_uchar_vector(&vec);
 * FREE(vec);
 * @endcode
 */
void sort_uchar_vector(UChar *vec, size_t low, size_t high, sort_order order);
// ------------------------------------------------------------------------------------------

/**
 * This function will sort a vector data structure of type Bool in
 * forward or reverse order
 *
 * /param vec A vector data structure of type Bool
 * /param low The lowest indice for partitioning, recommended to be 0
 * /param high The highest indice for sorting, recommended to be the last index
 *             in the data structure
 * /param order FORWARD for a forward sort, REVERSE for a reverse sort
 *
 * @code
 * Bool vec;
 * init_bool_vector(vec, 5);
 * bool a[5] = {true, false, true, false, true};
 * insert_bool_vector(&vec, a, 5, 0);
 * sort_bool_vector(&vec, 0, 5, FORWARD);
 * PRINT(vec);
 * // >> [ true, true, true, false, false ]
 * sort_bool_vector(&vec, 0, 5, REVERSE);
 * PRINT(vec);
 * // >> [ false, false, true, true, true ]
 * free_bool_vector(&vec);
 * FREE(vec);
 * @endcode
 */
void sort_bool_vector(Bool *vec, size_t low, size_t high, sort_order order);
// ------------------------------------------------------------------------------------------

/**
 * This function will sort a vector structure of type String in
 * forward or reverse order
 *
 * /param vec A vector data structure of type String
 * /param low the lowest indice for parittioning, recommended to be 0
 * /param high The highest indice for sorting, recommended to be the last index
 * /param order FORWARD for a forward sort, REVERSE for a reverse sort
 *
 * @code
 * String vec;
 * init_string_vector(vec);
 * push_string_vector(&vec, "Xylaphone", 0);
 * push_string_vector(&vec, "Apple", 1);
 * push_string_vector(&vec, "Cucumber", 2);
 * push_string_vector(&vec, "Banana", 3);
 * sort_string_vector(&vec, 0, vec.active_length, FORWARD);
 * PRINT(vec);
 * [ Apple, Banana, Cucumber, Xylaphone ]
 * free_string_vector(&vec);
 * @endcode
 */
void sort_string_vector(String *vec, size_t low, size_t high, sort_order order);
// ==========================================================================================
// ==========================================================================================
// SUM_TYPE_VEC FUNCTIONS

/**
 * This function will calculate the sum of the values in a vector data structure
 * of type Short
 *
 * /param vec A vector data structure of type Short
 *
 * @code
 * Char vec;
 * init_short_vector(vec, 5);
 * char a[5] = {1, 2, 3, 4, 5};
 * insert_char_vector(&vec, a, 5, 0);
 * char sum_value = sum_char_vector(vec);
 * PRINT(vec);
 * // >> 15
 * free_char_vector(&vec);
 * @endcode
 */
char sum_char_vector(Char *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will calculate the sum of the values in a vector data structure
 * of type Short
 *
 * /param vec A vector data structure of type Short
 *
 * @code
 * UChar vec;
 * init_uchar_vector(vec, 5);
 * unsgined char a[5] = {1, 2, 3, 4, 5};
 * insert_uchar_vector(&vec, a, 5, 0);
 * unsigned char sum_value = sum_uchar_vector(vec);
 * PRINT(vec);
 * // >> 15
 * free_uchar_vector(&vec);
 * @endcode
 */
unsigned char sum_uchar_vector(UChar *vec);
// ------------------------------------------------------------------------------------------
/**
 * This function will calculate the sum of the values in a vector data structure
 * of type Short
 *
 * /param vec A vector data structure of type Short
 *
 * @code
 * Short vec;
 * init_short_vector(vec, 5);
 * short int a[5] = {1, 2, 3, 4, 5};
 * insert_short_vector(&vec, a, 5, 0);
 * short int sum_value = sum_short_vector(vec);
 * PRINT(vec);
 * // >> 15
 * free_short_vector(&vec);
 * @endcode
 */
short int sum_short_vector(Short *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will calculate the sum of the values in a vector data structure
 * of type UShort
 *
 * /param vec A vector data structure of type UShort
 *
 * @code
 * UShort vec;
 * init_ushort_vector(vec, 5);
 * unsigned short int a[5] = {1, 2, 3, 4, 5};
 * insert_ushort_vector(&vec, a, 5, 0);
 * unsigned short int sum_value = sum_ushort_vector(vec);
 * PRINT(vec);
 * // >> 15
 * free_ushort_vector(&vec);
 * @endcode
 */
unsigned short int sum_ushort_vector(UShort *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will calculate the sum of the values in a vector data structure
 * of type Int
 *
 * /param vec A vector data structure of type Int
 *
 * @code
 * Int vec;
 * init_int_vector(vec, 5);
 * int a[5] = {1, 2, 3, 4, 5};
 * insert_int_vector(&vec, a, 5, 0);
 * int sum_value = sum_int_vector(vec);
 * PRINT(vec);
 * // >> 15
 * free_int_vector(&vec);
 * @endcode
 */
int sum_int_vector(Int *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will calculate the sum of the values in a vector data structure
 * of type UInt
 *
 * /param vec A vector data structure of type UInt
 *
 * @code
 * UInt vec;
 * init_uint_vector(vec, 5);
 * unsigned int a[5] = {1, 2, 3, 4, 5};
 * insert_uint_vector(&vec, a, 5, 0);
 * unsigned int sum_value = sum_uint_vector(vec);
 * PRINT(vec);
 * // >> 15
 * free_uint_vector(&vec);
 * @endcode
 */
unsigned int sum_uint_vector(UInt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will calculate the sum of the values in a vector data structure
 * of type LInt
 *
 * /param vec A vector data structure of type LInt
 *
 * @code
 * LInt vec;
 * init_long_vector(vec, 5);
 * long int a[5] = {1, 2, 3, 4, 5};
 * insert_long_vector(&vec, a, 5, 0);
 * long int sum_value = sum_long_vector(vec);
 * PRINT(vec);
 * // >> 15
 * free_long_vector(&vec);
 * @endcode
 */
long int sum_long_vector(LInt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will calculate the sum of the values in a vector data structure
 * of type ULInt
 *
 * /param vec A vector data structure of type ULInt
 *
 * @code
 * ULInt vec;
 * init_ulong_vector(vec, 5);
 * unsigned long int a[5] = {1, 2, 3, 4, 5};
 * insert_ulong_vector(&vec, a, 5, 0);
 * unsigned long int sum_value = sum_ulong_vector(vec);
 * PRINT(vec);
 * // >> 15
 * free_ulong_vector(&vec);
 * @endcode
 */
unsigned long int sum_ulong_vector(ULInt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will calculate the sum of the values in a vector data structure
 * of type LLInt
 *
 * /param vec A vector data structure of type LLInt
 *
 * @code
 * LLInt vec;
 * init_llong_vector(vec, 5);
 * long long int a[5] = {1, 2, 3, 4, 5};
 * insert_llong_vector(&vec, a, 5, 0);
 * long long int sum_value = sum_llong_vector(vec);
 * PRINT(vec);
 * // >> 15
 * free_llong_vector(&vec);
 * @endcode
 */
long long int sum_llong_vector(LLInt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will calculate the sum of the values in a vector data structure
 * of type ULLInt
 *
 * /param vec A vector data structure of type ULLInt
 *
 * @code
 * ULLInt vec;
 * init_ullong_vector(vec, 5);
 * unsigned long long int a[5] = {1, 2, 3, 4, 5};
 * insert_ullong_vector(&vec, a, 5, 0);
 * unsigned long long int sum_value = sum_ullong_vector(vec);
 * PRINT(vec);
 * // >> 15
 * free_ullong_vector(&vec);
 * @endcode
 */
unsigned long long int sum_ullong_vector(ULLInt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will calculate the sum of the values in a vector data structure
 * of type Flt
 *
 * /param vec A vector data structure of type Flt
 *
 * @code
 * Flt vec;
 * init_float_vector(vec, 5);
 * float a[5] = {1., 2., 3., 4., 5.};
 * insert_float_vector(&vec, a, 5, 0);
 * float sum_value = sum_float_vector(vec);
 * PRINT(vec);
 * // >> 15
 * free_float_vector(&vec);
 * @endcode
 */
float sum_float_vector(Flt *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will calculate the sum of the values in a vector data structure
 * of type Dble
 *
 * /param vec A vector data structure of type Dble
 *
 * @code
 * Dble vec;
 * init_double_vector(vec, 5);
 * double a[5] = {1., 2., 3., 4., 5.};
 * insert_double_vector(&vec, a, 5, 0);
 * double sum_value = sum_double_vector(vec);
 * PRINT(vec);
 * // >> 15
 * free_double_vector(&vec);
 * @endcode
 */
double sum_double_vector(Dble *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will calculate the sum of the values in a vector data structure
 * of type LDble
 *
 * /param vec A vector data structure of type LDble
 *
 * @code
 * LDble vec;
 * init_ldouble_vector(vec, 5);
 * long double a[5] = {1., 2., 3., 4., 5.};
 * insert_ldouble_vector(&vec, a, 5, 0);
 * long double sum_value = sum_ldouble_vector(vec);
 * PRINT(vec);
 * // >> 15
 * free_ldouble_vector(&vec)
 * @endcode
 */
long double sum_ldouble_vector(LDble *vec);
// ==========================================================================================
// ==========================================================================================
// CUMSUM_TYPE_VEC FUNCTIONS

/**
 * This function will return an Char vector container that holds an array
 * containing the cumulative sum of the values in the input array
 *
 * /param vec A vector container of type Char
 * /return return_vec A vector container of type Char
 *
 * @code
 * Char vec;
 * init_char_vector(&vec, 5);
 * char a[5] = {1, 2, 3, 4, 5};
 * insert_char_vector(&vec, a, 5, 0);
 * Char cum_vec = cumsum_char_vector(&vec);
 * PRINT(vum_vec);
 * [ 1, 3, 6, 10, 15 ]
 * free_char_vector(&vec);
 * @endcode
 */
Char cumsum_char_vector(Char *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will return an UChar vector container that holds an array
 * containing the cumulative sum of the values in the input array
 *
 * /param vec A vector container of type UChar
 * /return return_vec A vector container of type UChar
 *
 * @code
 * UChar vec;
 * init_uchar_vector(&vec, 5);
 * unsigned char a[5] = {1, 2, 3, 4, 5};
 * insert_uchar_vector(&vec, a, 5, 0);
 * UChar cum_vec = cumsum_uchar_vector(&vec);
 * PRINT(vum_vec);
 * [ 1, 3, 6, 10, 15 ]
 * free_uchar_vector(&vec);
 * @endcode
 */
UChar cumsum_uchar_vector(UChar *vec);
// ------------------------------------------------------------------------------------------
/**
 * This function will return an Short vector container that holds an array
 * containing the cumulative sum of the values in the input array
 *
 * /param vec A vector container of type Short
 * /return return_vec A vector container of type UShort
 *
 * @code
 * Short vec;
 * init_short_vector(&vec, 5);
 * short int a[5] = {1, 2, 3, 4, 5};
 * insert_short_vector(&vec, a, 5, 0);
 * Short cum_vec = cumsum_short_vector(&vec);
 * PRINT(vum_vec);
 * [ 1, 3, 6, 10, 15 ]
 * free_short_vector(&vec);
 * @endcode
 */
Short cumsum_short_vector(Short *vec);
// --------------------------------------------------------------------------------

/**
 * This function will return an UShort vector container that holds an array
 * containing the cumulative sum of the values in the input array
 *
 * /param vec A vector container of type UShort
 * /return return_vec A vector container of type UShort
 *
 * @code
 * UShort vec;
 * init_ushort_vector(&vec, 5);
 * unsigned short int a[5] = {1, 2, 3, 4, 5};
 * insert_ushort_vector(&vec, a, 5, 0);
 * UShort cum_vec = cumsum_ushort_vector(&vec);
 * PRINT(vum_vec);
 * [ 1, 3, 6, 10, 15 ]
 * free_ushort_vector(&vec);
 * @endcode
 */
UShort cumsum_ushort_vector(UShort *vec);
// --------------------------------------------------------------------------------

/**
 * This function will return an Int vector container that holds an array
 * containing the cumulative sum of the values in the input array
 *
 * /param vec A vector container of type Int
 * /return return_vec A vector container of type Int
 *
 * @code
 * Int vec;
 * init_int_vector(&vec, 5);
 * int a[5] = {1, 2, 3, 4, 5};
 * insert_int_vector(&vec, a, 5, 0);
 * Int cum_vec = cumsum_int_vector(&vec);
 * PRINT(vum_vec);
 * [ 1, 3, 6, 10, 15 ]
 * free_int_vector(&vec);
 * @endcode
 */
Int cumsum_int_vector(Int *vec);
// --------------------------------------------------------------------------------

/**
 * This function will return an UInt vector container that holds an array
 * containing the cumulative sum of the values in the input array
 *
 * /param vec A vector container of type UInt
 * /return return_vec A vector container of type UInt
 *
 * @code
 * UInt vec;
 * init_uint_vector(&vec, 5);
 * unsigned int a[5] = {1, 2, 3, 4, 5};
 * insert_uint_vector(&vec, a, 5, 0);
 * UInt cum_vec = cumsum_uint_vector(&vec);
 * PRINT(vum_vec);
 * [ 1, 3, 6, 10, 15 ]
 * free_uint_vector(&vec);
 * @endcode
 */
UInt cumsum_uint_vector(UInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will return an LInt vector container that holds an array
 * containing the cumulative sum of the values in the input array
 *
 * /param vec A vector container of type LInt
 * /return return_vec A vector container of type LInt
 *
 * @code
 * LInt vec;
 * init_long_vector(&vec, 5);
 * long int a[5] = {1, 2, 3, 4, 5};
 * insert_long_vector(&vec, a, 5, 0);
 * LInt cum_vec = cumsum_long_vector(&vec);
 * PRINT(vum_vec);
 * [ 1, 3, 6, 10, 15 ]
 * free_long_vector(&vec);
 * @endcode
 */
LInt cumsum_long_vector(LInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will return an ULInt vector container that holds an array
 * containing the cumulative sum of the values in the input array
 *
 * /param vec A vector container of type ULInt
 * /return return_vec A vector container of type ULInt
 *
 * @code
 * ULInt vec;
 * init_ulong_vector(&vec, 5);
 * unsigned long int a[5] = {1, 2, 3, 4, 5};
 * insert_ulong_vector(&vec, a, 5, 0);
 * ULInt cum_vec = cumsum_ulong_vector(&vec);
 * PRINT(vum_vec);
 * [ 1, 3, 6, 10, 15 ]
 * free_ulong_vector(&vec);
 * @endcode
 */
ULInt cumsum_ulong_vector(ULInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will return an LLInt vector container that holds an array
 * containing the cumulative sum of the values in the input array
 *
 * /param vec A vector container of type LLInt
 * /return return_vec A vector container of type LLInt
 *
 * @code
 * LLInt vec;
 * init_llong_vector(&vec, 5);
 * long long int a[5] = {1, 2, 3, 4, 5};
 * insert_llong_vector(&vec, a, 5, 0);
 * LLInt cum_vec = cumsum_llong_vector(&vec);
 * PRINT(vum_vec);
 * [ 1, 3, 6, 10, 15 ]
 * free_llong_vector(&vec);
 * @endcode
 */
LLInt cumsum_llong_vector(LLInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will return an ULLInt vector container that holds an array
 * containing the cumulative sum of the values in the input array
 *
 * /param vec A vector container of type ULLInt
 * /return return_vec A vector container of type ULLInt
 *
 * @code
 * ULLInt vec;
 * init_ullong_vector(&vec, 5);
 * unsigned long long int a[5] = {1, 2, 3, 4, 5};
 * insert_ullong_vector(&vec, a, 5, 0);
 * ULLInt cum_vec = cumsum_ullong_vector(&vec);
 * PRINT(vum_vec);
 * [ 1, 3, 6, 10, 15 ]
 * free_ullong_vector(&vec);
 * @endcode
 */
ULLInt cumsum_ullong_vector(ULLInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will return an Flt vector container that holds an array
 * containing the cumulative sum of the values in the input array
 *
 * /param vec A vector container of type Flt
 * /return return_vec A vector container of type Flt
 *
 * @code
 * Flt vec;
 * init_float_vector(&vec, 5);
 * float a[5] = {1, 2, 3, 4, 5};
 * insert_float_vector(&vec, a, 5, 0);
 * Flt cum_vec = cumsum_float_vector(&vec);
 * PRINT(vum_vec);
 * [ 1, 3, 6, 10, 15 ]
 * free_float_vector(&vec);
 * @endcode
 */
Flt cumsum_float_vector(Flt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will return an Dble vector container that holds an array
 * containing the cumulative sum of the values in the input array
 *
 * /param vec A vector container of type Dble
 * /return return_vec A vector container of type Dble
 *
 * @code
 * Dble vec;
 * init_double_vector(&vec, 5);
 * double a[5] = {1, 2, 3, 4, 5};
 * insert_double_vector(&vec, a, 5, 0);
 * Dble cum_vec = cumsum_double_vector(&vec);
 * PRINT(vum_vec);
 * [ 1, 3, 6, 10, 15 ]
 * free_double_vector(&vec);
 * @endcode
 */
Dble cumsum_double_vector(Dble *vec);
// --------------------------------------------------------------------------------

/**
 * This function will return an LDble vector container that holds an array
 * containing the cumulative sum of the values in the input array
 *
 * /param vec A vector container of type LDble
 * /return return_vec A vector container of type LDble
 *
 * @code
 * LDble vec;
 * init_ldouble_vector(&vec, 5);
 * long double a[5] = {1, 2, 3, 4, 5};
 * insert_ldouble_vector(&vec, a, 5, 0);
 * LDble cum_vec = cumsum_ldouble_vector(&vec);
 * PRINT(vum_vec);
 * [ 1, 3, 6, 10, 15 ]
 * free_ldouble_vector(&vec);
 * @endcode
 */
LDble cumsum_ldouble_vector(LDble *vec);
// ==========================================================================================
// ==========================================================================================
// AVERAGE_TYPE_VEC

/**
 * This function will return the average value of the data in a vector data structure
 * of type Short
 *
 * /param vec A vector data structure of type Char
 * /return avg The average value in the input data structure of type Char
 *
 * @code
 * Char vec;
 * init_char_vector(&vec, 5);
 * char a[5] = {1, 2, 3, 4, 5};
 * insert_char_vector(&vec, a, 5, 0);
 * char b = average_char_vector(&vec);
 * PRINT(b);
 * // >> 3.00000
 * free_char_vector(&vec);
 * @endcode
 */
char average_char_vector(Char *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will return the average value of the data in a vector data structure
 * of type Short
 *
 * /param vec A vector data structure of type Char
 * /return avg The average value in the input data structure of type Char
 *
 * @code
 * UChar vec;
 * init_uchar_vector(&vec, 5);
 * unsigned char a[5] = {1, 2, 3, 4, 5};
 * insert_uchar_vector(&vec, a, 5, 0);
 * unsigned char b = average_uchar_vector(&vec);
 * PRINT(b);
 * // >> 3.00000
 * free_uchar_vector(&vec);
 * @endcode
 */
unsigned char average_uchar_vector(UChar *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will return the average value of the data in a vector data structure
 * of type Short
 *
 * /param vec A vector data structure of type Short
 * /return avg The average value in the input data structure of type Short
 *
 * @code
 * Short vec;
 * init_short_vector(&vec, 5);
 * short int a[5] = {1, 2, 3, 4, 5};
 * insert_short_vector(&vec, a, 5, 0);
 * float b = average_short_vector(&vec);
 * PRINT(b);
 * // >> 3.00000
 * free_short_vector(&vec);
 * @endcode
 */
float average_short_vector(Short *vec);
// --------------------------------------------------------------------------------

/**
 * This function will return the average value of the data in a vector data structure
 * of type UShort
 *
 * /param vec A vector data structure of type UShort
 * /return avg The average value in the input data structure of type UShort
 *
 * @code
 * UShort vec;
 * init_ushort_vector(&vec, 5);
 * unsigned short int a[5] = {1, 2, 3, 4, 5};
 * insert_ushort_vector(&vec, a, 5, 0);
 * float b = average_ushort_vector(&vec);
 * PRINT(b);
 * // >> 3.00000
 * free_ushort_vector(&vec);
 * @endcode
 */
float average_ushort_vector(UShort *vec);
// --------------------------------------------------------------------------------

/**
 * This function will return the average value of the data in a vector data structure
 * of type Int
 *
 * /param vec A vector data structure of type Int
 * /return avg The average value in the input data structure of type Int
 *
 * @code
 * Int vec;
 * init_int_vector(&vec, 5);
 * int a[5] = {1, 2, 3, 4, 5};
 * insert_int_vector(&vec, a, 5, 0);
 * float b = average_int_vector(&vec);
 * PRINT(b);
 * // >> 3.00000
 * free_int_vector(&vec);
 * @endcode
 */
float average_int_vector(Int *vec);
// --------------------------------------------------------------------------------

/**
 * This function will return the average value of the data in a vector data structure
 * of type UInt
 *
 * /param vec A vector data structure of type UInt
 * /return avg The average value in the input data structure of type UInt
 *
 * @code
 * UInt vec;
 * init_uint_vector(&vec, 5);
 * unsigned int a[5] = {1, 2, 3, 4, 5};
 * insert_uint_vector(&vec, a, 5, 0);
 * float b = average_uint_vector(&vec);
 * PRINT(b);
 * // >> 3.00000
 * free_uint_vector(&vec);
 * @endcode
 */
float average_uint_vector(UInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will return the average value of the data in a vector data structure
 * of type LInt
 *
 * /param vec A vector data structure of type LInt
 * /return avg The average value in the input data structure of type LInt
 *
 * @code
 * LInt vec;
 * init_long_vector(&vec, 5);
 * long int a[5] = {1, 2, 3, 4, 5};
 * insert_long_vector(&vec, a, 5, 0);
 * double b = average_long_vector(&vec);
 * PRINT(b);
 * // >> 3.00000
 * free_long_vector(&vec);
 * @endcode
 */
double average_long_vector(LInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will return the average value of the data in a vector data structure
 * of type ULInt
 *
 * /param vec A vector data structure of type ULInt
 * /return avg The average value in the input data structure of type ULInt
 *
 * @code
 * ULInt vec;
 * init_ulong_vector(&vec, 5);
 * unsigned long int a[5] = {1, 2, 3, 4, 5};
 * insert_ulong_vector(&vec, a, 5, 0);
 * double b = average_ulong_vector(&vec);
 * PRINT(b);
 * // >> 3.00000
 * free_ulong_vector(&vec);
 * @endcode
 */
double average_ulong_vector(ULInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will return the average value of the data in a vector data structure
 * of type LLInt
 *
 * /param vec A vector data structure of type LLInt
 * /return avg The average value in the input data structure of type LLInt
 *
 * @code
 * LLInt vec;
 * init_llong_vector(&vec, 5);
 * long long int a[5] = {1, 2, 3, 4, 5};
 * insert_llong_vector(&vec, a, 5, 0);
 * long double b = average_llong_vector(&vec);
 * PRINT(b);
 * // >> 3.00000
 * free_llong_vector(&vec);
 * @endcode
 */
long double average_llong_vector(LLInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will return the average value of the data in a vector data structure
 * of type ULLInt
 *
 * /param vec A vector data structure of type ULLInt
 * /return avg The average value in the input data structure of type ULLInt
 *
 * @code
 * ULLInt vec;
 * init_ullong_vector(&vec, 5);
 * unsigned long long int a[5] = {1, 2, 3, 4, 5};
 * insert_ullong_vector(&vec, a, 5, 0);
 * long double b = average_ullong_vector(&vec);
 * PRINT(b);
 * // >> 3.00000
 * free_ullong_vector(&vec);
 * @endcode
 */
long double average_ullong_vector(ULLInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will return the average value of the data in a vector data structure
 * of type Flt
 *
 * /param vec A vector data structure of type Flt
 * /return avg The average value in the input data structure of type Flt
 *
 * @code
 * Flt vec;
 * init_float_vector(&vec, 5);
 * float a[5] = {1, 2, 3, 4, 5};
 * insert_float_vector(&vec, a, 5, 0);
 * float b = average_float_vector(&vec);
 * PRINT(b);
 * // >> 3.00000
 * free_float_vector(&vec);
 * @endcode
 */
float average_float_vector(Flt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will return the average value of the data in a vector data structure
 * of type Dble
 *
 * /param vec A vector data structure of type Dble
 * /return avg The average value in the input data structure of type Dble
 *
 * @code
 * Dble vec;
 * init_double_vector(&vec, 5);
 * double a[5] = {1, 2, 3, 4, 5};
 * insert_double_vector(&vec, a, 5, 0);
 * double b = average_double_vector(&vec);
 * PRINT(b);
 * // >> 3.00000
 * free_double_vector(&vec);
 * @endcode
 */
double average_double_vector(Dble *vec);
// --------------------------------------------------------------------------------

/**
 * This function will return the average value of the data in a vector data structure
 * of type LDble
 *
 * /param vec A vector data structure of type LDble
 * /return avg The average value in the input data structure of type LDble
 *
 * @code
 * LDble vec;
 * init_ldouble_vector(&vec, 5);
 * long double a[5] = {1, 2, 3, 4, 5};
 * insert_ldouble_vector(&vec, a, 5, 0);
 * long double b = average_ldouble_vector(&vec);
 * PRINT(b);
 * // >> 3.00000
 * free_ldouble_vector(&vec);
 * @endcode
 */
long double average_ldouble_vector(LDble *vec);
// ==========================================================================================
// ==========================================================================================
// STDEV_TYPE_VEC

/**
 * This function wil calculate the standard deviation for the values in a vector
 * container.
 *
 * /param vec A vector data structure of type Char
 *
 * @code
 * Char vec;
 * init_char_vector(&vec, 10);
 * char a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 * insert_char_vector(&vec, a, 10, 0);
 * float stdev = stdev_char_vector(&vec);
 * PRINT(stdev);
 * // >> 3.2076
 * free_char_vector(&vec);
 * @endcode
 */
float stdev_char_vector(Char *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function wil calculate the standard deviation for the values in a vector
 * container.
 *
 * /param vec A vector data structure of type UChar
 *
 * @code
 * UChar vec;
 * init_uchar_vector(&vec, 10);
 * unsigned char a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 * insert_uchar_vector(&vec, a, 10, 0);
 * float stdev = stdev_uchar_vector(&vec);
 * PRINT(stdev);
 * // >> 3.2076
 * free_uchar_vector(&vec);
 * @endcode
 */
float stdev_uchar_vector(UChar *vec);
// ------------------------------------------------------------------------------------------
/**
 * This function wil calculate the standard deviation for the values in a vector
 * container.
 *
 * /param vec A vector data structure of type Short
 *
 * @code
 * Short vec;
 * init_short_vector(&vec, 10);
 * short int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 * insert_short_vector(&vec, a, 10, 0);
 * float stdev = stdev_short_vector(&vec);
 * PRINT(stdev);
 * // >> 3.2076
 * free_short_vector(&vec);
 * @endcode
 */
float stdev_short_vector(Short *vec);
// --------------------------------------------------------------------------------

/**
 * This function wil calculate the standard deviation for the values in a vector
 * container.
 *
 * /param vec A vector data structure of type UShort
 *
 * @code
 * UShort vec;
 * init_ushort_vector(&vec, 10);
 * unsigned short int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 * insert_ushort_vector(&vec, a, 10, 0);
 * float stdev = stdev_ushort_vector(&vec);
 * PRINT(stdev);
 * // >> 3.2076
 * free_ushort_vector(&vec);
 * @endcode
 */
float stdev_ushort_vector(UShort *vec);
// --------------------------------------------------------------------------------

/**
 * This function wil calculate the standard deviation for the values in a vector
 * container.
 *
 * /param vec A vector data structure of type Int
 *
 * @code
 * Int vec;
 * init_int_vector(&vec, 10);
 * int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 * insert_int_vector(&vec, a, 10, 0);
 * float stdev = stdev_int_vector(&vec);
 * PRINT(stdev);
 * // >> 3.2076
 * free_int_vector(&vec);
 * @endcode
 */
float stdev_int_vector(Int *vec);
// --------------------------------------------------------------------------------

/**
 * This function wil calculate the standard deviation for the values in a vector
 * container.
 *
 * /param vec A vector data structure of type UInt
 *
 * @code
 * UInt vec;
 * init_uint_vector(&vec, 10);
 * unsigned int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 * insert_uint_vector(&vec, a, 10, 0);
 * float stdev = stdev_uint_vector(&vec);
 * PRINT(stdev);
 * // >> 3.2076
 * free_uint_vector(&vec);
 * @endcode
 */
float stdev_uint_vector(UInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function wil calculate the standard deviation for the values in a vector
 * container.
 *
 * /param vec A vector data structure of type LInt
 *
 * @code
 * LInt vec;
 * init_long_vector(&vec, 10);
 * long int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 * insert_long_vector(&vec, a, 10, 0);
 * double stdev = stdev_long_vector(&vec);
 * PRINT(stdev);
 * // >> 3.2076
 * free_long_vector(&vec);
 * @endcode
 */
double stdev_long_vector(LInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function wil calculate the standard deviation for the values in a vector
 * container.
 *
 * /param vec A vector data structure of type ULInt
 *
 * @code
 * ULInt vec;
 * init_ulong_vector(&vec, 10);
 * unsigned long int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 * insert_ulong_vector(&vec, a, 10, 0);
 * double stdev = stdev_ulong_vector(&vec);
 * PRINT(stdev);
 * // >> 3.2076
 * free_ulong_vector(&vec);
 * @endcode
 */
double stdev_ulong_vector(ULInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function wil calculate the standard deviation for the values in a vector
 * container.
 *
 * /param vec A vector data structure of type LLInt
 *
 * @code
 * LLInt vec;
 * init_llong_vector(&vec, 10);
 * long long int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 * insert_llong_vector(&vec, a, 10, 0);
 * long double stdev = stdev_llong_vector(&vec);
 * PRINT(stdev);
 * // >> 3.2076
 * free_llong_vector(&vec);
 * @endcode
 */
long double stdev_llong_vector(LLInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function wil calculate the standard deviation for the values in a vector
 * container.
 *
 * /param vec A vector data structure of type ULLInt
 *
 * @code
 * ULLInt vec;
 * init_ullong_vector(&vec, 10);
 * unsigned long long int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 * insert_ullong_vector(&vec, a, 10, 0);
 * long double stdev = stdev_ullong_vector(&vec);
 * PRINT(stdev);
 * // >> 3.2076
 * free_ullong_vector(&vec);
 * @endcode
 */
long double stdev_ullong_vector(ULLInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function wil calculate the standard deviation for the values in a vector
 * container.
 *
 * /param vec A vector data structure of type Flt
 *
 * @code
 * Flt vec;
 * init_float_vector(&vec, 10);
 * float a[10] = {1., 2., 3., 4., 5., 6., 7., 8., 9., 10.};
 * insert_float_vector(&vec, a, 10, 0);
 * float stdev = stdev_float_vector(&vec);
 * PRINT(stdev);
 * // >> 3.2076
 * free_float_vector(&vec);
 * @endcode
 */
float stdev_float_vector(Flt *vec);
// --------------------------------------------------------------------------------

/**
 * This function wil calculate the standard deviation for the values in a vector
 * container.
 *
 * /param vec A vector data structure of type Dble
 *
 * @code
 * Dble vec;
 * init_double_vector(&vec, 10);
 * double a[10] = {1., 2., 3., 4., 5., 6., 7., 8., 9., 10.};
 * insert_double_vector(&vec, a, 10, 0);
 * double stdev = stdev_double_vector(&vec);
 * PRINT(stdev);
 * // >> 3.2076
 * free_double_vector(&vec);
 * @endcode
 */
double stdev_double_vector(Dble *vec);
// --------------------------------------------------------------------------------

/**
 * This function wil calculate the standard deviation for the values in a vector
 * container.
 *
 * /param vec A vector data structure of type LDble
 *
 * @code
 * LDble vec;
 * init_ldouble_vector(&vec, 10);
 * long double a[10] = {1., 2., 3., 4., 5., 6., 7., 8., 9., 10.};
 * insert_ldouble_vector(&vec, a, 10, 0);
 * long double stdev = stdev_ldouble_vector(&vec);
 * PRINT(stdev);
 * // >> 3.2076
 * free_ldouble_vector(&vec);
 * @endcode
 */
long double stdev_ldouble_vector(LDble *vec);
// ==========================================================================================
// ==========================================================================================
// MAX_TYPE_VEC FUNCTIONS

/**
 * This function will determine the max value in a vector data structure
 * of type Char
 *
 * /param vec A vector data structure of type Char
 *
 * @code
 * Char vec;
 * init_char_vector(&vec, 5);
 * char a[5] = { 1, 2, 3, 4, 5};
 * insert_char_vector(&vec, a, 5, 0);
 * char max = max_char_vector(&vec);
 * PRINT(max);
 * // >> 5
 * free_char_vector(&vec);
 * @endcode
 */
char max_char_vector(Char *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will determine the max value in a vector data structure
 * of type UChar
 *
 * /param vec A vector data structure of type UChar
 *
 * @code
 * UChar vec;
 * init_uchar_vector(&vec, 5);
 * unsigned char a[5] = { 1, 2, 3, 4, 5};
 * insert_uchar_vector(&vec, a, 5, 0);
 * unsigned char max = max_uchar_vector(&vec);
 * PRINT(max);
 * // >> 5
 * free_uchar_vector(&vec);
 * @endcode
 */
unsigned char max_uchar_vector(UChar *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will determine the max value in a vector data structure
 * of type Short
 *
 * /param vec A vector data structure of type Short
 *
 * @code
 * Short vec;
 * init_short_vector(&vec, 5);
 * short int a[5] = { 1, 2, 3, 4, 5};
 * insert_short_vector(&vec, a, 5, 0);
 * short int max = max_short_vector(&vec);
 * PRINT(max);
 * // >> 5
 * free_short_vector(&vec);
 * @endcode
 */
short int max_short_vector(Short *vec);
// --------------------------------------------------------------------------------

/**
 * This function will determine the max value in a vector data structure
 * of type UShort
 *
 * /param vec A vector data structure of type UShort
 *
 * @code
 * UShort vec;
 * init_ushort_vector(&vec, 5);
 * unsigned short int a[5] = { 1, 2, 3, 4, 5};
 * insert_ushort_vector(&vec, a, 5, 0);
 * unsigned short int max = max_ushort_vector(&vec);
 * PRINT(max);
 * // >> 5
 * free_ushort_vector(&vec);
 * @endcode
 */
unsigned short int max_ushort_vector(UShort *vec);
// --------------------------------------------------------------------------------

/**
 * This function will determine the max value in a vector data structure
 * of type Int
 *
 * /param vec A vector data structure of type Int
 *
 * @code
 * Int vec;
 * init_int_vector(&vec, 5);
 * int a[5] = { 1, 2, 3, 4, 5};
 * insert_int_vector(&vec, a, 5, 0);
 * int max = max_int_vector(&vec);
 * PRINT(max);
 * // >> 5
 * free_int_vector(&vec);
 * @endcode
 */
int max_int_vector(Int *vec);
// --------------------------------------------------------------------------------

/**
 * This function will determine the max value in a vector data structure
 * of type UInt
 *
 * /param vec A vector data structure of type UInt
 *
 * @code
 * UInt vec;
 * init_uint_vector(&vec, 5);
 * unsigned int a[5] = { 1, 2, 3, 4, 5};
 * insert_uint_vector(&vec, a, 5, 0);
 * unsigned int max = max_uint_vector(&vec);
 * PRINT(max);
 * // >> 5
 * free_uint_vector(&vec);
 * @endcode
 */
unsigned int max_uint_vector(UInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will determine the max value in a vector data structure
 * of type LInt
 *
 * /param vec A vector data structure of type LInt
 *
 * @code
 * LInt vec;
 * init_long_vector(&vec, 5);
 * long int a[5] = { 1, 2, 3, 4, 5};
 * insert_long_vector(&vec, a, 5, 0);
 * long int max = max_long_vector(&vec);
 * PRINT(max);
 * // >> 5
 * free_long_vector(&vec);
 * @endcode
 */
long int max_long_vector(LInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will determine the max value in a vector data structure
 * of type ULInt
 *
 * /param vec A vector data structure of type ULInt
 *
 * @code
 * ULInt vec;
 * init_ulong_vector(&vec, 5);
 * unsigned long int a[5] = { 1, 2, 3, 4, 5};
 * insert_ulong_vector(&vec, a, 5, 0);
 * unsigned long int max = max_ulong_vector(&vec);
 * PRINT(max);
 * // >> 5
 * free_ulong_vector(&vec);
 * @endcode
 */
unsigned long int max_ulong_vector(ULInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will determine the max value in a vector data structure
 * of type LLInt
 *
 * /param vec A vector data structure of type LLInt
 *
 * @code
 * LLInt vec;
 * init_llong_vector(&vec, 5);
 * long long int a[5] = { 1, 2, 3, 4, 5};
 * insert_llong_vector(&vec, a, 5, 0);
 * long long int max = max_llong_vector(&vec);
 * PRINT(max);
 * // >> 5
 * free_llong_vector(&vec);
 * @endcode
 */
long long int max_llong_vector(LLInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will determine the max value in a vector data structure
 * of type ULLInt
 *
 * /param vec A vector data structure of type ULLInt
 *
 * @code
 * ULLInt vec;
 * init_ullong_vector(&vec, 5);
 * unsigned long long int a[5] = { 1, 2, 3, 4, 5};
 * insert_ullong_vector(&vec, a, 5, 0);
 * unsigned long long int max = max_ullong_vector(&vec);
 * PRINT(max);
 * // >> 5
 * free_ullong_vector(&vec);
 * @endcode
 */
unsigned long long int max_ullong_vector(ULLInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will determine the max value in a vector data structure
 * of type Flt
 *
 * /param vec A vector data structure of type Flt
 *
 * @code
 * Flt vec;
 * init_float_vector(&vec, 5);
 * float a[5] = { 1.1, 2.2, 3.3, 4.4, 5.5};
 * insert_float_vector(&vec, a, 5, 0);
 * float max = max_float_vector(&vec);
 * PRINT(max);
 * // >> 5.5
 * free_float_vector(&vec);
 * @endcode
 */
float max_float_vector(Flt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will determine the max value in a vector data structure
 * of type Dble
 *
 * /param vec A vector data structure of type Dble
 *
 * @code
 * Dble vec;
 * init_double_vector(&vec, 5);
 * double a[5] = { 1.1, 2.2, 3.3, 4.4, 5.5};
 * insert_double_vector(&vec, a, 5, 0);
 * double max = max_double_vector(&vec);
 * PRINT(max);
 * // >> 5.5
 * free_double_vector(&vec);
 * @endcode
 */
double max_double_vector(Dble *vec);
// --------------------------------------------------------------------------------

/**
 * This function will determine the max value in a vector data structure
 * of type LDble
 *
 * /param vec A vector data structure of type LDble
 *
 * @code
 * LDble vec;
 * init_ldouble_vector(&vec, 5);
 * long double a[5] = { 1.1, 2.2, 3.3, 4.4, 5.5};
 * insert_ldouble_vector(&vec, a, 5, 0);
 * long double max = max_ldouble_vector(&vec);
 * PRINT(max);
 * // >> 5.5
 * free_ldouble_vector(&vec);
 * @endcode
 */
long double max_ldouble_vector(LDble *vec);
// ==========================================================================================
// ==========================================================================================
// MIN_TYPE_VEC FUNCTIONS

/**
 * This function will determine the min value in a vector data structure
 * of type Char
 *
 * /param vec A vector data structure of type Char
 * /return min The minimum value
 *
 * @code
 * Char vec;
 * init_char_vector(&vec, 5);
 * char a[5] = { 1, 2, 3, 4, 5};
 * insert_char_vector(&vec, a, 5, 0);
 * char min = min_char_vector(&vec);
 * PRINT(max);
 * // >> 1
 * free_char_vector(&vec);
 * @endcode
 */
char min_char_vector(Char *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will determine the min value in a vector data structure
 * of type UChar
 *
 * /param vec A vector data structure of type Short
 * /param min The minimum values
 *
 * @code
 * UChar vec;
 * init_uchar_vector(&vec, 5);
 * unsigned char a[5] = { 1, 2, 3, 4, 5};
 * insert_uchar_vector(&vec, a, 5, 0);
 * unsigned char min = min_uchar_vector(&vec);
 * PRINT(max);
 * // >> 1
 * free_uchar_vector(&vec);
 * @endcode
 */
unsigned char min_uchar_vector(UChar *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will determine the min value in a vector data structure
 * of type Short
 *
 * /param vec A vector data structure of type Short
 *
 * @code
 * Short vec;
 * init_short_vector(&vec, 5);
 * short int a[5] = { 1, 2, 3, 4, 5};
 * insert_short_vector(&vec, a, 5, 0);
 * short int min = min_short_vector(&vec);
 * PRINT(max);
 * // >> 1
 * free_short_vector(&vec);
 * @endcode
 */
short int min_short_vector(Short *vec);
// --------------------------------------------------------------------------------

/**
 * This function will determine the min value in a vector data structure
 * of type UShort
 *
 * /param vec A vector data structure of type UShort
 *
 * @code
 * UShort vec;
 * init_ushort_vector(&vec, 5);
 * unsigned short int a[5] = { 1, 2, 3, 4, 5};
 * insert_ushort_vector(&vec, a, 5, 0);
 * unsigned short int min = min_ushort_vector(&vec);
 * PRINT(max);
 * // >> 1
 * free_ushort_vector(&vec);
 * @endcode
 */
unsigned short int min_ushort_vector(UShort *vec);
// --------------------------------------------------------------------------------

/**
 * This function will determine the min value in a vector data structure
 * of type Int
 *
 * /param vec A vector data structure of type Int
 *
 * @code
 * Int vec;
 * init_int_vector(&vec, 5);
 * int a[5] = { 1, 2, 3, 4, 5};
 * insert_int_vector(&vec, a, 5, 0);
 * int min = min_int_vector(&vec);
 * PRINT(max);
 * // >> 1
 * free_int_vector(&vec);
 * @endcode
 */
int min_int_vector(Int *vec);
// --------------------------------------------------------------------------------

/**
 * This function will determine the min value in a vector data structure
 * of type UInt
 *
 * /param vec A vector data structure of type UInt
 *
 * @code
 * UInt vec;
 * init_uint_vector(&vec, 5);
 * unsigned int a[5] = { 1, 2, 3, 4, 5};
 * insert_uint_vector(&vec, a, 5, 0);
 * unsigned int min = min_uint_vector(&vec);
 * PRINT(max);
 * // >> 1
 * free_uint_vector(&vec);
 * @endcode
 */
unsigned int min_uint_vector(UInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will determine the min value in a vector data structure
 * of type LInt
 *
 * /param vec A vector data structure of type LInt
 *
 * @code
 * LInt vec;
 * init_long_vector(&vec, 5);
 * long int a[5] = { 1, 2, 3, 4, 5};
 * insert_long_vector(&vec, a, 5, 0);
 * long int min = min_long_vector(&vec);
 * PRINT(max);
 * // >> 1
 * free_long_vector(&vec);
 * @endcode
 */
long int min_long_vector(LInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will determine the min value in a vector data structure
 * of type ULInt
 *
 * /param vec A vector data structure of type ULInt
 *
 * @code
 * ULInt vec;
 * init_ulong_vector(&vec, 5);
 * unsigned long int a[5] = { 1, 2, 3, 4, 5};
 * insert_ulong_vector(&vec, a, 5, 0);
 * unsigned long int min = min_ulong_vector(&vec);
 * PRINT(max);
 * // >> 1
 * free_ulong_vector(&vec);
 * @endcode
 */
unsigned long int min_ulong_vector(ULInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will determine the min value in a vector data structure
 * of type LLInt
 *
 * /param vec A vector data structure of type LLInt
 *
 * @code
 * LLInt vec;
 * init_llong_vector(&vec, 5);
 * long long int a[5] = { 1, 2, 3, 4, 5};
 * insert_llong_vector(&vec, a, 5, 0);
 * long long int min = min_llong_vector(&vec);
 * PRINT(max);
 * // >> 1
 * free_llong_vector(&vec);
 * @endcode
 */
long long int min_llong_vector(LLInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will determine the min value in a vector data structure
 * of type ULLInt
 *
 * /param vec A vector data structure of type ULLInt
 *
 * @code
 * ULLInt vec;
 * init_ullong_vector(&vec, 5);
 * unsigned long long int a[5] = { 1, 2, 3, 4, 5};
 * insert_ullong_vector(&vec, a, 5, 0);
 * unsigned long long int min = min_ullong_vector(&vec);
 * PRINT(max);
 * // >> 1
 * free_ullong_vector(&vec);
 * @endcode
 */
unsigned long long int min_ullong_vector(ULLInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will determine the min value in a vector data structure
 * of type Flt
 *
 * /param vec A vector data structure of type Flt
 *
 * @code
 * Flt vec;
 * init_float_vector(&vec, 5);
 * float a[5] = {1., 2., 3., 4., 5.};
 * insert_float_vector(&vec, a, 5, 0);
 * float min = min_float_vector(&vec);
 * PRINT(max);
 * // >> 1
 * free_float_vector(&vec);
 * @endcode
 */
float min_float_vector(Flt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will determine the min value in a vector data structure
 * of type Dble
 *
 * /param vec A vector data structure of type Dble
 *
 * @code
 * Dble vec;
 * init_double_vector(&vec, 5);
 * double a[5] = { 1., 2., 3., 4., 5.};
 * insert_double_vector(&vec, a, 5, 0);
 * double min = min_double_vector(&vec);
 * PRINT(max);
 * // >> 1
 * free_double_vector(&vec);
 * @endcode
 */
double min_double_vector(Dble *vec);
// --------------------------------------------------------------------------------

/**
 * This function will determine the min value in a vector data structure
 * of type LDble
 *
 * /param vec A vector data structure of type LDble
 *
 * @code
 * LDble vec;
 * init_ldouble_vector(&vec, 5);
 * long double a[5] = { 1., 2., 3., 4., 5.};
 * insert_ldouble_vector(&vec, a, 5, 0);
 * long double min = min_ldouble_vector(&vec);
 * PRINT(max);
 * // >> 1
 * free_ldouble_vector(&vec);
 * @endcode
 */
long double min_ldouble_vector(LDble *vec);
// ==========================================================================================
// ==========================================================================================
// RANGE_TYPE_VEC FUNCTIONS

/**
 * This function will add a range of data points to a vector data structure
 * that start at a user defined data point and ends at another, or the nearest
 * data point.
 *
 * /param vec A vector data structure of type Char
 * /param start The start point
 * /param end The end point
 * /param delta The difference between each data point
 *
 * @code
 * Char vec;
 * init_char_vector(&vec, 10);
 * range_char_vector(&vec, 2, 20, 2);
 * PRINT(vec);
 * // [ 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 ]
 * free_char_vector(&vec);
 * @endcode
 */
void range_char_vector(Char *vec, char start, char end, char delta);
// ------------------------------------------------------------------------------------------

/**
 * This function will add a range of data points to a vector data structure
 * that start at a user defined data point and ends at another, or the nearest
 * data point.
 *
 * /param vec A vector data structure of type UChar
 * /param start The start point
 * /param end The end point
 * /param delta The difference between each data point
 *
 * @code
 * UChar vec;
 * init_uchar_vector(&vec, 10);
 * range_uchar_vector(&vec, 2, 20, 2);
 * PRINT(vec);
 * // [ 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 ]
 * free_uchar_vector(&vec);
 * @endcode
 */
void range_uchar_vector(UChar *vec, unsigned char start, unsigned char end, unsigned char delta);
// ------------------------------------------------------------------------------------------

/**
 * This function will add a range of data points to a vector data structure
 * that start at a user defined data point and ends at another, or the nearest
 * data point.
 *
 * /param vec A vector data structure of type Short
 * /param start The start point
 * /param end The end point
 * /param delta The difference between each data point
 *
 * @code
 * Short vec;
 * init_short_vector(&vec, 10);
 * range_short_vector(&vec, 2, 20, 2);
 * PRINT(vec);
 * // [ 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 ]
 * free_short_vector(&vec);
 * @endcode
 */
void range_short_vector(Short *vec, short int start, short int end, short int delta);
// --------------------------------------------------------------------------------

/**
 * This function will add a range of data points to a vector data structure
 * that start at a user defined data point and ends at another, or the nearest
 * data point.
 *
 * /param vec A vector data structure of type UShort
 * /param start The start point
 * /param end The end point
 * /param delta The difference between each data point
 *
 * @code
 * UShort vec;
 * init_ushort_vector(&vec, 10);
 * range_ushort_vector(&vec, 2, 20, 2);
 * PRINT(vec);
 * // [ 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 ]
 * free_ushort_vector(&vec);
 * @endcode
 */
void range_ushort_vector(UShort *vec, unsigned short int start, unsigned short int end,
		                 unsigned short int delta);
// --------------------------------------------------------------------------------

/**
 * This function will add a range of data points to a vector data structure
 * that start at a user defined data point and ends at another, or the nearest
 * data point.
 *
 * /param vec A vector data structure of type Int
 * /param start The start point
 * /param end The end point
 * /param delta The difference between each data point
 *
 * @code
 * Int vec;
 * init_int_vector(&vec, 10);
 * range_int_vector(&vec, 2, 20, 2);
 * PRINT(vec);
 * // [ 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 ]
 * free_int_vector(&vec);
 * @endcode
 */
void range_int_vector(Int *vec, int start, int end, int delta);
// --------------------------------------------------------------------------------

/**
 * This function will add a range of data points to a vector data structure
 * that start at a user defined data point and ends at another, or the nearest
 * data point.
 *
 * /param vec A vector data structure of type UInt
 * /param start The start point
 * /param end The end point
 * /param delta The difference between each data point
 *
 * @code
 * UInt vec;
 * init_uint_vector(&vec, 10);
 * range_uint_vector(&vec, 2, 20, 2);
 * PRINT(vec);
 * // [ 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 ]
 * free_uint_vector(&vec);
 * @endcode
 */
void range_uint_vector(UInt *vec, unsigned int start, unsigned int end, unsigned int delta);
// --------------------------------------------------------------------------------

/**
 * This function will add a range of data points to a vector data structure
 * that start at a user defined data point and ends at another, or the nearest
 * data point.
 *
 * /param vec A vector data structure of type LInt
 * /param start The start point
 * /param end The end point
 * /param delta The difference between each data point
 *
 * @code
 * LInt vec;
 * init_long_vector(&vec, 10);
 * range_long_vector(&vec, 2, 20, 2);
 * PRINT(vec);
 * // [ 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 ]
 * free_long_vector(&vec);
 * @endcode
 */
void range_long_vector(LInt *vec, long int start, long int end, long int delta);
// --------------------------------------------------------------------------------

/**
 * This function will add a range of data points to a vector data structure
 * that start at a user defined data point and ends at another, or the nearest
 * data point.
 *
 * /param vec A vector data structure of type ULInt
 * /param start The start point
 * /param end The end point
 * /param delta The difference between each data point
 *
 * @code
 * ULInt vec;
 * init_ulong_vector(&vec, 10);
 * range_ulong_vector(&vec, 2, 20, 2);
 * PRINT(vec);
 * // [ 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 ]
 * free_ulong_vector(&vec);
 * @endcode
 */
void range_ulong_vector(ULInt *vec, unsigned long int start, unsigned long int end,
		                unsigned long int delta);
// --------------------------------------------------------------------------------

/**
 * This function will add a range of data points to a vector data structure
 * that start at a user defined data point and ends at another, or the nearest
 * data point.
 *
 * /param vec A vector data structure of type LLInt
 * /param start The start point
 * /param end The end point
 * /param delta The difference between each data point
 *
 * @code
 * LLInt vec;
 * init_llong_vector(&vec, 10);
 * range_llong_vector(&vec, 2, 20, 2);
 * PRINT(vec);
 * // [ 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 ]
 * free_llong_vector(&vec);
 * @endcode
 */
void range_llong_vector(LLInt *vec, long long int start, long long int end,
		                long long int delta);
// --------------------------------------------------------------------------------

/**
 * This function will add a range of data points to a vector data structure
 * that start at a user defined data point and ends at another, or the nearest
 * data point.
 *
 * /param vec A vector data structure of type ULLInt
 * /param start The start point
 * /param end The end point
 * /param delta The difference between each data point
 *
 * @code
 * ULLInt vec;
 * init_ullong_vector(&vec, 10);
 * range_ullong_vector(&vec, 2, 20, 2);
 * PRINT(vec);
 * // [ 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 ]
 * free_ullong_vector(&vec);
 * @endcode
 */
void range_ullong_vector(ULLInt *vec, unsigned long long int start,
		                 unsigned long long int end,
		                 unsigned long long int delta);
// --------------------------------------------------------------------------------

/**
 * This function will add a range of data points to a vector data structure
 * that start at a user defined data point and ends at another, or the nearest
 * data point.
 *
 * /param vec A vector data structure of type Flt
 * /param start The start point
 * /param end The end point
 * /param delta The difference between each data point
 *
 * @code
 * Flt vec;
 * init_float_vector(&vec, 10);
 * range_float_vector(&vec, 2, 20, 2);
 * PRINT(vec);
 * // [ 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 ]
 * free_float_vector(&vec);
 * @endcode
 */
void range_float_vector(Flt *vec, float start, float end, float delta);
// --------------------------------------------------------------------------------

/**
 * This function will add a range of data points to a vector data structure
 * that start at a user defined data point and ends at another, or the nearest
 * data point.
 *
 * /param vec A vector data structure of type Dble
 * /param start The start point
 * /param end The end point
 * /param delta The difference between each data point
 *
 * @code
 * Dble vec;
 * init_double_vectoe(&vec, 10);
 * range_double_vector(&vec, 2, 20, 2);
 * PRINT(vec);
 * // [ 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 ]
 * free_double_vector(&vec);
 * @endcode
 */
void range_double_vector(Dble *vec, double start, double end, double delta);
// --------------------------------------------------------------------------------

/**
 * This function will add a range of data points to a vector data structure
 * that start at a user defined data point and ends at another, or the nearest
 * data point.
 *
 * /param vec A vector data structure of type LDble
 * /param start The start point
 * /param end The end point
 * /param delta The difference between each data point
 *
 * @code
 * LDble vec;
 * init_ldouble_vector(&vec, 10)
 * range_ldouble_vector(&vec, 2, 20, 2);
 * PRINT(vec);
 * // [ 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 ]
 * free_ldouble_vector(&vec);
 * @endcode
 */
 void range_ldouble_vector(LDble *vec, long double start, long double end, long double delta);
// ==========================================================================================
// ==========================================================================================
// COPY_TYPE_VECTOR FUNCTIONS

/**
 * This function will create and return a deep copy of an Short struct
 *
 * /param vec A vector struct of type Short
 */
Short copy_short_vector(Short *vec);
// --------------------------------------------------------------------------------

/**
 * This function will create and return a deep copy of an UShort struct
 *
 * /param vec A vector struct of type UShort
 */
UShort copy_ushort_vector(UShort *vec);
// --------------------------------------------------------------------------------

/**
 * This function will create and return a deep copy of an Int struct
 *
 * /param vec A vector struct of type Int
 */
Int copy_int_vector(Int *vec);
// --------------------------------------------------------------------------------

/**
 * This function will create and return a deep copy of an UInt struct
 *
 * /param vec A vector struct of type UInt
 */
UInt copy_uint_vector(UInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will create and return a deep copy of an LInt struct
 *
 * /param vec A vector struct of type LInt
 */
LInt copy_long_vector(LInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will create and return a deep copy of an ULInt struct
 *
 * /param vec A vector struct of type ULInt
 */
ULInt copy_ulong_vector(ULInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will create and return a deep copy of an LLInt struct
 *
 * /param vec A vector struct of type LLInt
 */
LLInt copy_llong_vector(LLInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will create and return a deep copy of an ULLInt struct
 *
 * /param vec A vector struct of type ULLInt
 */
ULLInt copy_ullong_vector(ULLInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will create and return a deep copy of an Flt struct
 *
 * /param vec A vector struct of type Flt
 */
Flt copy_float_vector(Flt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will create and return a deep copy of an Dble struct
 *
 * /param vec A vector struct of type Dble
 */
Dble copy_double_vector(Dble *vec);
// --------------------------------------------------------------------------------

/**
 * This function will create and return a deep copy of an LDble struct
 *
 * /param vec A vector struct of type LDble
 */
LDble copy_ldouble_vector(LDble *vec);
// --------------------------------------------------------------------------------

/**
 * This function will create and return a deep copy of an Char struct
 *
 * /param vec A vector struct of type Char
 */
Char copy_char_vector(Char *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will create and return a deep copy of an UChar struct
 *
 * /param vec A vector struct of type UChar
 */
UChar copy_uchar_vector(UChar *vec);
// --------------------------------------------------------------------------------

/**
 * This function will create and return a deep copy of an Bool struct
 *
 * /param vec A vector struct of type Bool
 */
Bool copy_bool_vector(Bool *vec);
// --------------------------------------------------------------------------------

/**
 * This function will create and return a deep copy of an String struct
 *
 * /param vec A vector struct of type String
 */
String copy_string_vector(String *vec);
// ==========================================================================================
// ==========================================================================================
// TYPE_VECTOR_DATA FUNCTIONS

/**
 * This function will retireve the data from a user specified index in a
 * vector or array of type Short
 *
 * /param vec A linked list struct of type Short
 * /param index The index from where data will be retrieved
 * /return dat An unsigned bool data point
 *
 * @code
 * Short vec;
 * init_short_vector(&vec);
 * short int a[5] = {1, 2, 3, 4, 5};
 * insert_short_vector(&vec, a, 5, 0);
 * PRINT(short_vector_data(&vec, 2));
 * // >> 3
 * free_short_vector(&vec);
 * @endcode
 */
short short_vector_data(Short *vec, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will retireve the data from a user specified index in a
 * vector or array of type UShort
 *
 * /param vec A linked list struct of type UShort
 * /param index The index from where data will be retrieved
 * /return dat An unsigned bool data point
 *
 * @code
 * UShort vec;
 * init_ushort_vector(&vec);
 * unsigned short int a[5] = {1, 2, 3, 4, 5};
 * insert_ushort_vector(&vec, a, 5, 0);
 * PRINT(ushort_vector_data(&vec, 2));
 * // >> 3
 * free_ushort_vector(&vec);
 * @endcode
 */
unsigned short int ushort_vector_data(UShort *vec, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will retireve the data from a user specified index in a
 * vector or array of type Int
 *
 * /param vec A linked list struct of type Int
 * /param index The index from where data will be retrieved
 * /return dat An unsigned bool data point
 *
 * @code
 * Int vec;
 * init_int_vector(&vec);
 * int a[5] = {1, 2, 3, 4, 5};
 * insert_int_vector(&vec, a, 5, 0);
 * PRINT(int_vector_data(&vec, 2));
 * // >> 3
 * free_int_vector(&vec);
 * @endcode
 */
int int_vector_data(Int *vec, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will retireve the data from a user specified index in a
 * vector or array of type UInt
 *
 * /param vec A linked list struct of type UInt
 * /param index The index from where data will be retrieved
 * /return dat An unsigned bool data point
 *
 * @code
 * UInt vec;
 * init_uint_vector(&vec);
 * unsigned int a[5] = {1, 2, 3, 4, 5};
 * insert_uint_vector(&vec, a, 5, 0);
 * PRINT(uint_vector_data(&vec, 2));
 * // >> 3
 * free_uint_vector(&vec);
 * @endcode
 */
unsigned int uint_vector_data(UInt *vec, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will retireve the data from a user specified index in a
 * vector or array of type LInt
 *
 * /param vec A linked list struct of type LInt
 * /param index The index from where data will be retrieved
 * /return dat An unsigned bool data point
 *
 * @code
 * LInt vec;
 * init_long_vector(&vec);
 * long int a[5] = {1, 2, 3, 4, 5};
 * insert_long_vector(&vec, a, 5, 0);
 * PRINT(long_vector_data(&vec, 2));
 * // >> 3
 * free_long_vector(&vec);
 * @endcode
 */
long int long_vector_data(LInt *vec, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will retireve the data from a user specified index in a
 * vector or array of type ULInt
 *
 * /param vec A linked list struct of type ULInt
 * /param index The index from where data will be retrieved
 * /return dat An unsigned bool data point
 *
 * @code
 * ULInt vec;
 * init_ulong_vector(&vec);
 * unsigned long int a[5] = {1, 2, 3, 4, 5};
 * insert_ulong_vector(&vec, a, 5, 0);
 * PRINT(ulong_vector_data(&vec, 2));
 * // >> 3
 * free_ulong_vector(&vec);
 * @endcode
 */
unsigned long int ulong_vector_data(ULInt *vec, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will retireve the data from a user specified index in a
 * vector or array of type LLInt
 *
 * /param vec A linked list struct of type LLInt
 * /param index The index from where data will be retrieved
 * /return dat An unsigned bool data point
 *
 * @code
 * LLInt vec;
 * init_llong_vector(&vec);
 * long long int a[5] = {1, 2, 3, 4, 5};
 * insert_llong_vector(&vec, a, 5, 0);
 * PRINT(llong_vector_data(&vec, 2));
 * // >> 3
 * free_llong_vector(&vec);
 * @endcode
 */
long long int llong_vector_data(LLInt *vec, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will retireve the data from a user specified index in a
 * vector or array of type ULLInt
 *
 * /param vec A linked list struct of type ULLInt
 * /param index The index from where data will be retrieved
 * /return dat An unsigned bool data point
 *
 * @code
 * ULLInt vec;
 * init_ullong_vector(&vec);
 * unsigned long long int a[5] = {1, 2, 3, 4, 5};
 * insert_ullong_vector(&vec, a, 5, 0);
 * PRINT(ullong_vector_data(&vec, 2));
 * // >> 3
 * free_ullong_vector(&vec);
 * @endcode
 */
unsigned long long int ullong_vector_data(ULLInt *vec, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will retireve the data from a user specified index in a
 * vector or array of type Flt
 *
 * /param vec A linked list struct of type Flt
 * /param index The index from where data will be retrieved
 * /return dat An unsigned bool data point
 *
 * @code
 * Flt vec;
 * init_float_vector(&vec);
 * float a[5] = {1, 2, 3, 4, 5};
 * insert_float_vector(&vec, a, 5, 0);
 * PRINT(float_vector_data(&vec, 2));
 * // >> 3.000
 * free_float_vector(&vec);
 * @endcode
 */
float float_vector_data(Flt *vec, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will retireve the data from a user specified index in a
 * vector or array of type Dble
 *
 * /param vec A linked list struct of type Dble
 * /param index The index from where data will be retrieved
 * /return dat An unsigned bool data point
 *
 * @code
 * Dble vec;
 * init_double_vector(&vec);
 * double a[5] = {1, 2, 3, 4, 5};
 * insert_double_vector(&vec, a, 5, 0);
 * PRINT(double_vector_data(&vec, 2));
 * // >> 3.000
 * free_double_vector(&vec);
 * @endcode
 */
double double_vector_data(Dble *vec, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will retireve the data from a user specified index in a
 * vector or array of type LDble
 *
 * /param vec A linked list struct of type LDble
 * /param index The index from where data will be retrieved
 * /return dat An unsigned bool data point
 *
 * @code
 * LDble vec;
 * init_ldouble_vector(&vec);
 * long double a[5] = {1, 2, 3, 4, 5};
 * insert_ldouble_vector(&vec, a, 5, 0);
 * PRINT(ldouble_vector_data(&vec, 2));
 * // >> 3.000
 * free_ldouble_vector(&vec);
 * @endcode
 */
long double ldouble_vector_data(LDble *vec, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will retireve the data from a user specified index in a
 * vector or array of type Char
 *
 * /param vec A linked list struct of type Char
 * /param index The index from where data will be retrieved
 * /return dat An unsigned bool data point
 *
 * @code
 * Char vec;
 * init_char_vector(&vec);
 * char a[5] = {'a', 'b', 'c', 'd', 'e'};
 * insert_char_vector(&vec, a, 5, 0);
 * PRINT(char_vector_data(&vec, 2));
 * // >> c
 * free_char_vector(&vec);
 * @endcode
 */
char char_vector_data(Char *vec, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will retireve the data from a user specified index in a
 * vector or array of type UChar
 *
 * /param vec A linked list struct of type UChar
 * /param index The index from where data will be retrieved
 * /return dat An unsigned bool data point
 *
 * @code
 * UChar vec;
 * init_uchar_vector(&vec);
 * unsigned char a[5] = {'a', 'b', 'c', 'd', 'e'};
 * insert_uchar_vector(&vec, a, 5, 0);
 * PRINT(uchar_vector_data(&vec, 2));
 * // >> c
 * free_uchar_vector(&vec);
 * @endcode
 */
unsigned char uchar_vector_data(UChar *vec, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will retireve the data from a user specified index in a
 * vector or array of type Bool
 *
 * /param vec A linked list struct of type Bool
 * /param index The index from where data will be retrieved
 * /return dat An unsigned bool data point
 *
 * @code
 * Bool vec;
 * init_bool_vector(&vec);
 * bool a[5] = {true, true, false, false, true};
 * insert_bool_vector(&vec, a, 5, 0);
 * PRINT(bool_vector_data(&vec, 2));
 * // >> false
 * free_bool_vector(&vec);
 * @endcode
 */
bool bool_vector_data(Bool *vec, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will retireve the data from a user specified index in a
 * vector or array of type String
 *
 * /param vec A linked list struct of type String
 * /param index The index from where data will be retrieved
 * /return dat An unsigned bool data point
 *
 * @code
 * String vec;
 * init_string_vector(&vec);
 * push_string_vector(&vec, "One", 0);
 * push_string_vector(&vec, "Two", 1);
 * push_string_vector(&vec, "Three", 2);
 * PRINT(string_vector_data(&vec, 2));
 * // >> Three
 * free_string_vector(&vec);
 * @endcode
 */
char* string_vector_data(String *vec, size_t index);
// ==========================================================================================
// ==========================================================================================
// TRIM_TYPE_VECTOR FUNCTIONS

/**
 * This function will resize the memory allocated to a dynamically allocated
 * vector to the minimum necessary size.
 *
 * /param vec A vector struct of type Short
 */
void trim_short_vector(Short *vec);
// --------------------------------------------------------------------------------

/**
 * This function will resize the memory allocated to a dynamically allocated
 * vector to the minimum necessary size.
 *
 * /param vec A vector struct of type UShort
 */
void trim_ushort_vector(UShort *vec);
// --------------------------------------------------------------------------------

/**
 * This function will resize the memory allocated to a dynamically allocated
 * vector to the minimum necessary size.
 *
 * /param vec A vector struct of type Int
 */
void trim_int_vector(Int *vec);
// --------------------------------------------------------------------------------

/**
 * This function will resize the memory allocated to a dynamically allocated
 * vector to the minimum necessary size.
 *
 * /param vec A vector struct of type UInt
 */
void trim_uint_vector(UInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will resize the memory allocated to a dynamically allocated
 * vector to the minimum necessary size.
 *
 * /param vec A vector struct of type LInt
 */
void trim_long_vector(LInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will resize the memory allocated to a dynamically allocated
 * vector to the minimum necessary size.
 *
 * /param vec A vector struct of type ULInt
 */
void trim_ulong_vector(ULInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will resize the memory allocated to a dynamically allocated
 * vector to the minimum necessary size.
 *
 * /param vec A vector struct of type LLInt
 */
void trim_llong_vector(LLInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will resize the memory allocated to a dynamically allocated
 * vector to the minimum necessary size.
 *
 * /param vec A vector struct of type ULLInt
 */
void trim_ullong_vector(ULLInt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will resize the memory allocated to a dynamically allocated
 * vector to the minimum necessary size.
 *
 * /param vec A vector struct of type Flt
 */
void trim_float_vector(Flt *vec);
// --------------------------------------------------------------------------------

/**
 * This function will resize the memory allocated to a dynamically allocated
 * vector to the minimum necessary size.
 *
 * /param vec A vector struct of type Dble
 */
void trim_double_vector(Dble *vec);
// --------------------------------------------------------------------------------

/**
 * This function will resize the memory allocated to a dynamically allocated
 * vector to the minimum necessary size.
 *
 * /param vec A vector struct of type LDble
 */
void trim_ldouble_vector(LDble *vec);
// --------------------------------------------------------------------------------

/**
 * This function will resize the memory allocated to a dynamically allocated
 * vector to the minimum necessary size.
 *
 * /param vec A vector struct of type Char
 */
void trim_char_vector(Char *vec);
// ------------------------------------------------------------------------------------------

/**
 * This function will resize the memory allocated to a dynamically allocated
 * vector to the minimum necessary size.
 *
 * /param vec A vector struct of type UChar
 */
void trim_uchar_vector(UChar *vec);
// --------------------------------------------------------------------------------

/**
 * This function will resize the memory allocated to a dynamically allocated
 * vector to the minimum necessary size.
 *
 * /param vec A vector struct of type Bool
 */
void trim_bool_vector(Bool *vec);
// ==========================================================================================
// ==========================================================================================

/**
 * Macro to trim a vecotr or array memory to minimum necessary value
 *
 * /param vec The vector to be trimmed.
 */
#define TRIM(T) _Generic( (T), Short: trim_short_vector, \
							   UShort: trim_ushort_vector, \
							   Int: trim_int_vector, \
							   UInt: trim_uint_vector, \
							   LInt: trim_long_vector, \
							   ULInt: trim_ulong_vector, \
							   LLInt: trim_llong_vector, \
							   ULLInt: trim_ullong_vector, \
							   Flt: trim_float_vector, \
							   Dble: trim_double_vector, \
							   LDble: trim_ldouble_vector, \
							   Char: trim_char_vector, \
							   UChar: trim_uchar_vector, \
							   Bool: trim_bool_vector)(&T)
// ==========================================================================================
// ==========================================================================================
// REPLACE_TYPE_VECTOR_INDEX FUNCTIONS

/**
 * This function will replace the value of a vector or array at a user specified
 * index.  If the user specifies an index that is out of bounds, the function will
 * return -1, or 1 if successfull.
 *
 * /param vec A vector or array of type Short
 * /param new_value The replacement value of type short int
 * /param index The index where a value will be replaced
 *
 * @code
 * Short vec;
 * init_short_vector(&vec, 5);
 * short int a[5] = {1, 2, 3, 4};
 * insert_short_vector(&vec, a, 5, 0);
 * replace_short_vector_index(&vec, 10, 2);
 * PRINT(vec);
 * // >> [ 1, 2, 10, 4 ]
 * free_short_vector(&vec);
 * @endcode
 */
int replace_short_vector_index(Short *vec, short int new_value, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will replace the value of a vector or array at a user specified
 * index.  If the user specifies an index that is out of bounds, the function will
 * return -1, or 1 if successfull.
 *
 * /param vec A vector or array of type UShort
 * /param new_value The replacement value of type unsigned short int
 * /param index The index where a value will be replaced
 *
 * @code
 * UShort vec;
 * init_ushort_vector(&vec, 5);
 * unsigned short int a[5] = {1, 2, 3, 4};
 * insert_ushort_vector(&vec, a, 5, 0);
 * replace_ushort_vector_index(&vec, 10, 2);
 * PRINT(vec);
 * // >> [ 1, 2, 10, 4 ]
 * free_ushort_vector(&vec);
 * @endcode
 */
int replace_ushort_vector_index(UShort *vec, unsigned short int new_value, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will replace the value of a vector or array at a user specified
 * index.  If the user specifies an index that is out of bounds, the function will
 * return -1, or 1 if successfull.
 *
 * /param vec A vector or array of type Int
 * /param new_value The replacement value of type int
 * /param index The index where a value will be replaced
 *
 * @code
 * Int vec;
 * init_int_vector(&vec, 5);
 * int a[5] = {1, 2, 3, 4};
 * insert_int_vector(&vec, a, 5, 0);
 * replace_int_vector_index(&vec, 10, 2);
 * PRINT(vec);
 * // >> [ 1, 2, 10, 4 ]
 * free_int_vector(&vec);
 * @endcode
 */
int replace_int_vector_index(Int *vec, int new_value, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will replace the value of a vector or array at a user specified
 * index.  If the user specifies an index that is out of bounds, the function will
 * return -1, or 1 if successfull.
 *
 * /param vec A vector or array of type UInt
 * /param new_value The replacement value of type unsigned int
 * /param index The index where a value will be replaced
 *
 * @code
 * UInt vec;
 * init_uint_vector(&vec, 5);
 * unsigned int a[5] = {1, 2, 3, 4};
 * insert_uint_vector(&vec, a, 5, 0);
 * replace_uint_vector_index(&vec, 10, 2);
 * PRINT(vec);
 * // >> [ 1, 2, 10, 4 ]
 * free_uint_vector(&vec);
 * @endcode
 */
int replace_uint_vector_index(UInt *vec, unsigned int new_value, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will replace the value of a vector or array at a user specified
 * index.  If the user specifies an index that is out of bounds, the function will
 * return -1, or 1 if successfull.
 *
 * /param vec A vector or array of type LInt
 * /param new_value The replacement value of type long int
 * /param index The index where a value will be replaced
 *
 * @code
 * LInt vec;
 * init_long_vector(&vec, 5);
 * long int a[5] = {1, 2, 3, 4};
 * insert_long_vector(&vec, a, 5, 0);
 * replace_long_vector_index(&vec, 10, 2);
 * PRINT(vec);
 * // >> [ 1, 2, 10, 4 ]
 * free_long_vector(&vec);
 * @endcode
 */
int replace_long_vector_index(LInt *vec, long int new_value, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will replace the value of a vector or array at a user specified
 * index.  If the user specifies an index that is out of bounds, the function will
 * return -1, or 1 if successfull.
 *
 * /param vec A vector or array of type ULInt
 * /param new_value The replacement value of type unsigned long int
 * /param index The index where a value will be replaced
 *
 * @code
 * ULInt vec;
 * init_ulong_vector(&vec, 5);
 * unsigned long int a[5] = {1, 2, 3, 4};
 * insert_ulong_vector(&vec, a, 5, 0);
 * replace_ulong_vector_index(&vec, 10, 2);
 * PRINT(vec);
 * // >> [ 1, 2, 10, 4 ]
 * free_ulong_vector(&vec);
 * @endcode
 */
int replace_ulong_vector_index(ULInt *vec, unsigned long int new_value, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will replace the value of a vector or array at a user specified
 * index.  If the user specifies an index that is out of bounds, the function will
 * return -1, or 1 if successfull.
 *
 * /param vec A vector or array of type LLInt
 * /param new_value The replacement value of type long long int
 * /param index The index where a value will be replaced
 *
 * @code
 * LLInt vec;
 * init_llong_vector(&vec, 5);
 * long long int a[5] = {1, 2, 3, 4};
 * insert_llong_vector(&vec, a, 5, 0);
 * replace_llong_vector_index(&vec, 10, 2);
 * PRINT(vec);
 * // >> [ 1, 2, 10, 4 ]
 * free_llong_vector(&vec);
 * @endcode
 */
int replace_llong_vector_index(LLInt *vec, long long int new_value, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will replace the value of a vector or array at a user specified
 * index.  If the user specifies an index that is out of bounds, the function will
 * return -1, or 1 if successfull.
 *
 * /param vec A vector or array of type ULLInt
 * /param new_value The replacement value of type unsigned long long int
 * /param index The index where a value will be replaced
 *
 * @code
 * ULLInt vec;
 * init_ullong_vector(&vec, 5);
 * unsigned long long int a[5] = {1, 2, 3, 4};
 * insert_ullong_vector(&vec, a, 5, 0);
 * replace_ullong_vector_index(&vec, 10, 2);
 * PRINT(vec);
 * // >> [ 1, 2, 10, 4 ]
 * free_ullong_vector(&vec);
 * @endcode
 */
int replace_ullong_vector_index(ULLInt *vec, unsigned long long int new_value, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will replace the value of a vector or array at a user specified
 * index.  If the user specifies an index that is out of bounds, the function will
 * return -1, or 1 if successfull.
 *
 * /param vec A vector or array of type Flt
 * /param new_value The replacement value of type float
 * /param index The index where a value will be replaced
 *
 * @code
 * Flt vec;
 * init_float_vector(&vec, 5);
 * float a[5] = {1, 2, 3, 4};
 * insert_float_vector(&vec, a, 5, 0);
 * replace_float_vector_index(&vec, 10, 2);
 * PRINT(vec);
 * // >> [ 1, 2, 10, 4 ]
 * free_float_vector(&vec);
 * @endcode
 */
int replace_float_vector_index(Flt *vec, float new_value, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will replace the value of a vector or array at a user specified
 * index.  If the user specifies an index that is out of bounds, the function will
 * return -1, or 1 if successfull.
 *
 * /param vec A vector or array of type Dble
 * /param new_value The replacement value of type unsigned double
 * /param index The index where a value will be replaced
 *
 * @code
 * Dble vec;
 * init_double_vector(&vec, 5);
 * double a[5] = {1, 2, 3, 4};
 * insert_double_vector(&vec, a, 5, 0);
 * replace_double_vector_index(&vec, 10, 2);
 * PRINT(vec);
 * // >> [ 1, 2, 10, 4 ]
 * free_double_vector(&vec);
 * @endcode
 */
int replace_double_vector_index(Dble *vec, double new_value, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will replace the value of a vector or array at a user specified
 * index.  If the user specifies an index that is out of bounds, the function will
 * return -1, or 1 if successfull.
 *
 * /param vec A vector or array of type LDble
 * /param new_value The replacement value of type long double
 * /param index The index where a value will be replaced
 *
 * @code
 * LDble vec;
 * init_ldouble_vector(&vec, 5);
 * ldouble a[5] = {1, 2, 3, 4};
 * insert_ldouble_vector(&vec, a, 5, 0);
 * replace_ldouble_vector_index(&vec, 10, 2);
 * PRINT(vec);
 * // >> [ 1, 2, 10, 4 ]
 * free_ldouble_vector(&vec);
 * @endcode
 */
int replace_ldouble_vector_index(LDble *vec, long double new_value, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will replace the value of a vector or array at a user specified
 * index.  If the user specifies an index that is out of bounds, the function will
 * return -1, or 1 if successfull.
 *
 * /param vec A vector or array of type Bool
 * /param new_value The replacement value of type bool
 * /param index The index where a value will be replaced
 *
 * @code
 * Bool vec;
 * init_bool_vector(&vec, 5);
 * bool a[5] = {1, 2, 3, 4};
 * insert_bool_vector(&vec, a, 5, 0);
 * replace_bool_vector_index(&vec, 10, 2);
 * PRINT(vec);
 * // >> [ 1, 2, 10, 4 ]
 * free_bool_vector(&vec);
 * @endcode
 */
int replace_bool_vector_index(Bool *vec, bool new_value, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will replace the value of a vector or array at a user specified
 * index.  If the user specifies an index that is out of bounds, the function will
 * return -1, or 1 if successfull.
 *
 * /param vec A vector or array of type String
 * /param new_value The replacement value of type char*
 * /param index The index where a value will be replaced
 *
 * @code
 * String vec;
 * init_string_vector(&vec);
 * push_string_vector(&vec, "One", 0);
 * push_string_vector(&vec, "Two", 1);
 * push_string_vector(&vec, "Three", 2);
 * push_string_vector(&vec, "Four", 3);
 * replace_ldouble_vector_index(&vec, "Five", 2);
 * PRINT(vec);
 * // >> [ One, Two, Five, Four ]
 * free_string_vector(&vec);
 * @endcode
 */
int replace_string_vector_index(String *vec, char *new_value, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will replace the value of a vector or array at a user specified
 * index.  If the user specifies an index that is out of bounds, the function will
 * return -1, or 1 if successfull.
 *
 * /param vec A vector or array of type Char
 * /param new_value The replacement value of type char
 * /param index The index where a value will be replaced
 *
 * @code
 * Char vec;
 * init_char_vector(&vec, 5);
 * char a[5] = {'a', 'b', 'c', 'd'};
 * insert_char_vector(&vec, a, 5, 0);
 * replace_char_vector_index(&vec, 'q', 2);
 * PRINT(vec);
 * // >> [ a, b, q, d ]
 * free_char_vector(&vec);
 * @endcode
 */
int replace_char_vector_index(Char *vec, char new_value, size_t index);
// ------------------------------------------------------------------------------------------

/**
 * This function will replace the value of a vector or array at a user specified
 * index.  If the user specifies an index that is out of bounds, the function will
 * return -1, or 1 if successfull.
 *
 * /param vec A vector or array of type UChar
 * /param new_value The replacement value of type unsigned char
 * /param index The index where a value will be replaced
 *
 * @code
 * UChar vec;
 * init_uchar_vector(&vec, 5);
 * unsigned char a[5] = {'a', 'b', 'c', 'd'};
 * insert_uchar_vector(&vec, a, 5, 0);
 * replace_uchar_vector_index(&vec, 'q', 2);
 * PRINT(vec);
 * // >> [ a, b, q, d ]
 * free_uchar_vector(&vec);
 * @endcode
 */
int replace_uchar_vector_index(UChar *vec, unsigned char new_value, size_t index);
// ==========================================================================================
// ==========================================================================================
// REPEAT_TYPE_VECTOR FUNCTIONS

/**
 * This function will repeat a user defined value in a vector or array
 * data structure a user defined number of times.
 *
 * /param vec A vector or array data structure of type Short
 * /param value a value of type short int that be repeated
 * /param num The number of times a value is to be repeated
 *
 * @code
 * Short vec;
 * init_short_vector(&vec, 10);
 * repeat_short_vector(&vec, 10, 4);
 * PRINT(vec);
 * [ 10, 10, 10, 10, 10 ]
 * free_short_vector(&vec);
 * @endcode
 */
int repeat_short_vector(Short *vec, short int value, size_t num);
// --------------------------------------------------------------------------------

/**
 * This function will repeat a user defined value in a vector or array
 * data structure a user defined number of times.
 *
 * /param vec A vector or array data structure of type UShort
 * /param value a value of type unsigned short int that be repeated
 * /param num The number of times a value is to be repeated
 *
 * @code
 * UShort vec;
 * init_ushort_vector(&vec, 10);
 * repeat_ushort_vector(&vec, 10, 4);
 * PRINT(vec);
 * [ 10, 10, 10, 10, 10 ]
 * free_ushort_vector(&vec);
 * @endcode
 */
int repeat_ushort_vector(UShort *vec, unsigned short int value, size_t num);
// --------------------------------------------------------------------------------

/**
 * This function will repeat a user defined value in a vector or array
 * data structure a user defined number of times.
 *
 * /param vec A vector or array data structure of type Int
 * /param value a value of type int that be repeated
 * /param num The number of times a value is to be repeated
 *
 * @code
 * Int vec;
 * init_int_vector(&vec, 10);
 * repeat_int_vector(&vec, 10, 4);
 * PRINT(vec);
 * [ 10, 10, 10, 10, 10 ]
 * free_int_vector(&vec);
 * @endcode
 */
int repeat_int_vector(Int *vec, int value, size_t num);
// --------------------------------------------------------------------------------

/**
 * This function will repeat a user defined value in a vector or array
 * data structure a user defined number of times.
 *
 * /param vec A vector or array data structure of type UInt
 * /param value a value of type unsigned int that be repeated
 * /param num The number of times a value is to be repeated
 *
 * @code
 * UInt vec;
 * init_uint_vector(&vec, 10);
 * repeat_uint_vector(&vec, 10, 4);
 * PRINT(vec);
 * [ 10, 10, 10, 10, 10 ]
 * free_uint_vector(&vec);
 * @endcode
 */
int repeat_uint_vector(UInt *vec, unsigned int value, size_t num);
// --------------------------------------------------------------------------------

/**
 * This function will repeat a user defined value in a vector or array
 * data structure a user defined number of times.
 *
 * /param vec A vector or array data structure of type LInt
 * /param value a value of type long int that be repeated
 * /param num The number of times a value is to be repeated
 *
 * @code
 * LInt vec;
 * init_long_vector(&vec, 10);
 * repeat_long_vector(&vec, 10, 4);
 * PRINT(vec);
 * [ 10, 10, 10, 10, 10 ]
 * free_long_vector(&vec);
 * @endcode
 */
int repeat_long_vector(LInt *vec, long int value, size_t num);
// --------------------------------------------------------------------------------

/**
 * This function will repeat a user defined value in a vector or array
 * data structure a user defined number of times.
 *
 * /param vec A vector or array data structure of type ULInt
 * /param value a value of type unsigned long int that be repeated
 * /param num The number of times a value is to be repeated
 *
 * @code
 * ULInt vec;
 * init_ulong_vector(&vec, 10);
 * repeat_ulong_vector(&vec, 10, 4);
 * PRINT(vec);
 * [ 10, 10, 10, 10, 10 ]
 * free_ulong_vector(&vec);
 * @endcode
 */
int repeat_ulong_vector(ULInt *vec, unsigned long int value, size_t num);
// --------------------------------------------------------------------------------

/**
 * This function will repeat a user defined value in a vector or array
 * data structure a user defined number of times.
 *
 * /param vec A vector or array data structure of type LLInt
 * /param value a value of type long long int that be repeated
 * /param num The number of times a value is to be repeated
 *
 * @code
 * LLInt vec;
 * init_llong_vector(&vec, 10);
 * repeat_llong_vector(&vec, 10, 4);
 * PRINT(vec);
 * [ 10, 10, 10, 10, 10 ]
 * free_llong_vector(&vec);
 * @endcode
 */
int repeat_llong_vector(LLInt *vec, long long int value, size_t num);
// --------------------------------------------------------------------------------

/**
 * This function will repeat a user defined value in a vector or array
 * data structure a user defined number of times.
 *
 * /param vec A vector or array data structure of type ULLInt
 * /param value a value of type unsigned long long int that be repeated
 * /param num The number of times a value is to be repeated
 *
 * @code
 * ULLInt vec;
 * init_ullong_vector(&vec, 10);
 * repeat_ullong_vector(&vec, 10, 4);
 * PRINT(vec);
 * [ 10, 10, 10, 10, 10 ]
 * free_ullong_vector(&vec);
 * @endcode
 */
int repeat_ullong_vector(ULLInt *vec, unsigned long long int value, size_t num);
// --------------------------------------------------------------------------------

/**
 * This function will repeat a user defined value in a vector or array
 * data structure a user defined number of times.
 *
 * /param vec A vector or array data structure of type Flt
 * /param value a value of type float that be repeated
 * /param num The number of times a value is to be repeated
 *
 * @code
 * Flt vec;
 * init_float_vector(&vec, 10);
 * repeat_float_vector(&vec, 10.f, 4);
 * PRINT(vec);
 * [ 10.000, 10.000, 10.000, 10.000, 10.000 ]
 * free_float_vector(&vec);
 * @endcode
 */
int repeat_float_vector(Flt *vec, float value, size_t num);
// --------------------------------------------------------------------------------

/**
 * This function will repeat a user defined value in a vector or array
 * data structure a user defined number of times.
 *
 * /param vec A vector or array data structure of type Dble
 * /param value a value of type double that be repeated
 * /param num The number of times a value is to be repeated
 *
 * @code
 * Dble vec;
 * init_double_vector(&vec, 10);
 * repeat_double_vector(&vec, 10., 4);
 * PRINT(vec);
 * [ 10, 10, 10, 10, 10 ]
 * free_double_vector(&vec);
 * @endcode
 */
int repeat_double_vector(Dble *vec, double value, size_t num);
// --------------------------------------------------------------------------------

/**
 * This function will repeat a user defined value in a vector or array
 * data structure a user defined number of times.
 *
 * /param vec A vector or array data structure of type LDble
 * /param value a value of type long double that be repeated
 * /param num The number of times a value is to be repeated
 *
 * @code
 * LDble vec;
 * init_ldouble_vector(&vec, 10);
 * repeat_ldouble_vector(&vec, 10., 4);
 * PRINT(vec);
 * [ 10, 10, 10, 10, 10 ]
 * free_ldouble_vector(&vec);
 * @endcode
 */
int repeat_ldouble_vector(LDble *vec, long double value, size_t num);
// --------------------------------------------------------------------------------

/**
 * This function will repeat a user defined value in a vector or array
 * data structure a user defined number of times.
 *
 * /param vec A vector or array data structure of type Bool
 * /param value a value of type bool that be repeated
 * /param num The number of times a value is to be repeated
 *
 * @code
 * Bool vec;
 * init_bool_vector(&vec, 10);
 * repeat_bool_vector(&vec, true, 4);
 * PRINT(vec);
 * [ true, true, true, true, true ]
 * free_bool_vector(&vec);
 * @endcode
 */
int repeat_bool_vector(Bool *vec, bool value, size_t num);
// --------------------------------------------------------------------------------

/**
 * This function will repeat a user defined value in a vector or array
 * data structure a user defined number of times.
 *
 * /param vec A vector or array data structure of type String
 * /param value a value of type char* that be repeated
 * /param num The number of times a value is to be repeated
 *
 * @code
 * String vec;
 * init_string_vector(&vec, 10);
 * repeat_string_vector(&vec, "Hello", 4);
 * PRINT(vec);
 * [ Hello, Hello, Hello, Hello, Hello ]
 * free_string_vector(&vec);
 * @endcode
 */
int repeat_string_vector(String *vec, char* value, size_t num);
// --------------------------------------------------------------------------------

/**
 * This function will repeat a user defined value in a vector or array
 * data structure a user defined number of times.
 *
 * /param vec A vector or array data structure of type Char
 * /param value a value of type char that be repeated
 * /param num The number of times a value is to be repeated
 *
 * @code
 * Char vec;
 * init_char_vector(&vec, 10);
 * repeat_char_vector(&vec, 'h', 4);
 * PRINT(vec);
 * [ H, H, H, H, H ]
 * free_char_vector(&vec);
 * @endcode
 */
int repeat_char_vector(Char *vec, char value, size_t num);
// ------------------------------------------------------------------------------------------

/**
 * This function will repeat a user defined value in a vector or array
 * data structure a user defined number of times.
 *
 * /param vec A vector or array data structure of type UChar
 * /param value a value of type char that be repeated
 * /param num The number of times a value is to be repeated
 *
 * @code
 * UChar vec;
 * init_uchar_vector(&vec, 10);
 * repeat_uchar_vector(&vec, 'h', 4);
 * PRINT(vec);
 * [ H, H, H, H, H ]
 * free_uchar_vector(&vec);
 * @endcode
 */
int repeat_uchar_vector(UChar *vec, unsigned char value, size_t num);
// ==========================================================================================
// ==========================================================================================
#endif /* vector_H */
// eof
