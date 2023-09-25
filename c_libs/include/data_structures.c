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
// eof
