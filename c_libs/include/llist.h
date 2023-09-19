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
#endif /* llist_H */
// ================================================================================
// ================================================================================
// eof
