// ================================================================================
// ================================================================================
// - File:    str.h
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
//
//
// Add capability
// TODO develop an iterator
// TODO Add
// TODO Subtract
#if !defined(__GNUC__) && !defined(__clang__)
#error "This code is only compatible with GCC and Clang"
#endif

#if !defined(__STDC_VERSION__) || __STDC_VERSION__ < 201112L
#error "This code requires C11 or later."
#endif

#ifndef str_H
#define str_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "admin.h"

#ifdef __cplusplus
extern "C" {
#endif

// ==================================================================================
// ==================================================================================
// Create data type in pre-init methods

/**
 * @brief This struct acts as a container for string data types
 *
 * @attr ptr A pointer to the string array in memory
 * @attr len The length of the string
 * @attr is_dynamic true if the struct is dynamically allocated, false otherwise
 */
typedef struct
{
	char *ptr;
	size_t len;
	bool is_dynamic;
} str;
// ---------------------------------------------------------------------------------
// pre-instantiator

/**
 * @breif This Macro is a pre-instantiator for the str data type
 *
 *  @param var The varaible that will be assigned to the str implementation
 */
#define STR_NULL(var) (var) = { .ptr=NULL, .len=0, .is_dynamic=true }

// =================================================================================
// =================================================================================
// Functions and macros that help create and append strings

/**
 * @brief Creates a string literal of data type str that is not allocated on the heap
 *
 * @param s The C-style string literal to be inserted into the str struct
 */
#define str_lit(s) ((str){ .ptr=s, .len=sizeof(s) - 1, .is_dynamic=false } )
// ---------------------------------------------------------------------------------

/**
 * @brief Joins a struct of type str to another struct of type str
 *
 * @param str_struct1 A struct of type str
 * @param str_struct2 A string literal
 * @return returns a Success enum if function executes successfully,
 *         MemoryAllocationError otherwise.
 */
ErrorCodes join_str_struct(str* str_struct1, str str_struct2);
// ---------------------------------------------------------------------------------

/**
 * @brief Joins a struct of type str to a string literal
 *
 * @param str_struct A struct of type str
 * @param cstr A C-style string literal
 * @return returns a Success enum if function executes successfully,
 *         MemoryAllocationError otherwise.
 */
ErrorCodes join_cstr(str* str_struct, const char* cstr);
// ---------------------------------------------------------------------------------

/**
 * @brief A macro that envokes a _Generic operator to select the appropriate
 * function for executions.
 *
 * @param str_struct A struct of type str
 * @param cstr A c-style string literal or a struct of type str
 * @return returns a Success enum if function executes successfully,
 *         MemoryAllocationError otherwise.
 */
#define append_string(str_struct, cstr) _Generic((cstr), \
    str: join_str_struct, \
    default: join_cstr) (&str_struct, cstr)
// =================================================================================
// =================================================================================
// Replace strings

/**
 * @brief Replaces the content of a str variable with a C-style string.
 *
 * @param s Pointer to the str variable.
 * @param cstr Pointer to the C-style string.
 * @return returns a Success enum if function executes successfully,
 *         MemoryAllocationError otherwise.
 */
ErrorCodes replace_str_with_cstr(str* s, const char* cstr);

/**
 * @brief Replaces the content of one str variable with another str variable.
 *
 * @param dest Pointer to the destination str variable.
 * @param src The source str variable.
 * @return returns a Success enum if function executes successfully,
 *         MemoryAllocationError otherwise.
 */
ErrorCodes replace_str_with_str(str* dest, str src);
// ----------------------------------------------------------------------------------

/**
 * @brief A _Generic macro that will select between the appropriate functions
 *        that can repplace one string with another.
 *
 * @param str_struct A struct of type str
 * @param cstr A c-style string literal or a struct of type str
 * @return returns a Success enum if function executes successfully,
 *         MemoryAllocationError otherwise.
 */
#define replace_string(str_struct, value) _Generic((value), \
    str: replace_str_with_str, \
    default: replace_str_with_cstr) (&str_struct, value)
// =================================================================================
// =================================================================================
// Functions that act on strings

/**
 * @breif This function compares two strings and returns an integer based on the
 *        result of the comparison
 *
 * @param s1 A struct of type str
 * @param s2 A struct of type str
 * @returns 0 if strings are equal, >0 is first non-matching character in s1 is
 *          greater (in ASCII) than that of s2, or <0 if the first non-matching
 *          character in s1 is lower (in ASCII) than that of s2
 */
int compare_strings(const str s1, const str s2);
// =================================================================================
// =================================================================================
// Support functions

// Return pointer to the string content
/**
 * @breif A function that returns a pointer to a strings content
 *
 * @param s A struct of type str
 * @returns A pointer of type const char*
 */
static inline
const char* str_ptr(const str s)
{
	extern const char* const _empty_string;
	return s.ptr ? s.ptr : _empty_string;
}
// ---------------------------------------------------------------------------------

/**
 * @breif Returns a pointer to the end of the string
 *
 * @param s A struct of type str
 * @returns A pointer of type const char*
 */
static inline
const char* str_end(const str s)
{
	return str_ptr(s) + s.len;
}
// ---------------------------------------------------------------------------------

/**
 * @brief A function that determines if a string within a struct of type str
 *        is empty
 *
 * @param s A struct of type str
 * @return true if the string is empty, false otherwise
 */
static inline
bool str_is_empty(const str s)
{
	return s.len == 0;
}
// ---------------------------------------------------------------------------------

/**
 * @brief Function to manually free allocated memory when it is no longer in use
 *
 * @param s A struct of type str
 */
void free_string(str* s);
#define free_str(str_struct) _Generic((str_struct), \
    default: free_string) (&str_struct)
// ---------------------------------------------------------------------------------

/**
 * @brief A private-like function that is used to automate cleanup of memory
 *        after a str variable goes out of scope
 *
 * @param s A struct of type str
 */
void _str_free(str* s);
// ---------------------------------------------------------------------------------

/**
 * @breif A Macro to provide automated garbage collection and cleanup when a
 *        variable goes out of scope.  Only works on GCC and clang compilers
 *
 * @param var The variable name that will be collected and cleaned up
 */
#define CLEANUP_STR(var) var __attribute__((cleanup(_str_free))) = { .ptr=NULL, .len=0, .is_dynamic=true }
// ---------------------------------------------------------------------------------

/**
 * @brief A function to copy one block of memory from one location to another.
 * Written to mimic the behavior of memcpy in the string.h file
 *
 * @param dest Pointer to the destination array where the content is to be copied,
 *             and type casted to a pointer of type void*
 * @param src Pointer to the source of data to be copied, and type cased to a
 *            pointer of type const void*
 * @param n Number of bytes to copy
 * @returns true if function executes succesfully, false otherwis
 */
ErrorCodes copy_memory(str *dest, const str *src, size_t n);

#define copy_mem(str_struct1, str_struct2, n) _Generic((str_struct1), \
    default: copy_memory) (&str_struct1, &str_struct2, n)
// ---------------------------------------------------------------------------------

/**
 * @brief A function to copy n characters from src to destination, but for overlapping
 *        memory blocks, move_memory is a safer approach than copy_memory
 *
 * @param dest Pointer to the destination array where the content is to be copied,
 *             and type casted to a pointer of type void*
 * @param src Pointer to the source of data to be copied, and type cased to a
 *            pointer of type const void*
 * @param n Number of bytes to copy
 * @returns true if function executes sucesfully, false otherwise
 */
ErrorCodes move_memory(str *dest, const str *src, size_t n);

#define move_mem(str_struct1, str_struct2, n) _Generic((str_struct1), \
    default: move_memory) (&str_struct1, &str_struct2, n)
// ---------------------------------------------------------------------------------

/**
 * @brief looks for the last occurance of a char token and pop's the data following
 *        the token and passes it back to the user
 *
 * @param s A struct of type str
 * @param token A char* token that divides data to be popped
 */
str string_pop_token(str *s, char *token);
// ---------------------------------------------------------------------------------

/**
 * @brief Pops all characters that are n characters from the end of a string
 *
 * @param s A struct of type str
 * @param n An integer representing the slice where data will be popped.
 */
str string_pop_int(str *s, size_t n);
// ---------------------------------------------------------------------------------
/**
 * @brief looks for the last occurance of a char token and pop's the data following
 *        the token and passes it back to the user
 *
 * @param s A struct of type str
 * @param token A char token or integer that divides data to be popped
 */
#define string_pop(s, value) \
    _Generic((value), \
        int: string_pop_int, \
        char*: string_pop_token \
    )((&s), (value))
// =================================================================================
// =================================================================================

/**
 * @brief Function removes all data after a token from the string
 *
 * @param s A struct of type str
 * @param token A char* token
 */
ErrorCodes remove_string_token(str* s, char *token);
// ---------------------------------------------------------------------------------

/**
 * @brief Function to remove all data after a pointer to an integer value
 *
 * @param s A struct of type str
 * @param n An integer
 */
ErrorCodes remove_string_n(str* s, int n);

#define remove_string_after(s, value) \
    _Generic((value), \
        int: remove_string_n, \
        char*: remove_string_token \
    )((&s), (value))
// =================================================================================
// =================================================================================

/**
 * @brief This function will resize the memory allocation to a str struct to
 *        the minimum necessary memory to contain the string
 *
 * @param str_struct A struct of type str
 * @returns An error code of Success or MemoryAllocationError
 */
ErrorCodes resize_string(str *str_struct);

#define resize_str(str) _Generic((str), default: resize_string)((&str))
// =================================================================================
// =================================================================================
// Implement functions similar to those in string.h for standard strings

/**
 * @breif A local version of the memcpy function used in the string.h library.
 *        This function determines the length of a string literal up to the
 *        null terminator
 *
 * @param str A string literal
 */
size_t literal_strlen(const char* str);
// ---------------------------------------------------------------------------------

/**
 * @brief A local version of the memcpy function used in the string.h library.
 *        This function copies memory from one location to another.
 *
 * @param dest A pointer to where the data will be copied
 * @param src A pointer to the location where memory will be copied from
 * @param n The number of bytest to be copied from src to dest
 */
void* literal_memcpy(void* dest, const void* src, size_t n) __attribute__((hot));
// ---------------------------------------------------------------------------------

/**
 * @brief A local version of the memcpy function used in the string.h library.
 *        This function copies memory from one location to another. Safer than
 *        literal_memcpy for scenarios with overlapping memory.
 *
 * @param dest A pointer to where the data will be copied
 * @param src A pointer to the location where memory will be copied from
 * @param n The number of bytest to be copied from src to dest
 */
void* literal_memmove(void* dest, const void* src, size_t n) __attribute__((hot));
// ---------------------------------------------------------------------------------

/**
 * @brief A local version of the strrchar function from the string.h library. This
 *        function will determine the last location of an occurance in a string and
 *        pass a pointer to that location back to the user.
 *
 * @param s A string literal
 * @param c An integer representation of a character.  This will be converted back
 *          into a char in the function
 */
char* last_token_occurance(const char *s, int c);
// =================================================================================
// =================================================================================
#ifdef __cplusplus
}
#endif /* __cplusplus*/

#endif /* str_H */
// ================================================================================
// ================================================================================
// eof
