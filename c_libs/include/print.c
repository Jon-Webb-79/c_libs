// ================================================================================
// ================================================================================
// - File:    print.c
// - Purpose: Describe the file purpose here
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    April 08, 2023
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// Include modules here

#include "print.h"

// Scalar print functions
void print_short(short x) { printf("%hd", x); }
void print_ushort(unsigned short x) { printf("%hu", x); }
void print_int(int x) { printf("%d", x); }
void print_uint(unsigned int x) { printf("%u", x); }
void print_long(long int x) { printf("%ld", x); }
void print_ulong(unsigned long int x) { printf("%lu", x); }
void print_llong(long long int x) { printf("%lld", x); }
void print_ullong(unsigned long long int x) { printf("%llu", x); }
void print_float(float x) { printf("%f", x); }
void print_double(double x) { printf("%lf", x); }
void print_longdouble(long double x) { printf("%Lf", x); }
void print_char(char x) { printf("%c", x); }
void print_uchar(unsigned char x) { printf("%hhu", x); }
void print_bool(bool x) { printf(x ? "true" : "false"); }
void print_string(char *x) { printf("%s", x); }
// ================================================================================
// ================================================================================
// Stack data structure functions

void print_vshort(Short x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_short(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_short(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vushort(UShort x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_ushort(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_ushort(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vint(Int x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_int(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_int(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vuint(UInt x) {
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_uint(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_uint(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vlint(LInt x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_long(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_long(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vulint(ULInt x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_ulong(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_ulong(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vllint(LLInt x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_llong(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_llong(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vullint(ULLInt x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_ullong(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_ullong(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vfloat(Flt x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_float(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_float(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vdble(Dble x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_double(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_double(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vldble(LDble x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_longdouble(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_longdouble(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_achar(Char x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_char(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_char(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vbool(Bool x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_bool(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_bool(x.array[x.active_length - 1]);
	printf(" ]");
}
// --------------------------------------------------------------------------------

void print_vstring(String x) {
	if (x.active_length == 0) {
		printf("[ NULL ]");
		return;
	}
	printf("[ ");
	size_t j = 0;
	for(size_t i = 0; i < x.active_length - 1; i++) {
		print_string(x.array[i]);
		printf(", ");
		j++;
		if (j == PRNT_LENGTH) {
			printf("\n");
			printf("  ");
			j = 0;
		}
	}
	print_string(x.array[x.active_length - 1]);
	printf(" ]");
}
// ================================================================================
// ================================================================================
// LINKED LIST PRINT FUNCTIONS


void print_llshort(ShortLL x) {
	if (x.active_length == 0) {
		printf("( NULL )");
		return;
	}
	printf("( ");
	struct short_list *current = x.head;
	for (size_t i = 0; i < x.active_length - 1; i++) {
		print_short(current->data);
		printf(", ");
		current = current->next;
	}
	print_short(current->data);
	printf(" )");
}
// --------------------------------------------------------------------------------

void print_llushort(UShortLL x) {
	if (x.active_length == 0) {
		printf("( NULL )");
		return;
	}
	printf("( ");
	struct ushort_list *current = x.head;
	for (size_t i = 0; i < x.active_length - 1; i++) {
		print_ushort(current->data);
		printf(", ");
		current = current->next;
	}
	print_ushort(current->data);
	printf(" )");
}
// --------------------------------------------------------------------------------

void print_llint(IntLL x) {
	if (x.active_length == 0) {
		printf("( NULL )");
		return;
	}
	printf("( ");
	struct int_list *current = x.head;
	for (size_t i = 0; i < x.active_length - 1; i++) {
		print_int(current->data);
		printf(", ");
		current = current->next;
	}
	print_int(current->data);
	printf(" )");
}
// --------------------------------------------------------------------------------

void print_lluint(UIntLL x) {
	if (x.active_length == 0) {
		printf("( NULL )");
		return;
	}
	printf("( ");
	struct uint_list *current = x.head;
	for (size_t i = 0; i < x.active_length - 1; i++) {
		print_uint(current->data);
		printf(", ");
		current = current->next;
	}
	print_uint(current->data);
	printf(" )");
}
// --------------------------------------------------------------------------------

void print_lllong(LIntLL x) {
	if (x.active_length == 0) {
		printf("( NULL )");
		return;
	}
	printf("( ");
	struct long_list *current = x.head;
	for (size_t i = 0; i < x.active_length - 1; i++) {
		print_long(current->data);
		printf(", ");
		current = current->next;
	}
	print_long(current->data);
	printf(" )");
}
// --------------------------------------------------------------------------------

void print_llulong(ULIntLL x) {
	if (x.active_length == 0) {
		printf("( NULL )");
		return;
	}
	printf("( ");
	struct ulong_list *current = x.head;
	for (size_t i = 0; i < x.active_length - 1; i++) {
		print_ulong(current->data);
		printf(", ");
		current = current->next;
	}
	print_ulong(current->data);
	printf(" )");
}
// --------------------------------------------------------------------------------

void print_llllong(LLIntLL x) {
	if (x.active_length == 0) {
		printf("( NULL )");
		return;
	}
	printf("( ");
	struct llong_list *current = x.head;
	for (size_t i = 0; i < x.active_length - 1; i++) {
		print_llong(current->data);
		printf(", ");
		current = current->next;
	}
	print_llong(current->data);
	printf(" )");
}
// --------------------------------------------------------------------------------

void print_llullong(ULLIntLL x) {
	if (x.active_length == 0) {
		printf("( NULL )");
		return;
	}
	printf("( ");
	struct ullong_list *current = x.head;
	for (size_t i = 0; i < x.active_length - 1; i++) {
		print_ullong(current->data);
		printf(", ");
		current = current->next;
	}
	print_ullong(current->data);
	printf(" )");
}
// --------------------------------------------------------------------------------

void print_llfloat(FltLL x) {
	if (x.active_length == 0) {
		printf("( NULL )");
		return;
	}
	printf("( ");
	struct float_list *current = x.head;
	for (size_t i = 0; i < x.active_length - 1; i++) {
		print_float(current->data);
		printf(", ");
		current = current->next;
	}
	print_float(current->data);
	printf(" )");
}
// --------------------------------------------------------------------------------

void print_lldouble(DbleLL x) {
	if (x.active_length == 0) {
		printf("( NULL )");
		return;
	}
	printf("( ");
	struct double_list *current = x.head;
	for (size_t i = 0; i < x.active_length - 1; i++) {
		print_double(current->data);
		printf(", ");
		current = current->next;
	}
	print_double(current->data);
	printf(" )");
}
// --------------------------------------------------------------------------------

void print_llldouble(LDbleLL x) {
	if (x.active_length == 0) {
		printf("( NULL )");
		return;
	}
	printf("( ");
	struct ldouble_list *current = x.head;
	for (size_t i = 0; i < x.active_length - 1; i++) {
		print_longdouble(current->data);
		printf(", ");
		current = current->next;
	}
	print_longdouble(current->data);
	printf(" )");
}
// --------------------------------------------------------------------------------

void print_llchar(CharLL x) {
	if (x.active_length == 0) {
		printf("( NULL )");
		return;
	}
	printf("( ");
	struct char_list *current = x.head;
	for (size_t i = 0; i < x.active_length - 1; i++) {
		print_char(current->data);
		printf(", ");
		current = current->next;
	}
	print_char(current->data);
	printf(" )");
}
// --------------------------------------------------------------------------------

void print_llbool(BoolLL x) {
	if (x.active_length == 0) {
		printf("( NULL )");
		return;
	}
	printf("( ");
	struct bool_list *current = x.head;
	for (size_t i = 0; i < x.active_length - 1; i++) {
		print_bool(current->data);
		printf(", ");
		current = current->next;
	}
	print_bool(current->data);
	printf(" )");
}
// --------------------------------------------------------------------------------

void print_llstring(StringLL x) {
	if (x.active_length == 0) {
		printf("( NULL )");
		return;
	}
	printf("( ");
	struct string_list *current = x.head;
	for (size_t i = 0; i < x.active_length - 1; i++) {
		print_string(current->data);
		printf(", ");
		current = current->next;
	}
	print_string(current->data);
	printf(" )");
}
// ================================================================================
// ================================================================================
// BINARY TREE FUNCTIONS

void print_short_preorder(short_btree *root)
{
    if(root != NULL)
    {
        printf("%hd ", root->key);
        print_short_preorder(root->left);
        print_short_preorder(root->right);
    }
}
// --------------------------------------------------------------------------------

void print_btshort(ShortBT x) {
	if (x.active_length == 0) {
		printf("< NULL >");
		return;
	}
	printf("< ");
	print_short_preorder(x.root);
	printf(">");
}
// --------------------------------------------------------------------------------

void print_ushort_preorder(ushort_btree *root)
{
    if(root != NULL)
    {
        printf("%hu ", root->key);
        print_ushort_preorder(root->left);
        print_ushort_preorder(root->right);
    }
}
// --------------------------------------------------------------------------------

void print_btushort(UShortBT x) {
	if (x.active_length == 0) {
		printf("< NULL >");
		return;
	}
	printf("< ");
	print_ushort_preorder(x.root);
	printf(">");
}
// --------------------------------------------------------------------------------

void print_int_preorder(int_btree *root)
{
    if(root != NULL)
    {
        printf("%d ", root->key);
        print_int_preorder(root->left);
        print_int_preorder(root->right);
    }
}
// --------------------------------------------------------------------------------

void print_btint(IntBT x) {
	if (x.active_length == 0) {
		printf("< NULL >");
		return;
	}
	printf("< ");
	print_int_preorder(x.root);
	printf(">");
}
// --------------------------------------------------------------------------------

void print_uint_preorder(uint_btree *root)
{
    if(root != NULL)
    {
        printf("%u ", root->key);
        print_uint_preorder(root->left);
        print_uint_preorder(root->right);
    }
}
// --------------------------------------------------------------------------------

void print_btuint(UIntBT x) {
	if (x.active_length == 0) {
		printf("< NULL >");
		return;
	}
	printf("< ");
	print_uint_preorder(x.root);
	printf(">");
}
// --------------------------------------------------------------------------------

void print_long_preorder(long_btree *root)
{
    if(root != NULL)
    {
        printf("%ld ", root->key);
        print_long_preorder(root->left);
        print_long_preorder(root->right);
    }
}
// --------------------------------------------------------------------------------

void print_btlong(LIntBT x) {
	if (x.active_length == 0) {
		printf("< NULL >");
		return;
	}
	printf("< ");
	print_long_preorder(x.root);
	printf(">");
}
// --------------------------------------------------------------------------------

void print_ulong_preorder(ulong_btree *root)
{
    if(root != NULL)
    {
        printf("%lu ", root->key);
        print_ulong_preorder(root->left);
        print_ulong_preorder(root->right);
    }
}
// --------------------------------------------------------------------------------

void print_btulong(ULIntBT x) {
	if (x.active_length == 0) {
		printf("< NULL >");
		return;
	}
	printf("< ");
	print_ulong_preorder(x.root);
	printf(">");
}
// --------------------------------------------------------------------------------

void print_llong_preorder(llong_btree *root)
{
    if(root != NULL)
    {
        printf("%lld ", root->key);
        print_llong_preorder(root->left);
        print_llong_preorder(root->right);
    }
}
// --------------------------------------------------------------------------------

void print_btllong(LLIntBT x) {
	if (x.active_length == 0) {
		printf("< NULL >");
		return;
	}
	printf("< ");
	print_llong_preorder(x.root);
	printf(">");
}
// --------------------------------------------------------------------------------

void print_ullong_preorder(ullong_btree *root)
{
    if(root != NULL)
    {
        printf("%llu ", root->key);
        print_ullong_preorder(root->left);
        print_ullong_preorder(root->right);
    }
}
// --------------------------------------------------------------------------------

void print_btullong(ULLIntBT x) {
	if (x.active_length == 0) {
		printf("< NULL >");
		return;
	}
	printf("< ");
	print_ullong_preorder(x.root);
	printf(">");
}
// --------------------------------------------------------------------------------

void print_float_preorder(float_btree *root)
{
    if(root != NULL)
    {
        printf("%f ", root->key);
        print_float_preorder(root->left);
        print_float_preorder(root->right);
    }
}
// --------------------------------------------------------------------------------

void print_btfloat(FltBT x) {
	if (x.active_length == 0) {
		printf("< NULL >");
		return;
	}
	printf("< ");
	print_float_preorder(x.root);
	printf(">");
}
// --------------------------------------------------------------------------------

void print_double_preorder(double_btree *root)
{
    if(root != NULL)
    {
        printf("%lf ", root->key);
        print_double_preorder(root->left);
        print_double_preorder(root->right);
    }
}
// --------------------------------------------------------------------------------

void print_btdouble(DbleBT x) {
	if (x.active_length == 0) {
		printf("< NULL >");
		return;
	}
	printf("< ");
	print_double_preorder(x.root);
	printf(">");
}
// --------------------------------------------------------------------------------

void print_ldouble_preorder(ldouble_btree *root)
{
    if(root != NULL)
    {
        printf("%Lf ", root->key);
        print_ldouble_preorder(root->left);
        print_ldouble_preorder(root->right);
    }
}
// --------------------------------------------------------------------------------

void print_btldouble(LDbleBT x) {
	if (x.active_length == 0) {
		printf("< NULL >");
		return;
	}
	printf("< ");
	print_ldouble_preorder(x.root);
	printf(">");
}
// --------------------------------------------------------------------------------

void print_char_preorder(char_btree *root)
{
    if(root != NULL)
    {
        printf("%c ", root->key);
        print_char_preorder(root->left);
        print_char_preorder(root->right);
    }
}
// --------------------------------------------------------------------------------

void print_btchar(CharBT x) {
	if (x.active_length == 0) {
		printf("< NULL >");
		return;
	}
	printf("< ");
	print_char_preorder(x.root);
	printf(">");
}
// --------------------------------------------------------------------------------

void print_uchar_preorder(uchar_btree *root)
{
    if(root != NULL)
    {
        printf("%c ", root->key);
        print_uchar_preorder(root->left);
        print_uchar_preorder(root->right);
    }
}
// --------------------------------------------------------------------------------

void print_btuchar(UCharBT x) {
	if (x.active_length == 0) {
		printf("< NULL >");
		return;
	}
	printf("< ");
	print_uchar_preorder(x.root);
	printf(">");
}
// --------------------------------------------------------------------------------

void print_string_preorder(string_btree *root)
{
    if(root != NULL)
    {
        printf("%s ", root->key);
        print_string_preorder(root->left);
        print_string_preorder(root->right);
    }
}
// --------------------------------------------------------------------------------

void print_btstring(StringBT x) {
	if (x.active_length == 0) {
		printf("< NULL >");
		return;
	}
	printf("< ");
	print_string_preorder(x.root);
	printf(">");
}
// ================================================================================
// ================================================================================
// eof
