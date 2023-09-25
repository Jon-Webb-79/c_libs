// ================================================================================
// ================================================================================
// - File:    data_structures.c
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

#include "data_structures.h"

// ================================================================================
// ================================================================================
// TYPE_LIST_TO_VECTOR FUNCTIONS


Short short_list_to_vector(ShortLL *list) {
	Short vec;
	init_short_vector(&vec, list->active_length);
	struct short_list *guess = list->head;
	for (size_t i = 0; i < list->active_length; i++) {
		push_short_vector(&vec, guess->data, vec.active_length);
		guess = guess->next;
	}
	return vec;
}
// --------------------------------------------------------------------------------

UShort ushort_list_to_vector(UShortLL *list) {
	UShort vec;
	init_ushort_vector(&vec, list->active_length);
	struct ushort_list *guess = list->head;
	for (size_t i = 0; i < list->active_length; i++) {
		push_ushort_vector(&vec, guess->data, vec.active_length);
		guess = guess->next;
	}
	return vec;
}
// --------------------------------------------------------------------------------

Int int_list_to_vector(IntLL *list) {
	Int vec;
	init_int_vector(&vec, list->active_length);
	struct int_list *guess = list->head;
	for (size_t i = 0; i < list->active_length; i++) {
		push_int_vector(&vec, guess->data, vec.active_length);
		guess = guess->next;
	}
	return vec;
}
// --------------------------------------------------------------------------------

UInt uint_list_to_vector(UIntLL *list) {
	UInt vec;
	init_uint_vector(&vec, list->active_length);
	struct uint_list *guess = list->head;
	for (size_t i = 0; i < list->active_length; i++) {
		push_uint_vector(&vec, guess->data, vec.active_length);
		guess = guess->next;
	}
	return vec;
}
// --------------------------------------------------------------------------------

LInt long_list_to_vector(LIntLL *list) {
	LInt vec;
	init_long_vector(&vec, list->active_length);
	struct long_list *guess = list->head;
	for (size_t i = 0; i < list->active_length; i++) {
		push_long_vector(&vec, guess->data, vec.active_length);
		guess = guess->next;
	}
	return vec;
}
// --------------------------------------------------------------------------------

ULInt ulong_list_to_vector(ULIntLL *list) {
	ULInt vec;
	init_ulong_vector(&vec, list->active_length);
	struct ulong_list *guess = list->head;
	for (size_t i = 0; i < list->active_length; i++) {
		push_ulong_vector(&vec, guess->data, vec.active_length);
		guess = guess->next;
	}
	return vec;
}
// --------------------------------------------------------------------------------

LLInt llong_list_to_vector(LLIntLL *list) {
	LLInt vec;
	init_llong_vector(&vec, list->active_length);
	struct llong_list *guess = list->head;
	for (size_t i = 0; i < list->active_length; i++) {
		push_llong_vector(&vec, guess->data, vec.active_length);
		guess = guess->next;
	}
	return vec;
}
// --------------------------------------------------------------------------------

ULLInt ullong_list_to_vector(ULLIntLL *list) {
	ULLInt vec;
	init_ullong_vector(&vec, list->active_length);
	struct ullong_list *guess = list->head;
	for (size_t i = 0; i < list->active_length; i++) {
		push_ullong_vector(&vec, guess->data, vec.active_length);
		guess = guess->next;
	}
	return vec;
}
// --------------------------------------------------------------------------------

Flt float_list_to_vector(FltLL *list) {
	Flt vec;
	init_float_vector(&vec, list->active_length);
	struct float_list *guess = list->head;
	for (size_t i = 0; i < list->active_length; i++) {
		push_float_vector(&vec, guess->data, vec.active_length);
		guess = guess->next;
	}
	return vec;
}
// --------------------------------------------------------------------------------

Dble double_list_to_vector(DbleLL *list) {
	Dble vec;
	init_double_vector(&vec, list->active_length);
	struct double_list *guess = list->head;
	for (size_t i = 0; i < list->active_length; i++) {
		push_double_vector(&vec, guess->data, vec.active_length);
		guess = guess->next;
	}
	return vec;
}
// --------------------------------------------------------------------------------

LDble ldouble_list_to_vector(LDbleLL *list) {
	LDble vec;
	init_ldouble_vector(&vec, list->active_length);
	struct ldouble_list *guess = list->head;
	for (size_t i = 0; i < list->active_length; i++) {
		push_ldouble_vector(&vec, guess->data, vec.active_length);
		guess = guess->next;
	}
	return vec;
}
// --------------------------------------------------------------------------------

Char char_list_to_vector(CharLL *list) {
	Char vec;
	init_char_vector(&vec, list->active_length);
	struct char_list *guess = list->head;
	for (size_t i = 0; i < list->active_length; i++) {
		push_char_vector(&vec, guess->data, vec.active_length);
		guess = guess->next;
	}
	return vec;
}
// --------------------------------------------------------------------------------

UChar uchar_list_to_vector(UCharLL *list) {
	UChar vec;
	init_uchar_vector(&vec, list->active_length);
	struct uchar_list *guess = list->head;
	for (size_t i = 0; i < list->active_length; i++) {
		push_uchar_vector(&vec, guess->data, vec.active_length);
		guess = guess->next;
	}
	return vec;
}
// --------------------------------------------------------------------------------

Bool bool_list_to_vector(BoolLL *list) {
	Bool vec;
	init_bool_vector(&vec, list->active_length);
	struct bool_list *guess = list->head;
	for (size_t i = 0; i < list->active_length; i++) {
		push_bool_vector(&vec, guess->data, vec.active_length);
		guess = guess->next;
	}
	return vec;
}
// --------------------------------------------------------------------------------

String string_list_to_vector(StringLL *list) {
	String vec;
	init_string_vector(&vec);
	struct string_list *guess = list->head;
	for (size_t i = 0; i < list->active_length; i++) {
		push_string_vector(&vec, guess->data, vec.active_length);
		guess = guess->next;
	}
	return vec;
}
// ================================================================================
// ================================================================================
// TYPE_VECTOR_TO_LIST FUNCTIONS

ShortLL short_vector_to_list(Short *vec) {
	ShortLL list;
	init_short_list(&list);
	for (size_t i = 0; i < vec->active_length; i++) {
		push_short_list(&list, vec->array[i], list.active_length);
	}
	return list;
}
// --------------------------------------------------------------------------------

UShortLL ushort_vector_to_list(UShort *vec) {
	UShortLL list;
	init_ushort_list(&list);
	for (size_t i = 0; i < vec->active_length; i++) {
		push_ushort_list(&list, vec->array[i], list.active_length);
	}
	return list;
}
// --------------------------------------------------------------------------------

IntLL int_vector_to_list(Int *vec) {
	IntLL list;
	init_int_list(&list);
	for (size_t i = 0; i < vec->active_length; i++) {
		push_int_list(&list, vec->array[i], list.active_length);
	}
	return list;
}
// --------------------------------------------------------------------------------

UIntLL uint_vector_to_list(UInt *vec) {
	UIntLL list;
	init_uint_list(&list);
	for (size_t i = 0; i < vec->active_length; i++) {
		push_uint_list(&list, vec->array[i], list.active_length);
	}
	return list;
}
// --------------------------------------------------------------------------------

LIntLL long_vector_to_list(LInt *vec) {
	LIntLL list;
	init_long_list(&list);
	for (size_t i = 0; i < vec->active_length; i++) {
		push_long_list(&list, vec->array[i], list.active_length);
	}
	return list;
}
// --------------------------------------------------------------------------------

ULIntLL ulong_vector_to_list(ULInt *vec) {
	ULIntLL list;
	init_ulong_list(&list);
	for (size_t i = 0; i < vec->active_length; i++) {
		push_ulong_list(&list, vec->array[i], list.active_length);
	}
	return list;
}
// --------------------------------------------------------------------------------

LLIntLL llong_vector_to_list(LLInt *vec) {
	LLIntLL list;
	init_llong_list(&list);
	for (size_t i = 0; i < vec->active_length; i++) {
		push_llong_list(&list, vec->array[i], list.active_length);
	}
	return list;
}
// --------------------------------------------------------------------------------

ULLIntLL ullong_vector_to_list(ULLInt *vec) {
	ULLIntLL list;
	init_ullong_list(&list);
	for (size_t i = 0; i < vec->active_length; i++) {
		push_ullong_list(&list, vec->array[i], list.active_length);
	}
	return list;
}
// --------------------------------------------------------------------------------

FltLL float_vector_to_list(Flt *vec) {
	FltLL list;
	init_float_list(&list);
	for (size_t i = 0; i < vec->active_length; i++) {
		push_float_list(&list, vec->array[i], list.active_length);
	}
	return list;
}
// --------------------------------------------------------------------------------

DbleLL double_vector_to_list(Dble *vec) {
	DbleLL list;
	init_double_list(&list);
	for (size_t i = 0; i < vec->active_length; i++) {
		push_double_list(&list, vec->array[i], list.active_length);
	}
	return list;
}
// --------------------------------------------------------------------------------

LDbleLL ldouble_vector_to_list(LDble *vec) {
	LDbleLL list;
	init_ldouble_list(&list);
	for (size_t i = 0; i < vec->active_length; i++) {
		push_ldouble_list(&list, vec->array[i], list.active_length);
	}
	return list;
}
// --------------------------------------------------------------------------------

CharLL char_vector_to_list(Char *vec) {
	CharLL list;
	init_char_list(&list);
	for (size_t i = 0; i < vec->active_length; i++) {
		push_char_list(&list, vec->array[i], list.active_length);
	}
	return list;
}
// --------------------------------------------------------------------------------

UCharLL uchar_vector_to_list(UChar *vec) {
	UCharLL list;
	init_uchar_list(&list);
	for (size_t i = 0; i < vec->active_length; i++) {
		push_uchar_list(&list, vec->array[i], list.active_length);
	}
	return list;
}
// --------------------------------------------------------------------------------

BoolLL bool_vector_to_list(Bool *vec) {
	BoolLL list;
	init_bool_list(&list);
	for (size_t i = 0; i < vec->active_length; i++) {
		push_bool_list(&list, vec->array[i], list.active_length);
	}
	return list;
}
// --------------------------------------------------------------------------------

StringLL string_vector_to_list(String *vec) {
	StringLL list;
	init_string_list(&list);
	for (size_t i = 0; i < vec->active_length; i++) {
		push_string_list(&list, vec->array[i], list.active_length);
	}
	return list;
}
// ================================================================================
// ================================================================================
// eof
