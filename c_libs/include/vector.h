// ================================================================================
// ================================================================================
// - File:    vector.h
// - Purpose: Describe the file purpose here
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    March 31, 2023
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// Include modules here

#ifndef vector_H
#define vector_H

#include <stdio.h>
#include <stdbool.h>

#include "swap.h"

// --------------------------------------------------------------------------------
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
// ================================================================================

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
// ================================================================================
// ================================================================================
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
// ================================================================================
// String struct

typedef struct
{
	char **array;
	size_t active_length;
} String;
// ================================================================================
// ================================================================================
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
// --------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type UShort to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type UShort
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_ushort_vector(UShort *vec, size_t length);
// --------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type Int to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type Int
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_int_vector(Int *vec, size_t length);
// --------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type UInt to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type UInt
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_uint_vector(UInt *vec, size_t length);
// --------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type LInt to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type LInt
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_long_vector(LInt *vec, size_t length);
// --------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type ULInt to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type ULInt
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_ulong_vector(ULInt *vec, size_t length);
// --------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type LLInt to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type LLInt
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_llong_vector(LLInt *vec, size_t length);
// --------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type ULLInt to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type ULLInt
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_ullong_vector(ULLInt *vec, size_t length);
// --------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type Flt to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type Flt
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_float_vector(Flt *vec, size_t length);
// --------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type Dble to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type Dble
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_double_vector(Dble *vec, size_t length);
// --------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type LDble to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type LDble
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_ldouble_vector(LDble *vec, size_t length);
// --------------------------------------------------------------------------------

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
// --------------------------------------------------------------------------------

/*
 * This function initialize a vector struct of type Bool to containt a
 * dynamically allocated array of length.
 *
 * /param vec A Vector struct of type Bool
 * /param length The initial guess for the number of indices in the dynamically
 *               allocated array.
 */
int init_bool_vector(Bool *vec, size_t length);
// --------------------------------------------------------------------------------

/**
 * This function initializes a vector struct of type String to contain a dynamically
 * allocated array of strings.
 *
 * /param vec A Vector struct of type String
 */
int init_string_vector(String *vec);
// --------------------------------------------------------------------------------

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
#endif /* vector_H */
// ================================================================================
// ================================================================================
// eof
