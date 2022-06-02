// ================================================================================
// ================================================================================
// - File:    array.c
// - Purpose: THis file contains all functions necessary to manipulate C arrays
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    May 17, 2022
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// Include modules here

#include "array.h"

// Begin code

int pop_array(void *array, int index, int size, int type) {
	if (index >= size) return 0;
	unsigned char *dst = (unsigned char*)array + (index * type);
	memmove(dst, dst + type, type * (size - index - 1));
	return 1;
}
// --------------------------------------------------------------------------------

void append_array(void *parent_array, int len, void *child_array,
		          size_t count, int type) {
	memcpy((char *)parent_array + len * type, child_array, count * type);
}
// --------------------------------------------------------------------------------

void preappend_array(void *parent_array, int len, void *child_array,
		             size_t count, int type) {
	// Preappend variables and increment the array length
    memmove(
    ((char *) parent_array) + count * type, parent_array, len * type);
    memcpy(parent_array, child_array, count * type);
}
// ================================================================================
// ================================================================================
// eof
