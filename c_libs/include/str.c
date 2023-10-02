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

ErrorCodes join_cstr(str* str_struct, const char* cstr) {
    // Calculate the length of the C-string
    size_t cstr_len = literal_strlen(cstr);

    // Calculate the new length of the string
    size_t new_len = str_struct->len + cstr_len;

    // Allocate memory for the new string
    char* new_ptr = (char*) malloc(new_len + 1);
    if (!new_ptr) {
        return MemoryAllocationError;
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
    return Success;
}
// ---------------------------------------------------------------------------------

ErrorCodes join_str_struct(str* str_struct1, str str_struct2) {
    // Calculate the new length of the string
    size_t new_len = str_struct1->len + str_struct2.len; // Removed right shift

    // Allocate memory for the new string
    char* new_ptr = (char*) malloc(new_len + 1);
    if (!new_ptr) {
        return MemoryAllocationError;
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
    return Success;
}
// ================================================================================
// ================================================================================

ErrorCodes replace_str_with_cstr(str* str_struct, const char* cstr) {
    size_t len = literal_strlen(cstr);
    char* new_ptr = (char*) malloc(len + 1);  // Allocate memory for the new string
    if (!new_ptr) {
        return MemoryAllocationError;  // Memory allocation failure
    }
    literal_memcpy(new_ptr, cstr, len);       // Copy the C string to the newly allocated memory
    new_ptr[len] = '\0';                      // Null-terminate the string

    // Now, free the existing memory if any
    free(str_struct->ptr);

    // Assign the new pointers and length to the structure
    str_struct->ptr = new_ptr;
    str_struct->len = len;
    return Success;
}
// ---------------------------------------------------------------------------------

ErrorCodes replace_str_with_str(str* dest, str src) {
    // Allocate memory for the new content
    char* new_ptr = (char*) malloc(src.len + 1);
    if (!new_ptr) {
        return MemoryAllocationError;  // Memory allocation failure
    }

    // Copy the content from the source string to the newly allocated memory
    literal_memcpy(new_ptr, src.ptr, src.len);
    new_ptr[src.len] = '\0';  // Null-terminate the string

    // Free the existing memory of the destination
    free(dest->ptr);

    // Assign the new pointers and length to the destination structure
    dest->ptr = new_ptr;
    dest->len = src.len;
    return Success;
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
// --------------------------------------------------------------------------------

char* last_token_occurance(const char* s, int c) {
	// strrchr
    const char* last_occurrence = NULL;

    while (*s) {
        if (*s == (char)c) {
            last_occurrence = s;
        }
        s++;
    }
    return (char*) last_occurrence;  // Casting away the const, as strrchr returns a non-const pointer
}
// ================================================================================
// ================================================================================
// Support functions

void free_string(str* s)
{
	if(s->ptr && s->is_dynamic)
		free(s->ptr);
    s->ptr = NULL;
    s->len = 0;
	s->is_dynamic=false;
}

// Automatic cleanup for str_auto macro
void _str_free(str* s)
{
	if(s)
		free_string(s);
}
// --------------------------------------------------------------------------------

ErrorCodes copy_memory(str *dest, const str *src, size_t n) {
    if (src->ptr == NULL || n == 0) {
        dest->ptr = NULL;
        dest->len = 0;
        return NullStrError;
    }

    if (n > src->len) {
        return OutOfBoundsError;
    }

    dest->ptr = malloc(n + 1);
    if (dest->ptr == NULL) {
        return MemoryAllocationError;
    }

    literal_memcpy(dest->ptr, src->ptr, n);
    dest->ptr[n] = '\0';  // Null-terminate the copied string
    dest->len = n;
	return Success;
}

// --------------------------------------------------------------------------------

ErrorCodes move_memory(str *dest, const str *src, size_t n) {
    if (src->ptr == NULL || n == 0) {
        dest->ptr = NULL;
        dest->len = 0;
        return NullStrError;
    }

    if (n > src->len) {
        return OutOfBoundsError; // Return false if n exceeds the source string's length
    }

    dest->ptr = malloc(n + 1);
    if (dest->ptr == NULL) {
        return MemoryAllocationError;
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
// --------------------------------------------------------------------------------

str string_pop_token(str* s, char *token) {
	str STR_NULL(result);
    char* last_occurrence = last_token_occurance(s->ptr, *token);
    if (last_occurrence) {
        result.len = s->len - (last_occurrence - s->ptr) - 1;
        result.ptr = malloc(result.len + 1); // +1 for null terminator
        if (result.ptr) {
            literal_memcpy(result.ptr, last_occurrence + 1, result.len);
            result.ptr[result.len] = '\0'; // null-terminate
            *last_occurrence = '\0'; // Remove token and everything after from original string
            s->len -= result.len + 1; // Update the length of the original string
        }
    } else {
        result.ptr = s->ptr;
        result.len = s->len;
        s->ptr = NULL;
        s->len = 0;
    }

    return result;
}
// --------------------------------------------------------------------------------

str string_pop_int(str* s, size_t n) {
    str STR_NULL(result);

    if (n <= 0) {
        return result; // Return an empty string if n is non-positive
    }

    if (n >= s->len) {
        result.ptr = s->ptr;
        result.len = s->len;
        s->ptr = NULL;
        s->len = 0;
    } else {
        result.len = n;
        result.ptr = malloc(result.len + 1); // +1 for null terminator
        if (result.ptr) {
            // Copy the last n characters from the original string
            literal_memcpy(result.ptr, s->ptr + s->len - n, result.len);
            result.ptr[result.len] = '\0'; // null-terminate

            // Truncate the original string by updating its null terminator and length
            s->ptr[s->len - n] = '\0';
            s->len -= n;
        }
    }
    return result;
}
// =================================================================================
// =================================================================================

ErrorCodes remove_string_token(str* s, char *token) {
    char* last_occurrence = last_token_occurance(s->ptr, *token);
    if (last_occurrence) {
        *last_occurrence = '\0';  // null-terminate at the token's location
        s->len = last_occurrence - s->ptr;  // update the length
    }
    // If the token is not found, we do nothing.
	return Success;
}
// ---------------------------------------------------------------------------------

ErrorCodes remove_string_n(str* s, int n) {
    if (n <= 0) {
        return OutOfBoundsError; // No characters to remove.
    }

    if (n >= s->len) {
        s->ptr[0] = '\0'; // If n is greater than or equal to string length, clear the entire string.
        s->len = 0;
    } else {
        s->ptr[s->len - n] = '\0';  // null-terminate `n` characters before the end.
        s->len -= n;  // update the length
    }
	return Success;
}
// =================================================================================
// =================================================================================

ErrorCodes resize_string(str *str_struct) {
    // Ensure the string is dynamically allocated
    if (str_struct->ptr && str_struct->is_dynamic) {
        char *new_ptr = realloc(str_struct->ptr, str_struct->len + 1); // +1 for null-terminator
        if (!new_ptr) {
            // Memory allocation failed
            return MemoryAllocationError;
        }
        str_struct->ptr = new_ptr;
    }
    return Success;
}
// ================================================================================
// ================================================================================
// eof
