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
// Copy as is from string.h
// TODO strchr
// TODO strstr
// TODO strspn
// TODO strcspn
//
// Replace from string.h
// TODO strcpy
// TODO strcat
// TODO strncpy
// TODO strncat
//
// Add capability
// TODO string_replace
// TODO string_pop
#if !defined(__GNUC__) && !defined(__clang__)
#error "This code is only compatible with GCC and Clang"
#endif

#ifndef str_H
#define str_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
 */
typedef struct
{
	char *ptr;
	size_t len;
} str;
// ---------------------------------------------------------------------------------
// pre-instantiator

/**
 * @breif This Macro is a pre-instantiator for the str data type
 *
 *  @param var The varaible that will be assigned to the str implementation
 */
#define STR_NULL(var) (var) = { .ptr=NULL, .len=0 }

// =================================================================================
// =================================================================================
// Functions and macros that help create and append strings

/**
 * @brief Creates a string literal of data type str that is not allocated on the heap
 *
 * @param s The C-style string literal to be inserted into the str struct
 */
#define str_lit(s) ((str){ .ptr=s, .len=sizeof(s) - 1 })
// ---------------------------------------------------------------------------------

/**
 * @brief Joins a struct of type str to another struct of type str
 *
 * @param str_struct1 A struct of type str
 * @param str_struct2 A string literal
 * @return true if the function executes succesfully, false otherwhise with a
 *         a message to stderr*
 */
bool join_str_struct(str* str_struct1, str str_struct2);
// ---------------------------------------------------------------------------------

/**
 * @brief Joins a struct of type str to a string literal
 *
 * @param str_struct A struct of type str
 * @param cstr A C-style string literal
 * @return true if the function executes succesfully, false otherwhise with a
 *         a message to stderr
 */
bool join_cstr(str* str_struct, const char* cstr);
// ---------------------------------------------------------------------------------

/**
 * @brief A macro that envokes a _Generic operator to select the appropriate
 * function for executions.
 *
 * @param str_struct A struct of type str
 * @param cstr A c-style string literal or a struct of type str
 * @return true if the function executes succesfully, false otherwhise with a
 *         a message to stderr
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
 * @return true on success, false on failure (e.g., memory allocation failure).
 */
bool replace_str_with_cstr(str* s, const char* cstr);

/**
 * @brief Replaces the content of one str variable with another str variable.
 *
 * @param dest Pointer to the destination str variable.
 * @param src The source str variable.
 * @return true on success, false on failure (e.g., memory allocation failure).
 */
bool replace_str_with_str(str* dest, str src);
// ----------------------------------------------------------------------------------

/**
 * @brief A _Generic macro that will select between the appropriate functions
 *        that can repplace one string with another.
 *
 * @param str_struct A struct of type str
 * @param cstr A c-style string literal or a struct of type str
 * @return true if the function executes succesfully, false otherwhise with a
 *         a message to stderr
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
#define CLEANUP(var) var __attribute__((cleanup(_str_free))) = { .ptr=NULL, .len=0 }
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
bool copy_memory(str *dest, const str *src, size_t n);
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
bool move_memory(str *dest, const str *src, size_t n);
// ---------------------------------------------------------------------------------
// Implement functions similar to those in string.h for standard strings

size_t literal_strlen(const char* str);

void* literal_memcpy(void* dest, const void* src, size_t n) __attribute__((hot));

void* literal_memmove(void* dest, const void* src, size_t n) __attribute__((hot));
// =================================================================================
// =================================================================================
#ifdef __cplusplus
}
#endif /* __cplusplus*/

#endif /* str_H */
// ================================================================================
// ================================================================================
// eof
