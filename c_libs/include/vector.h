// ================================================================================
// ================================================================================
// - File:    vector.h
// - Purpose: This file contains the prototypes, structures, and enums used
//            in vector.c
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    June 06, 2022
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// VECTOR IMPLEMENTATION

#ifndef vector_H
#define vector_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 * \def init_vector(TYPE)
 * \param TYPE The data type
 */
#define init_vector(TYPE)														\
																				\
/**																				\
 * A collection of human readable integer representations that					\
 * describe how memory is allocated for the vector or array						\
 *																				\
 * \param TYPE##DYNAMIC An integer representing a heap allocation				\
 * \param TYPE##STATIC An integer representing a stack allocation				\
 */																				\
typedef enum																	\
{																				\
	TYPE##DYNAMIC,																\
	TYPE##STATIC																\
} TYPE##mem_type;																\
																				\
/**																				\
 * A container of array or vector attributes to include a pointer to the		\
 * array or vector.																\
 *																				\
 * \param vector A pointer to the array or vector								\
 * \param active_length The number of indices actively populated with data		\
 * \param allocated_length The number of indices allocated in memory			\
 * \param max maximum															\
 * \param min minimum															\
 * \param memory An enum describing memory allocation							\
 */																				\
typedef struct																	\
{																				\
	TYPE *vector;																\
	size_t active_length;														\
	size_t allocated_length;													\
	TYPE##mem_type memory;														\
} TYPE##Vector;																	\
																				\
/**																				\
 * This function will initialize a vector or container to the data type			\
 * of the users choosing.														\
 *																				\
 * \param num_indices A guess for the number of indices consumed by				\
 *                    the vector												\
 * \return TYPE##Vec A Vector struct container									\
 *																				\
 * @code																		\
 * init_vector(int);																\
 * intVector vec = init_int_vector(20);											\
 * @endcode																		\
 */																				\
TYPE##Vector init_##TYPE##_vector(size_t num_indices)							\
{																				\
	TYPE##Vector vec;															\
	TYPE *pointer = (TYPE *)malloc(num_indices * sizeof(TYPE));					\
	if (pointer == NULL) {														\
		perror("FATAL ERROR ");													\
		printf("Failure on file=%s, line=%d)", __FILE__, __LINE__);				\
		free(pointer);															\
		exit(0);																\
	}																			\
	vec.active_length = 0;														\
	vec.allocated_length = num_indices;											\
	vec.vector = pointer;														\
	vec.memory = TYPE##DYNAMIC;													\
	return vec;																	\
}																				\
																				\
/**																				\
 * This function will allow a user to push a scalar variable or array           \
 * of data to the end of the vector in the container.							\
 *																				\
 * \param vec The Vector or Array struct container								\
 * \param elements A scalar or array of data to be pushed						\
 * \param num_indices The number of indices ocupied by the data in elements		\
 * \returns 1 if the function executes sucessfully, 0 if it does not			\
 *																				\
 * @code																		\
 * init_vector(int);															\
 * intVector vec = init_int_vector(20);											\
 * int a[5] = {1, 2, 3, 4, 5};													\
 * push_int_vector(&vec, a, 5);													\
 * int b = 12;																	\
 * push_int_vector(&vec, &b, 1);												\
 * for (size_t i = 0; i < vec->active_length; i++) {							\
 *     printf("%d\n", vec.vector[i]);											\
 *  }																			\
 * free_int_vector(&vec);														\
 * // >> 1, 2, 3, 4, 5, 12														\
 * @endcode																		\
 */																				\
int push_##TYPE##_vector(TYPE##Vector *vec, TYPE *elements, size_t num_indices)		\
{																					\
	if (vec->memory != TYPE##DYNAMIC) {												\
		printf("WARNING: Memory must be dynamic\n");								\
		return 0;																	\
	}																				\
	if (vec->active_length + num_indices > vec->allocated_length) {					\
		size_t size = (vec->active_length + num_indices) * 2;						\
		TYPE *pointer = (TYPE *)realloc(vec->vector, size * sizeof(TYPE));			\
		if (pointer == NULL) {														\
			perror("WARNING ");														\
			printf("Failure on file=%s, line=%d)", __FILE__, __LINE__);				\
			free(pointer);															\
			return 0;																\
		}																			\
		vec->vector = pointer;														\
		vec->allocated_length = size;												\
	}																				\
	memcpy((char *)vec->vector + vec->active_length * sizeof(TYPE), elements,		\
			num_indices * sizeof(TYPE));											\
	vec->active_length += num_indices;												\
	return 1;																		\
}																					\
																					\
/**																					\
 * This function will free all memory associated with a Vector container			\
 *																					\
 * \param vec A Vector struct container												\
 */																					\
void free_##TYPE##_vector(TYPE##Vector *vec)									\
{																				\
	free(vec->vector);															\
	vec->active_length = 0;														\
	vec->allocated_length = 0;													\
}																				\
																				\
/**																				\
 * This function will insert a scalar variable or an array of data to a			\
 * vector or array within a Vector container.									\
 *																				\
 * \param vec A Vector container												\
 * \param elements A scalar variable or array of variables						\
 * \param num_indices The number of indices consumed by the data in elements	\
 * \param index The index where data will be inserted							\
 * \return 1 if function executes sucessfully, 0 if not							\
 *																				\
 * @code																		\
 * init_vector(float);															\
 * floatVector vec = init_float_vector(5);										\
 * float a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};										\
 * push_float_vector(&vec, a, 5);												\
 * float b[2] = {2.5, 7.2};														\
 * insert_float_vector(&vec, b, 2, 2};											\
 * for (size_t i = 0; i < active_length; i++) {									\
 *     printf("%d\n", vec.vector]i]);											\
 * }																			\
 * // >> 1.1, 2.2, 2.5, 7.2, 3.3, 4.4, 5.5										\
 * @endcode																		\
 */																				\
int insert_##TYPE##_vector(TYPE##Vector *vec, TYPE *elements, size_t num_indices,	\
		                    size_t index)											\
{																					\
	if (vec->memory != TYPE##DYNAMIC) {												\
		printf("WARNING: Memory must be dynamic\n");								\
		return 0;																	\
	}																				\
	if (index > vec->active_length) {												\
		printf("WARNING: The selected index is larger than the active length\n");	\
		return 0;																	\
	}																				\
	if (vec->active_length + num_indices > vec->allocated_length) {					\
		size_t size = (vec->active_length + num_indices) * 2;						\
		TYPE *pointer = (TYPE *)realloc(vec->vector, size * sizeof(TYPE));			\
		if (pointer == NULL) {														\
			perror("WARNING ");														\
			printf("Failure on file=%s, line=%d)", __FILE__, __LINE__);				\
			free(pointer);															\
			return 0;																\
		}																			\
		vec->vector = pointer;														\
		vec->allocated_length = size;												\
	}																				\
	memmove(((char *)vec->vector) + (num_indices + index) * sizeof(TYPE),			\
			((char *)vec->vector) + index * sizeof(TYPE),							\
			(vec->active_length - index) * sizeof(TYPE));							\
	memcpy(((char *)vec->vector) + index * sizeof(TYPE), elements,					\
			num_indices * sizeof(TYPE));											\
	vec->active_length += num_indices;												\
	return 1;																		\
}																					\
																					\
/**																					\
 * This function will pop a variable from a user defined index within a vector		\
 * or array container																\
 *																					\
 * \param vec An array or vector container											\
 * \param index The index that will be popped										\
 * \return 1 if function executes successfully, 0 if not							\
 *																					\
 * @code																			\
 * int a[5] = {1, 2, 3, 4, 5}														\
 * intVector vec = init_int_vec(5);													\
 * push_int_vector(&vec, a, 5);														\
 * pop_int_vector(&vec, 1);															\
 * for (size_t i = 0; i < i < vec.active_length; i++) {								\
 *     printf("%d\n", vec.vector[i]);												\
 *  }																				\
 * // >> 1, 3, 4, 5																	\
 * free_int_vector(&vec);															\
 * @endcode																			\
 */																					\
int pop_##TYPE##_vector(TYPE##Vector *vec, size_t index)						\
{																				\
	if(index >= vec->active_length) {											\
		printf("Index %ld out of the active_bounds for pop\n");					\
		return 0;																\
	}																			\
	unsigned char *dst = (unsigned char *)vec->vector + index * sizeof(TYPE);	\
	memmove(dst, dst + sizeof(TYPE),											\
			sizeof(TYPE) * (vec->allocated_length - index - 1));				\
	vec->active_length -= 1;													\
	return 1;																	\
}																				\
																				\
/**																				\
 * This function will delete a user specified value from a vector or array.		\
 * All instances of the variable will be deleted from the array					\
 *																				\
 * \param vec An array or vector container										\
 * \param value The scalar or array of data to be deleted						\
 * \param num_indies The number of indices in value								\
 *																				\
 * @code																		\
 * int a[5] = {1, 1,  2, 1, 3, 4, 5};											\
 * intVector vec init_int_vector(5);											\
 * push_int_vector(&vec, a, 5);													\
 * delete_int_vector_values(&vec, 1, 1)											\
 * for (size_t i = 0; i < vec.active_length; i++) {								\
 *     printf("%d\n", vec.vector[i]);											\
 *  }																			\
 * // >> 2, 3, 4, 5																\
 * int b[5] = {1, 1,  2, 1, 3, 4, 5};											\
 * intVector vec init_int_vector(5);											\
 * push_int_vector(&vec, b, 5);													\
 * int c[2] = {1, 3};															\
 * delete_int_vector_values(&vec, c, 2)											\
 * for (size_t i = 0; i < vec.active_length; i++) {								\
 *     printf("%d\n", vec.vector[i]);											\
 *  }																			\
 * // >> 2, 4, 5																\
 * @endcode																		\
 */																				\
void delete_##TYPE##_vector_values(TYPE##Vector *vec, TYPE *value,				\
		                           size_t num_indices)							\
{																				\
	for (size_t i = 0; ; i++) {													\
		if (i >= vec->active_length) break;										\
		for (size_t j = 0; j < num_indices; j++) {								\
			if (vec->vector[i] == value[j]) {									\
				pop_##TYPE##_vector(vec, i);									\
				i -= 1;															\
			}																	\
		}																		\
	}																			\
}																				\
																				\
/**																				\
 * This function will replace the variable at a specific index with another		\
 * value																		\
 *																				\
 * \param vec An vector or array												\
 * \param length The length of the vector or array								\
 * \param index The index where data will be replaced							\
 * \param replacement_value The new value to be placed in index					\
 *																				\
 * @code																		\
 * int a[6] = {1, 2, 1, 3, 4, 5}												\
 * intVector vec = init_int_vector(6);											\
 * push_int_vector(&vec, a, 6);													\
 * replace_int_vector_index(vec.vector, vec.active_length, 1, 3);				\
 * for (size_t i = 0; i < vec.active_length, i++) {								\
 *     printf("%d\n", vec.vector[i]);											\
 * }																			\
 * // >> 1, 3, 1, 3, 4, 5														\
 * @endcode																		\
 */																				\
int replace_##TYPE##_vector_index(TYPE *vec, size_t length, size_t index,		\
		                          TYPE replacement_value)						\
{																				\
	if (index > length || index < 0) {											\
		printf("WARNING: Failure on file=%s, line=%d)", __FILE__, __LINE__);	\
		return 0;																\
	}																			\
	vec[index] = replacement_value;												\
	return 1;																	\
}																				\
																				\
/**																				\
 * This function will replace all insances of a specific value in an array		\
 * or vector with another value													\
 *																				\
 * \param vec An array or vector												\
 * \param length The length of the array or vector								\
 * \param old_value The value to be replaced									\
 * \param new_value The value that will replace the old value					\
 *																				\
 * @code																		\
 * float a[5] = {1.1, 3.4, 1.1, 4.8, 2.1};										\
 * floatVector vec = init_float_vector(5);										\
 * push_float_vector(&vec, a, 5);												\
 * replace_float_vector_values(vec.vector, vec.active_length, 1.1f, 2.2f);		\
 * for (size_t i = 0; i < vec.active_length; i++) {								\
 *     printf("%f\n", vec.vector[i]);											\
 * }																			\
 * // >> 2.2, 3.4, 2.2, 4.8, 2.1												\
 * @endcode																		\
 */																				\
void replace_##TYPE##_vector_values(TYPE *vec, size_t length, TYPE old_value,   \
		                            TYPE new_value)								\
{																				\
	for (size_t i = 0; i < length; i++) {										\
		if (vec[i] == old_value) vec[i] = new_value;							\
	}																			\
}																				\
																				\
/**																				\
 * This function will delete all duplicate values from an array					\
 *																				\
 * \param vec A Vector or Array container										\
 *																				\
 * @code																		\
 * float a[5] = {1.1, 2.2, 1.1, 3.3, 4.4};										\
 * floatVector vec = init_float_vector(5);										\
 * push_float_vector(&vec, a, 5);												\
 * delete_float_vector_duplicates(&vec)											\
 * for (size_t i = 0; i < vec.active_length; i++) {								\
 *     printf("%f\n", vec.vector[i]);											\
 * }																			\
 * // >> 1.1, 2.2, 3.3, 4.4														\
 * @endcode																		\
 */																				\
void delete_##TYPE##_vector_duplicates(TYPE##Vector *vec)						\
{																				\
	for (size_t i = 0; i < vec->active_length - 1; i++) {						\
		for (size_t j = i + 1; j < vec->active_length; j++) {					\
			if (vec->vector[i] == vec->vector[j]) {								\
				pop_##TYPE##_vector(vec, j);									\
				j -= 1;															\
			}																	\
		}																		\
	}																			\
}
// ================================================================================
// ================================================================================
#endif /* vector_H */
// eof
