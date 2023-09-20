// ================================================================================
// ================================================================================
// - File:    llist.c
// - Purpose: Describe the file purpose here
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    September 18, 2023
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// Include modules here

#include "llist.h"


void init_short_list(ShortLL *list) {
	list->active_length = 0;
	list->head = NULL;
	list->tail = NULL;
	list->init_status = true;
}
// --------------------------------------------------------------------------------

void init_ushort_list(UShortLL *list) {
	list->active_length = 0;
	list->head = NULL;
	list->tail = NULL;
	list->init_status = true;
}
// --------------------------------------------------------------------------------

void init_int_list(IntLL *list) {
	list->active_length = 0;
	list->head = NULL;
	list->tail = NULL;
	list->init_status = true;
}
// --------------------------------------------------------------------------------

void init_uint_list(UIntLL *list) {
	list->active_length = 0;
	list->head = NULL;
	list->tail = NULL;
	list->init_status = true;
}
// --------------------------------------------------------------------------------

void init_long_list(LIntLL *list) {
	list->active_length = 0;
	list->head = NULL;
	list->tail = NULL;
	list->init_status = true;
}
// --------------------------------------------------------------------------------

void init_ulong_list(ULIntLL *list) {
	list->active_length = 0;
	list->head = NULL;
	list->tail = NULL;
	list->init_status = true;
}
// --------------------------------------------------------------------------------

void init_llong_list(LLIntLL *list) {
	list->active_length = 0;
	list->head = NULL;
	list->tail = NULL;
	list->init_status = true;
}
// --------------------------------------------------------------------------------

void init_ullong_list(ULLIntLL *list) {
	list->active_length = 0;
	list->head = NULL;
	list->tail = NULL;
	list->init_status = true;
}
// --------------------------------------------------------------------------------

void init_float_list(FltLL *list) {
	list->active_length = 0;
	list->head = NULL;
	list->tail = NULL;
	list->init_status = true;
}
// --------------------------------------------------------------------------------

void init_double_list(DbleLL *list) {
	list->active_length = 0;
	list->head = NULL;
	list->tail = NULL;
	list->init_status = true;
}
// --------------------------------------------------------------------------------

void init_ldouble_list(LDbleLL *list) {
	list->active_length = 0;
	list->head = NULL;
	list->tail = NULL;
	list->init_status = true;
}
// --------------------------------------------------------------------------------

void init_char_list(CharLL *list) {
	list->active_length = 0;
	list->head = NULL;
	list->tail = NULL;
	list->init_status = true;
}
// --------------------------------------------------------------------------------

void init_uchar_list(UCharLL *list) {
	list->active_length = 0;
	list->head = NULL;
	list->tail = NULL;
	list->init_status = true;
}
// --------------------------------------------------------------------------------

void init_bool_list(BoolLL *list) {
	list->active_length = 0;
	list->head = NULL;
	list->tail = NULL;
	list->init_status = true;
}
// --------------------------------------------------------------------------------

void init_string_list(StringLL *list) {
	list->active_length = 0;
	list->head = NULL;
	list->tail = NULL;
	list->init_status = true;
}
// ================================================================================
// ================================================================================
// FREE_TYPE_LIST FUNCTIONS


void free_short_list(ShortLL *vec) {
	if (vec->active_length > 0) {
		struct short_list *tmp;
		struct short_list *head = vec->head;
		while (head->next != NULL) {
			tmp = head;
			head = tmp->next;
			free(tmp);
		}
		free(head);
	}
}
// --------------------------------------------------------------------------------

void free_ushort_list(UShortLL *vec) {
	if (vec->active_length > 0) {
		struct ushort_list *tmp;
		struct ushort_list *head = vec->head;
		while (head->next != NULL) {
			tmp = head;
			head = tmp->next;
			free(tmp);
		}
		free(head);
	}
}
// --------------------------------------------------------------------------------

void free_int_list(IntLL *vec) {
	if (vec->active_length > 0) {
		struct int_list *tmp;
		struct int_list *head = vec->head;
		while (head->next != NULL) {
			tmp = head;
			head = tmp->next;
			free(tmp);
		}
		free(head);
	}
}
// --------------------------------------------------------------------------------

void free_uint_list(UIntLL *vec) {
	if (vec->active_length > 0) {
		struct uint_list *tmp;
		struct uint_list *head = vec->head;
		while (head->next != NULL) {
			tmp = head;
			head = tmp->next;
			free(tmp);
		}
		free(head);
	}
}
// --------------------------------------------------------------------------------

void free_long_list(LIntLL *vec) {
	if (vec->active_length > 0) {
		struct long_list *tmp;
		struct long_list *head = vec->head;
		while (head->next != NULL) {
			tmp = head;
			head = tmp->next;
			free(tmp);
		}
		free(head);
	}
}
// --------------------------------------------------------------------------------

void free_ulong_list(ULIntLL *vec) {
	if (vec->active_length > 0) {
		struct ulong_list *tmp;
		struct ulong_list *head = vec->head;
		while (head->next != NULL) {
			tmp = head;
			head = tmp->next;
			free(tmp);
		}
		free(head);
	}
}
// --------------------------------------------------------------------------------

void free_llong_list(LLIntLL *vec) {
	if (vec->active_length > 0) {
		struct llong_list *tmp;
		struct llong_list *head = vec->head;
		while (head->next != NULL) {
			tmp = head;
			head = tmp->next;
			free(tmp);
		}
		free(head);
	}
}
// --------------------------------------------------------------------------------

void free_ullong_list(ULLIntLL *vec) {
	if (vec->active_length > 0) {
		struct ullong_list *tmp;
		struct ullong_list *head = vec->head;
		while (head->next != NULL) {
			tmp = head;
			head = tmp->next;
			free(tmp);
		}
		free(head);
	}
}
// --------------------------------------------------------------------------------

void free_float_list(FltLL *vec) {
	if (vec->active_length > 0) {
		struct float_list *tmp;
		struct float_list *head = vec->head;
		while (head->next != NULL) {
			tmp = head;
			head = tmp->next;
			free(tmp);
		}
		free(head);
	}
}
// --------------------------------------------------------------------------------

void free_double_list(DbleLL *vec) {
	if (vec->active_length > 0) {
		struct double_list *tmp;
		struct double_list *head = vec->head;
		while (head->next != NULL) {
			tmp = head;
			head = tmp->next;
			free(tmp);
		}
		free(head);
	}
}
// --------------------------------------------------------------------------------

void free_ldouble_list(LDbleLL *vec) {
	if (vec->active_length > 0) {
		struct ldouble_list *tmp;
		struct ldouble_list *head = vec->head;
		while (head->next != NULL) {
			tmp = head;
			head = tmp->next;
			free(tmp);
		}
		free(head);
	}
}
// --------------------------------------------------------------------------------

void free_char_list(CharLL *vec) {
	if (vec->active_length > 0) {
		struct char_list *tmp;
		struct char_list *head = vec->head;
		while (head->next != NULL) {
			tmp = head;
			head = tmp->next;
			free(tmp);
		}
		free(head);
	}
}
// --------------------------------------------------------------------------------

void free_uchar_list(UCharLL *vec) {
	if (vec->active_length > 0) {
		struct uchar_list *tmp;
		struct uchar_list *head = vec->head;
		while (head->next != NULL) {
			tmp = head;
			head = tmp->next;
			free(tmp);
		}
		free(head);
	}
}
// --------------------------------------------------------------------------------

void free_bool_list(BoolLL *vec) {
	if (vec->active_length > 0) {
		struct bool_list *tmp;
		struct bool_list *head = vec->head;
		while (head->next != NULL) {
			tmp = head;
			head = tmp->next;
			free(tmp);
		}
		free(head);
	}
}
// --------------------------------------------------------------------------------

void free_string_list(StringLL *vec) {
	if (vec->active_length > 0) {
		struct string_list *tmp;
		struct string_list *head = vec->head;
		while (head->next != NULL) {
			tmp = head;
			head = tmp->next;
			free(tmp);
		}
		free(head);
	}
}
// ================================================================================
// ================================================================================


int push_short_list(ShortLL *list, short int data, size_t index) {
	if (!list->init_status) {
		fprintf(stderr, "list Struct not initialized\n");
		return -1;
	}
	if (index < 0 || index > list->active_length) {
		fprintf(stderr, "Index out of range\n");
		return -1;
	}
	struct short_list *dat = malloc(sizeof(short_list));
	if (!dat) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	if (list->active_length == 0) {
		// populate struct
		dat->data = data;
		dat->previous = NULL;
		dat->next = NULL;

		// Update linked list tracking struct
		list->head = dat;
		list->tail = dat;
		list->active_length += 1;
	}
	else if (index == 0 && list->active_length > 0) {
		// populate struct
		dat->previous = NULL;
		dat->next = list->head;
		dat->data = data;

		// Update data in the struct occupying hte next index
		(list->head)->previous = dat;

		// Update linked list tracking struct
		list->head = dat;
		list->active_length += 1;
	}
	else if (list->active_length > 0 && index == list->active_length) {
		// populate struct
		dat->data = data;
		dat->next = NULL;
		dat->previous = list->tail;

		// Update struct occupying previous index
		(list->tail)->next = dat;

		// Update linked list tracking struct
		list->tail = dat;
		list->active_length += 1;
	}
	// The next two if statements are mean to reduce the iteration time by half
	// if the index to be inserted is between 0 and active_length
	else if (index < list->active_length / 2) {
		struct short_list *current = list->head;
		struct short_list *previous = NULL;
		for (size_t i = 0; i < index; i++) {
			previous = current;
			current = current->next;
		}
		// populate struct
		dat->data = data;
		dat->next = current;
		dat->previous = previous;

		// Update previous and next struct
		previous->next = dat;
		current->previous = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	else {
		struct short_list *current = list->tail;
		struct short_list *next = NULL;
		for (size_t i = list->active_length; i > index; i--) {
			next = current;
			current = current->previous;
		}
		// Update struct
		dat->data = data;
		dat->next = next;
		dat->previous = current;

		// Update previous and next struct
		next->previous = dat;
		current->next = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_ushort_list(UShortLL *list, unsigned short int data, size_t index) {
	if (!list->init_status) {
		fprintf(stderr, "list Struct not initialized\n");
		return -1;
	}
	if (index < 0 || index > list->active_length) {
		fprintf(stderr, "Index out of range\n");
		return -1;
	}
	struct ushort_list *dat = malloc(sizeof(ushort_list));
	if (!dat) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	if (list->active_length == 0) {
		// populate struct
		dat->data = data;
		dat->previous = NULL;
		dat->next = NULL;

		// Update linked list tracking struct
		list->head = dat;
		list->tail = dat;
		list->active_length += 1;
	}
	else if (index == 0 && list->active_length > 0) {
		// populate struct
		dat->previous = NULL;
		dat->next = list->head;
		dat->data = data;

		// Update data in the struct occupying hte next index
		(list->head)->previous = dat;

		// Update linked list tracking struct
		list->head = dat;
		list->active_length += 1;
	}
	else if (list->active_length > 0 && index == list->active_length) {
		// populate struct
		dat->data = data;
		dat->next = NULL;
		dat->previous = list->tail;

		// Update struct occupying previous index
		(list->tail)->next = dat;

		// Update linked list tracking struct
		list->tail = dat;
		list->active_length += 1;
	}
	// The next two if statements are mean to reduce the iteration time by half
	// if the index to be inserted is between 0 and active_length
	else if (index < list->active_length / 2) {
		struct ushort_list *current = list->head;
		struct ushort_list *previous = NULL;
		for (size_t i = 0; i < index; i++) {
			previous = current;
			current = current->next;
		}
		// populate struct
		dat->data = data;
		dat->next = current;
		dat->previous = previous;

		// Update previous and next struct
		previous->next = dat;
		current->previous = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	else {
		struct ushort_list *current = list->tail;
		struct ushort_list *next = NULL;
		for (size_t i = list->active_length; i > index; i--) {
			next = current;
			current = current->previous;
		}
		// Update struct
		dat->data = data;
		dat->next = next;
		dat->previous = current;

		// Update previous and next struct
		next->previous = dat;
		current->next = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_int_list(IntLL *list, int data, size_t index) {
	if (!list->init_status) {
		fprintf(stderr, "list Struct not initialized\n");
		return -1;
	}
	if (index < 0 || index > list->active_length) {
		fprintf(stderr, "Index out of range\n");
		return -1;
	}
	struct int_list *dat = malloc(sizeof(int_list));
	if (!dat) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	if (list->active_length == 0) {
		// populate struct
		dat->data = data;
		dat->previous = NULL;
		dat->next = NULL;

		// Update linked list tracking struct
		list->head = dat;
		list->tail = dat;
		list->active_length += 1;
	}
	else if (index == 0 && list->active_length > 0) {
		// populate struct
		dat->previous = NULL;
		dat->next = list->head;
		dat->data = data;

		// Update data in the struct occupying hte next index
		(list->head)->previous = dat;

		// Update linked list tracking struct
		list->head = dat;
		list->active_length += 1;
	}
	else if (list->active_length > 0 && index == list->active_length) {
		// populate struct
		dat->data = data;
		dat->next = NULL;
		dat->previous = list->tail;

		// Update struct occupying previous index
		(list->tail)->next = dat;

		// Update linked list tracking struct
		list->tail = dat;
		list->active_length += 1;
	}
	// The next two if statements are mean to reduce the iteration time by half
	// if the index to be inserted is between 0 and active_length
	else if (index < list->active_length / 2) {
		struct int_list *current = list->head;
		struct int_list *previous = NULL;
		for (size_t i = 0; i < index; i++) {
			previous = current;
			current = current->next;
		}
		// populate struct
		dat->data = data;
		dat->next = current;
		dat->previous = previous;

		// Update previous and next struct
		previous->next = dat;
		current->previous = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	else {
		struct int_list *current = list->tail;
		struct int_list *next = NULL;
		for (size_t i = list->active_length; i > index; i--) {
			next = current;
			current = current->previous;
		}
		// Update struct
		dat->data = data;
		dat->next = next;
		dat->previous = current;

		// Update previous and next struct
		next->previous = dat;
		current->next = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_uint_list(UIntLL *list, unsigned int data, size_t index) {
	if (!list->init_status) {
		fprintf(stderr, "list Struct not initialized\n");
		return -1;
	}
	if (index < 0 || index > list->active_length) {
		fprintf(stderr, "Index out of range\n");
		return -1;
	}
	struct uint_list *dat = malloc(sizeof(uint_list));
	if (!dat) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	if (list->active_length == 0) {
		// populate struct
		dat->data = data;
		dat->previous = NULL;
		dat->next = NULL;

		// Update linked list tracking struct
		list->head = dat;
		list->tail = dat;
		list->active_length += 1;
	}
	else if (index == 0 && list->active_length > 0) {
		// populate struct
		dat->previous = NULL;
		dat->next = list->head;
		dat->data = data;

		// Update data in the struct occupying hte next index
		(list->head)->previous = dat;

		// Update linked list tracking struct
		list->head = dat;
		list->active_length += 1;
	}
	else if (list->active_length > 0 && index == list->active_length) {
		// populate struct
		dat->data = data;
		dat->next = NULL;
		dat->previous = list->tail;

		// Update struct occupying previous index
		(list->tail)->next = dat;

		// Update linked list tracking struct
		list->tail = dat;
		list->active_length += 1;
	}
	// The next two if statements are mean to reduce the iteration time by half
	// if the index to be inserted is between 0 and active_length
	else if (index < list->active_length / 2) {
		struct uint_list *current = list->head;
		struct uint_list *previous = NULL;
		for (size_t i = 0; i < index; i++) {
			previous = current;
			current = current->next;
		}
		// populate struct
		dat->data = data;
		dat->next = current;
		dat->previous = previous;

		// Update previous and next struct
		previous->next = dat;
		current->previous = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	else {
		struct uint_list *current = list->tail;
		struct uint_list *next = NULL;
		for (size_t i = list->active_length; i > index; i--) {
			next = current;
			current = current->previous;
		}
		// Update struct
		dat->data = data;
		dat->next = next;
		dat->previous = current;

		// Update previous and next struct
		next->previous = dat;
		current->next = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_long_list(LIntLL *list, long int data, size_t index) {
	if (!list->init_status) {
		fprintf(stderr, "list Struct not initialized\n");
		return -1;
	}
	if (index < 0 || index > list->active_length) {
		fprintf(stderr, "Index out of range\n");
		return -1;
	}
	struct long_list *dat = malloc(sizeof(long_list));
	if (!dat) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	if (list->active_length == 0) {
		// populate struct
		dat->data = data;
		dat->previous = NULL;
		dat->next = NULL;

		// Update linked list tracking struct
		list->head = dat;
		list->tail = dat;
		list->active_length += 1;
	}
	else if (index == 0 && list->active_length > 0) {
		// populate struct
		dat->previous = NULL;
		dat->next = list->head;
		dat->data = data;

		// Update data in the struct occupying hte next index
		(list->head)->previous = dat;

		// Update linked list tracking struct
		list->head = dat;
		list->active_length += 1;
	}
	else if (list->active_length > 0 && index == list->active_length) {
		// populate struct
		dat->data = data;
		dat->next = NULL;
		dat->previous = list->tail;

		// Update struct occupying previous index
		(list->tail)->next = dat;

		// Update linked list tracking struct
		list->tail = dat;
		list->active_length += 1;
	}
	// The next two if statements are mean to reduce the iteration time by half
	// if the index to be inserted is between 0 and active_length
	else if (index < list->active_length / 2) {
		struct long_list *current = list->head;
		struct long_list *previous = NULL;
		for (size_t i = 0; i < index; i++) {
			previous = current;
			current = current->next;
		}
		// populate struct
		dat->data = data;
		dat->next = current;
		dat->previous = previous;

		// Update previous and next struct
		previous->next = dat;
		current->previous = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	else {
		struct long_list *current = list->tail;
		struct long_list *next = NULL;
		for (size_t i = list->active_length; i > index; i--) {
			next = current;
			current = current->previous;
		}
		// Update struct
		dat->data = data;
		dat->next = next;
		dat->previous = current;

		// Update previous and next struct
		next->previous = dat;
		current->next = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_ulong_list(ULIntLL *list, unsigned long int data, size_t index) {
	if (!list->init_status) {
		fprintf(stderr, "list Struct not initialized\n");
		return -1;
	}
	if (index < 0 || index > list->active_length) {
		fprintf(stderr, "Index out of range\n");
		return -1;
	}
	struct ulong_list *dat = malloc(sizeof(ulong_list));
	if (!dat) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	if (list->active_length == 0) {
		// populate struct
		dat->data = data;
		dat->previous = NULL;
		dat->next = NULL;

		// Update linked list tracking struct
		list->head = dat;
		list->tail = dat;
		list->active_length += 1;
	}
	else if (index == 0 && list->active_length > 0) {
		// populate struct
		dat->previous = NULL;
		dat->next = list->head;
		dat->data = data;

		// Update data in the struct occupying hte next index
		(list->head)->previous = dat;

		// Update linked list tracking struct
		list->head = dat;
		list->active_length += 1;
	}
	else if (list->active_length > 0 && index == list->active_length) {
		// populate struct
		dat->data = data;
		dat->next = NULL;
		dat->previous = list->tail;

		// Update struct occupying previous index
		(list->tail)->next = dat;

		// Update linked list tracking struct
		list->tail = dat;
		list->active_length += 1;
	}
	// The next two if statements are mean to reduce the iteration time by half
	// if the index to be inserted is between 0 and active_length
	else if (index < list->active_length / 2) {
		struct ulong_list *current = list->head;
		struct ulong_list *previous = NULL;
		for (size_t i = 0; i < index; i++) {
			previous = current;
			current = current->next;
		}
		// populate struct
		dat->data = data;
		dat->next = current;
		dat->previous = previous;

		// Update previous and next struct
		previous->next = dat;
		current->previous = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	else {
		struct ulong_list *current = list->tail;
		struct ulong_list *next = NULL;
		for (size_t i = list->active_length; i > index; i--) {
			next = current;
			current = current->previous;
		}
		// Update struct
		dat->data = data;
		dat->next = next;
		dat->previous = current;

		// Update previous and next struct
		next->previous = dat;
		current->next = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_llong_list(LLIntLL *list, long long int data, size_t index) {
	if (!list->init_status) {
		fprintf(stderr, "list Struct not initialized\n");
		return -1;
	}
	if (index < 0 || index > list->active_length) {
		fprintf(stderr, "Index out of range\n");
		return -1;
	}
	struct llong_list *dat = malloc(sizeof(llong_list));
	if (!dat) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	if (list->active_length == 0) {
		// populate struct
		dat->data = data;
		dat->previous = NULL;
		dat->next = NULL;

		// Update linked list tracking struct
		list->head = dat;
		list->tail = dat;
		list->active_length += 1;
	}
	else if (index == 0 && list->active_length > 0) {
		// populate struct
		dat->previous = NULL;
		dat->next = list->head;
		dat->data = data;

		// Update data in the struct occupying hte next index
		(list->head)->previous = dat;

		// Update linked list tracking struct
		list->head = dat;
		list->active_length += 1;
	}
	else if (list->active_length > 0 && index == list->active_length) {
		// populate struct
		dat->data = data;
		dat->next = NULL;
		dat->previous = list->tail;

		// Update struct occupying previous index
		(list->tail)->next = dat;

		// Update linked list tracking struct
		list->tail = dat;
		list->active_length += 1;
	}
	// The next two if statements are mean to reduce the iteration time by half
	// if the index to be inserted is between 0 and active_length
	else if (index < list->active_length / 2) {
		struct llong_list *current = list->head;
		struct llong_list *previous = NULL;
		for (size_t i = 0; i < index; i++) {
			previous = current;
			current = current->next;
		}
		// populate struct
		dat->data = data;
		dat->next = current;
		dat->previous = previous;

		// Update previous and next struct
		previous->next = dat;
		current->previous = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	else {
		struct llong_list *current = list->tail;
		struct llong_list *next = NULL;
		for (size_t i = list->active_length; i > index; i--) {
			next = current;
			current = current->previous;
		}
		// Update struct
		dat->data = data;
		dat->next = next;
		dat->previous = current;

		// Update previous and next struct
		next->previous = dat;
		current->next = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_ullong_list(ULLIntLL *list, unsigned long long int data, size_t index) {
	if (!list->init_status) {
		fprintf(stderr, "list Struct not initialized\n");
		return -1;
	}
	if (index < 0 || index > list->active_length) {
		fprintf(stderr, "Index out of range\n");
		return -1;
	}
	struct ullong_list *dat = malloc(sizeof(ullong_list));
	if (!dat) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	if (list->active_length == 0) {
		// populate struct
		dat->data = data;
		dat->previous = NULL;
		dat->next = NULL;

		// Update linked list tracking struct
		list->head = dat;
		list->tail = dat;
		list->active_length += 1;
	}
	else if (index == 0 && list->active_length > 0) {
		// populate struct
		dat->previous = NULL;
		dat->next = list->head;
		dat->data = data;

		// Update data in the struct occupying hte next index
		(list->head)->previous = dat;

		// Update linked list tracking struct
		list->head = dat;
		list->active_length += 1;
	}
	else if (list->active_length > 0 && index == list->active_length) {
		// populate struct
		dat->data = data;
		dat->next = NULL;
		dat->previous = list->tail;

		// Update struct occupying previous index
		(list->tail)->next = dat;

		// Update linked list tracking struct
		list->tail = dat;
		list->active_length += 1;
	}
	// The next two if statements are mean to reduce the iteration time by half
	// if the index to be inserted is between 0 and active_length
	else if (index < list->active_length / 2) {
		struct ullong_list *current = list->head;
		struct ullong_list *previous = NULL;
		for (size_t i = 0; i < index; i++) {
			previous = current;
			current = current->next;
		}
		// populate struct
		dat->data = data;
		dat->next = current;
		dat->previous = previous;

		// Update previous and next struct
		previous->next = dat;
		current->previous = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	else {
		struct ullong_list *current = list->tail;
		struct ullong_list *next = NULL;
		for (size_t i = list->active_length; i > index; i--) {
			next = current;
			current = current->previous;
		}
		// Update struct
		dat->data = data;
		dat->next = next;
		dat->previous = current;

		// Update previous and next struct
		next->previous = dat;
		current->next = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_float_list(FltLL *list, float data, size_t index) {
	if (!list->init_status) {
		fprintf(stderr, "list Struct not initialized\n");
		return -1;
	}
	if (index < 0 || index > list->active_length) {
		fprintf(stderr, "Index out of range\n");
		return -1;
	}
	struct float_list *dat = malloc(sizeof(float_list));
	if (!dat) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	if (list->active_length == 0) {
		// populate struct
		dat->data = data;
		dat->previous = NULL;
		dat->next = NULL;

		// Update linked list tracking struct
		list->head = dat;
		list->tail = dat;
		list->active_length += 1;
	}
	else if (index == 0 && list->active_length > 0) {
		// populate struct
		dat->previous = NULL;
		dat->next = list->head;
		dat->data = data;

		// Update data in the struct occupying hte next index
		(list->head)->previous = dat;

		// Update linked list tracking struct
		list->head = dat;
		list->active_length += 1;
	}
	else if (list->active_length > 0 && index == list->active_length) {
		// populate struct
		dat->data = data;
		dat->next = NULL;
		dat->previous = list->tail;

		// Update struct occupying previous index
		(list->tail)->next = dat;

		// Update linked list tracking struct
		list->tail = dat;
		list->active_length += 1;
	}
	// The next two if statements are mean to reduce the iteration time by half
	// if the index to be inserted is between 0 and active_length
	else if (index < list->active_length / 2) {
		struct float_list *current = list->head;
		struct float_list *previous = NULL;
		for (size_t i = 0; i < index; i++) {
			previous = current;
			current = current->next;
		}
		// populate struct
		dat->data = data;
		dat->next = current;
		dat->previous = previous;

		// Update previous and next struct
		previous->next = dat;
		current->previous = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	else {
		struct float_list *current = list->tail;
		struct float_list *next = NULL;
		for (size_t i = list->active_length; i > index; i--) {
			next = current;
			current = current->previous;
		}
		// Update struct
		dat->data = data;
		dat->next = next;
		dat->previous = current;

		// Update previous and next struct
		next->previous = dat;
		current->next = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_double_list(DbleLL *list, double data, size_t index) {
	if (!list->init_status) {
		fprintf(stderr, "list Struct not initialized\n");
		return -1;
	}
	if (index < 0 || index > list->active_length) {
		fprintf(stderr, "Index out of range\n");
		return -1;
	}
	struct double_list *dat = malloc(sizeof(double_list));
	if (!dat) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	if (list->active_length == 0) {
		// populate struct
		dat->data = data;
		dat->previous = NULL;
		dat->next = NULL;

		// Update linked list tracking struct
		list->head = dat;
		list->tail = dat;
		list->active_length += 1;
	}
	else if (index == 0 && list->active_length > 0) {
		// populate struct
		dat->previous = NULL;
		dat->next = list->head;
		dat->data = data;

		// Update data in the struct occupying hte next index
		(list->head)->previous = dat;

		// Update linked list tracking struct
		list->head = dat;
		list->active_length += 1;
	}
	else if (list->active_length > 0 && index == list->active_length) {
		// populate struct
		dat->data = data;
		dat->next = NULL;
		dat->previous = list->tail;

		// Update struct occupying previous index
		(list->tail)->next = dat;

		// Update linked list tracking struct
		list->tail = dat;
		list->active_length += 1;
	}
	// The next two if statements are mean to reduce the iteration time by half
	// if the index to be inserted is between 0 and active_length
	else if (index < list->active_length / 2) {
		struct double_list *current = list->head;
		struct double_list *previous = NULL;
		for (size_t i = 0; i < index; i++) {
			previous = current;
			current = current->next;
		}
		// populate struct
		dat->data = data;
		dat->next = current;
		dat->previous = previous;

		// Update previous and next struct
		previous->next = dat;
		current->previous = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	else {
		struct double_list *current = list->tail;
		struct double_list *next = NULL;
		for (size_t i = list->active_length; i > index; i--) {
			next = current;
			current = current->previous;
		}
		// Update struct
		dat->data = data;
		dat->next = next;
		dat->previous = current;

		// Update previous and next struct
		next->previous = dat;
		current->next = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_ldouble_list(LDbleLL *list, long double data, size_t index) {
	if (!list->init_status) {
		fprintf(stderr, "list Struct not initialized\n");
		return -1;
	}
	if (index < 0 || index > list->active_length) {
		fprintf(stderr, "Index out of range\n");
		return -1;
	}
	struct ldouble_list *dat = malloc(sizeof(ldouble_list));
	if (!dat) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	if (list->active_length == 0) {
		// populate struct
		dat->data = data;
		dat->previous = NULL;
		dat->next = NULL;

		// Update linked list tracking struct
		list->head = dat;
		list->tail = dat;
		list->active_length += 1;
	}
	else if (index == 0 && list->active_length > 0) {
		// populate struct
		dat->previous = NULL;
		dat->next = list->head;
		dat->data = data;

		// Update data in the struct occupying hte next index
		(list->head)->previous = dat;

		// Update linked list tracking struct
		list->head = dat;
		list->active_length += 1;
	}
	else if (list->active_length > 0 && index == list->active_length) {
		// populate struct
		dat->data = data;
		dat->next = NULL;
		dat->previous = list->tail;

		// Update struct occupying previous index
		(list->tail)->next = dat;

		// Update linked list tracking struct
		list->tail = dat;
		list->active_length += 1;
	}
	// The next two if statements are mean to reduce the iteration time by half
	// if the index to be inserted is between 0 and active_length
	else if (index < list->active_length / 2) {
		struct ldouble_list *current = list->head;
		struct ldouble_list *previous = NULL;
		for (size_t i = 0; i < index; i++) {
			previous = current;
			current = current->next;
		}
		// populate struct
		dat->data = data;
		dat->next = current;
		dat->previous = previous;

		// Update previous and next struct
		previous->next = dat;
		current->previous = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	else {
		struct ldouble_list *current = list->tail;
		struct ldouble_list *next = NULL;
		for (size_t i = list->active_length; i > index; i--) {
			next = current;
			current = current->previous;
		}
		// Update struct
		dat->data = data;
		dat->next = next;
		dat->previous = current;

		// Update previous and next struct
		next->previous = dat;
		current->next = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_char_list(CharLL *list, char data, size_t index) {
	if (!list->init_status) {
		fprintf(stderr, "list Struct not initialized\n");
		return -1;
	}
	if (index < 0 || index > list->active_length) {
		fprintf(stderr, "Index out of range\n");
		return -1;
	}
	struct char_list *dat = malloc(sizeof(char_list));
	if (!dat) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	if (list->active_length == 0) {
		// populate struct
		dat->data = data;
		dat->previous = NULL;
		dat->next = NULL;

		// Update linked list tracking struct
		list->head = dat;
		list->tail = dat;
		list->active_length += 1;
	}
	else if (index == 0 && list->active_length > 0) {
		// populate struct
		dat->previous = NULL;
		dat->next = list->head;
		dat->data = data;

		// Update data in the struct occupying hte next index
		(list->head)->previous = dat;

		// Update linked list tracking struct
		list->head = dat;
		list->active_length += 1;
	}
	else if (list->active_length > 0 && index == list->active_length) {
		// populate struct
		dat->data = data;
		dat->next = NULL;
		dat->previous = list->tail;

		// Update struct occupying previous index
		(list->tail)->next = dat;

		// Update linked list tracking struct
		list->tail = dat;
		list->active_length += 1;
	}
	// The next two if statements are mean to reduce the iteration time by half
	// if the index to be inserted is between 0 and active_length
	else if (index < list->active_length / 2) {
		struct char_list *current = list->head;
		struct char_list *previous = NULL;
		for (size_t i = 0; i < index; i++) {
			previous = current;
			current = current->next;
		}
		// populate struct
		dat->data = data;
		dat->next = current;
		dat->previous = previous;

		// Update previous and next struct
		previous->next = dat;
		current->previous = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	else {
		struct char_list *current = list->tail;
		struct char_list *next = NULL;
		for (size_t i = list->active_length; i > index; i--) {
			next = current;
			current = current->previous;
		}
		// Update struct
		dat->data = data;
		dat->next = next;
		dat->previous = current;

		// Update previous and next struct
		next->previous = dat;
		current->next = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_uchar_list(UCharLL *list, unsigned char data, size_t index) {
	if (!list->init_status) {
		fprintf(stderr, "list Struct not initialized\n");
		return -1;
	}
	if (index < 0 || index > list->active_length) {
		fprintf(stderr, "Index out of range\n");
		return -1;
	}
	struct uchar_list *dat = malloc(sizeof(char_list));
	if (!dat) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	if (list->active_length == 0) {
		// populate struct
		dat->data = data;
		dat->previous = NULL;
		dat->next = NULL;

		// Update linked list tracking struct
		list->head = dat;
		list->tail = dat;
		list->active_length += 1;
	}
	else if (index == 0 && list->active_length > 0) {
		// populate struct
		dat->previous = NULL;
		dat->next = list->head;
		dat->data = data;

		// Update data in the struct occupying hte next index
		(list->head)->previous = dat;

		// Update linked list tracking struct
		list->head = dat;
		list->active_length += 1;
	}
	else if (list->active_length > 0 && index == list->active_length) {
		// populate struct
		dat->data = data;
		dat->next = NULL;
		dat->previous = list->tail;

		// Update struct occupying previous index
		(list->tail)->next = dat;

		// Update linked list tracking struct
		list->tail = dat;
		list->active_length += 1;
	}
	// The next two if statements are mean to reduce the iteration time by half
	// if the index to be inserted is between 0 and active_length
	else if (index < list->active_length / 2) {
		struct uchar_list *current = list->head;
		struct uchar_list *previous = NULL;
		for (size_t i = 0; i < index; i++) {
			previous = current;
			current = current->next;
		}
		// populate struct
		dat->data = data;
		dat->next = current;
		dat->previous = previous;

		// Update previous and next struct
		previous->next = dat;
		current->previous = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	else {
		struct uchar_list *current = list->tail;
		struct uchar_list *next = NULL;
		for (size_t i = list->active_length; i > index; i--) {
			next = current;
			current = current->previous;
		}
		// Update struct
		dat->data = data;
		dat->next = next;
		dat->previous = current;

		// Update previous and next struct
		next->previous = dat;
		current->next = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_bool_list(BoolLL *list, bool data, size_t index) {
	if (!list->init_status) {
		fprintf(stderr, "list Struct not initialized\n");
		return -1;
	}
	if (index < 0 || index > list->active_length) {
		fprintf(stderr, "Index out of range\n");
		return -1;
	}
	struct bool_list *dat = malloc(sizeof(bool_list));
	if (!dat) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	if (list->active_length == 0) {
		// populate struct
		dat->data = data;
		dat->previous = NULL;
		dat->next = NULL;

		// Update linked list tracking struct
		list->head = dat;
		list->tail = dat;
		list->active_length += 1;
	}
	else if (index == 0 && list->active_length > 0) {
		// populate struct
		dat->previous = NULL;
		dat->next = list->head;
		dat->data = data;

		// Update data in the struct occupying hte next index
		(list->head)->previous = dat;

		// Update linked list tracking struct
		list->head = dat;
		list->active_length += 1;
	}
	else if (list->active_length > 0 && index == list->active_length) {
		// populate struct
		dat->data = data;
		dat->next = NULL;
		dat->previous = list->tail;

		// Update struct occupying previous index
		(list->tail)->next = dat;

		// Update linked list tracking struct
		list->tail = dat;
		list->active_length += 1;
	}
	// The next two if statements are mean to reduce the iteration time by half
	// if the index to be inserted is between 0 and active_length
	else if (index < list->active_length / 2) {
		struct bool_list *current = list->head;
		struct bool_list *previous = NULL;
		for (size_t i = 0; i < index; i++) {
			previous = current;
			current = current->next;
		}
		// populate struct
		dat->data = data;
		dat->next = current;
		dat->previous = previous;

		// Update previous and next struct
		previous->next = dat;
		current->previous = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	else {
		struct bool_list *current = list->tail;
		struct bool_list *next = NULL;
		for (size_t i = list->active_length; i > index; i--) {
			next = current;
			current = current->previous;
		}
		// Update struct
		dat->data = data;
		dat->next = next;
		dat->previous = current;

		// Update previous and next struct
		next->previous = dat;
		current->next = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_string_list(StringLL *list, char* data, size_t index) {
	if (!list->init_status) {
		fprintf(stderr, "list Struct not initialized\n");
		return -1;
	}
	if (index < 0 || index > list->active_length) {
		fprintf(stderr, "Index out of range\n");
		return -1;
	}
	struct string_list *dat = malloc(sizeof(string_list));
	if (!dat) {
		fprintf(stderr, "malloc failed in file %s at line %d\n", __FILE__, __LINE__);
		return -1;
	}
	if (list->active_length == 0) {
		// populate struct
		dat->data = data;
		dat->previous = NULL;
		dat->next = NULL;

		// Update linked list tracking struct
		list->head = dat;
		list->tail = dat;
		list->active_length += 1;
	}
	else if (index == 0 && list->active_length > 0) {
		// populate struct
		dat->previous = NULL;
		dat->next = list->head;
		dat->data = data;

		// Update data in the struct occupying hte next index
		(list->head)->previous = dat;

		// Update linked list tracking struct
		list->head = dat;
		list->active_length += 1;
	}
	else if (list->active_length > 0 && index == list->active_length) {
		// populate struct
		dat->data = data;
		dat->next = NULL;
		dat->previous = list->tail;

		// Update struct occupying previous index
		(list->tail)->next = dat;

		// Update linked list tracking struct
		list->tail = dat;
		list->active_length += 1;
	}
	// The next two if statements are mean to reduce the iteration time by half
	// if the index to be inserted is between 0 and active_length
	else if (index < list->active_length / 2) {
		struct string_list *current = list->head;
		struct string_list *previous = NULL;
		for (size_t i = 0; i < index; i++) {
			previous = current;
			current = current->next;
		}
		// populate struct
		dat->data = data;
		dat->next = current;
		dat->previous = previous;

		// Update previous and next struct
		previous->next = dat;
		current->previous = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	else {
		struct string_list *current = list->tail;
		struct string_list *next = NULL;
		for (size_t i = list->active_length; i > index; i--) {
			next = current;
			current = current->previous;
		}
		// Update struct
		dat->data = data;
		dat->next = next;
		dat->previous = current;

		// Update previous and next struct
		next->previous = dat;
		current->next = dat;

		// Update linked list tracking struct
		list->active_length += 1;
	}
	return 1;
}
// ================================================================================
// ================================================================================

int insert_short_list(ShortLL *vec, short int *array, size_t length, size_t index) {
	int test;
	for (size_t i = 0; i < length; i++) {
		test = push_short_list(vec, array[i], index);
		if (test == -1) return -1;
		index++;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int insert_ushort_list(UShortLL *vec, unsigned short int *array, size_t length, size_t index) {
	int test;
	for (size_t i = 0; i < length; i++) {
		test = push_ushort_list(vec, array[i], index);
		if (test == -1) return -1;
		index++;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int insert_int_list(IntLL *vec, int *array, size_t length, size_t index) {
	int test;
	for (size_t i = 0; i < length; i++) {
		test = push_int_list(vec, array[i], index);
		if (test == -1) return -1;
		index++;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int insert_uint_list(UIntLL *vec, unsigned int *array, size_t length, size_t index) {
	int test;
	for (size_t i = 0; i < length; i++) {
		test = push_uint_list(vec, array[i], index);
		if (test == -1) return -1;
		index++;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int insert_long_list(LIntLL *vec, long int *array, size_t length, size_t index) {
	int test;
	for (size_t i = 0; i < length; i++) {
		test = push_long_list(vec, array[i], index);
		if (test == -1) return -1;
		index++;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int insert_ulong_list(ULIntLL *vec, unsigned long int *array, size_t length, size_t index) {
	int test;
	for (size_t i = 0; i < length; i++) {
		test = push_ulong_list(vec, array[i], index);
		if (test == -1) return -1;
		index++;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int insert_llong_list(LLIntLL *vec, long long int *array, size_t length, size_t index) {
	int test;
	for (size_t i = 0; i < length; i++) {
		test = push_llong_list(vec, array[i], index);
		if (test == -1) return -1;
		index++;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int insert_ullong_list(ULLIntLL *vec, unsigned long long int *array, size_t length, size_t index) {
	int test;
	for (size_t i = 0; i < length; i++) {
		test = push_ullong_list(vec, array[i], index);
		if (test == -1) return -1;
		index++;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int insert_float_list(FltLL *vec, float *array, size_t length, size_t index) {
	int test;
	for (size_t i = 0; i < length; i++) {
		test = push_float_list(vec, array[i], index);
		if (test == -1) return -1;
		index++;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int insert_double_list(DbleLL *vec, double *array, size_t length, size_t index) {
	int test;
	for (size_t i = 0; i < length; i++) {
		test = push_double_list(vec, array[i], index);
		if (test == -1) return -1;
		index++;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int insert_ldouble_list(LDbleLL *vec, long double *array, size_t length, size_t index) {
	int test;
	for (size_t i = 0; i < length; i++) {
		test = push_ldouble_list(vec, array[i], index);
		if (test == -1) return -1;
		index++;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int insert_char_list(CharLL *vec, char *array, size_t length, size_t index) {
	int test;
	for (size_t i = 0; i < length; i++) {
		test = push_char_list(vec, array[i], index);
		if (test == -1) return -1;
		index++;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int insert_uchar_list(UCharLL *vec, unsigned char *array, size_t length, size_t index) {
	int test;
	for (size_t i = 0; i < length; i++) {
		test = push_uchar_list(vec, array[i], index);
		if (test == -1) return -1;
		index++;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int insert_bool_list(BoolLL *vec, bool *array, size_t length, size_t index) {
	int test;
	for (size_t i = 0; i < length; i++) {
		test = push_bool_list(vec, array[i], index);
		if (test == -1) return -1;
		index++;
	}
	return 1;
}
// ================================================================================
// ================================================================================
// eof
