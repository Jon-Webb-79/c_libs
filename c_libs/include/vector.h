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

#define init_vector(TYPE)														\
typedef struct																	\
{																				\
	TYPE *vector;																\
	size_t active_length;														\
	size_t allocated_length;													\
	size_t num_bytes;															\
} TYPE##Vector;																	\
																				\
TYPE##Vector init_##TYPE##_vector(size_t num_indices)							\
{																				\
	TYPE##Vector vec;															\
	TYPE *pointer = (TYPE *)malloc(num_indices * sizeof(TYPE));					\
	if (pointer == NULL) {														\
		perror("WARNING ");														\
		free(pointer);															\
		exit(0);																\
	}																			\
	vec.num_bytes = sizeof(TYPE);												\
	vec.active_length = 0;														\
	vec.allocated_length = num_indices;											\
	vec.vector = pointer;														\
	return vec;																	\
}																				\
																				\
void push_##TYPE##_vector(TYPE##Vector *vec, TYPE *elements, size_t num_indices)	\
{																					\
	if (vec->active_length + num_indices > vec->allocated_length) {					\
		size_t size = (vec->active_length + num_indices) * 2;						\
		TYPE *pointer = (TYPE *)realloc(vec->vector, size * vec->num_bytes);		\
		if (pointer == NULL) {														\
			perror("WARNING ");														\
			free(pointer);															\
			exit(0);																\
		}																			\
		vec->vector = pointer;														\
		vec->allocated_length = size;												\
	}																				\
	memcpy((char *)vec->vector + vec->active_length * vec->num_bytes, elements,		\
			num_indices * vec->num_bytes);											\
	vec->active_length += num_indices;												\
}																					\
																				\
void free_##TYPE##_vector(TYPE##Vector *vec)									\
{																				\
	free(vec->vector);															\
	vec->active_length = 0;														\
	vec->allocated_length = 0;													\
	vec->num_bytes = 0;															\
}																				\
																				\
int insert_##TYPE##_vector(TYPE##Vector *vec, TYPE *elements, size_t num_indices,	\
		                    size_t index)											\
{																					\
	if (index > vec->active_length) {												\
		printf("WARNING: The selected index is larger than the active length\n");	\
		return -1;																	\
	}																				\
	if (vec->active_length + num_indices > vec->allocated_length) {					\
		size_t size = (vec->active_length + num_indices) * 2;						\
		TYPE *pointer = (TYPE *)realloc(vec->vector, size * vec->num_bytes);		\
		if (pointer == NULL) {														\
			perror("WARNING ");														\
			free(pointer);															\
			exit(0);																\
		}																			\
		vec->vector = pointer;														\
		vec->allocated_length = size;												\
	}																				\
	memmove(((char *)vec->vector) + (num_indices + index) * vec->num_bytes,		\
			((char *)vec->vector) + index * vec->num_bytes,							\
			(vec->active_length - index) * vec->num_bytes);							\
	memcpy(((char *)vec->vector) + index * vec->num_bytes, elements,				\
			num_indices * vec->num_bytes);											\
	vec->active_length += num_indices;												\
	return 1;																		\
}																					\
																					\
int pop_##TYPE##_vector(TYPE##Vector *vec, size_t index)						\
{																				\
	if(index >= vec->active_length) {											\
		printf("Index %ld out of the active_bounds for pop\n");					\
		return -1;																\
	}																			\
	unsigned char *dst = (unsigned char *)vec->vector + index * vec->num_bytes;	\
	memmove(dst, dst + vec->num_bytes,											\
			vec->num_bytes * (vec->allocated_length - index - 1));				\
	vec->active_length -= 1;													\
	return 1;																	\
}
// ================================================================================
// ================================================================================
#endif /* vector_H */
// eof
