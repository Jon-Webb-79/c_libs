// ==========================================================================================
// ==========================================================================================
// - File:    swap.h
// - Purpose: This file contains prototypes for functions that can swap
//            two variables of the same data type in memory
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    March 28, 2023
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ==========================================================================================
// ==========================================================================================
// Include modules here

#ifndef swap_H
#define swap_H

#include <stdio.h>
#include <stdint.h>

// SWAP_TYPE prototypes

/**
 * This function will swap two int8_t data types in memory
 *
 * /param a Variable 1 of type int8_t
 * /param b Variable 2 of type int8_t
 *
 * @code
 * int8_t a = 3;
 * int8_t b = 6;
 * PRINT("Pre Variable a: ", a);
 * PRINT("Pre Variable b: ", b);
 * swap_int8(&a, &b);
 * PRINT(Post Variable a: " a);
 * PRINT(Post Variable b: " b);
 * // >> Pre Variable a: 3
 * // >> Pre Variable b: 6
 * // >> Post Variable a: 6
 * // >> Post Variable b: 3
 * @endcode
 */
void swap_int8(int8_t *a, int8_t *b);
// --------------------------------------------------------------------------------

/**
 * This function will swap two uint8_t data types in memory
 *
 * /param a Variable 1 of type uint8_t
 * /param b Variable 2 of type uint8_t
 *
 * @code
 * uint8_t a = 3;
 * uint8_t b = 6;
 * PRINT("Pre Variable a: ", a);
 * PRINT("Pre Variable b: ", b);
 * swap_uint8(&a, &b);
 * PRINT(Post Variable a: " a);
 * PRINT(Post Variable b: " b);
 * // >> Pre Variable a: 3
 * // >> Pre Variable b: 6
 * // >> Post Variable a: 6
 * // >> Post Variable b: 3
 * @endcode
 */
void swap_uint8(uint8_t *a, uint8_t *b);
// --------------------------------------------------------------------------------

/**
 * This function will swap two int16_t data types in memory
 *
 * /param a Variable 1 of type int16_t
 * /param b Variable 2 of type int16_t
 *
 * @code
 * int16_t a = 3;
 * int16_t b = 6;
 * PRINT("Pre Variable a: ", a);
 * PRINT("Pre Variable b: ", b);
 * swap_int16(&a, &b);
 * PRINT(Post Variable a: " a);
 * PRINT(Post Variable b: " b);
 * // >> Pre Variable a: 3
 * // >> Pre Variable b: 6
 * // >> Post Variable a: 6
 * // >> Post Variable b: 3
 * @endcode
 */
void swap_int16(int16_t *a, int16_t *b);
// --------------------------------------------------------------------------------

/**
 * This function will swap two uint16_t data types in memory
 *
 * /param a Variable 1 of type uint16_t
 * /param b Variable 2 of type uint16_t
 *
 * @code
 * uint16_t a = 3;
 * uint16_t b = 6;
 * PRINT("Pre Variable a: ", a);
 * PRINT("Pre Variable b: ", b);
 * swap_uint16(&a, &b);
 * PRINT(Post Variable a: " a);
 * PRINT(Post Variable b: " b);
 * // >> Pre Variable a: 3
 * // >> Pre Variable b: 6
 * // >> Post Variable a: 6
 * // >> Post Variable b: 3
 * @endcode
 */
void swap_uint16(uint16_t *a, uint16_t *b);
// --------------------------------------------------------------------------------

/**
 * This function will swap two int32_t data types in memory
 *
 * /param a Variable 1 of type int32_t
 * /param b Variable 2 of type int32_t
 *
 * @code
 * int32_t a = 3;
 * int32_t b = 6;
 * PRINT("Pre Variable a: ", a);
 * PRINT("Pre Variable b: ", b);
 * swap_int32(&a, &b);
 * PRINT(Post Variable a: " a);
 * PRINT(Post Variable b: " b);
 * // >> Pre Variable a: 3
 * // >> Pre Variable b: 6
 * // >> Post Variable a: 6
 * // >> Post Variable b: 3
 * @endcode
 */
void swap_int32(int32_t *a, int32_t *b);
// --------------------------------------------------------------------------------

/**
 * This function will swap two uint32_t data types in memory
 *
 * /param a Variable 1 of type uint32_t
 * /param b Variable 2 of type uint32_t
 *
 * @code
 * uint32_t a = 3;
 * uint32_t b = 6;
 * PRINT("Pre Variable a: ", a);
 * PRINT("Pre Variable b: ", b);
 * swap_uint32(&a, &b);
 * PRINT(Post Variable a: " a);
 * PRINT(Post Variable b: " b);
 * // >> Pre Variable a: 3
 * // >> Pre Variable b: 6
 * // >> Post Variable a: 6
 * // >> Post Variable b: 3
 * @endcode
 */
void swap_uint32(uint32_t *a, uint32_t *b);
// --------------------------------------------------------------------------------

/**
 * This function will swap two int64_t data types in memory
 *
 * /param a Variable 1 of type int64_t
 * /param b Variable 2 of type int64_t
 *
 * @code
 * int64_t a = 3;
 * int64_t b = 6;
 * PRINT("Pre Variable a: ", a);
 * PRINT("Pre Variable b: ", b);
 * swap_int64(&a, &b);
 * PRINT(Post Variable a: " a);
 * PRINT(Post Variable b: " b);
 * // >> Pre Variable a: 3
 * // >> Pre Variable b: 6
 * // >> Post Variable a: 6
 * // >> Post Variable b: 3
 * @endcode
 */
void swap_int64(int64_t *a, int64_t *b);
// --------------------------------------------------------------------------------

/**
 * This function will swap two uint64_t data types in memory
 *
 * /param a Variable 1 of type uint64_t
 * /param b Variable 2 of type uint64_t
 *
 * @code
 * uint64_t a = 3;
 * uint64_t b = 6;
 * PRINT("Pre Variable a: ", a);
 * PRINT("Pre Variable b: ", b);
 * swap_uint64(&a, &b);
 * PRINT(Post Variable a: " a);
 * PRINT(Post Variable b: " b);
 * // >> Pre Variable a: 3
 * // >> Pre Variable b: 6
 * // >> Post Variable a: 6
 * // >> Post Variable b: 3
 * @endcode
 */
void swap_uint64(uint64_t *a, uint64_t *b);
// --------------------------------------------------------------------------------

/**
 * This function will swap two short int data types in memory
 *
 * /param a Variable 1 of type short int
 * /param b Variable 2 of type short int
 *
 * @code
 * short int a = 3;
 * short int b = 6;
 * PRINT("Pre Variable a: ", a);
 * PRINT("Pre Variable b: ", b);
 * swap_short(&a, &b);
 * PRINT(Post Variable a: " a);
 * PRINT(Post Variable b: " b);
 * // >> Pre Variable a: 3
 * // >> Pre Variable b: 6
 * // >> Post Variable a: 6
 * // >> Post Variable b: 3
 * @endcode
 */
void swap_short(short int *a, short int *b);
// --------------------------------------------------------------------------------

/**
 * This function will swap two unsigned short int data types in memory
 *
 * /param a Variable 1 of type unsigned short int
 * /param b Variable 2 of type unsigned short int
 *
 * @code
 * unsigned short int a = 3;
 * unsigned short int b = 6;
 * PRINT("Pre Variable a: ", a);
 * PRINT("Pre Variable b: ", b);
 * swap_ushort(&a, &b);
 * PRINT(Post Variable a: " a);
 * PRINT(Post Variable b: " b);
 * // >> Pre Variable a: 3
 * // >> Pre Variable b: 6
 * // >> Post Variable a: 6
 * // >> Post Variable b: 3
 * @endcode
 */
void swap_ushort(unsigned short int *a, unsigned short int *b);
// --------------------------------------------------------------------------------

/**
 * This function will swap two int data types in memory
 *
 * /param a Variable 1 of type int
 * /param b Variable 2 of type int
 *
 * @code
 * int a = 3;
 * int b = 6;
 * PRINT("Pre Variable a: ", a);
 * PRINT("Pre Variable b: ", b);
 * swap_int(&a, &b);
 * PRINT(Post Variable a: " a);
 * PRINT(Post Variable b: " b);
 * // >> Pre Variable a: 3
 * // >> Pre Variable b: 6
 * // >> Post Variable a: 6
 * // >> Post Variable b: 3
 * @endcode
 */
void swap_int(int *a, int *b);
// --------------------------------------------------------------------------------

/**
 * This function will swap two unsigned int data types in memory
 *
 * /param a Variable 1 of type unsigned int
 * /param b Variable 2 of type unsigned int
 *
 * @code
 * unsigned int a = 3;
 * unsigned int b = 6;
 * PRINT("Pre Variable a: ", a);
 * PRINT("Pre Variable b: ", b);
 * swap_uint(&a, &b);
 * PRINT(Post Variable a: " a);
 * PRINT(Post Variable b: " b);
 * // >> Pre Variable a: 3
 * // >> Pre Variable b: 6
 * // >> Post Variable a: 6
 * // >> Post Variable b: 3
 * @endcode
 */
void swap_uint(unsigned int *a, unsigned int *b);
// --------------------------------------------------------------------------------

/**
 * This function will swap two long int data types in memory
 *
 * /param a Variable 1 of type long int
 * /param b Variable 2 of type long int
 *
 * @code
 * long int a = 3;
 * long int b = 6;
 * PRINT("Pre Variable a: ", a);
 * PRINT("Pre Variable b: ", b);
 * swap_long(&a, &b);
 * PRINT(Post Variable a: " a);
 * PRINT(Post Variable b: " b);
 * // >> Pre Variable a: 3
 * // >> Pre Variable b: 6
 * // >> Post Variable a: 6
 * // >> Post Variable b: 3
 * @endcode
 */
void swap_long(long int *a, long int *b);
// --------------------------------------------------------------------------------

/**
 * This function will swap two usngined long int data types in memory
 *
 * /param a Variable 1 of type unsigned long int
 * /param b Variable 2 of type unsigned long int
 *
 * @code
 * unsigned long int a = 3;
 * unsigned long int b = 6;
 * PRINT("Pre Variable a: ", a);
 * PRINT("Pre Variable b: ", b);
 * swap_ulong(&a, &b);
 * PRINT(Post Variable a: " a);
 * PRINT(Post Variable b: " b);
 * // >> Pre Variable a: 3
 * // >> Pre Variable b: 6
 * // >> Post Variable a: 6
 * // >> Post Variable b: 3
 * @endcode
 */
void swap_ulong(unsigned long int *a, unsigned long int *b);
// --------------------------------------------------------------------------------

/**
 * This function will swap two long long int data types in memory
 *
 * /param a Variable 1 of type long long int
 * /param b Variable 2 of type long long int
 *
 * @code
 * long long int a = 3;
 * long long int b = 6;
 * PRINT("Pre Variable a: ", a);
 * PRINT("Pre Variable b: ", b);
 * swap_llong(&a, &b);
 * PRINT(Post Variable a: " a);
 * PRINT(Post Variable b: " b);
 * // >> Pre Variable a: 3
 * // >> Pre Variable b: 6
 * // >> Post Variable a: 6
 * // >> Post Variable b: 3
 * @endcode
 */
void swap_llong(long long int *a, long long int *b);
// --------------------------------------------------------------------------------

/**
 * This function will swap two unsigned long long int data types in memory
 *
 * /param a Variable 1 of type unsigned long long int
 * /param b Variable 2 of type unsigned long long int
 *
 * @code
 * unsigned long long int a = 3;
 * unsigned long long int b = 6;
 * PRINT("Pre Variable a: ", a);
 * PRINT("Pre Variable b: ", b);
 * swap_ullong(&a, &b);
 * PRINT(Post Variable a: " a);
 * PRINT(Post Variable b: " b);
 * // >> Pre Variable a: 3
 * // >> Pre Variable b: 6
 * // >> Post Variable a: 6
 * // >> Post Variable b: 3
 * @endcode
 */
void swap_ullong(unsigned long long int *a, unsigned long long int *b);
// --------------------------------------------------------------------------------

/**
 * This function will swap two float data types in memory
 *
 * /param a Variable 1 of type float
 * /param b Variable 2 of type float
 *
 * @code
 * float a = 3;
 * float b = 6;
 * PRINT("Pre Variable a: ", a);
 * PRINT("Pre Variable b: ", b);
 * swap_float(&a, &b);
 * PRINT(Post Variable a: " a);
 * PRINT(Post Variable b: " b);
 * // >> Pre Variable a: 3
 * // >> Pre Variable b: 6
 * // >> Post Variable a: 6
 * // >> Post Variable b: 3
 * @endcode
 */
void swap_float(float *a, float *b);
// --------------------------------------------------------------------------------

/**
 * This function will swap two double data types in memory
 *
 * /param a Variable 1 of type double
 * /param b Variable 2 of type double
 *
 * @code
 * double a = 3;
 * double b = 6;
 * PRINT("Pre Variable a: ", a);
 * PRINT("Pre Variable b: ", b);
 * swap_double(&a, &b);
 * PRINT(Post Variable a: " a);
 * PRINT(Post Variable b: " b);
 * // >> Pre Variable a: 3
 * // >> Pre Variable b: 6
 * // >> Post Variable a: 6
 * // >> Post Variable b: 3
 * @endcode
 */
void swap_double(double *a, double *b);
// --------------------------------------------------------------------------------

/**
 * This function will swap two long double data types in memory
 *
 * /param a Variable 1 of type long double
 * /param b Variable 2 of type long double
 *
 * @code
 * long double a = 3;
 * long double b = 6;
 * PRINT("Pre Variable a: ", a);
 * PRINT("Pre Variable b: ", b);
 * swap_ldouble(&a, &b);
 * PRINT(Post Variable a: " a);
 * PRINT(Post Variable b: " b);
 * // >> Pre Variable a: 3
 * // >> Pre Variable b: 6
 * // >> Post Variable a: 6
 * // >> Post Variable b: 3
 * @endcode
 */
void swap_ldouble(long double *a, long double *b);
// --------------------------------------------------------------------------------

/**
 * This function will swap two char data types in memory
 *
 * /param a Variable 1 of type char
 * /param b Variable 2 of type char
 *
 * @code
 * char a = 3;
 * char b = 6;
 * PRINT("Pre Variable a: ", a);
 * PRINT("Pre Variable b: ", b);
 * swap_char(&a, &b);
 * PRINT(Post Variable a: " a);
 * PRINT(Post Variable b: " b);
 * // >> Pre Variable a: 3
 * // >> Pre Variable b: 6
 * // >> Post Variable a: 6
 * // >> Post Variable b: 3
 * @endcode
 */
void swap_char(char *a, char *b);
// --------------------------------------------------------------------------------

/**
 * This function will swap two char data types in memory
 *
 * /param a Variable 1 of type bool
 * /param b Variable 2 of type bool
 *
 * @code
 * bool a = true;
 * bool b = false;
 * PRINT("Pre Variable a: ", a);
 * PRINT("Pre Variable b: ", b);
 * swap_char(&a, &b);
 * PRINT(Post Variable a: " a);
 * PRINT(Post Variable b: " b);
 * // >> Pre Variable a: true
 * // >> Pre Variable b: false
 * // >> Post Variable a: false
 * // >> Post Variable b: true
 * @endcode
 */
void swap_bool(bool *a, bool *b);
// --------------------------------------------------------------------------------
// SWAP GENERIC OPERATOR

/**
 * This macro will swap two variables of the same type in memory
 *
 * /param a Variable 1
 * /param b Variable 2
 *
 * @code
 * int a = 3;
 * int b = 6;
 * PRINT("Pre Variable a: ", a);
 * PRINT("Pre Variable b: ", b);
 * SWAP(a, b);
 * PRINT(Post Variable a: " a);
 * PRINT(Post Variable b: " b);
 * // >> Pre Variable a: 3
 * // >> Pre Variable b: 6
 * // >> Post Variable a: 6
 * // >> Post Variable b: 3
 * @endcode
 */
#define SWAP(a, b) _Generic( (a), short int: swap_short, \
                                  unsigned short int: swap_ushort, \
								  int: swap_int, \
		                          unsigned int: swap_uint, \
								  long int: swap_long, \
								  unsigned long int: swap_ulong, \
								  long long int: swap_llong, \
								  unsigned long long int: swap_ullong, \
								  float: swap_float, \
								  double: swap_double, \
								  long double: swap_ldouble, \
								  char: swap_char, \
								  bool: swap_bool)(&a, &b)
// ==========================================================================================
// ==========================================================================================
#endif /* swap_H */
// ==========================================================================================
// ==========================================================================================
// eof
