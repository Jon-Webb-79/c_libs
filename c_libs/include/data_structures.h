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
														 String: push_string_vector, \
													     IntLL: push_int_list, \
														 UIntLL: push_uint_list, \
														 ShortLL: push_short_list, \
														 UShortLL: push_ushort_list, \
														 LIntLL: push_long_list, \
														 ULIntLL: push_ulong_list, \
														 LLIntLL: push_llong_list, \
														 ULLIntLL: push_ullong_list, \
														 FltLL: push_float_list, \
														 DbleLL: push_double_list, \
														 LDbleLL: push_ldouble_list, \
														 CharLL: push_char_list, \
														 UCharLL: push_uchar_list, \
														 BoolLL: push_bool_list, \
														 StringLL: push_string_list)(&T, value, index)
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
		                                                 String: insert_string_vector, \
														 ShortLL: insert_short_list, \
														 UShortLL: insert_ushort_list, \
														 IntLL: insert_int_list, \
														 UIntLL: insert_uint_list, \
														 LIntLL: insert_long_list, \
														 ULIntLL: insert_ulong_list, \
														 LLIntLL: insert_llong_list, \
														 ULLIntLL: insert_ullong_list, \
														 FltLL: insert_float_list, \
														 DbleLL: insert_double_list, \
														 LDbleLL: insert_ldouble_list, \
														 CharLL: insert_char_list, \
														 UCharLL: insert_uchar_list, \
														 BoolLL: insert_bool_list)(&T, elements, num_ind, index)
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
							   String: free_string_vector, \
		                       ShortLL: free_short_list, \
							   UShortLL: free_ushort_list, \
							   IntLL: free_int_list, \
							   UIntLL: free_uint_list, \
							   LIntLL: free_long_list, \
							   ULIntLL: free_ulong_list, \
							   LLIntLL: free_llong_list, \
							   ULLIntLL: free_ullong_list, \
							   FltLL: free_float_list, \
							   DbleLL: free_double_list, \
							   LDbleLL: free_ldouble_list, \
							   CharLL: free_char_list, \
							   UCharLL: free_uchar_list, \
							   BoolLL: free_bool_list, \
							   StringLL: free_string_list)(&T)
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
							   String: pop_string_vector_index, \
							   ShortLL: pop_short_list_index, \
							   UShortLL: pop_ushort_list_index, \
							   IntLL: pop_int_list_index, \
							   UIntLL: pop_uint_list_index, \
							   LIntLL: pop_long_list_index, \
							   ULIntLL: pop_ulong_list_index, \
							   LLIntLL: pop_llong_list_index, \
							   ULLIntLL: pop_ullong_list_index, \
							   FltLL: pop_float_list_index, \
							   DbleLL: pop_double_list_index, \
							   LDbleLL: pop_ldouble_list_index, \
							   CharLL: pop_char_list_index, \
							   UCharLL: pop_uchar_list_index, \
							   BoolLL: pop_bool_list_index, \
							   StringLL: pop_string_list_index)(&T, y)
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
												   String: replace_string_vector_values, \
												   ShortLL: replace_short_list_values, \
												   UShortLL: replace_ushort_list_values, \
												   IntLL: replace_int_list_values, \
												   UIntLL: replace_uint_list_values, \
												   LIntLL: replace_long_list_values, \
												   ULIntLL: replace_ulong_list_values, \
												   LLIntLL: replace_llong_list_values, \
												   ULLIntLL: replace_ullong_list_values, \
											       FltLL: replace_float_list_values, \
												   DbleLL: replace_double_list_values, \
												   LDbleLL: replace_ldouble_list_values, \
												   CharLL: replace_char_list_values, \
												   UCharLL: replace_uchar_list_values, \
												   BoolLL: replace_bool_list_values, \
												   StringLL: replace_string_list_values)(&T, old, new)
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
										    String: delete_string_vector_duplicates, \
										    ShortLL: delete_short_list_duplicates, \
										    UShortLL: delete_ushort_list_duplicates, \
										    IntLL: delete_int_list_duplicates, \
										    UIntLL: delete_uint_list_duplicates, \
										    LIntLL: delete_long_list_duplicates, \
										    ULIntLL: delete_ulong_list_duplicates, \
										    LLIntLL: delete_llong_list_duplicates, \
										    ULLIntLL: delete_ullong_list_duplicates, \
										    FltLL: delete_float_list_duplicates, \
										    DbleLL: delete_double_list_duplicates, \
										    LDbleLL: delete_ldouble_list_duplicates, \
										    CharLL: delete_char_list_duplicates, \
											UCharLL: delete_uchar_list_duplicates, \
										    BoolLL: delete_bool_list_duplicates, \
										    StringLL: delete_string_list_duplicates)(&T)
// ==========================================================================================
// ==========================================================================================
// REVERSE MACRO

/**
 * This macro will reverse the order of a data structure
 *
 * /param vec A data structure of the appropriate type
 *
 * @code
 * Int8 vec;
 * INIT_VECTOR(vec, 5)
 * PUSH(vec, 1);
 * PUSH(vec, 2);
 * PUSH(vec, 3);
 * PUSH(vec, 4);
 * PUSH(vec, 5)
 * REVERSE(vec);
 * PRINT(vec);
 * [5, 4, 3, 2, 1 ]
 * FREE(vec);
 * @endcode
 */
#define REVERSE(T) _Generic( (T), Short: reverse_short_vector, \
								  UShort: reverse_ushort_vector, \
								  Int: reverse_int_vector, \
								  UInt: reverse_uint_vector, \
								  LInt: reverse_long_vector, \
							      ULInt: reverse_ulong_vector, \
								  LLInt: reverse_llong_vector, \
								  ULLInt: reverse_ullong_vector, \
								  Flt: reverse_float_vector, \
								  Dble: reverse_double_vector, \
								  LDble: reverse_ldouble_vector, \
								  Char: reverse_char_vector, \
								  UChar: reverse_uchar_vector, \
								  Bool: reverse_bool_vector, \
                                  String: reverse_string_vector, \
								  ShortLL: reverse_short_list, \
								  UShortLL: reverse_ushort_list, \
								  IntLL: reverse_int_list, \
								  UIntLL: reverse_uint_list, \
								  LIntLL: reverse_long_list, \
								  ULIntLL: reverse_ulong_list, \
								  LLIntLL: reverse_llong_list, \
								  ULLIntLL: reverse_ullong_list, \
								  FltLL: reverse_float_list, \
								  DbleLL: reverse_double_list, \
								  LDbleLL: reverse_ldouble_list, \
								  CharLL: reverse_char_list, \
								  UCharLL: reverse_uchar_list, \
								  BoolLL: reverse_bool_list, \
								  StringLL: reverse_string_list)(&T)
// ==========================================================================================
// ==========================================================================================

#define IS_SORT_TYPE(T, low, high, order) _Generic( (T), Short: sort_short_vector, \
										                 UShort: sort_ushort_vector, \
										                 Int: sort_int_vector, \
										                 UInt: sort_uint_vector, \
										                 LInt: sort_long_vector, \
										                 ULInt: sort_ulong_vector, \
										                 LLInt: sort_llong_vector, \
										                 ULLInt: sort_ullong_vector, \
										                 Flt: sort_float_vector, \
										                 Dble: sort_double_vector, \
										                 LDble: sort_ldouble_vector, \
										                 Char: sort_char_vector, \
														 UChar: sort_uchar_vector, \
														 Bool: sort_bool_vector, \
														 String: sort_string_vector)(&T, low, high, order)
// --------------------------------------------------------------------------------
// SORT MACRO

/**
 * This macro will sort a data structure in forward or reverse order
 *
 * /param T The data structure to be sorted
 * /para  order FORWARD for a forward sort and REVERSE for a reverse sort
 *
 * @code
 * Flt vec;
 * INIT_VECTOR(vec, 5);
 * float a[5] = {3.4, 1.1, 2.2, 5.4, 4.3};
 * INSERT(vec, a, 5, 0);
 * SORT(vec, FORWARD);
 * // >> [ 1.1, 2.2, 3.4, 4.3, 5.4 ]
 * SORT(vec, REVERSE);
 * // >> [ 5.4, 4.3, 3.4, 2.2, 1.1 ]
 * @endcode
 */
#define SORT(T, order) IS_SORT_TYPE((T), (0), (T.active_length-1), (order))
// ==========================================================================================
// ==========================================================================================
// SUM MACRO

/**
 * This macro will return the sum of data in a data structure
 *
 * /param T An appropriate data structure
 *
 * @code
 * Int vec;
 * INIT_VECTOR(vec, 4);
 * int a[4] = {1, 2, 3, 4};
 * INSERT(vec, a, 4, 0);
 * int b = SUM(vec);
 * PRINT(b);
 * // >> 10
 * @endcode
 */
#define SUM(T) _Generic( (T), Short: sum_short_vector, \
							  UShort: sum_ushort_vector, \
							  Int: sum_int_vector, \
							  UInt: sum_uint_vector, \
							  LInt: sum_long_vector, \
							  ULInt: sum_ulong_vector, \
							  LLInt: sum_llong_vector, \
							  ULLInt: sum_ullong_vector, \
							  Flt: sum_float_vector, \
						      Dble: sum_double_vector, \
							  Char: sum_char_vector, \
							  UChar: sum_uchar_vector, \
							  LDble: sum_ldouble_vector)(&T)
// ==========================================================================================
// ==========================================================================================

/**
 * This macro will return a data structure of the same type as the input
 * data structure that contains the cumulative sum of the input structure
 *
 * /param T The input data structure
 * /return return_T The output data structure
 *
 * @code
 * Int vec;
 * INIT_VECTOR(vec, 5);
 * int a[5] = {1, 2, 3, 4, 5};
 * INSERT(vec, a, 5, 0);
 * Int cum_vec = CUMSUM(vec);
 * PRINT(cum_vec);
 * // >> [ 1, 3, 6, 10, 15 ]
 * @endcode
 */
#define CUMSUM(T) _Generic( (T), Short: cumsum_short_vector, \
							     UShort: cumsum_ushort_vector, \
								 Int: cumsum_int_vector, \
							     UInt: cumsum_uint_vector, \
								 LInt: cumsum_long_vector, \
								 ULInt: cumsum_ulong_vector, \
								 LLInt: cumsum_llong_vector, \
								 ULLInt: cumsum_ullong_vector, \
								 Flt: cumsum_float_vector, \
						         Dble: cumsum_double_vector, \
								 Char: cumsum_char_vector, \
								 UChar: cumsum_uchar_vector, \
								 LDble: cumsum_ldouble_vector)(&T)
// ==========================================================================================
// ==========================================================================================
// AVERAGE MACRO

/**
 * This macro will return the average value of a data structure.  The macro
 * will return the appropriate data type depending on the input data type.
 *
 * /param T The input data structure
 *
 * @code
 * Dble vec;
 * INIT_VECTOR(vec, 5);
 * double a[5] = {3.45, 2.18. 8.17, 0.56, 2.28};
 * INSERT(vec, a, 5, 0);
 * double avg = AVERAGE(vec);
 * PRINT(avg);
 * // >> 3.328
 * @endcode
 */
#define AVERAGE(T) _Generic( (T), Char: average_char_vector, \
		                          UChar: average_uchar_vector, \
							      Short: average_short_vector, \
							      UShort: average_ushort_vector, \
								  Int: average_int_vector, \
							      UInt: average_uint_vector, \
								  LInt: average_long_vector, \
								  ULInt: average_ulong_vector, \
								  LLInt: average_llong_vector, \
								  ULLInt: average_ullong_vector, \
								  Flt: average_float_vector, \
						          Dble: average_double_vector, \
								  LDble: average_ldouble_vector)(&T)
// ==========================================================================================
// ==========================================================================================
// STDEV MACRO

/**
 * This macro will calculate the standard deviation of the values in a data
 * structure
 *
 * /param T The input data structure
 *
 * @code
 * Dble vec;
 * INIT_VECTOR(vec, 5);
 * double a[5] = {3.45, 2.18, 8.17, 0.56, 2.28};
 * INSERT(vec, a, 5, 0);
 * double stdev = STDEV(vec);
 * PRINT(stdev);
 * // >> 2.89559
 * @endcode
 */
#define STDEV(T) _Generic( (T), Char: stdev_char_vector, \
		                        UChar: stdev_uchar_vector, \
							    Short: stdev_short_vector, \
							    UShort: stdev_ushort_vector, \
								Int: stdev_int_vector, \
							    UInt: stdev_uint_vector, \
								LInt: stdev_long_vector, \
								ULInt: stdev_ulong_vector, \
								LLInt: stdev_llong_vector, \
								ULLInt: stdev_ullong_vector, \
								Flt: stdev_float_vector, \
						        Dble: stdev_double_vector, \
								LDble: stdev_ldouble_vector)(&T)
// ==========================================================================================
// ==========================================================================================
// MAC MACRO

/**
 * This macro will calculate the max value in a data structure
 *
 * /param T The input data structure
 *
 * @code
 * Dble vec;
 * INIT_VECTOR(vec, 5);
 * double a[5] = {3.45, 2.18, 8.17, 0.56, 2.28};
 * INSERT(vec, a, 5, 0);
 * double max = MAX(vec);
 * PRINT(max);
 * // >> 8.17
 * @endcode
 */
#define MAX(T) _Generic( (T), Char: max_char_vector, \
		                      UChar: max_uchar_vector, \
							  Short: max_short_vector, \
							  UShort: max_ushort_vector, \
							  Int: max_int_vector, \
							  UInt: max_uint_vector, \
							  LInt: max_long_vector, \
							  ULInt: max_ulong_vector, \
							  LLInt: max_llong_vector, \
							  ULLInt: max_ullong_vector, \
							  Flt: max_float_vector, \
						      Dble: max_double_vector, \
							  LDble: max_ldouble_vector)(&T)
// ==========================================================================================
// ==========================================================================================
// MIN MACRO

/**
 * This macro will calculate the max value in a data structure
 *
 * /param T The input data structure
 *
 * @code
 * Dble vec;
 * INIT_VECTOR(vec, 5);
 * double a[5] = {3.45, 2.18, 8.17, 0.56, 2.28};
 * INSERT(vec, a, 5, 0);
 * double min = MIN(vec);
 * PRINT(max);
 * // >> 0.56
 * @endcode
 */
#define MIN(T) _Generic( (T), Char: min_char_vector, \
		                      UChar: min_uchar_vector, \
							  Short: min_short_vector, \
							  UShort: min_ushort_vector, \
							  Int: min_int_vector, \
							  UInt: min_uint_vector, \
							  LInt: min_long_vector, \
							  ULInt: min_ulong_vector, \
							  LLInt: min_llong_vector, \
							  ULLInt: min_ullong_vector, \
							  Flt: min_float_vector, \
						      Dble: min_double_vector, \
							  LDble: min_ldouble_vector)(&T)
// ==========================================================================================
// ==========================================================================================
// MAC MACRO

/**
 * This macro will insert a range of values between start and end into a data
 * structure.
 *
 * /param T The data structure
 * /param start The start point
 * /param end The end point
 * /param The delta between data points
 *
 * @code
 * Int vec;
 * INIT_VECTOR(vec, 10);
 * RANGE(vec, 2, 20, 2);
 * PRINT(vec);
 * // >> [ 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 ]
 * @endcode
 */
#define RANGE(T, start, end, delta) _Generic( (T), Char: range_char_vector, \
		                                           UChar: range_uchar_vector, \
							                       Short: range_short_vector, \
							                       UShort: range_ushort_vector, \
									               Int: range_int_vector, \
							                       UInt: range_uint_vector, \
									               LInt: range_long_vector, \
									               ULInt: range_ulong_vector, \
									               LLInt: range_llong_vector, \
									               ULLInt: range_ullong_vector, \
									               Flt: range_float_vector, \
						                           Dble: range_double_vector, \
									               LDble: range_ldouble_vector)(&T, start, end, delta)
// ==========================================================================================
// ==========================================================================================
// COPY MACRO

/**
 * This macro will create a deep copy of a data structure
 *
 * /param T The data structure
 * /retur structure The deep copy of a data structure
 *
 * @code
 * Int vec;
 * INIT_VECTOR(vec, 10);
 * int a[5] = {1, 2, 3, 4, 5};
 * INSERT(vec, a, 5, 0);
 * Int new_vec = COPY(vec);
 * PRINT(new_vec);
 * // >> [ 1, 2, 3, 4, 5 ]
 * @endcode
 */
#define COPY(T) _Generic( (T), UChar: copy_uchar_vector, \
							   Short: copy_short_vector, \
							   UShort: copy_ushort_vector, \
							   Int: copy_int_vector, \
							   UInt: copy_uint_vector, \
							   LInt: copy_long_vector, \
							   ULInt: copy_ulong_vector, \
							   LLInt: copy_llong_vector, \
							   ULLInt: copy_ullong_vector, \
							   Flt: copy_float_vector, \
						       Dble: copy_double_vector, \
							   LDble: copy_ldouble_vector, \
							   Char: copy_char_vector, \
							   Bool: copy_bool_vector, \
							   String: copy_string_vector)(&T)
/// ==========================================================================================
/// ==========================================================================================
// IDATA MACRO

/**
 * This macro will insert a range of values between start and end into a data
 * structure.
 *
 * /param T The data structure
 * /param start The start point
 * /param end The end point
 * /param The delta between data points
 *
 * @code
 * Int vec;
 * INIT_VECTOR(vec, 10);
 * RANGE(vec, 2, 20, 2);
 * int a = IDATA(vec, 3);
 * PRINT(a);
 * // >> 8
 * @endcode
 */
#define IDATA(T, index) _Generic( (T), Char: char_vector_data, \
		                               UChar: uchar_vector_data, \
							           Short: short_vector_data, \
							           UShort: ushort_vector_data, \
									   Int: int_vector_data, \
							           UInt: uint_vector_data, \
									   LInt: long_vector_data, \
									   ULInt: ulong_vector_data, \
									   LLInt: llong_vector_data, \
									   ULLInt: ullong_vector_data, \
									   Flt: float_vector_data, \
						               Dble: double_vector_data, \
									   LDble: ldouble_vector_data, \
									   Bool: bool_vector_data, \
									   String: string_vector_data, \
									   ShortLL: short_list_data, \
									   UShortLL: ushort_list_data, \
									   IntLL: int_list_data, \
									   UIntLL: uint_list_data, \
									   LIntLL: long_list_data, \
									   ULIntLL: ulong_list_data, \
									   LLIntLL: llong_list_data, \
									   ULLIntLL: ullong_list_data, \
									   FltLL: float_list_data, \
									   DbleLL: double_list_data, \
									   LDbleLL: ldouble_list_data, \
									   CharLL: char_list_data, \
									   UCharLL: uchar_list_data, \
									   BoolLL: bool_list_data, \
									   StringLL: string_list_data)(&T, index)
// ==========================================================================================
// ==========================================================================================
// REPLACE_INDEX

/**
 * This macro will insert a range of values between start and end into a data
 * structure.
 *
 * /param T The data structure
 * /param start The start point
 * /param end The end point
 * /param The delta between data points
 *
 * @code
 * Int vec;
 * INIT_VECTOR(vec, 10);
 * int a[5] = {1, 2, 3, 4, 5};
 * INSERT(vec, a, 5, 0);
 * REPLACE_INDEX(vec, 10, 2);
 * PRINT(vec);
 * // >> [ 1, 2, 10, 4, 5 ]
 * @endcode
 */
#define REPLACE_INDEX(T, new_val, index) _Generic( (T), UChar: replace_uchar_vector_index, \
							                            Short: replace_short_vector_index, \
							                            UShort: replace_ushort_vector_index, \
									                    Int: replace_int_vector_index, \
							                            UInt: replace_uint_vector_index, \
									                    LInt: replace_long_vector_index, \
									                    ULInt: replace_ulong_vector_index, \
									                    LLInt: replace_llong_vector_index, \
									                    ULLInt: replace_ullong_vector_index, \
									                    Flt: replace_float_vector_index, \
						                                Dble: replace_double_vector_index, \
									                    LDble: replace_ldouble_vector_index, \
											            Char: replace_char_vector_index, \
											            Bool: replace_bool_vector_index, \
														ShortLL: replace_short_list_index, \
														UShortLL: replace_ushort_list_index, \
														IntLL: replace_int_list_index, \
														UIntLL: replace_uint_list_index, \
														LIntLL: replace_long_list_index, \
														ULIntLL: replace_ulong_list_index, \
														LLIntLL: replace_llong_list_index, \
														ULLIntLL: replace_ullong_list_index, \
														FltLL: replace_float_list_index, \
														DbleLL: replace_double_list_index, \
														LDbleLL: replace_ldouble_list_index, \
														CharLL: replace_char_list_index, \
                                                        UCharLL: replace_uchar_list_index, \
														BoolLL: replace_bool_list_index, \
														StringLL: replace_string_list_index)(&T, new_val, index)
// ==========================================================================================
// ==========================================================================================
// REPEAT MACRO

/**
 * This macro will insert a range of values between start and end into a data
 * structure.
 *
 * /param T The data structure
 * /param val The value to be repeats
 * /param num The number of times a value is repeats
 *
 * @code
 * Int vec;
 * INIT_VECTOR(vec, 10);
 * REPEAT(vec, 10, 5);
 * PRINT(vec);
 * // >> [ 10, 10, 10, 10, 10 ]
 * FREE(vec);
 * @endcode
 */
#define REPEAT(T, val, num) _Generic( (T), UChar: repeat_uchar_vector, \
							               Short: repeat_short_vector, \
							               UShort: repeat_ushort_vector, \
									       Int: repeat_int_vector, \
							               UInt: repeat_uint_vector, \
									       LInt: repeat_long_vector, \
									       ULInt: repeat_ulong_vector, \
									       LLInt: repeat_llong_vector, \
									       ULLInt: repeat_ullong_vector, \
									       Flt: repeat_float_vector, \
						                   Dble: repeat_double_vector, \
									       LDble: repeat_ldouble_vector, \
										   Char: repeat_char_vector, \
										   Bool: repeat_bool_vector, \
										   String: repeat_string_vector)(&T, val, num)
#endif /* data_structures_H */
// ==========================================================================================
// ==========================================================================================
// eof
