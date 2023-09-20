// ================================================================================
// ================================================================================
// - File:    llist.h
// - Purpose: Describe the file purpose here
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    September 18, 2023
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// Include modules here

#ifndef llist_H
#define llist_H

#include <stdio.h>  // Needed for size_t definition
#include <stdlib.h> // Needed for malloc
#include <stdbool.h>  // Needed for booleans
#include <string.h> // Needed for strcmp

#include "swap.h"
#include "vector.h"


// ================================================================================
/**
 * This macro will produce a struct that is specifically designed to store
 * data and the memory location of previous end future structs.  This macro
 * has an attribute to a pointer for the array data, the next similar struct
 * and the previous struct
 *
 * /param type The data type that will be assigned to the array pointer
 * /param dtype The name to be given to the typedef for the struct
 */
#define LIST_STRUCT(type, dtype)													\
	typedef struct dtype {type data; struct dtype *next; struct dtype *previous; } dtype;
// ================================================================================
// ================================================================================

/**
 * This macro will produce a struct that tracks data associated with a linked list
 * of a specific data type
 *
 * /param type The data type that will be assigned to the struct
 * /param dtype The data type assigned to the tracked linked list
 */
#define LIST_DAT_STRUCT(type, dtype)												\
	typedef struct { size_t active_length; struct dtype *head; struct dtype *tail;  \
		bool init_status; } type;
// ================================================================================
// ================================================================================
// Pre-defined struct vectors

LIST_STRUCT(short int, short_list)
LIST_STRUCT(unsigned short int, ushort_list)
LIST_STRUCT(int, int_list)
LIST_STRUCT(unsigned int, uint_list)
LIST_STRUCT(long int, long_list)
LIST_STRUCT(unsigned long int, ulong_list)
LIST_STRUCT(long long int, llong_list)
LIST_STRUCT(unsigned long long int, ullong_list)
LIST_STRUCT(float, float_list)
LIST_STRUCT(double, double_list)
LIST_STRUCT(long double, ldouble_list)
LIST_STRUCT(char, char_list)
LIST_STRUCT(unsigned char, uchar_list)
LIST_STRUCT(bool, bool_list)
LIST_STRUCT(char*, string_list)
// --------------------------------------------------------------------------------

LIST_DAT_STRUCT(ShortLL, short_list)
LIST_DAT_STRUCT(UShortLL, ushort_list)
LIST_DAT_STRUCT(IntLL, int_list)
LIST_DAT_STRUCT(UIntLL, uint_list)
LIST_DAT_STRUCT(LIntLL, long_list)
LIST_DAT_STRUCT(ULIntLL, ulong_list)
LIST_DAT_STRUCT(LLIntLL, llong_list)
LIST_DAT_STRUCT(ULLIntLL, ullong_list)
LIST_DAT_STRUCT(FltLL, float_list)
LIST_DAT_STRUCT(DbleLL, double_list)
LIST_DAT_STRUCT(LDbleLL, ldouble_list)
LIST_DAT_STRUCT(CharLL, char_list)
LIST_DAT_STRUCT(UCharLL, uchar_list)
LIST_DAT_STRUCT(BoolLL, bool_list)
LIST_DAT_STRUCT(StringLL, string_list)
// ================================================================================
// ================================================================================
// INIT_LIST FUNCTIONS

/**
 * This function initializes a linked list struct of type ShortLL
 *
 * /param vec A List struct of type ShortLL
 */
void init_short_list(ShortLL *vec);
// --------------------------------------------------------------------------------

/**
 * This function initializes a linked list struct of type UShortLL
 *
 * /param vec A List struct of type UShortLL
 */
void init_ushort_list(UShortLL *vec);
// --------------------------------------------------------------------------------

/**
 * This function initializes a linked list struct of type IntLL
 *
 * /param vec A List struct of type IntLL
 */
void init_int_list(IntLL *vec);
// --------------------------------------------------------------------------------

/**
 * This function initializes a linked list struct of type UIntLL
 *
 * /param vec A List struct of type UIntLL
 */
void init_uint_list(UIntLL *vec);
// --------------------------------------------------------------------------------

/**
 * This function initializes a linked list struct of type LIntLL
 *
 * /param vec A List struct of type LIntLL
 */
void init_long_list(LIntLL *vec);
// --------------------------------------------------------------------------------

/**
 * This function initializes a linked list struct of type ULIntLL
 *
 * /param vec A List struct of type ULIntLL
 */
void init_ulong_list(ULIntLL *vec);
// --------------------------------------------------------------------------------

/**
 * This function initializes a linked list struct of type LLIntLL
 *
 * /param vec A List struct of type LLIntLL
 */
void init_llong_list(LLIntLL *vec);
// --------------------------------------------------------------------------------

/**
 * This function initializes a linked list struct of type ULLIntLL
 *
 * /param vec A List struct of type ULLIntLL
 */
void init_ullong_list(ULLIntLL *vec);
// --------------------------------------------------------------------------------

/**
 * This function initializes a linked list struct of type FlttLL
 *
 * /param vec A List struct of type FltLL
 */
void init_float_list(FltLL *vec);
// --------------------------------------------------------------------------------

/**
 * This function initializes a linked list struct of type DbleLL
 *
 * /param vec A List struct of type DbleLL
 */
void init_double_list(DbleLL *vec);
// --------------------------------------------------------------------------------

/**
 * This function initializes a linked list struct of type LDbleLL
 *
 * /param vec A List struct of type LDbleLL
 */
void init_ldouble_list(LDbleLL *vec);
// --------------------------------------------------------------------------------

/**
 * This function initializes a linked list struct of type CharLL
 *
 * /param vec A List struct of type CharLL
 */
void init_char_list(CharLL *vec);
// --------------------------------------------------------------------------------

/**
 * This function initializes a linked list struct of type UCharLL
 *
 * /param vec A List struct of type UCharLL
 */
void init_uchar_list(UCharLL *vec);
// --------------------------------------------------------------------------------

/**
 * This function initializes a linked list struct of type BoolLL
 *
 * /param vec A List struct of type BoolLL
 */
void init_bool_list(BoolLL *vec);
// --------------------------------------------------------------------------------

/**
 * This function initializes a linked list struct of type StringLL
 *
 * /param vec A List struct of type StringLL
 */
void init_string_list(StringLL *vec);
// ================================================================================
// ================================================================================

// Controlling expression to define function type for INIT_VECTOR macro
#define IS_INIT_LIST_TYPE(T) _Generic( (T), ShortLL: init_short_list, \
										    UShortLL: init_ushort_list, \
										    IntLL: init_int_list, \
										    UIntLL: init_uint_list, \
										    LIntLL: init_long_list, \
										    ULIntLL: init_ulong_list, \
										    LLIntLL: init_llong_list, \
										    ULLIntLL: init_ullong_list, \
										    FltLL: init_float_list, \
										    DbleLL: init_double_list, \
										    LDbleLL: init_ldouble_list, \
										    CharLL: init_char_list, \
											UCharLL: init_uchar_list, \
											BoolLL: init_bool_list, \
										    StringLL: init_string_list)(&T)
// --------------------------------------------------------------------------------
// INIT_VECTOR MACRO

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
 * IntLL list;
 * INIT_VECTOR(list)
 * @endcode
 */
#define INIT_LIST(list) IS_INIT_LIST_TYPE((list))
// ================================================================================
// ================================================================================
// FREE_TYPE_LIST

/**
 * This function will free all memory from a linked list of type ShortLL
 *
 * /param list A struct of type ShortLL
 */
void free_short_list(ShortLL *list);
// --------------------------------------------------------------------------------

/**
 * This function will free all memory from a linked list of type UShortLL
 *
 * /param list A struct of type UShortLL
 */
void free_ushort_list(UShortLL *list);
// --------------------------------------------------------------------------------

/**
 * This function will free all memory from a linked list of type IntLL
 *
 * /param list A struct of type IntLL
 */
void free_int_list(IntLL *list);
// --------------------------------------------------------------------------------

/**
 * This function will free all memory from a linked list of type UIntLL
 *
 * /param list A struct of type UIntLL
 */
void free_uint_list(UIntLL *list);
// --------------------------------------------------------------------------------

/**
 * This function will free all memory from a linked list of type LIntLL
 *
 * /param list A struct of type LIntLL
 */
void free_long_list(LIntLL *list);
// --------------------------------------------------------------------------------

/**
 * This function will free all memory from a linked list of type ULIntLL
 *
 * /param list A struct of type ULIntLL
 */
void free_ulong_list(ULIntLL *list);
// --------------------------------------------------------------------------------

/**
 * This function will free all memory from a linked list of type LLIntLL
 *
 * /param list A struct of type LLIntLL
 */
void free_llong_list(LLIntLL *list);
// --------------------------------------------------------------------------------

/**
 * This function will free all memory from a linked list of type ULLIntLL
 *
 * /param list A struct of type ULLIntLL
 */
void free_ullong_list(ULLIntLL *list);
// --------------------------------------------------------------------------------

/**
 * This function will free all memory from a linked list of type FltLL
 *
 * /param vec A struct of type FltLL
 */
void free_float_list(FltLL *list);
// --------------------------------------------------------------------------------

/**
 * This function will free all memory from a linked list of type DbleLL
 *
 * /param list A struct of type DbleLL
 */
void free_double_list(DbleLL *list);
// --------------------------------------------------------------------------------

/**
 * This function will free all memory from a linked list of type LDbleLL
 *
 * /param list A struct of type LDbleLL
 */
void free_ldouble_list(LDbleLL *list);
// --------------------------------------------------------------------------------

/**
 * This function will free all memory from a linked list of type CharLL
 *
 * /param list A struct of type CharLL
 */
void free_char_list(CharLL *list);
// --------------------------------------------------------------------------------

/**
 * This function will free all memory from a linked list of type UCharLL
 *
 * /param list A struct of type UCharLL
 */
void free_uchar_list(UCharLL *list);
// --------------------------------------------------------------------------------

/**
 * This function will free all memory from a linked list of type BoolLL
 *
 * /param list A struct of type BoolLL
 */
void free_bool_list(BoolLL *list);
// --------------------------------------------------------------------------------

/**
 * This function will free all memory from a linked list of type StringLL
 *
 * /param list A struct of type StringLL
 */
void free_string_list(StringLL *list);
// ================================================================================
// ================================================================================
// PUSH_TYPE_LIST FUNCTIONS


/**
 * This function will insert a struct containing user specified data to a
 * user define index within a linked list
 *
 * /param vec A struct of type ShortLL
 * /param data A scalar data point of type short int
 * /param index The index where the struct will be inserted in the linked list
 *
 * @code
 * #include "print.h"
 *
 * ShortLL vec;
 * init_short_list(&vec);
 * push_short_list(&vec, 0, 0);
 * push_short_list(&vec, 1, 1);
 * push_short_list(&vec, 2, 2);
 * push_short_list(&vec, 3, 0);
 * PRINT(vec);
 * [ 3, 0, 1, 2 ]
 * free_short_list(&vec);
 * @endcode
 */
int push_short_list(ShortLL *vec, short int data, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert a struct containing user specified data to a
 * user define index within a linked list
 *
 * /param vec A struct of type UShortLL
 * /param data A scalar data point of type unsigned short int
 * /param index The index where the struct will be inserted in the linked list
 *
 * @code
 * #include "print.h"
 *
 * UShortLL vec;
 * init_ushort_list(&vec);
 * push_ushort_list(&vec, 0, 0);
 * push_ushort_list(&vec, 1, 1);
 * push_ushort_list(&vec, 2, 2);
 * push_ushort_list(&vec, 3, 0);
 * PRINT(vec);
 * [ 3, 0, 1, 2 ]
 * free_ushort_list(&vec);
 * @endcode
 */
int push_ushort_list(UShortLL *vec, unsigned short int data, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert a struct containing user specified data to a
 * user define index within a linked list
 *
 * /param vec A struct of type IntLL
 * /param data A scalar data point of type int
 * /param index The index where the struct will be inserted in the linked list
 *
 * @code
 * #include "print.h"
 *
 * IntLL vec;
 * init_int_list(&vec);
 * push_int_list(&vec, 0, 0);
 * push_int_list(&vec, 1, 1);
 * push_int_list(&vec, 2, 2);
 * push_int_list(&vec, 3, 0);
 * PRINT(vec);
 * [ 3, 0, 1, 2 ]
 * free_int_list(&vec);
 * @endcode
 */
int push_int_list(IntLL *vec, int data, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert a struct containing user specified data to a
 * user define index within a linked list
 *
 * /param vec A struct of type UIntLL
 * /param data A scalar data point of type unsigned int
 * /param index The index where the struct will be inserted in the linked list
 *
 * @code
 * #include "print.h"
 *
 * UIntLL vec;
 * init_uint_list(&vec);
 * push_uint_list(&vec, 0, 0);
 * push_uint_list(&vec, 1, 1);
 * push_uint_list(&vec, 2, 2);
 * push_uint_list(&vec, 3, 0);
 * PRINT(vec);
 * [ 3, 0, 1, 2 ]
 * free_uint_list(&vec);
 * @endcode
 */
int push_uint_list(UIntLL *vec, unsigned int data, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert a struct containing user specified data to a
 * user define index within a linked list
 *
 * /param vec A struct of type LIntLL
 * /param data A scalar data point of type long int
 * /param index The index where the struct will be inserted in the linked list
 *
 * @code
 * #include "print.h"
 *
 * LIntLL vec;
 * init_long_list(&vec);
 * push_long_list(&vec, 0, 0);
 * push_long_list(&vec, 1, 1);
 * push_long_list(&vec, 2, 2);
 * push_long_list(&vec, 3, 0);
 * PRINT(vec);
 * [ 3, 0, 1, 2 ]
 * free_lint_list(&vec);
 * @endcode
 */
int push_long_list(LIntLL *vec, long int data, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert a struct containing user specified data to a
 * user define index within a linked list
 *
 * /param vec A struct of type ULIntLL
 * /param data A scalar data point of type unsigned long int
 * /param index The index where the struct will be inserted in the linked list
 *
 * @code
 * #include "print.h"
 *
 * ULIntLL vec;
 * init_ulong_list(&vec);
 * push_ulong_list(&vec, 0, 0);
 * push_ulong_list(&vec, 1, 1);
 * push_ulong_list(&vec, 2, 2);
 * push_ulong_list(&vec, 3, 0);
 * PRINT(vec);
 * [ 3, 0, 1, 2 ]
 * free_ulint_list(&vec);
 * @endcode
 */
int push_ulong_list(ULIntLL *vec, unsigned long int data, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert a struct containing user specified data to a
 * user define index within a linked list
 *
 * /param vec A struct of type LLIntLL
 * /param data A scalar data point of type long long int
 * /param index The index where the struct will be inserted in the linked list
 *
 * @code
 * #include "print.h"
 *
 * LLIntLL vec;
 * init_llong_list(&vec);
 * push_llong_list(&vec, 0, 0);
 * push_llong_list(&vec, 1, 1);
 * push_llong_list(&vec, 2, 2);
 * push_llong_list(&vec, 3, 0);
 * PRINT(vec);
 * [ 3, 0, 1, 2 ]
 * free_llint_list(&vec);
 * @endcode
 */
int push_llong_list(LLIntLL *vec, long long int data, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert a struct containing user specified data to a
 * user define index within a linked list
 *
 * /param vec A struct of type ULLIntLL
 * /param data A scalar data point of type unsigned long long int
 * /param index The index where the struct will be inserted in the linked list
 *
 * @code
 * #include "print.h"
 *
 * ULLIntLL vec;
 * init_ullong_list(&vec);
 * push_ullong_list(&vec, 0, 0);
 * push_ullong_list(&vec, 1, 1);
 * push_ullong_list(&vec, 2, 2);
 * push_ullong_list(&vec, 3, 0);
 * PRINT(vec);
 * [ 3, 0, 1, 2 ]
 * free_ullint_list(&vec);
 * @endcode
 */
int push_ullong_list(ULLIntLL *vec, unsigned long long int data, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert a struct containing user specified data to a
 * user define index within a linked list
 *
 * /param vec A struct of type FltLL
 * /param data A scalar data point of type float
 * /param index The index where the struct will be inserted in the linked list
 *
 * @code
 * #include "print.h"
 *
 * FltLL vec;
 * init_float_list(&vec);
 * push_float_list(&vec, 0., 0);
 * push_float_list(&vec, 1., 1);
 * push_float_list(&vec, 2., 2);
 * push_float_list(&vec, 3., 0);
 * PRINT(vec);
 * [ 3.000, 0.000, 1.000, 2.000 ]
 * free_float_list(&vec);
 * @endcode
 */
int push_float_list(FltLL *vec, float data, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert a struct containing user specified data to a
 * user define index within a linked list
 *
 * /param vec A struct of type DbleLL
 * /param data A scalar data point of type double
 * /param index The index where the struct will be inserted in the linked list
 *
 * @code
 * #include "print.h"
 *
 * DbleLL vec;
 * init_double_list(&vec);
 * push_double_list(&vec, 0., 0);
 * push_double_list(&vec, 1., 1);
 * push_double_list(&vec, 2., 2);
 * push_double_list(&vec, 3., 0);
 * PRINT(vec);
 * [ 3.000, 0.000, 1.000, 2.000 ]
 * free_double_list(&vec);
 * @endcode
 */
int push_double_list(DbleLL *vec, double data, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert a struct containing user specified data to a
 * user define index within a linked list
 *
 * /param vec A struct of type LDbleLL
 * /param data A scalar data point of type long double
 * /param index The index where the struct will be inserted in the linked list
 *
 * @code
 * #include "print.h"
 *
 * LDbleLL vec;
 * init_ldouble_list(&vec);
 * push_ldouble_list(&vec, 0., 0);
 * push_ldouble_list(&vec, 1., 1);
 * push_ldouble_list(&vec, 2., 2);
 * push_ldouble_list(&vec, 3., 0);
 * PRINT(vec);
 * [ 3.000, 0.000, 1.000, 2.000 ]
 * free_ldouble_list(&vec);
 * @endcode
 */
int push_ldouble_list(LDbleLL *vec, long double data, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert a struct containing user specified data to a
 * user define index within a linked list
 *
 * /param vec A struct of type CharLL
 * /param data A scalar data point of type char
 * /param index The index where the struct will be inserted in the linked list
 *
 * @code
 * #include "print.h"
 *
 * CharLL vec;
 * init_char_list(&vec);
 * push_char_list(&vec, 'a', 0);
 * push_char_list(&vec, 'b', 1);
 * push_char_list(&vec, 'c', 2);
 * push_char_list(&vec, 'd', 3);
 * PRINT(vec);
 * [ 3.000, 0.000, 1.000, 2.000 ]
 * free_char_list(&vec);
 * @endcode
 */
int push_char_list(CharLL *vec, char data, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert a struct containing user specified data to a
 * user define index within a linked list
 *
 * /param vec A struct of type CharLL
 * /param data A scalar data point of type char
 * /param index The index where the struct will be inserted in the linked list
 *
 * @code
 * #include "print.h"
 *
 * UCharLL vec;
 * init_uchar_list(&vec);
 * push_uchar_list(&vec, 'a', 0);
 * push_uchar_list(&vec, 'b', 1);
 * push_uchar_list(&vec, 'c', 2);
 * push_uchar_list(&vec, 'd', 3);
 * PRINT(vec);
 * [ 3.000, 0.000, 1.000, 2.000 ]
 * free_uchar_list(&vec);
 * @endcode
 */
int push_char_list(CharLL *vec, char data, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert a struct containing user specified data to a
 * user define index within a linked list
 *
 * /param vec A struct of type BoolLL
 * /param data A scalar data point of type bool
 * /param index The index where the struct will be inserted in the linked list
 *
 * @code
 * #include "print.h"
 *
 * BoolLL vec;
 * init_bool_list(&vec);
 * push_bool_list(&vec, true, 0);
 * push_bool_list(&vec, true, 1);
 * push_bool_list(&vec, false, 2);
 * push_bool_list(&vec, false, 0);
 * PRINT(vec);
 * [ false, true, true, false ]
 * free_bool_list(&vec);
 * @endcode
 */
int push_bool_list(BoolLL *vec, bool data, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert a struct containing user specified data to a
 * user define index within a linked list
 *
 * /param vec A struct of type StringLL
 * /param data A scalar data point of type char*
 * /param index The index where the struct will be inserted in the linked list
 *
 * @code
 * #include "print.h"
 *
 * StringLL vec;
 * init_string_list(&vec);
 * push_string_list(&vec, "One", 0);
 * push_string_list(&vec, "Two", 1);
 * push_string_list(&vec, "Three", 2);
 * push_string_list(&vec, "Four", 0);
 * PRINT(vec);
 * [ Four, One, Two, Three ]
 * free_string_list(&vec);
 * @endcode
 */
int push_string_list(StringLL *vec, char* data, size_t index);
// ================================================================================
// ================================================================================


/**
 * This function will insert an array of data into a linked list
 *
 * /param vec A struct of type ShortLL
 * /param array An array of type short int
 * /param length The number of indeices in array
 * /param index The index where the array of data will be inserted into the
 *              linked list
 *
 * @code
 * ShortLL vec;
 * init_short_list(&vec);
 * push_short_list(&vec, 0, 0);
 * push_short_list(&vec, 1, 1);
 * push_short_list(&vec, 2, 2);
 * short int a[4] = {10, 9, 8, 7};
 * insert_short_list(&vec, a, 4, 1);
 * PRINT(vec);
 * [ 0, 10, 9, 8, 7, 1, 2 ]
 * free_short_list(&vec);
 * @endcode
 */
int insert_short_list(ShortLL *vec, short int *array, size_t length, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert an array of data into a linked list
 *
 * /param vec A struct of type UShortLL
 * /param array An array of type unsigned short int
 * /param length The number of indeices in array
 * /param index The index where the array of data will be inserted into the
 *              linked list
 *
 * @code
 * UShortLL vec;
 * init_ushort_list(&vec);
 * push_ushort_list(&vec, 0, 0);
 * push_ushort_list(&vec, 1, 1);
 * push_ushort_list(&vec, 2, 2);
 * unsigned short int a[4] = {10, 9, 8, 7};
 * insert_ushort_list(&vec, a, 4, 1);
 * PRINT(vec);
 * [ 0, 10, 9, 8, 7, 1, 2 ]
 * free_ushort_list(&vec);
 * @endcode
 */
int insert_ushort_list(UShortLL *vec, unsigned short int *array, size_t length, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert an array of data into a linked list
 *
 * /param vec A struct of type IntLL
 * /param array An array of type int
 * /param length The number of indeices in array
 * /param index The index where the array of data will be inserted into the
 *              linked list
 *
 * @code
 * IntLL vec;
 * init_int_list(&vec);
 * push_int_list(&vec, 0, 0);
 * push_int_list(&vec, 1, 1);
 * push_int_list(&vec, 2, 2);
 * int a[4] = {10, 9, 8, 7};
 * insert_int_list(&vec, a, 4, 1);
 * PRINT(vec);
 * [ 0, 10, 9, 8, 7, 1, 2 ]
 * free_int_list(&vec);
 * @endcode
 */
int insert_int_list(IntLL *vec, int *array, size_t length, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert an array of data into a linked list
 *
 * /param vec A struct of type UIntLL
 * /param array An array of type unsigned int
 * /param length The number of indeices in array
 * /param index The index where the array of data will be inserted into the
 *              linked list
 *
 * @code
 * UIntLL vec;
 * init_uint_list(&vec);
 * push_uint_list(&vec, 0, 0);
 * push_uint_list(&vec, 1, 1);
 * push_uint_list(&vec, 2, 2);
 * unsigned int a[4] = {10, 9, 8, 7};
 * insert_uint_list(&vec, a, 4, 1);
 * PRINT(vec);
 * [ 0, 10, 9, 8, 7, 1, 2 ]
 * free_uint_list(&vec);
 * @endcode
 */
int insert_uint_list(UIntLL *vec, unsigned int *array, size_t length, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert an array of data into a linked list
 *
 * /param vec A struct of type LIntLL
 * /param array An array of type long int
 * /param length The number of indeices in array
 * /param index The index where the array of data will be inserted into the
 *              linked list
 *
 * @code
 * LIntLL vec;
 * init_long_list(&vec);
 * push_long_list(&vec, 0, 0);
 * push_long_list(&vec, 1, 1);
 * push_long_list(&vec, 2, 2);
 * long int a[4] = {10, 9, 8, 7};
 * insert_long_list(&vec, a, 4, 1);
 * PRINT(vec);
 * [ 0, 10, 9, 8, 7, 1, 2 ]
 * free_long_list(&vec);
 * @endcode
 */
int insert_long_list(LIntLL *vec, long int *array, size_t length, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert an array of data into a linked list
 *
 * /param vec A struct of type ULIntLL
 * /param array An array of type unsigned long int
 * /param length The number of indeices in array
 * /param index The index where the array of data will be inserted into the
 *              linked list
 *
 * @code
 * ULIntLL vec;
 * init_ulong_list(&vec);
 * push_ulong_list(&vec, 0, 0);
 * push_ulong_list(&vec, 1, 1);
 * push_ulong_list(&vec, 2, 2);
 * unsigned long int a[4] = {10, 9, 8, 7};
 * insert_ulong_list(&vec, a, 4, 1);
 * PRINT(vec);
 * [ 0, 10, 9, 8, 7, 1, 2 ]
 * free_ulong_list(&vec);
 * @endcode
 */
int insert_ulong_list(ULIntLL *vec, unsigned long int *array, size_t length, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert an array of data into a linked list
 *
 * /param vec A struct of type LLIntLL
 * /param array An array of type long long int
 * /param length The number of indeices in array
 * /param index The index where the array of data will be inserted into the
 *              linked list
 *
 * @code
 * LLIntLL vec;
 * init_llong_list(&vec);
 * push_llong_list(&vec, 0, 0);
 * push_llong_list(&vec, 1, 1);
 * push_llong_list(&vec, 2, 2);
 * long long int a[4] = {10, 9, 8, 7};
 * insert_llong_list(&vec, a, 4, 1);
 * PRINT(vec);
 * [ 0, 10, 9, 8, 7, 1, 2 ]
 * free_llong_list(&vec);
 * @endcode
 */
int insert_llong_list(LLIntLL *vec, long long int *array, size_t length, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert an array of data into a linked list
 *
 * /param vec A struct of type ULLIntLL
 * /param array An array of type unsigned long long int
 * /param length The number of indeices in array
 * /param index The index where the array of data will be inserted into the
 *              linked list
 *
 * @code
 * ULLIntLL vec;
 * init_ullong_list(&vec);
 * push_ullong_list(&vec, 0, 0);
 * push_ullong_list(&vec, 1, 1);
 * push_ullong_list(&vec, 2, 2);
 * unsigned long long int a[4] = {10, 9, 8, 7};
 * insert_ullong_list(&vec, a, 4, 1);
 * PRINT(vec);
 * [ 0, 10, 9, 8, 7, 1, 2 ]
 * free_ullong_list(&vec);
 * @endcode
 */
int insert_ullong_list(ULLIntLL *vec, unsigned long long int *array, size_t length, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert an array of data into a linked list
 *
 * /param vec A struct of type FltLL
 * /param array An array of type float
 * /param length The number of indeices in array
 * /param index The index where the array of data will be inserted into the
 *              linked list
 *
 * @code
 * FltLL vec;
 * init_float_list(&vec);
 * push_float_list(&vec, 0., 0);
 * push_float_list(&vec, 1., 1);
 * push_float_list(&vec, 2., 2);
 * float a[4] = {10., 9., 8., 7.};
 * insert_float_list(&vec, a, 4, 1);
 * PRINT(vec);
 * [ 0.000, 10.000, 9.000, 8.000, 7.000, 1.000, 2.000 ]
 * free_float_list(&vec);
 * @endcode
 */
int insert_float_list(FltLL *vec, float *array, size_t length, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert an array of data into a linked list
 *
 * /param vec A struct of type DbleLL
 * /param array An array of type double
 * /param length The number of indeices in array
 * /param index The index where the array of data will be inserted into the
 *              linked list
 *
 * @code
 * DbleLL vec;
 * init_double_list(&vec);
 * push_double_list(&vec, 0., 0);
 * push_double_list(&vec, 1., 1);
 * push_double_list(&vec, 2., 2);
 * double a[4] = {10., 9., 8., 7.};
 * insert_double_list(&vec, a, 4, 1);
 * PRINT(vec);
 * [ 0.000, 10.000, 9.000, 8.000, 7.000, 1.000, 2.000 ]
 * free_double_list(&vec);
 * @endcode
 */
int insert_double_list(DbleLL *vec, double *array, size_t length, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert an array of data into a linked list
 *
 * /param vec A struct of type LDbleLL
 * /param array An array of type long double
 * /param length The number of indeices in array
 * /param index The index where the array of data will be inserted into the
 *              linked list
 *
 * @code
 * LDbleLL vec;
 * init_ldouble_list(&vec);
 * push_ldouble_list(&vec, 0., 0);
 * push_ldouble_list(&vec, 1., 1);
 * push_ldouble_list(&vec, 2., 2);
 * long double a[4] = {10., 9., 8., 7.};
 * insert_ldouble_list(&vec, a, 4, 1);
 * PRINT(vec);
 * [ 0.000, 10.000, 9.000, 8.000, 7.000, 1.000, 2.000 ]
 * free_ldouble_list(&vec);
 * @endcode
 */
int insert_ldouble_list(LDbleLL *vec, long double *array, size_t length, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert an array of data into a linked list
 *
 * /param vec A struct of type CharLL
 * /param array An array of type char
 * /param length The number of indeices in array
 * /param index The index where the array of data will be inserted into the
 *              linked list
 *
 * @code
 * CharLL vec;
 * init_char_list(&vec);
 * push_char_list(&vec, 'a', 0);
 * push_char_list(&vec, 'b', 1);
 * push_char_list(&vec, 'c', 2);
 * char a[4] = {'z', 'y', 'x', 'w'};
 * insert_char_list(&vec, a, 4, 1);
 * PRINT(vec);
 * [ a, z, y, x, w, b, c ]
 * free_char_list(&vec);
 * @endcode
 */
int insert_char_list(CharLL *vec, char *array, size_t length, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert an array of data into a linked list
 *
 * /param vec A struct of type UCharLL
 * /param array An array of type unsigned char
 * /param length The number of indices in array
 * /param index The index where the array of data will be inserted into the
 *              linked list
 *
 * @code
 * UCharLL vec;
 * init_uchar_list(&vec);
 * push_uchar_list(&vec, 'a', 0);
 * push_uchar_list(&vec, 'b', 1);
 * push_uchar_list(&vec, 'c', 2);
 * unsigned char a[4] = {'z', 'y', 'x', 'w'};
 * insert_uchar_list(&vec, a, 4, 1);
 * PRINT(vec);
 * ( a, z, y, x, w, b, c )
 * free_uchar_list(&vec);
 * @endcode
 */
int insert_uchar_list(UCharLL *vec, unsigned char *array, size_t length, size_t index);
// --------------------------------------------------------------------------------

/**
 * This function will insert an array of data into a linked list
 *
 * /param vec A struct of type BoolLL
 * /param array An array of type bool
 * /param length The number of indeices in array
 * /param index The index where the array of data will be inserted into the
 *              linked list
 *
 * @code
 * BoolLL vec;
 * init_bool_list(&vec);
 * push_bool_list(&vec, true, 0);
 * push_bool_list(&vec, false, 1);
 * push_bool_list(&vec, false, 2);
 * bool a[4] = {false, true, false, true};
 * insert_bool_list(&vec, a, 4, 1);
 * PRINT(vec);
 * [ true, false, true, false, true, false, false ]
 * free_bool_list(&vec);
 * @endcode
 */
int insert_bool_list(BoolLL *vec, bool *array, size_t length, size_t index);
// ================================================================================
// ================================================================================
#endif /* llist.h */
// eof
