// ================================================================================
// ================================================================================
// - File:    data_structures.h
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

#ifndef data_structures_H
#define data_structures_H

#include <stdio.h>
#include "vector.h"

// PUSH GENERIC OPERATOR

/*
 * This macro will push a scalar data point to a user defined index within an
 * existing vector.  The macro only selects the correct function, and therefore
 * does not incease memory usage or decrease code execution time.  While the user
 * can push data to any index, the macro will execute fastest when the user
 * pushes data to the next available index.
 *
 * /param vec A vector struct container
 * /param value The data point to be pushed to the vector
 * /param index The index where data is to be inserted
 *
 * @code
 * Int vec;
 * INIT_VECTOR(vec, 20);
 * PUSH(vec, 1, vec.active_length);
 * PUSH(vec, 2, vec.active_length);
 * PUSH(vec, 3, vec.active_length);
 * PUSH(vec, 10, 0);
 * for (size_t i = 0; i < vec.active_length; i++) {
 *     printf("%d\n", vec.array[i]);
 * }
 * // >> 10 1 2 3
 * @endcode
 */
#define PUSH(T, value, index) _Generic( (T), Short: push_short_vector, \
										                 UShort: push_ushort_vector, \
										                 Int: push_int_vector, \
										                 UInt: push_uint_vector, \
										                 LInt: push_long_vector, \
										                 ULInt: push_ulong_vector, \
										                 LLInt: push_llong_vector, \
										                 ULLInt: push_ullong_vector, \
										                 Flt: push_float_vector, \
										                 Dble: push_double_vector, \
										                 LDble: push_ldouble_vector, \
										                 Char: push_char_vector, \
														 UChar: push_uchar_vector, \
														 Bool: push_bool_vector, \
														 String: push_string_vector)(&T, value, index)
// ==========================================================================================
// ==========================================================================================
// INSERT GENERIC OPERATOR

/*
 * This macro will insert an array of data into a vector container.  In addition, this
 * function can also be used to push a scalar variable to a vector container at a user
 * defined index.  While the user can insert a scalar or an array to any desired
 * index, the function will run fastest when data is inserted at the next available
 * index.  This macro only selects the correct function to execute the operation based
 * on data type.  Therefore this macro does not increase memory usage, nor does it
 * decrease code execution time.
 *
 * /param vec A vector struct container
 * /param elements The array containing elements to be inserted
 * /param num_ind The number of indices occupied by elements
 * /param index The index where the array is to be submitted
 *
 * @code
 * Int vec;
 * INIT_VECTOR(vec, 8);
 * PUSH(vec, 1, vec.active_length);
 * PUSH(vec, 2, vec.active_length);
 * PUSH(vec, 3, vec.active_length);
 * PUSH(vec, 4, vec.active_length);
 * PUSH(vec, 5, vec.active_length);
 * int a[3] = {10, 9, 8}
 * INSERT(vec, a, 3, 2);
 * PRINT(vec);
 * // [ 1, 2, 10, 9, 8, 3, 4, 5 ]
 * @endcode
 */
#define INSERT(T, elements, num_ind, index) _Generic( (T), Short: insert_short_vector, \
										                 UShort: insert_ushort_vector, \
										                 Int: insert_int_vector, \
										                 UInt: insert_uint_vector, \
										                 LInt: insert_long_vector, \
										                 ULInt: insert_ulong_vector, \
										                 LLInt: insert_llong_vector, \
										                 ULLInt: insert_ullong_vector, \
										                 Flt: insert_float_vector, \
										                 Dble: insert_double_vector, \
										                 LDble: insert_ldouble_vector, \
										                 Char: insert_char_vector, \
														 UChar: insert_uchar_vector, \
														 Bool: insert_bool_vector, \
		                                                 String: insert_string_vector)(&T, elements, num_ind, index)
// ==========================================================================================
// ==========================================================================================
// INSERT GENERIC OPERATOR

/*
 * This macro will insert an array of data into a vector container.  In addition, this
 * function can also be used to push a scalar variable to a vector container at a user
 * defined index.  While the user can insert a scalar or an array to any desired
 * index, the function will run fastest when data is inserted at the next available
 * index.  This macro only selects the correct function to execute the operation based
 * on data type.  Therefore this macro does not increase memory usage, nor does it
 * decrease code execution time.
 *
 * /param vec A vector struct container
 * /param elements The array containing elements to be inserted
 * /param num_ind The number of indices occupied by elements
 * /param index The index where the array is to be submitted
 *
 * @code
 * Int vec;
 * INIT_VECTOR(vec, 8);
 * PUSH(vec, 1, vec.active_length);
 * PUSH(vec, 2, vec.active_length);
 * PUSH(vec, 3, vec.active_length);
 * PUSH(vec, 4, vec.active_length);
 * PUSH(vec, 5, vec.active_length);
 * int a[3] = {10, 9, 8}
 * INSERT(vec, a, 3, 2);
 * PRINT(vec);
 * // [ 1, 2, 10, 9, 8, 3, 4, 5 ]
 * @endcode
 */
#define FREE(T) _Generic( (T), Short: free_short_vector, \
							   UShort: free_ushort_vector, \
							   Int: free_int_vector, \
							   UInt: free_uint_vector, \
							   LInt: free_long_vector, \
							   ULInt: free_ulong_vector, \
							   LLInt: free_llong_vector, \
							   ULLInt: free_ullong_vector, \
							   Flt: free_float_vector, \
							   Dble: free_double_vector, \
							   LDble: free_ldouble_vector, \
							   Char: free_char_vector, \
							   UChar: free_uchar_vector, \
							   Bool: free_bool_vector, \
							   String: free_string_vector)(&T)
// ==========================================================================================
// ==========================================================================================

/*
 * This macro will insert an array of data into a vector container.  In addition, this
 * function can also be used to push a scalar variable to a vector container at a user
 * defined index.  While the user can insert a scalar or an array to any desired
 * index, the function will run fastest when data is inserted at the next available
 * index.  This macro only selects the correct function to execute the operation based
 * on data type.  Therefore this macro does not increase memory usage, nor does it
 * decrease code execution time.
 *
 * /param vec A vector struct container
 * /param T The array containing elements to be inserted
 * /param y The index from where data is poppsed
 *
 * @code
 * Int vec;
 * INIT_VECTOR(vec, 8);
 * PUSH(vec, 1, vec.active_length);
 * PUSH(vec, 2, vec.active_length);
 * PUSH(vec, 3, vec.active_length);
 * PUSH(vec, 4, vec.active_length);
 * PUSH(vec, 5, vec.active_length);
 * POP_INDEX(vec, 2);
 * PRINT(vec);
 * // [ 1, 2, 4, 5 ]
 * @endcode
 */
#define POP_INDEX(T, y) _Generic( (T), Short: pop_short_vector_index, \
							   UShort: pop_ushort_vector_index, \
							   Int: pop_int_vector_index, \
							   UInt: pop_uint_vector_index, \
							   LInt: pop_long_vector_index, \
							   ULInt: pop_ulong_vector_index, \
							   LLInt: pop_llong_vector_index, \
							   ULLInt: pop_ullong_vector_index, \
							   Flt: pop_float_vector_index, \
							   Dble: pop_double_vector_index, \
							   LDble: pop_ldouble_vector_index, \
							   Char: pop_char_vector_index, \
							   UChar: pop_uchar_vector_index, \
							   Bool: pop_bool_vector_index, \
							   String: pop_string_vector_index)(&T, y)
// ==========================================================================================
// ==========================================================================================
// REPLACE_VALUES MACRO

/**
 * This macro will replace all instances of a value in an array with a new value.
 * This macro merely selects the applicable function based on the data type
 * of input variables.  Therefore this macro will not increase memory usage,
 * nor with it reduce execution time.
 *
 * /param vec A vector struct
 * /param old_value The value to be replaced, if it exists in the array
 * /param new_value The value that will replace the old value
 *
 * @code
 * IVector vec;
 * INIT_VECTOR(vec, 5);
 * PUSH(vec, 1, vec.active_length);
 * PUSH(vec, 2, vec.active_length);
 * PUSH(vec, 1, vec.active_length);
 * PUSH(vec, 4, vec.active_length);
 * PUSH(vec, 1, vec.active_length);
 *
 * REPLACE_VALUES(vec, 1, 2);
 * for (size_t i = 0; i < vec.active_length; i++) {
 *     printf("% PRId32 "\n", vec.array[i]);
 * }
 * // 2 2 2 4 2
 * @endcode
 */

#define REPLACE_VALUES(T, old, new) _Generic( (T), Short: replace_short_vector_values, \
										           UShort: replace_ushort_vector_values, \
										           Int: replace_int_vector_values, \
										           UInt: replace_uint_vector_values, \
										           LInt: replace_long_vector_values, \
										           ULInt: replace_ulong_vector_values, \
										           LLInt: replace_llong_vector_values, \
										           ULLInt: replace_ullong_vector_values, \
										           Flt: replace_float_vector_values, \
										           Dble: replace_double_vector_values, \
										           LDble: replace_ldouble_vector_values, \
										           Char: replace_char_vector_values, \
												   UChar: replace_uchar_vector_values, \
												   Bool: replace_bool_vector_values, \
												   String: replace_string_vector_values)(&T, old, new)
// ==========================================================================================
// ==========================================================================================
// DELETE_TYPE_DUPLICATES OPERATOR

/**
 * This macro will delete all duplicate values in a data structure with exception
 * of the original value
 *
 * /param T The struct container
 *
 * @code
 * Int8 vec;
 * INIT_VECTOR(vec, 6);
 * int8_t a[6] = {1, 1, 2, 2, 3, 3};
 * INSERT(vec, a, 6, 0);
 * DELETE_DUPLICATES(vec);
 * PRINT(vec);
 * // >> [ 1, 2, 3 ]
 * @endcode
 */
#define DELETE_DUPLICATES(T) _Generic( (T), Short: delete_short_vector_duplicates, \
										    UShort: delete_ushort_vector_duplicates, \
										    Int: delete_int_vector_duplicates, \
										    UInt: delete_uint_vector_duplicates, \
										    LInt: delete_long_vector_duplicates, \
										    ULInt: delete_ulong_vector_duplicates, \
										    LLInt: delete_llong_vector_duplicates, \
										    ULLInt: delete_ullong_vector_duplicates, \
										    Flt: delete_float_vector_duplicates, \
										    Dble: delete_double_vector_duplicates, \
										    LDble: delete_ldouble_vector_duplicates, \
										    Char: delete_char_vector_duplicates, \
											UChar: delete_uchar_vector_duplicates, \
										    Bool: delete_bool_vector_duplicates, \
										    String: delete_string_vector_duplicates)(&T)
// ==========================================================================================
// ==========================================================================================

#endif /* data_structures_H */
// ==========================================================================================
// ==========================================================================================
// eof
