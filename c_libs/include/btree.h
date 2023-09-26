// ================================================================================
// ================================================================================
// - File:    btree.h
// - Purpose: Describe the file purpose here
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    September 25, 2023
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// Include modules here

#ifndef btree_H
#define btree_H

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <inttypes.h>
#include <string.h>

/**
 * This macro will producea struct that is specifically designed to store
 * data and the memory location of previous end future structs.  This macro
 * has an attribute to a pointer for the array key, the next similar struct
 * and the previous struct
 *
 * /param type The data type that will be assigned to the array pointer
 * /param dtype The name to be given to the typedef for the struct
 */
#define BTREE_STRUCT(type, dtype)													\
	typedef struct dtype {type key; struct dtype *left; struct dtype *right; short int height; } dtype;
// ================================================================================
// ================================================================================

/**
 * This macro will produce a struct that tracks data associated with a binary tree
 * of a specific data type
 *
 * /param type The data type that will be assigned to the struct
 * /param dtype The data type assigned to the tracked linked list
 */
#define BTREE_DAT_STRUCT(type, dtype)												\
	typedef struct { size_t active_length; struct dtype *root; bool status; } type;
// ================================================================================
// ================================================================================
// Pre-defined struct vectors

BTREE_STRUCT(short int, short_btree)
BTREE_STRUCT(unsigned short int, ushort_btree)
BTREE_STRUCT(int, int_btree)
BTREE_STRUCT(unsigned int, uint_btree)
BTREE_STRUCT(long int, long_btree)
BTREE_STRUCT(unsigned long int, ulong_btree)
BTREE_STRUCT(long long int, llong_btree)
BTREE_STRUCT(unsigned long long int, ullong_btree)
BTREE_STRUCT(float, float_btree)
BTREE_STRUCT(double, double_btree)
BTREE_STRUCT(long double, ldouble_btree)
BTREE_STRUCT(char, char_btree)
BTREE_STRUCT(unsigned char, uchar_btree)
BTREE_STRUCT(char*, string_btree)
// --------------------------------------------------------------------------------

BTREE_DAT_STRUCT(ShortBT, short_btree)
BTREE_DAT_STRUCT(UShortBT, ushort_btree)
BTREE_DAT_STRUCT(IntBT, int_btree)
BTREE_DAT_STRUCT(UIntBT, uint_btree)
BTREE_DAT_STRUCT(LIntBT, long_btree)
BTREE_DAT_STRUCT(ULIntBT, ulong_btree)
BTREE_DAT_STRUCT(LLIntBT, llong_btree)
BTREE_DAT_STRUCT(ULLIntBT, ullong_btree)
BTREE_DAT_STRUCT(FltBT, float_btree)
BTREE_DAT_STRUCT(DbleBT, double_btree)
BTREE_DAT_STRUCT(LDbleBT, ldouble_btree)
BTREE_DAT_STRUCT(CharBT, char_btree)
BTREE_DAT_STRUCT(UCharBT, uchar_btree)
BTREE_DAT_STRUCT(StringBT, string_btree)
// ================================================================================
// ================================================================================
// INIT_TYPE_BTREE FUNCTION

/*
 * This function will initialize a binary tree of type ShortBT
 *
 * /param tree A binary tree data structure of type ShortBT
 */
void init_short_btree(ShortBT *tree);
// --------------------------------------------------------------------------------

/*
 * This function will initialize a binary tree of type UShortBT
 *
 * /param tree A binary tree data structure of type UShortBT
 */
void init_ushort_btree(UShortBT *tree);
// --------------------------------------------------------------------------------

/*
 * This function will initialize a binary tree of type IntBT
 *
 * /param tree A binary tree data structure of type IntBT
 */
void init_int_btree(IntBT *tree);
// --------------------------------------------------------------------------------

/*
 * This function will initialize a binary tree of type UIntBT
 *
 * /param tree A binary tree data structure of type UIntBT
 */
void init_uint_btree(UIntBT *tree);
// --------------------------------------------------------------------------------

/*
 * This function will initialize a binary tree of type LIntBT
 *
 * /param tree A binary tree data structure of type LIntBT
 */
void init_long_btree(LIntBT *tree);
// --------------------------------------------------------------------------------

/*
 * This function will initialize a binary tree of type ULIntBT
 *
 * /param tree A binary tree data structure of type ULIntBT
 */
void init_ulong_btree(ULIntBT *tree);
// --------------------------------------------------------------------------------

/*
 * This function will initialize a binary tree of type LLIntBT
 *
 * /param tree A binary tree data structure of type LLIntBT
 */
void init_llong_btree(LLIntBT *tree);
// --------------------------------------------------------------------------------

/*
 * This function will initialize a binary tree of type ULLIntBT
 *
 * /param tree A binary tree data structure of type ULLIntBT
 */
void init_ullong_btree(ULLIntBT *tree);
// --------------------------------------------------------------------------------

/*
 * This function will initialize a binary tree of type FltBT
 *
 * /param tree A binary tree data structure of type FltBT
 */
void init_float_btree(FltBT *tree);
// --------------------------------------------------------------------------------

/*
 * This function will initialize a binary tree of type DbleBT
 *
 * /param tree A binary tree data structure of type DbleBT
 */
void init_double_btree(DbleBT *tree);
// --------------------------------------------------------------------------------

/*
 * This function will initialize a binary tree of type LDbleBT
 *
 * /param tree A binary tree data structure of type LDbleBT
 */
void init_ldouble_btree(LDbleBT *tree);
// --------------------------------------------------------------------------------

/*
 * This function will initialize a binary tree of type StringBT
 *
 * /param tree A binary tree data structure of type StringBT
 */
void init_string_btree(StringBT *tree);
// --------------------------------------------------------------------------------

/*
 * This function will initialize a binary tree of type CharBT
 *
 * /param tree A binary tree data structure of type CharBT
 */
void init_char_btree(CharBT *tree);
// --------------------------------------------------------------------------------

/*
 * This function will initialize a binary tree of type UCharBT
 *
 * /param tree A binary tree data structure of type UCharBT
 */
void init_uchar_btree(UCharBT *tree);
// ================================================================================
// ================================================================================
// INIT_BTREE MACRO

#define INIT_BTREE(tree) _Generic ( (tree), ShortBT: init_short_btree, \
										 UShortBT: init_ushort_btree, \
										 IntBT: init_int_btree, \
										 UIntBT: init_uint_btree, \
										 LIntBT: init_long_btree, \
										 ULIntBT: init_ulong_btree, \
										 LLIntBT: init_llong_btree, \
										 ULLIntBT: init_ullong_btree, \
										 FltBT: init_float_btree, \
										 DbleBT: init_double_btree, \
										 LDbleBT: init_ldouble_btree, \
										 CharBT: init_char_btree, \
										 UCharBT: init_uchar_btree, \
										 StringBT: init_string_btree)(&tree)
// ================================================================================
// ================================================================================
// PUSH_TYPE_BTREE FUNCTIONS


/*
 * This function can be used to push data to a binary tree data structure. This
 * function will insert data with the rules of a balanced AVL tree and will not
 * allow duplicate data.
 *
 * /param tree A binary tree struct of type ShortBT type
 * /param key A key value of type short int
 * /return int An integer value -1 if the function was not successful, or 1
 *             if the function was executed succesfully
 *
 * @code
 * ShortBT tree;
 * init_short_btree(&tree);
 * push_short_btree(&tree, 10);
 * push_short_btree(&tree, 20);
 * push_short_btree(&tree, 30);
 * push_short_btree(&tree, 40);
 * push_short_btree(&tree, 50);
 * push_short_btree(&tree, 25);
 * PRINT(tree);
 * // >> [ 30, 20, 10, 25, 40, 50 ]
 * free_short_btree(&tree);
 * @endcode
 */
int push_short_btree(ShortBT *tree, short int key);
// --------------------------------------------------------------------------------

/*
 * This function can be used to push data to a binary tree data structure. This
 * function will insert data with the rules of a balanced AVL tree and will not
 * allow duplicate data.
 *
 * /param tree A binary tree struct of type UShortBT type
 * /param key A key value of type unsigned short int
 * /return int An integer value -1 if the function was not successful, or 1
 *             if the function was executed succesfully
 *
 * @code
 * UShortBT tree;
 * init_ushort_btree(&tree);
 * push_ushort_btree(&tree, 10);
 * push_ushort_btree(&tree, 20);
 * push_ushort_btree(&tree, 30);
 * push_ushort_btree(&tree, 40);
 * push_ushort_btree(&tree, 50);
 * push_ushort_btree(&tree, 25);
 * PRINT(tree);
 * // >> [ 30, 20, 10, 25, 40, 50 ]
 * free_ushort_btree(&tree);
 * @endcode
 */
int push_ushort_btree(UShortBT *tree, unsigned short int key);
// --------------------------------------------------------------------------------

/*
 * This function can be used to push data to a binary tree data structure. This
 * function will insert data with the rules of a balanced AVL tree and will not
 * allow duplicate data.
 *
 * /param tree A binary tree struct of type IntBT type
 * /param key A key value of type int
 * /return int An integer value -1 if the function was not successful, or 1
 *             if the function was executed succesfully
 *
 * @code
 * IntBT tree;
 * init_int_btree(&tree);
 * push_int_btree(&tree, 10);
 * push_int_btree(&tree, 20);
 * push_int_btree(&tree, 30);
 * push_int_btree(&tree, 40);
 * push_int_btree(&tree, 50);
 * push_int_btree(&tree, 25);
 * PRINT(tree);
 * // >> [ 30, 20, 10, 25, 40, 50 ]
 * free_int_btree(&tree);
 * @endcode
 */
int push_int_btree(IntBT *tree, int key);
// --------------------------------------------------------------------------------

/*
 * This function can be used to push data to a binary tree data structure. This
 * function will insert data with the rules of a balanced AVL tree and will not
 * allow duplicate data.
 *
 * /param tree A binary tree struct of type UIntBT type
 * /param key A key value of type unsigned int
 * /return int An integer value -1 if the function was not successful, or 1
 *             if the function was executed succesfully
 *
 * @code
 * UIntBT tree;
 * init_uint_btree(&tree);
 * push_uint_btree(&tree, 10);
 * push_uint_btree(&tree, 20);
 * push_uint_btree(&tree, 30);
 * push_uint_btree(&tree, 40);
 * push_uint_btree(&tree, 50);
 * push_uint_btree(&tree, 25);
 * PRINT(tree);
 * // >> [ 30, 20, 10, 25, 40, 50 ]
 * free_uint_btree(&tree);
 * @endcode
 */
int push_uint_btree(UIntBT *tree, unsigned int key);
// --------------------------------------------------------------------------------

/*
 * This function can be used to push data to a binary tree data structure. This
 * function will insert data with the rules of a balanced AVL tree and will not
 * allow duplicate data.
 *
 * /param tree A binary tree struct of type LIntBT type
 * /param key A key value of type long int
 * /return int An integer value -1 if the function was not successful, or 1
 *             if the function was executed succesfully
 *
 * @code
 * LIntBT tree;
 * init_long_btree(&tree);
 * push_long_btree(&tree, 10);
 * push_long_btree(&tree, 20);
 * push_long_btree(&tree, 30);
 * push_long_btree(&tree, 40);
 * push_long_btree(&tree, 50);
 * push_long_btree(&tree, 25);
 * PRINT(tree);
 * // >> [ 30, 20, 10, 25, 40, 50 ]
 * free_long_btree(&tree);
 * @endcode
 */
int push_long_btree(LIntBT *tree, long int key);
// --------------------------------------------------------------------------------

/*
 * This function can be used to push data to a binary tree data structure. This
 * function will insert data with the rules of a balanced AVL tree and will not
 * allow duplicate data.
 *
 * /param tree A binary tree struct of type ULIntBT type
 * /param key A key value of type unsigned long int
 * /return int An integer value -1 if the function was not successful, or 1
 *             if the function was executed succesfully
 *
 * @code
 * ULIntBT tree;
 * init_ulong_btree(&tree);
 * push_ulong_btree(&tree, 10);
 * push_ulong_btree(&tree, 20);
 * push_ulong_btree(&tree, 30);
 * push_ulong_btree(&tree, 40);
 * push_ulong_btree(&tree, 50);
 * push_ulong_btree(&tree, 25);
 * PRINT(tree);
 * // >> [ 30, 20, 10, 25, 40, 50 ]
 * free_ulong_btree(&tree);
 * @endcode
 */
int push_ulong_btree(ULIntBT *tree, unsigned long int key);
// --------------------------------------------------------------------------------

/*
 * This function can be used to push data to a binary tree data structure. This
 * function will insert data with the rules of a balanced AVL tree and will not
 * allow duplicate data.
 *
 * /param tree A binary tree struct of type LLIntBT type
 * /param key A key value of type long long int
 * /return int An integer value -1 if the function was not successful, or 1
 *             if the function was executed succesfully
 *
 * @code
 * LLIntBT tree;
 * init_llong_btree(&tree);
 * push_llong_btree(&tree, 10);
 * push_llong_btree(&tree, 20);
 * push_llong_btree(&tree, 30);
 * push_llong_btree(&tree, 40);
 * push_llong_btree(&tree, 50);
 * push_llong_btree(&tree, 25);
 * PRINT(tree);
 * // >> [ 30, 20, 10, 25, 40, 50 ]
 * free_llong_btree(&tree);
 * @endcode
 */
int push_llong_btree(LLIntBT *tree, long long int key);
// --------------------------------------------------------------------------------

/*
 * This function can be used to push data to a binary tree data structure. This
 * function will insert data with the rules of a balanced AVL tree and will not
 * allow duplicate data.
 *
 * /param tree A binary tree struct of type ULLIntBT type
 * /param key A key value of type unsigned long long int
 * /return int An integer value -1 if the function was not successful, or 1
 *             if the function was executed succesfully
 *
 * @code
 * ULLIntBT tree;
 * init_ullong_btree(&tree);
 * push_ullong_btree(&tree, 10);
 * push_ullong_btree(&tree, 20);
 * push_ullong_btree(&tree, 30);
 * push_ullong_btree(&tree, 40);
 * push_ullong_btree(&tree, 50);
 * push_ullong_btree(&tree, 25);
 * PRINT(tree);
 * // >> [ 30, 20, 10, 25, 40, 50 ]
 * free_ullong_btree(&tree);
 * @endcode
 */
int push_ullong_btree(ULLIntBT *tree, unsigned long long int key);
// --------------------------------------------------------------------------------

/*
 * This function can be used to push data to a binary tree data structure. This
 * function will insert data with the rules of a balanced AVL tree and will not
 * allow duplicate data.
 *
 * /param tree A binary tree struct of type FltBT type
 * /param key A key value of type float
 * /return int An integer value -1 if the function was not successful, or 1
 *             if the function was executed succesfully
 *
 * @code
 * FltBT tree;
 * init_float_btree(&tree);
 * push_float_btree(&tree, 10.);
 * push_float_btree(&tree, 20.);
 * push_float_btree(&tree, 30.);
 * push_float_btree(&tree, 40.);
 * push_float_btree(&tree, 50.);
 * push_float_btree(&tree, 25.);
 * PRINT(tree);
 * // >> [ 30.000, 20.000, 10.000, 25.000, 40.000, 50.000 ]
 * free_float_btree(&tree);
 * @endcode
 */
int push_float_btree(FltBT *tree, float key);
// --------------------------------------------------------------------------------

/*
 * This function can be used to push data to a binary tree data structure. This
 * function will insert data with the rules of a balanced AVL tree and will not
 * allow duplicate data.
 *
 * /param tree A binary tree struct of type DbleBT type
 * /param key A key value of type unsigned double
 * /return int An integer value -1 if the function was not successful, or 1
 *             if the function was executed succesfully
 *
 * @code
 * DbleBT tree;
 * init_double_btree(&tree);
 * push_double_btree(&tree, 10.);
 * push_double_btree(&tree, 20.);
 * push_double_btree(&tree, 30.);
 * push_double_btree(&tree, 40.);
 * push_double_btree(&tree, 50.);
 * push_double_btree(&tree, 25.);
 * PRINT(tree);
 * // >> [ 30.000, 20.000, 10.000, 25.000, 40.000, 50.000 ]
 * free_double_btree(&tree);
 * @endcode
 */
int push_double_btree(DbleBT *tree, double key);
// --------------------------------------------------------------------------------

/*
 * This function can be used to push data to a binary tree data structure. This
 * function will insert data with the rules of a balanced AVL tree and will not
 * allow duplicate data.
 *
 * /param tree A binary tree struct of type LDbleBT type
 * /param key A key value of type long double
 * /return int An integer value -1 if the function was not successful, or 1
 *             if the function was executed succesfully
 *
 * @code
 * LDbleBT tree;
 * init_ldouble_btree(&tree);
 * push_ldouble_btree(&tree, 10.);
 * push_ldouble_btree(&tree, 20.);
 * push_ldouble_btree(&tree, 30.);
 * push_ldouble_btree(&tree, 40.);
 * push_ldouble_btree(&tree, 50.);
 * push_ldouble_btree(&tree, 25.);
 * PRINT(tree);
 * // >> [ 30.000, 20.000, 10.000, 25.000, 40.000, 50.000 ]
 * free_ldouble_btree(&tree);
 * @endcode
 */
int push_ldouble_btree(LDbleBT *tree, long double key);
// --------------------------------------------------------------------------------

/*
 * This function can be used to push data to a binary tree data structure. This
 * function will insert data with the rules of a balanced AVL tree and will not
 * allow duplicate data.
 *
 * /param tree A binary tree struct of type CharBT type
 * /param key A key value of type char
 * /return int An integer value -1 if the function was not successful, or 1
 *             if the function was executed succesfully
 *
 * @code
 * CharBT tree;
 * init_char_btree(&tree);
 * push_char_btree(&tree, 'a');
 * push_char_btree(&tree, 'b');
 * push_char_btree(&tree, 'c');
 * push_char_btree(&tree, 'd');
 * push_char_btree(&tree, 'e');
 * push_char_btree(&tree, 'f');
 * PRINT(tree);
 * // >> [ d, b, a, c, e, f ]
 * free_char_btree(&tree);
 * @endcode
 */
int push_char_btree(CharBT *tree, char key);
// --------------------------------------------------------------------------------

/*
 * This function can be used to push data to a binary tree data structure. This
 * function will insert data with the rules of a balanced AVL tree and will not
 * allow duplicate data.
 *
 * /param tree A binary tree struct of type UCharBT type
 * /param key A key value of type unsigned char
 * /return int An integer value -1 if the function was not successful, or 1
 *             if the function was executed succesfully
 *
 * @code
 * UCharBT tree;
 * init_uchar_btree(&tree);
 * push_uchar_btree(&tree, 'a');
 * push_uchar_btree(&tree, 'b');
 * push_uchar_btree(&tree, 'c');
 * push_uchar_btree(&tree, 'd');
 * push_uchar_btree(&tree, 'e');
 * push_uchar_btree(&tree, 'f');
 * PRINT(tree);
 * // >> [ d, b, a, c, e, f ]
 * free_uchar_btree(&tree);
 * @endcode
 */
int push_uchar_btree(UCharBT *tree, unsigned char key);
// --------------------------------------------------------------------------------

/*
 * This function can be used to push data to a binary tree data structure. This
 * function will insert data with the rules of a balanced AVL tree and will not
 * allow duplicate data.
 *
 * /param tree A binary tree struct of type StringBT type
 * /param key A key value of type char*
 * /return int An integer value -1 if the function was not successful, or 1
 *             if the function was executed succesfully
 *
 * @code
 * StringBT tree;
 * init_string_btree(&tree);
 * push_string_btree(&tree, "Apple");
 * push_string_btree(&tree, "Banana");
 * push_string_btree(&tree, "Cucumber");
 * push_string_btree(&tree, "Carrots");
 * push_string_btree(&tree, "Lettuce");
 * push_string_btree(&tree, "Pear");
 * PRINT(tree);
 * // >> [ Carrots, Banana, Apple, Cucumber, Lettuce, Pear ]
 * free_string_btree(&tree);
 * @endcode
 */
int push_string_btree(StringBT *tree, char *key);
// ================================================================================
// ================================================================================
// PUSH_BTREE MACROS

#define PUSH_BTREE(tree, key) _Generic ( (tree), ShortBT: push_short_btree, \
										 UShortBT: push_ushort_btree, \
										 IntBT: push_int_btree, \
										 UIntBT: push_uint_btree, \
										 LIntBT: push_long_btree, \
										 ULIntBT: push_ulong_btree, \
										 LLIntBT: push_llong_btree, \
										 ULLIntBT: push_ullong_btree, \
										 FltBT: push_float_btree, \
										 DbleBT: push_double_btree, \
										 LDbleBT: push_ldouble_btree, \
										 CharBT: push_char_btree, \
									     UCharBT: push_uchar_btree, \
										 StringBT: push_string_btree)(&tree, key)
// ================================================================================
// ================================================================================
// FREE_TYPE_BTREE

/*
 * This function will free all memory from an ShortBT binary tree data structure
 *
 * /param btree A binary tree data structure of type ShortBT
 */
void free_short_btree(ShortBT *btree);
// --------------------------------------------------------------------------------

/*
 * This function will free all memory from an UShortBT binary tree data structure
 *
 * /param btree A binary tree data structure of type UShortBT
 */
void free_ushort_btree(UShortBT *btree);
// --------------------------------------------------------------------------------

/*
 * This function will free all memory from an IntBT binary tree data structure
 *
 * /param btree A binary tree data structure of type IntBT
 */
void free_int_btree(IntBT *btree);
// --------------------------------------------------------------------------------

/*
 * This function will free all memory from an UIntBT binary tree data structure
 *
 * /param btree A binary tree data structure of type UIntBT
 */
void free_uint_btree(UIntBT *btree);
// --------------------------------------------------------------------------------

/*
 * This function will free all memory from an LIntBT binary tree data structure
 *
 * /param btree A binary tree data structure of type LIntBT
 */
void free_long_btree(LIntBT *btree);
// --------------------------------------------------------------------------------

/*
 * This function will free all memory from an ULIntBT binary tree data structure
 *
 * /param btree A binary tree data structure of type ULIntBT
 */
void free_ulong_btree(ULIntBT *btree);
// --------------------------------------------------------------------------------

/*
 * This function will free all memory from an LLIntBT binary tree data structure
 *
 * /param btree A binary tree data structure of type LLIntBT
 */
void free_llong_btree(LLIntBT *btree);
// --------------------------------------------------------------------------------

/*
 * This function will free all memory from an ULLIntBT binary tree data structure
 *
 * /param btree A binary tree data structure of type ULLIntBT
 */
void free_ullong_btree(ULLIntBT *btree);
// --------------------------------------------------------------------------------

/*
 * This function will free all memory from an FltBT binary tree data structure
 *
 * /param btree A binary tree data structure of type FltBT
 */
void free_float_btree(FltBT *btree);
// --------------------------------------------------------------------------------

/*
 * This function will free all memory from an DbleBT binary tree data structure
 *
 * /param btree A binary tree data structure of type DbleBT
 */
void free_double_btree(DbleBT *btree);
// --------------------------------------------------------------------------------

/*
 * This function will free all memory from an LDbleBT binary tree data structure
 *
 * /param btree A binary tree data structure of type LDbleBT
 */
void free_ldouble_btree(LDbleBT *btree);
// --------------------------------------------------------------------------------

/*
 * This function will free all memory from an CharBT binary tree data structure
 *
 * /param btree A binary tree data structure of type CharBT
 */
void free_char_btree(CharBT *btree);
// --------------------------------------------------------------------------------

/*
 * This function will free all memory from an UCharBT binary tree data structure
 *
 * /param btree A binary tree data structure of type UCharBT
 */
void free_uchar_btree(UCharBT *btree);
// --------------------------------------------------------------------------------

/*
 * This function will free all memory from an StringBT binary tree data structure
 *
 * /param btree A binary tree data structure of type StringBT
 */
void free_string_btree(StringBT *btree);
// ================================================================================
// ================================================================================
// FREE_BTREE MACROS

#define FREE_BTREE(tree) _Generic ( (tree), ShortBT: free_short_btree, \
										 UShortBT: free_ushort_btree, \
										 IntBT: free_int_btree, \
										 UIntBT: free_uint_btree, \
										 LIntBT: free_long_btree, \
										 ULIntBT: free_ulong_btree, \
										 LLIntBT: free_llong_btree, \
										 ULLIntBT: free_ullong_btree, \
										 FltBT: free_float_btree, \
										 DbleBT: free_double_btree, \
										 LDbleBT: free_ldouble_btree, \
										 CharBT: free_char_btree, \
										 UCharBT: free_uchar_btree, \
										 StringBT: free_string_btree)(&tree)
// ================================================================================
// ================================================================================
// POP_TYPE_BTREE

/*
 * This function will pop a variable out of a ShortBT binary tree in accordance
 * with the rules of an AVL binary tree
 *
 * /param btree A Binary tree data structure of type ShortBT
 * /param key The key to be deleted
 *
 * @code
 * ShortBT tree;
 * init_short_btree(&tree);
 * push_short_btree(&tree, 9);
 * push_short_btree(&tree, 5);
 * push_short_btree(&tree, 10);
 * push_short_btree(&tree, 0);
 * push_short_btree(&tree, 6);
 * push_short_btree(&tree, 11);
 * push_short_btree(&tree, 1);
 * push_short_btree(&tree, 2);
 * pop_short_btree(&tree, 10);
 * PRINT(tree);
 * // >> [ 5, 1, 0, 2, 9, 6, 11]
 * free_short_btree(&tree);
 * @endcode
 */
void pop_short_btree(ShortBT *btree, short int key);
// --------------------------------------------------------------------------------

/*
 * This function will pop a variable out of a UShortBT binary tree in accordance
 * with the rules of an AVL binary tree
 *
 * /param btree A Binary tree data structure of type UShortBT
 * /param key The key to be deleted
 *
 * @code
 * UShortBT tree;
 * init_ushort_btree(&tree);
 * push_ushort_btree(&tree, 9);
 * push_ushort_btree(&tree, 5);
 * push_ushort_btree(&tree, 10);
 * push_ushort_btree(&tree, 0);
 * push_ushort_btree(&tree, 6);
 * push_ushort_btree(&tree, 11);
 * push_ushort_btree(&tree, 1);
 * push_ushort_btree(&tree, 2);
 * pop_ushort_btree(&tree, 10);
 * PRINT(tree);
 * // >> [ 5, 1, 0, 2, 9, 6, 11]
 * free_ushort_btree(&tree);
 * @endcode
 */
void pop_ushort_btree(UShortBT *btree, unsigned short int key);
// --------------------------------------------------------------------------------

/*
 * This function will pop a variable out of a IntBT binary tree in accordance
 * with the rules of an AVL binary tree
 *
 * /param btree A Binary tree data structure of type IntBT
 * /param key The key to be deleted
 *
 * @code
 * IntBT tree;
 * init_int_btree(&tree);
 * push_int_btree(&tree, 9);
 * push_int_btree(&tree, 5);
 * push_int_btree(&tree, 10);
 * push_int_btree(&tree, 0);
 * push_int_btree(&tree, 6);
 * push_int_btree(&tree, 11);
 * push_int_btree(&tree, 1);
 * push_int_btree(&tree, 2);
 * pop_int_btree(&tree, 10);
 * PRINT(tree);
 * // >> [ 5, 1, 0, 2, 9, 6, 11]
 * free_int_btree(&tree);
 * @endcode
 */
void pop_int_btree(IntBT *btree, int key);
// --------------------------------------------------------------------------------

/*
 * This function will pop a variable out of a UIntBT binary tree in accordance
 * with the rules of an AVL binary tree
 *
 * /param btree A Binary tree data structure of type UIntBT
 * /param key The key to be deleted
 *
 * @code
 * UIntBT tree;
 * init_uint_btree(&tree);
 * push_uint_btree(&tree, 9);
 * push_uint_btree(&tree, 5);
 * push_uint_btree(&tree, 10);
 * push_uint_btree(&tree, 0);
 * push_uint_btree(&tree, 6);
 * push_uint_btree(&tree, 11);
 * push_uint_btree(&tree, 1);
 * push_uint_btree(&tree, 2);
 * pop_uint_btree(&tree, 10);
 * PRINT(tree);
 * // >> [ 5, 1, 0, 2, 9, 6, 11]
 * free_uint_btree(&tree);
 * @endcode
 */
void pop_uint_btree(UIntBT *btree, unsigned int key);
// --------------------------------------------------------------------------------

/*
 * This function will pop a variable out of a LIntBT binary tree in accordance
 * with the rules of an AVL binary tree
 *
 * /param btree A Binary tree data structure of type LIntBT
 * /param key The key to be deleted
 *
 * @code
 * LIntBT tree;
 * init_long_btree(&tree);
 * push_long_btree(&tree, 9);
 * push_long_btree(&tree, 5);
 * push_long_btree(&tree, 10);
 * push_long_btree(&tree, 0);
 * push_long_btree(&tree, 6);
 * push_long_btree(&tree, 11);
 * push_long_btree(&tree, 1);
 * push_long_btree(&tree, 2);
 * pop_long_btree(&tree, 10);
 * PRINT(tree);
 * // >> [ 5, 1, 0, 2, 9, 6, 11]
 * free_long_btree(&tree);
 * @endcode
 */
void pop_long_btree(LIntBT *btree, long int key);
// --------------------------------------------------------------------------------

/*
 * This function will pop a variable out of a ULIntBT binary tree in accordance
 * with the rules of an AVL binary tree
 *
 * /param btree A Binary tree data structure of type ULIntBT
 * /param key The key to be deleted
 *
 * @code
 * ULIntBT tree;
 * init_ulong_btree(&tree);
 * push_ulong_btree(&tree, 9);
 * push_ulong_btree(&tree, 5);
 * push_ulong_btree(&tree, 10);
 * push_ulong_btree(&tree, 0);
 * push_ulong_btree(&tree, 6);
 * push_ulong_btree(&tree, 11);
 * push_ulong_btree(&tree, 1);
 * push_ulong_btree(&tree, 2);
 * pop_ulong_btree(&tree, 10);
 * PRINT(tree);
 * // >> [ 5, 1, 0, 2, 9, 6, 11]
 * free_ulong_btree(&tree);
 * @endcode
 */
void pop_ulong_btree(ULIntBT *btree, unsigned long int key);
// --------------------------------------------------------------------------------

/*
 * This function will pop a variable out of a LLIntBT binary tree in accordance
 * with the rules of an AVL binary tree
 *
 * /param btree A Binary tree data structure of type LLIntBT
 * /param key The key to be deleted
 *
 * @code
 * LLIntBT tree;
 * init_llong_btree(&tree);
 * push_llong_btree(&tree, 9);
 * push_llong_btree(&tree, 5);
 * push_llong_btree(&tree, 10);
 * push_llong_btree(&tree, 0);
 * push_llong_btree(&tree, 6);
 * push_llong_btree(&tree, 11);
 * push_llong_btree(&tree, 1);
 * push_llong_btree(&tree, 2);
 * pop_llong_btree(&tree, 10);
 * PRINT(tree);
 * // >> [ 5, 1, 0, 2, 9, 6, 11]
 * free_llong_btree(&tree);
 * @endcode
 */
void pop_llong_btree(LLIntBT *btree, long long int key);
// --------------------------------------------------------------------------------

/*
 * This function will pop a variable out of a ULLIntBT binary tree in accordance
 * with the rules of an AVL binary tree
 *
 * /param btree A Binary tree data structure of type ULLIntBT
 * /param key The key to be deleted
 *
 * @code
 * ULLIntBT tree;
 * init_ullong_btree(&tree);
 * push_ullong_btree(&tree, 9);
 * push_ullong_btree(&tree, 5);
 * push_ullong_btree(&tree, 10);
 * push_ullong_btree(&tree, 0);
 * push_ullong_btree(&tree, 6);
 * push_ullong_btree(&tree, 11);
 * push_ullong_btree(&tree, 1);
 * push_ullong_btree(&tree, 2);
 * pop_ullong_btree(&tree, 10);
 * PRINT(tree);
 * // >> [ 5, 1, 0, 2, 9, 6, 11]
 * free_ullong_btree(&tree);
 * @endcode
 */
void pop_ullong_btree(ULLIntBT *btree, unsigned long long int key);
// --------------------------------------------------------------------------------

/*
 * This function will pop a variable out of a FltBT binary tree in accordance
 * with the rules of an AVL binary tree
 *
 * /param btree A Binary tree data structure of type FltBT
 * /param key The key to be deleted
 *
 * @code
 * FltBT tree;
 * init_float_btree(&tree);
 * push_float_btree(&tree, 9.);
 * push_float_btree(&tree, 5.);
 * push_float_btree(&tree, 10.);
 * push_float_btree(&tree, 0.);
 * push_float_btree(&tree, 6.);
 * push_float_btree(&tree, 11.);
 * push_float_btree(&tree, 1.);
 * push_float_btree(&tree, 2.);
 * pop_float_btree(&tree, 10.);
 * PRINT(tree);
 * // >> [ 5.000, 1.000, 0.000, 2.000, 9.000, 6.000, 11.000]
 * free_float_btree(&tree);
 * @endcode
 */
void pop_float_btree(FltBT *btree, float key);
// --------------------------------------------------------------------------------

/*
 * This function will pop a variable out of a DbleBT binary tree in accordance
 * with the rules of an AVL binary tree
 *
 * /param btree A Binary tree data structure of type DbleBT
 * /param key The key to be deleted
 *
 * @code
 * DbleBT tree;
 * init_double_btree(&tree);
 * push_double_btree(&tree, 9.);
 * push_double_btree(&tree, 5.);
 * push_double_btree(&tree, 10.);
 * push_double_btree(&tree, 0.);
 * push_double_btree(&tree, 6.);
 * push_double_btree(&tree, 11.);
 * push_double_btree(&tree, 1.);
 * push_double_btree(&tree, 2.);
 * pop_double_btree(&tree, 10.);
 * PRINT(tree);
 * // >> [ 5.000, 1.000, 0.000, 2.000, 9.000, 6.000, 11.000]
 * free_double_btree(&tree);
 * @endcode
 */
void pop_double_btree(DbleBT *btree, double key);
// --------------------------------------------------------------------------------

/*
 * This function will pop a variable out of a LDbleBT binary tree in accordance
 * with the rules of an AVL binary tree
 *
 * /param btree A Binary tree data structure of type LDbleBT
 * /param key The key to be deleted
 *
 * @code
 * LDbleBT tree;
 * init_ldouble_btree(&tree);
 * push_ldouble_btree(&tree, 9.);
 * push_ldouble_btree(&tree, 5.);
 * push_ldouble_btree(&tree, 10.);
 * push_ldouble_btree(&tree, 0.);
 * push_ldouble_btree(&tree, 6.);
 * push_ldouble_btree(&tree, 11.);
 * push_ldouble_btree(&tree, 1.);
 * push_ldouble_btree(&tree, 2.);
 * pop_ldouble_btree(&tree, 10.);
 * PRINT(tree);
 * // >> [ 5.000, 1.000, 0.000, 2.000, 9.000, 6.000, 11.000]
 * free_ldouble_btree(&tree);
 * @endcode
 */
void pop_ldouble_btree(LDbleBT *btree, long double key);
// --------------------------------------------------------------------------------

/*
 * This function will pop a variable out of a CharBT binary tree in accordance
 * with the rules of an AVL binary tree
 *
 * /param btree A Binary tree data structure of type CharBT
 * /param key The key to be deleted
 *
 * @code
 * CharBT tree;
 * init_char_btree(&tree);
 * push_char_btree(&tree, 'a');
 * push_char_btree(&tree, 'b');
 * push_char_btree(&tree, 'c');
 * push_char_btree(&tree, 'd');
 * push_char_btree(&tree, 'e');
 * push_char_btree(&tree, 'f');
 * push_char_btree(&tree, 'g');
 * push_char_btree(&tree, 'h');
 * pop_char_btree(&tree, 'd');
 * PRINT(tree);
 * // >> [ e, b, a, c, g, f, h ]
 * free_char_btree(&tree);
 * @endcode
 */
void pop_char_btree(CharBT *btree, char key);
// --------------------------------------------------------------------------------

/*
 * This function will pop a variable out of a UCharBT binary tree in accordance
 * with the rules of an AVL binary tree
 *
 * /param btree A Binary tree data structure of type UCharBT
 * /param key The key to be deleted
 *
 * @code
 * UCharBT tree;
 * init_uchar_btree(&tree);
 * push_uchar_btree(&tree, 'a');
 * push_uchar_btree(&tree, 'b');
 * push_uchar_btree(&tree, 'c');
 * push_uchar_btree(&tree, 'd');
 * push_uchar_btree(&tree, 'e');
 * push_uchar_btree(&tree, 'f');
 * push_uchar_btree(&tree, 'g');
 * push_uchar_btree(&tree, 'h');
 * pop_uchar_btree(&tree, 'd');
 * PRINT(tree);
 * // >> [ e, b, a, c, g, f, h ]
 * free_uchar_btree(&tree);
 * @endcode
 */
void pop_uchar_btree(UCharBT *btree, unsigned char key);
// --------------------------------------------------------------------------------

/*
 * This function will pop a variable out of a StringBT binary tree in accordance
 * with the rules of an AVL binary tree
 *
 * /param btree A Binary tree data structure of type StringBT
 * /param key The key to be deleted
 *
 * @code
 * StringBT tree;
 * init_string_btree(&tree);
 * push_string_btree(&tree, "Apple");
 * push_string_btree(&tree, "Banana");
 * push_string_btree(&tree, "Cucumber");
 * push_string_btree(&tree, "Lettuce");
 * push_string_btree(&tree, "Pear");
 * pop_string_btree(&tree, "Cucumber");
 * PRINT(tree);
 * // >> [ Banana, Apple, Lettuce, Pear ]
 * free_string_btree(&tree);
 * @endcode
 */
void pop_string_btree(StringBT *btree, char *key);
// ================================================================================
// ================================================================================
// POP_BTREE MACRO

#define POP_BTREE(tree, key) _Generic ( (tree), ShortBT: pop_short_btree, \
										 UShortBT: pop_ushort_btree, \
										 IntBT: pop_int_btree, \
										 UIntBT: pop_uint_btree, \
										 LIntBT: pop_long_btree, \
										 ULIntBT: pop_ulong_btree, \
										 LLIntBT: pop_llong_btree, \
										 ULLIntBT: pop_ullong_btree, \
										 FltBT: pop_float_btree, \
										 DbleBT: pop_double_btree, \
										 LDbleBT: pop_ldouble_btree, \
										 CharBT: pop_char_btree, \
										 UCharBT: pop_uchar_btree, \
										 StringBT: pop_string_btree)(&tree, key)
#endif /* btree_H */
// ================================================================================
// ================================================================================
// eof
