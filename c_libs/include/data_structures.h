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
														 Bool: insert_bool_vector)(&T, elements, num_ind, index)
#endif /* data_structures_H */
// ================================================================================
// ================================================================================
// eof
