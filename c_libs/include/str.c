// ================================================================================
// ================================================================================
// - File:    str.c
// - Purpose: Describe the file purpose here
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    September 29, 2023
// - Version: 1.0
// - Copyright: Copyright 2023, Jon Webb Inc.
// ================================================================================
// ================================================================================
// Include modules here

#include "str.h"
// ================================================================================
// ================================================================================
// Functions to build strings

bool join_cstr(str* str_struct, const char* cstr) {
    // Calculate the length of the C-string
    size_t cstr_len = literal_strlen(cstr);

    // Calculate the new length of the string
    size_t new_len = str_struct->len + cstr_len;

    // Allocate memory for the new string
    char* new_ptr = (char*) malloc(new_len + 1);
    if (!new_ptr) {
        fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
        return false;
    }

    // Copy the contents of the original string and C-string into the new string
    if(str_struct->ptr) literal_memcpy(new_ptr, str_struct->ptr, str_struct->len);
    literal_memcpy(new_ptr + str_struct->len, cstr, cstr_len);

    // Null-termiate the new string
    new_ptr[new_len] = '\0';

    // Free the memory of the original string in s, if it is not NULL
    if(str_struct->ptr) free(str_struct->ptr);

    // Update the pointer and length of s
    str_struct->ptr = new_ptr;
    str_struct->len = new_len;
    return true;
}
// ---------------------------------------------------------------------------------

bool join_str_struct(str* str_struct1, str str_struct2) {
    // Calculate the new length of the string
    size_t new_len = str_struct1->len + str_struct2.len; // Removed right shift

    // Allocate memory for the new string
    char* new_ptr = (char*) malloc(new_len + 1);
    if (!new_ptr) {
        fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
        return false;
    }

    // Copy the contents of the original strings into the new string
    if(str_struct1->ptr) literal_memcpy(new_ptr, str_struct1->ptr, str_struct1->len);
    literal_memcpy(new_ptr + str_struct1->len, str_struct2.ptr, str_struct2.len);

    // Null-terminate the new string
    new_ptr[new_len] = '\0';

    // Free the memory of the original string in s1, if it is not NULL
    if(str_struct1->ptr) free(str_struct1->ptr);

    // Update the pointer and length of s1
    str_struct1->ptr = new_ptr;
    str_struct1->len = new_len; // Removed left shift
    return true;
}
// ================================================================================
// ================================================================================

bool replace_str_with_cstr(str* str_struct, const char* cstr) {
    // First, free the existing memory if any
    free_string(str_struct);

    // Now allocate memory for the new content and copy it
    size_t len = literal_strlen(cstr);
    str_struct->ptr = (char*) malloc(len + 1);
    if (!str_struct->ptr) {
        return false; // Memory allocation failure
    }
    literal_memcpy(str_struct->ptr, cstr, len);
    str_struct->ptr[len] = '\0';
    str_struct->len = len;
    return true;
}
// ---------------------------------------------------------------------------------

bool replace_str_with_str(str* dest, str src) {
    // First, free the existing memory of the destination
    free_string(dest);

    // Now allocate memory for the new content and copy it
    dest->ptr = (char*) malloc(src.len + 1);
    if (!dest->ptr) {
        return false; // Memory allocation failure
    }
    literal_memcpy(dest->ptr, src.ptr, src.len);
    dest->ptr[src.len] = '\0';
    dest->len = src.len;
    return true;
}
// ================================================================================
// ================================================================================
// Functions that act on strings

int _custom_strncmp(const char *s1, const char *s2, size_t n) {
    while (n--) {
        if (*s1 != *s2) {
            return *(unsigned char *)s1 - *(unsigned char *)s2;
        }
        if (*s1 == '\0') {
            return 0;
        }
        s1++;
        s2++;
    }
    return 0;
}
// --------------------------------------------------------------------------------

int compare_strings(const str s1, const str s2) {
    size_t min_len = s1.len < s2.len ? s1.len : s2.len;

    int result = _custom_strncmp(s1.ptr, s2.ptr, min_len);

    if (result == 0) {
        if (s1.len < s2.len) {
            return -1;
        } else if (s1.len > s2.len) {
            return 1;
        }
    }
    return result;
}
// ================================================================================
// ================================================================================
// Support functions

void free_string(str* s)
{
	if(s->ptr)
		free(s->ptr);
    s->ptr = NULL;
    s->len = 0;
}

// Automatic cleanup for str_auto macro
void _str_free(str* s)
{
	if(s)
		free_string(s);
}
// --------------------------------------------------------------------------------

bool copy_memory(str *dest, const str *src, size_t n) {
    if (src->ptr == NULL || n == 0) {
        dest->ptr = NULL;
        dest->len = 0;
        return false;
    }

    if (n > src->len) {
		fprintf(stderr, "Cannot move memory greater than string length\n");
        return false;
    }

    dest->ptr = malloc(n + 1);
    if (dest->ptr == NULL) {
        fprintf(stderr, "Failed to allocate memory.\n");
        return false;
    }

    literal_memcpy(dest->ptr, src->ptr, n);
    dest->ptr[n] = '\0';  // Null-terminate the copied string
    dest->len = n;
	return true;
}

// --------------------------------------------------------------------------------

bool move_memory(str *dest, const str *src, size_t n) {
    if (src->ptr == NULL || n == 0) {
        dest->ptr = NULL;
        dest->len = 0;
        return true;
    }

    if (n > src->len) {
		fprintf(stderr, "Cannot move memory greater than string length\n");
        return false; // Return false if n exceeds the source string's length
    }

    dest->ptr = malloc(n + 1);
    if (dest->ptr == NULL) {
        fprintf(stderr, "Failed to allocate memory.\n");
        return false;
    }

    literal_memmove(dest->ptr, src->ptr, n);
    dest->ptr[n] = '\0';  // Null-terminate the moved string
    dest->len = n;

    return true;
}
// ================================================================================
// ================================================================================

size_t literal_strlen(const char* str) {
    const char* s = str;
    while (*s) {
        ++s;
    }
    return s - str;
}
// --------------------------------------------------------------------------------
void* literal_memcpy(void* dest, const void* src, size_t n) {
    unsigned char* d = dest;
    const unsigned char* s = src;

    while (n--) {
        *d++ = *s++;
    }

    return dest;
}
// --------------------------------------------------------------------------------

void* literal_memmove(void* dest, const void* src, size_t n) {
    unsigned char* d = dest;
    const unsigned char* s = src;

    // Check if the source and destination regions overlap
    if (d < s || d >= (s + n)) {
        // If not overlapping, we can use our custom_memcpy logic
        while (n--) {
            *d++ = *s++;
        }
    } else {
        // If overlapping, adjust pointers and copy from end to start
        d += n;
        s += n;
        while (n--) {
            *(--d) = *(--s);
        }
    }
    return dest;
}
// ================================================================================
// ================================================================================
// eof
