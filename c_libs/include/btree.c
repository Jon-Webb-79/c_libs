// ================================================================================
// ================================================================================
// - File:    btree.c
// - Purpose: Describe the file purpose here
//
// Source Metadata
// - Author:  Jonathan A. Webb
// - Date:    September 25, 2023
// - Version: 1.0
// - Copyright: Copyright 2022, Jon Webb Inc.
// ================================================================================
// ================================================================================
// Include modules here

#include "btree.h"


void init_short_btree(ShortBT *tree) {
	tree->active_length = 0;
	tree->root = NULL;
	tree->status = true;
}
// --------------------------------------------------------------------------------

void init_ushort_btree(UShortBT *tree) {
	tree->active_length = 0;
	tree->root = NULL;
	tree->status = true;
}
// --------------------------------------------------------------------------------

void init_int_btree(IntBT *tree) {
	tree->active_length = 0;
	tree->root = NULL;
	tree->status = true;
}
// --------------------------------------------------------------------------------

void init_uint_btree(UIntBT *tree) {
	tree->active_length = 0;
	tree->root = NULL;
	tree->status = true;
}
// --------------------------------------------------------------------------------

void init_long_btree(LIntBT *tree) {
	tree->active_length = 0;
	tree->root = NULL;
	tree->status = true;
}
// --------------------------------------------------------------------------------

void init_ulong_btree(ULIntBT *tree) {
	tree->active_length = 0;
	tree->root = NULL;
	tree->status = true;
}
// --------------------------------------------------------------------------------

void init_llong_btree(LLIntBT *tree) {
	tree->active_length = 0;
	tree->root = NULL;
	tree->status = true;
}
// --------------------------------------------------------------------------------

void init_ullong_btree(ULLIntBT *tree) {
	tree->active_length = 0;
	tree->root = NULL;
	tree->status = true;
}
// --------------------------------------------------------------------------------

void init_float_btree(FltBT *tree) {
	tree->active_length = 0;
	tree->root = NULL;
	tree->status = true;
}
// --------------------------------------------------------------------------------

void init_double_btree(DbleBT *tree) {
	tree->active_length = 0;
	tree->root = NULL;
	tree->status = true;
}
// --------------------------------------------------------------------------------

void init_ldouble_btree(LDbleBT *tree) {
	tree->active_length = 0;
	tree->root = NULL;
	tree->status = true;
}
// --------------------------------------------------------------------------------

void init_char_btree(CharBT *tree) {
	tree->active_length = 0;
	tree->root = NULL;
	tree->status = true;
}
// --------------------------------------------------------------------------------

void init_uchar_btree(UCharBT *tree) {
	tree->active_length = 0;
	tree->root = NULL;
	tree->status = true;
}
// --------------------------------------------------------------------------------

void init_string_btree(StringBT *tree) {
	tree->active_length = 0;
	tree->root = NULL;
	tree->status = true;
}
// ================================================================================
// ================================================================================
// NEW_TYPE_NODE (PRIVATE FUNCTIONS)


short_btree *new_short_node(short int key) {
	struct short_btree* node = malloc(sizeof(struct short_btree));
	if (node == NULL) return node;
    node->key   = key;
    node->left   = NULL;
    node->right  = NULL;
    node->height = 1;  // new node is initially added at leaf
    return node;
}
// --------------------------------------------------------------------------------

ushort_btree *new_ushort_node(unsigned short int key) {
	struct ushort_btree* node = malloc(sizeof(struct ushort_btree));
	if (node == NULL) return node;
    node->key   = key;
    node->left   = NULL;
    node->right  = NULL;
    node->height = 1;  // new node is initially added at leaf
    return node;
}
// --------------------------------------------------------------------------------

int_btree *new_int_node(int key) {
	struct int_btree* node = malloc(sizeof(struct int_btree));
	if (node == NULL) return node;
    node->key   = key;
    node->left   = NULL;
    node->right  = NULL;
    node->height = 1;  // new node is initially added at leaf
    return node;
}
// --------------------------------------------------------------------------------

uint_btree *new_uint_node(unsigned int key) {
	struct uint_btree* node = malloc(sizeof(struct uint_btree));
	if (node == NULL) return node;
    node->key   = key;
    node->left   = NULL;
    node->right  = NULL;
    node->height = 1;  // new node is initially added at leaf
    return node;
}
// --------------------------------------------------------------------------------

long_btree *new_long_node(long int key) {
	struct long_btree* node = malloc(sizeof(struct long_btree));
	if (node == NULL) return node;
    node->key   = key;
    node->left   = NULL;
    node->right  = NULL;
    node->height = 1;  // new node is initially added at leaf
    return node;
}
// --------------------------------------------------------------------------------

ulong_btree *new_ulong_node(unsigned long int key) {
	struct ulong_btree* node = malloc(sizeof(struct ulong_btree));
	if (node == NULL) return node;
    node->key   = key;
    node->left   = NULL;
    node->right  = NULL;
    node->height = 1;  // new node is initially added at leaf
    return node;
}
// --------------------------------------------------------------------------------

llong_btree *new_llong_node(long long int key) {
	struct llong_btree* node = malloc(sizeof(struct llong_btree));
	if (node == NULL) return node;
    node->key   = key;
    node->left   = NULL;
    node->right  = NULL;
    node->height = 1;  // new node is initially added at leaf
    return node;
}
// --------------------------------------------------------------------------------

ullong_btree *new_ullong_node(unsigned long long int key) {
	struct ullong_btree* node = malloc(sizeof(struct ullong_btree));
	if (node == NULL) return node;
    node->key   = key;
    node->left   = NULL;
    node->right  = NULL;
    node->height = 1;  // new node is initially added at leaf
    return node;
}
// --------------------------------------------------------------------------------

float_btree *new_float_node(float key) {
	struct float_btree* node = malloc(sizeof(struct float_btree));
	if (node == NULL) return node;
    node->key   = key;
    node->left   = NULL;
    node->right  = NULL;
    node->height = 1;  // new node is initially added at leaf
    return node;
}
// --------------------------------------------------------------------------------

double_btree *new_double_node(double key) {
	struct double_btree* node = malloc(sizeof(struct double_btree));
	if (node == NULL) return node;
    node->key   = key;
    node->left   = NULL;
    node->right  = NULL;
    node->height = 1;  // new node is initially added at leaf
    return node;
}
// --------------------------------------------------------------------------------

ldouble_btree *new_ldouble_node(long double key) {
	struct ldouble_btree* node = malloc(sizeof(struct ldouble_btree));
	if (node == NULL) return node;
    node->key   = key;
    node->left   = NULL;
    node->right  = NULL;
    node->height = 1;  // new node is initially added at leaf
    return node;
}
// --------------------------------------------------------------------------------

char_btree *new_char_node(char key) {
	struct char_btree* node = malloc(sizeof(struct char_btree));
	if (node == NULL) return node;
    node->key   = key;
    node->left   = NULL;
    node->right  = NULL;
    node->height = 1;  // new node is initially added at leaf
    return node;
}
// --------------------------------------------------------------------------------

uchar_btree *new_uchar_node(unsigned char key) {
	struct uchar_btree* node = malloc(sizeof(struct uchar_btree));
	if (node == NULL) return node;
    node->key   = key;
    node->left   = NULL;
    node->right  = NULL;
    node->height = 1;  // new node is initially added at leaf
    return node;
}
// --------------------------------------------------------------------------------

string_btree *new_string_node(char *key) {
	struct string_btree* node = malloc(sizeof(struct string_btree));
	if (node == NULL) return node;
    node->key   = key;
    node->left   = NULL;
    node->right  = NULL;
    node->height = 1;  // new node is initially added at leaf
    return node;
}
// ================================================================================
// ================================================================================
// IS_TYPE_BTREE_DATA

bool is_short_btree_data(ShortBT *tree, short int key) {
	struct short_btree *root = tree->root;
	while (root != NULL) {
		if (root->key > key) root = root->left;
		else if (root->key < key) root = root->right;
		else if (root->key == key) return true;
	}
	return false;
}
// --------------------------------------------------------------------------------

bool is_ushort_btree_data(UShortBT *tree, unsigned short int key) {
	struct ushort_btree *root = tree->root;
	while (root != NULL) {
		if (root->key > key) root = root->left;
		else if (root->key < key) root = root->right;
		else if (root->key == key) return true;
	}
	return false;
}
// --------------------------------------------------------------------------------

bool is_int_btree_data(IntBT *tree, int key) {
	struct int_btree *root = tree->root;
	while (root != NULL) {
		if (root->key > key) root = root->left;
		else if (root->key < key) root = root->right;
		else if (root->key == key) return true;
	}
	return false;
}
// --------------------------------------------------------------------------------

bool is_uint_btree_data(UIntBT *tree, unsigned int key) {
	struct uint_btree *root = tree->root;
	while (root != NULL) {
		if (root->key > key) root = root->left;
		else if (root->key < key) root = root->right;
		else if (root->key == key) return true;
	}
	return false;
}
// --------------------------------------------------------------------------------

bool is_long_btree_data(LIntBT *tree, long int key) {
	struct long_btree *root = tree->root;
	while (root != NULL) {
		if (root->key > key) root = root->left;
		else if (root->key < key) root = root->right;
		else if (root->key == key) return true;
	}
	return false;
}
// --------------------------------------------------------------------------------

bool is_ulong_btree_data(ULIntBT *tree, unsigned long int key) {
	struct ulong_btree *root = tree->root;
	while (root != NULL) {
		if (root->key > key) root = root->left;
		else if (root->key < key) root = root->right;
		else if (root->key == key) return true;
	}
	return false;
}
// --------------------------------------------------------------------------------

bool is_llong_btree_data(LLIntBT *tree, long long int key) {
	struct llong_btree *root = tree->root;
	while (root != NULL) {
		if (root->key > key) root = root->left;
		else if (root->key < key) root = root->right;
		else if (root->key == key) return true;
	}
	return false;
}
// --------------------------------------------------------------------------------

bool is_ullong_btree_data(ULLIntBT *tree, unsigned long long int key) {
	struct ullong_btree *root = tree->root;
	while (root != NULL) {
		if (root->key > key) root = root->left;
		else if (root->key < key) root = root->right;
		else if (root->key == key) return true;
	}
	return false;
}
// --------------------------------------------------------------------------------

bool is_float_btree_data(FltBT *tree, float key) {
	struct float_btree *root = tree->root;
	while (root != NULL) {
		if (root->key > key) root = root->left;
		else if (root->key < key) root = root->right;
		else if (root->key == key) return true;
	}
	return false;
}
// --------------------------------------------------------------------------------

bool is_double_btree_data(DbleBT *tree, double key) {
	struct double_btree *root = tree->root;
	while (root != NULL) {
		if (root->key > key) root = root->left;
		else if (root->key < key) root = root->right;
		else if (root->key == key) return true;
	}
	return false;
}
// --------------------------------------------------------------------------------

bool is_ldouble_btree_data(LDbleBT *tree, long double key) {
	struct ldouble_btree *root = tree->root;
	while (root != NULL) {
		if (root->key > key) root = root->left;
		else if (root->key < key) root = root->right;
		else if (root->key == key) return true;
	}
	return false;
}
// --------------------------------------------------------------------------------

bool is_char_btree_data(CharBT *tree, char key) {
	struct char_btree *root = tree->root;
	while (root != NULL) {
		if (root->key > key) root = root->left;
		else if (root->key < key) root = root->right;
		else if (root->key == key) return true;
	}
	return false;
}
// --------------------------------------------------------------------------------

bool is_uchar_btree_data(UCharBT *tree, unsigned char key) {
	struct uchar_btree *root = tree->root;
	while (root != NULL) {
		if (root->key > key) root = root->left;
		else if (root->key < key) root = root->right;
		else if (root->key == key) return true;
	}
	return false;
}
// --------------------------------------------------------------------------------

bool is_string_btree_data(StringBT *tree, char *key) {
	struct string_btree *root = tree->root;
	while (root != NULL) {
		if (root->key > key) root = root->left;
		else if (root->key < key) root = root->right;
		else if (root->key == key) return true;
	}
	return false;
}
// ================================================================================
// ================================================================================
// TYPE_NODE_HEIGHT FUNCTIONS (PRIVAT FUNCTIONS)

short int short_node_height(short_btree *N) {
	if (N == NULL) return 0;
	return N->height;
}
// --------------------------------------------------------------------------------

short int ushort_node_height(ushort_btree *N) {
	if (N == NULL) return 0;
	return N->height;
}
// --------------------------------------------------------------------------------

short int int_node_height(int_btree *N) {
	if (N == NULL) return 0;
	return N->height;
}
// --------------------------------------------------------------------------------

short int uint_node_height(uint_btree *N) {
	if (N == NULL) return 0;
	return N->height;
}
// --------------------------------------------------------------------------------

short int long_node_height(long_btree *N) {
	if (N == NULL) return 0;
	return N->height;
}
// --------------------------------------------------------------------------------

short int ulong_node_height(ulong_btree *N) {
	if (N == NULL) return 0;
	return N->height;
}
// --------------------------------------------------------------------------------

short int llong_node_height(llong_btree *N) {
	if (N == NULL) return 0;
	return N->height;
}
// --------------------------------------------------------------------------------

short int ullong_node_height(ullong_btree *N) {
	if (N == NULL) return 0;
	return N->height;
}
// --------------------------------------------------------------------------------

short int float_node_height(float_btree *N) {
	if (N == NULL) return 0;
	return N->height;
}
// --------------------------------------------------------------------------------

short int double_node_height(double_btree *N) {
	if (N == NULL) return 0;
	return N->height;
}
// --------------------------------------------------------------------------------

short int ldouble_node_height(ldouble_btree *N) {
	if (N == NULL) return 0;
	return N->height;
}
// --------------------------------------------------------------------------------

short int char_node_height(char_btree *N) {
	if (N == NULL) return 0;
	return N->height;
}
// --------------------------------------------------------------------------------

short int uchar_node_height(uchar_btree *N) {
	if (N == NULL) return 0;
	return N->height;
}
// --------------------------------------------------------------------------------

short int string_node_height(string_btree *N) {
	if (N == NULL) return 0;
	return N->height;
}
// ================================================================================
// ================================================================================
// MAX_TYPE_NUM FUNCTION (PRIVATE FUNCTIONS)

short int max_num(short int a, short int b) {
	return (a > b)? a : b;
}
// ================================================================================
// ================================================================================
// RIGHT_TYPE_ROTATE FUNCTIONS (PRIVATE FUNCTIONS)

short_btree *right_short_rotate(short_btree * y) {
	struct short_btree *x = y->left;
    struct short_btree *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    y->height = max_num(short_node_height(y->left),
                        short_node_height(y->right)) + 1;
    x->height = max_num(short_node_height(x->left),
                        short_node_height(x->right)) + 1;

    // Return new root
    return x;
}
// --------------------------------------------------------------------------------

ushort_btree *right_ushort_rotate(ushort_btree * y) {
	struct ushort_btree *x = y->left;
    struct ushort_btree *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    y->height = max_num(ushort_node_height(y->left),
                        ushort_node_height(y->right)) + 1;
    x->height = max_num(ushort_node_height(x->left),
                        ushort_node_height(x->right)) + 1;

    // Return new root
    return x;
}
// --------------------------------------------------------------------------------

int_btree *right_int_rotate(int_btree * y) {
	struct int_btree *x = y->left;
    struct int_btree *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    y->height = max_num(int_node_height(y->left),
                        int_node_height(y->right)) + 1;
    x->height = max_num(int_node_height(x->left),
                        int_node_height(x->right)) + 1;

    // Return new root
    return x;
}
// --------------------------------------------------------------------------------

uint_btree *right_uint_rotate(uint_btree * y) {
	struct uint_btree *x = y->left;
    struct uint_btree *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    y->height = max_num(uint_node_height(y->left),
                        uint_node_height(y->right)) + 1;
    x->height = max_num(uint_node_height(x->left),
                        uint_node_height(x->right)) + 1;

    // Return new root
    return x;
}
// --------------------------------------------------------------------------------

long_btree *right_long_rotate(long_btree * y) {
	struct long_btree *x = y->left;
    struct long_btree *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    y->height = max_num(long_node_height(y->left),
                        long_node_height(y->right)) + 1;
    x->height = max_num(long_node_height(x->left),
                        long_node_height(x->right)) + 1;

    // Return new root
    return x;
}
// --------------------------------------------------------------------------------

ulong_btree *right_ulong_rotate(ulong_btree * y) {
	struct ulong_btree *x = y->left;
    struct ulong_btree *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    y->height = max_num(ulong_node_height(y->left),
                        ulong_node_height(y->right)) + 1;
    x->height = max_num(ulong_node_height(x->left),
                        ulong_node_height(x->right)) + 1;

    // Return new root
    return x;
}
// --------------------------------------------------------------------------------

llong_btree *right_llong_rotate(llong_btree * y) {
	struct llong_btree *x = y->left;
    struct llong_btree *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    y->height = max_num(llong_node_height(y->left),
                        llong_node_height(y->right)) + 1;
    x->height = max_num(llong_node_height(x->left),
                        llong_node_height(x->right)) + 1;

    // Return new root
    return x;
}
// --------------------------------------------------------------------------------

ullong_btree *right_ullong_rotate(ullong_btree * y) {
	struct ullong_btree *x = y->left;
    struct ullong_btree *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    y->height = max_num(ullong_node_height(y->left),
                        ullong_node_height(y->right)) + 1;
    x->height = max_num(ullong_node_height(x->left),
                        ullong_node_height(x->right)) + 1;

    // Return new root
    return x;
}
// --------------------------------------------------------------------------------

float_btree *right_float_rotate(float_btree * y) {
	struct float_btree *x = y->left;
    struct float_btree *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    y->height = max_num(float_node_height(y->left),
                        float_node_height(y->right)) + 1;
    x->height = max_num(float_node_height(x->left),
                        float_node_height(x->right)) + 1;

    // Return new root
    return x;
}
// --------------------------------------------------------------------------------

double_btree *right_double_rotate(double_btree * y) {
	struct double_btree *x = y->left;
    struct double_btree *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    y->height = max_num(double_node_height(y->left),
                        double_node_height(y->right)) + 1;
    x->height = max_num(double_node_height(x->left),
                        double_node_height(x->right)) + 1;

    // Return new root
    return x;
}
// --------------------------------------------------------------------------------

ldouble_btree *right_ldouble_rotate(ldouble_btree * y) {
	struct ldouble_btree *x = y->left;
    struct ldouble_btree *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    y->height = max_num(ldouble_node_height(y->left),
                        ldouble_node_height(y->right)) + 1;
    x->height = max_num(ldouble_node_height(x->left),
                        ldouble_node_height(x->right)) + 1;

    // Return new root
    return x;
}
// --------------------------------------------------------------------------------

char_btree *right_char_rotate(char_btree * y) {
	struct char_btree *x = y->left;
    struct char_btree *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    y->height = max_num(char_node_height(y->left),
                        char_node_height(y->right)) + 1;
    x->height = max_num(char_node_height(x->left),
                        char_node_height(x->right)) + 1;

    // Return new root
    return x;
}
// --------------------------------------------------------------------------------

uchar_btree *right_uchar_rotate(uchar_btree * y) {
	struct uchar_btree *x = y->left;
    struct uchar_btree *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    y->height = max_num(uchar_node_height(y->left),
                        uchar_node_height(y->right)) + 1;
    x->height = max_num(uchar_node_height(x->left),
                        uchar_node_height(x->right)) + 1;

    // Return new root
    return x;
}
// --------------------------------------------------------------------------------

string_btree *right_string_rotate(string_btree * y) {
	struct string_btree *x = y->left;
    struct string_btree *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    y->height = max_num(string_node_height(y->left),
                        string_node_height(y->right)) + 1;
    x->height = max_num(string_node_height(x->left),
                        string_node_height(x->right)) + 1;

    // Return new root
    return x;
}
// ================================================================================
// ================================================================================
// LEFT_STRING_ROTATE FUNCTIONS (PRIVATE FUNCTIONS)

short_btree *left_short_rotate(short_btree *x) {
	struct short_btree *y = x->right;
    struct short_btree *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    //  Update heights
    x->height = max_num(short_node_height(x->left),
                        short_node_height(x->right)) + 1;
    y->height = max_num(short_node_height(y->left),
                        short_node_height(y->right)) + 1;

    // Return new root
    return y;
}
// --------------------------------------------------------------------------------

ushort_btree *left_ushort_rotate(ushort_btree *x) {
	struct ushort_btree *y = x->right;
    struct ushort_btree *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    //  Update heights
    x->height = max_num(ushort_node_height(x->left),
                        ushort_node_height(x->right)) + 1;
    y->height = max_num(ushort_node_height(y->left),
                        ushort_node_height(y->right)) + 1;

    // Return new root
    return y;
}
// --------------------------------------------------------------------------------

int_btree *left_int_rotate(int_btree *x) {
	struct int_btree *y = x->right;
    struct int_btree *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    //  Update heights
    x->height = max_num(int_node_height(x->left),
                        int_node_height(x->right)) + 1;
    y->height = max_num(int_node_height(y->left),
                        int_node_height(y->right)) + 1;

    // Return new root
    return y;
}
// --------------------------------------------------------------------------------

uint_btree *left_uint_rotate(uint_btree *x) {
	struct uint_btree *y = x->right;
    struct uint_btree *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    //  Update heights
    x->height = max_num(uint_node_height(x->left),
                        uint_node_height(x->right)) + 1;
    y->height = max_num(uint_node_height(y->left),
                        uint_node_height(y->right)) + 1;

    // Return new root
    return y;
}
// --------------------------------------------------------------------------------

long_btree *left_long_rotate(long_btree *x) {
	struct long_btree *y = x->right;
    struct long_btree *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    //  Update heights
    x->height = max_num(long_node_height(x->left),
                        long_node_height(x->right)) + 1;
    y->height = max_num(long_node_height(y->left),
                        long_node_height(y->right)) + 1;

    // Return new root
    return y;
}
// --------------------------------------------------------------------------------

ulong_btree *left_ulong_rotate(ulong_btree *x) {
	struct ulong_btree *y = x->right;
    struct ulong_btree *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    //  Update heights
    x->height = max_num(ulong_node_height(x->left),
                        ulong_node_height(x->right)) + 1;
    y->height = max_num(ulong_node_height(y->left),
                        ulong_node_height(y->right)) + 1;

    // Return new root
    return y;
}
// --------------------------------------------------------------------------------

llong_btree *left_llong_rotate(llong_btree *x) {
	struct llong_btree *y = x->right;
    struct llong_btree *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    //  Update heights
    x->height = max_num(llong_node_height(x->left),
                        llong_node_height(x->right)) + 1;
    y->height = max_num(llong_node_height(y->left),
                        llong_node_height(y->right)) + 1;

    // Return new root
    return y;
}
// --------------------------------------------------------------------------------

ullong_btree *left_ullong_rotate(ullong_btree *x) {
	struct ullong_btree *y = x->right;
    struct ullong_btree *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    //  Update heights
    x->height = max_num(ullong_node_height(x->left),
                        ullong_node_height(x->right)) + 1;
    y->height = max_num(ullong_node_height(y->left),
                        ullong_node_height(y->right)) + 1;

    // Return new root
    return y;
}
// --------------------------------------------------------------------------------

float_btree *left_float_rotate(float_btree *x) {
	struct float_btree *y = x->right;
    struct float_btree *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    //  Update heights
    x->height = max_num(float_node_height(x->left),
                        float_node_height(x->right)) + 1;
    y->height = max_num(float_node_height(y->left),
                        float_node_height(y->right)) + 1;

    // Return new root
    return y;
}
// --------------------------------------------------------------------------------

double_btree *left_double_rotate(double_btree *x) {
	struct double_btree *y = x->right;
    struct double_btree *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    //  Update heights
    x->height = max_num(double_node_height(x->left),
                        double_node_height(x->right)) + 1;
    y->height = max_num(double_node_height(y->left),
                        double_node_height(y->right)) + 1;

    // Return new root
    return y;
}
// --------------------------------------------------------------------------------

ldouble_btree *left_ldouble_rotate(ldouble_btree *x) {
	struct ldouble_btree *y = x->right;
    struct ldouble_btree *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    //  Update heights
    x->height = max_num(ldouble_node_height(x->left),
                        ldouble_node_height(x->right)) + 1;
    y->height = max_num(ldouble_node_height(y->left),
                        ldouble_node_height(y->right)) + 1;

    // Return new root
    return y;
}
// --------------------------------------------------------------------------------

char_btree *left_char_rotate(char_btree *x) {
	struct char_btree *y = x->right;
    struct char_btree *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    //  Update heights
    x->height = max_num(char_node_height(x->left),
                        char_node_height(x->right)) + 1;
    y->height = max_num(char_node_height(y->left),
                        char_node_height(y->right)) + 1;

    // Return new root
    return y;
}
// --------------------------------------------------------------------------------

uchar_btree *left_uchar_rotate(uchar_btree *x) {
	struct uchar_btree *y = x->right;
    struct uchar_btree *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    //  Update heights
    x->height = max_num(uchar_node_height(x->left),
                        uchar_node_height(x->right)) + 1;
    y->height = max_num(uchar_node_height(y->left),
                        uchar_node_height(y->right)) + 1;

    // Return new root
    return y;
}
// --------------------------------------------------------------------------------

string_btree *left_string_rotate(string_btree *x) {
	struct string_btree *y = x->right;
    struct string_btree *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    //  Update heights
    x->height = max_num(string_node_height(x->left),
                        string_node_height(x->right)) + 1;
    y->height = max_num(string_node_height(y->left),
                        string_node_height(y->right)) + 1;

    // Return new root
    return y;
}
// ================================================================================
// ================================================================================
// TYPE_NODE_BALANCE FUNCTION (PRIVATE FUNCTIONS)

short int short_node_balance(short_btree *N) {
	return short_node_height(N->left) - short_node_height(N->right);
}
// --------------------------------------------------------------------------------

short int ushort_node_balance(ushort_btree *N) {
	if (N == NULL) return 0;
	return ushort_node_height(N->left) - ushort_node_height(N->right);
}
// --------------------------------------------------------------------------------

short int int_node_balance(int_btree *N) {
	if (N == NULL) return 0;
	return int_node_height(N->left) - int_node_height(N->right);
}
// --------------------------------------------------------------------------------

short int uint_node_balance(uint_btree *N) {
	if (N == NULL) return 0;
	return uint_node_height(N->left) - uint_node_height(N->right);
}
// --------------------------------------------------------------------------------

short int long_node_balance(long_btree *N) {
	if (N == NULL) return 0;
	return long_node_height(N->left) - long_node_height(N->right);
}
// --------------------------------------------------------------------------------

short int ulong_node_balance(ulong_btree *N) {
	if (N == NULL) return 0;
	return ulong_node_height(N->left) - ulong_node_height(N->right);
}
// --------------------------------------------------------------------------------

short int llong_node_balance(llong_btree *N) {
	if (N == NULL) return 0;
	return llong_node_height(N->left) - llong_node_height(N->right);
}
// --------------------------------------------------------------------------------

short int ullong_node_balance(ullong_btree *N) {
	if (N == NULL) return 0;
	return ullong_node_height(N->left) - ullong_node_height(N->right);
}
// --------------------------------------------------------------------------------

short int float_node_balance(float_btree *N) {
	if (N == NULL) return 0;
	return float_node_height(N->left) - float_node_height(N->right);
}
// --------------------------------------------------------------------------------

short int double_node_balance(double_btree *N) {
	if (N == NULL) return 0;
	return double_node_height(N->left) - double_node_height(N->right);
}
// --------------------------------------------------------------------------------

short int ldouble_node_balance(ldouble_btree *N) {
	if (N == NULL) return 0;
	return ldouble_node_height(N->left) - ldouble_node_height(N->right);
}
// --------------------------------------------------------------------------------

short int char_node_balance(char_btree *N) {
	if (N == NULL) return 0;
	return char_node_height(N->left) - char_node_height(N->right);
}
// --------------------------------------------------------------------------------

short int uchar_node_balance(uchar_btree *N) {
	if (N == NULL) return 0;
	return uchar_node_height(N->left) - uchar_node_height(N->right);
}
// --------------------------------------------------------------------------------

short int string_node_balance(string_btree *N) {
	if (N == NULL) return 0;
	return string_node_height(N->left) - string_node_height(N->right);
}
// ================================================================================
// ================================================================================
// PUSH_TYPE_BTREE FUNCTION (PRIVATE FUNCTIONS)

short_btree *insert_short_btree(short_btree *node, short int key) {
	/* 1.  Perform the normal BST insertion */
    if (node == NULL)
        return new_short_node(key);

    if (key < node->key)
        node->left  = insert_short_btree(node->left, key);
    else if (key > node->key)
        node->right = insert_short_btree(node->right, key);
    else // Equal keys are not allowed in BST
        return node;

    /* 2. Update height of this ancestor node */
    node->height = 1 + max_num(short_node_height(node->left),
                               short_node_height(node->right));

    /* 3. Get the balance factor of this ancestor
          node to check whether this node became
          unbalanced */
	short int balance = short_node_balance(node);

    // If this node becomes unbalanced, then
    // there are 4 cases

    // Left Left Case
    if (balance > 1 && key < node->left->key)
        return right_short_rotate(node);

    // Right Right Case
    if (balance < -1 && key > node->right->key)
        return left_short_rotate(node);

    // Left Right Case
    if (balance > 1 && key > node->left->key)
    {
        node->left =  left_short_rotate(node->left);
        return right_short_rotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->key)
    {
        node->right = right_short_rotate(node->right);
        return left_short_rotate(node);
    }

    /* return the (unchanged) node pointer */
    return node;
}
// --------------------------------------------------------------------------------

ushort_btree *insert_ushort_btree(ushort_btree *node, unsigned short int key) {
	/* 1.  Perform the normal BST insertion */
    if (node == NULL)
        return new_ushort_node(key);

    if (key < node->key)
        node->left  = insert_ushort_btree(node->left, key);
    else if (key > node->key)
        node->right = insert_ushort_btree(node->right, key);
    else // Equal keys are not allowed in BST
        return node;

    /* 2. Update height of this ancestor node */
    node->height = 1 + max_num(ushort_node_height(node->left),
                               ushort_node_height(node->right));

    /* 3. Get the balance factor of this ancestor
          node to check whether this node became
          unbalanced */
	short int balance = ushort_node_balance(node);

    // If this node becomes unbalanced, then
    // there are 4 cases

    // Left Left Case
    if (balance > 1 && key < node->left->key)
        return right_ushort_rotate(node);

    // Right Right Case
    if (balance < -1 && key > node->right->key)
        return left_ushort_rotate(node);

    // Left Right Case
    if (balance > 1 && key > node->left->key)
    {
        node->left =  left_ushort_rotate(node->left);
        return right_ushort_rotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->key)
    {
        node->right = right_ushort_rotate(node->right);
        return left_ushort_rotate(node);
    }

    /* return the (unchanged) node pointer */
    return node;
}
// --------------------------------------------------------------------------------

int_btree *insert_int_btree(int_btree *node, int key) {
	/* 1.  Perform the normal BST insertion */
    if (node == NULL)
        return new_int_node(key);

    if (key < node->key)
        node->left  = insert_int_btree(node->left, key);
    else if (key > node->key)
        node->right = insert_int_btree(node->right, key);
    else // Equal keys are not allowed in BST
        return node;

    /* 2. Update height of this ancestor node */
    node->height = 1 + max_num(int_node_height(node->left),
                               int_node_height(node->right));

    /* 3. Get the balance factor of this ancestor
          node to check whether this node became
          unbalanced */
	short int balance = int_node_balance(node);

    // If this node becomes unbalanced, then
    // there are 4 cases

    // Left Left Case
    if (balance > 1 && key < node->left->key)
        return right_int_rotate(node);

    // Right Right Case
    if (balance < -1 && key > node->right->key)
        return left_int_rotate(node);

    // Left Right Case
    if (balance > 1 && key > node->left->key)
    {
        node->left =  left_int_rotate(node->left);
        return right_int_rotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->key)
    {
        node->right = right_int_rotate(node->right);
        return left_int_rotate(node);
    }

    /* return the (unchanged) node pointer */
    return node;
}
// --------------------------------------------------------------------------------

uint_btree *insert_uint_btree(uint_btree *node, unsigned int key) {
	/* 1.  Perform the normal BST insertion */
    if (node == NULL)
        return new_uint_node(key);

    if (key < node->key)
        node->left  = insert_uint_btree(node->left, key);
    else if (key > node->key)
        node->right = insert_uint_btree(node->right, key);
    else // Equal keys are not allowed in BST
        return node;

    /* 2. Update height of this ancestor node */
    node->height = 1 + max_num(uint_node_height(node->left),
                               uint_node_height(node->right));

    /* 3. Get the balance factor of this ancestor
          node to check whether this node became
          unbalanced */
	short int balance = uint_node_balance(node);

    // If this node becomes unbalanced, then
    // there are 4 cases

    // Left Left Case
    if (balance > 1 && key < node->left->key)
        return right_uint_rotate(node);

    // Right Right Case
    if (balance < -1 && key > node->right->key)
        return left_uint_rotate(node);

    // Left Right Case
    if (balance > 1 && key > node->left->key)
    {
        node->left =  left_uint_rotate(node->left);
        return right_uint_rotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->key)
    {
        node->right = right_uint_rotate(node->right);
        return left_uint_rotate(node);
    }

    /* return the (unchanged) node pointer */
    return node;
}
// --------------------------------------------------------------------------------

long_btree *insert_long_btree(long_btree *node, long int key) {
	/* 1.  Perform the normal BST insertion */
    if (node == NULL)
        return new_long_node(key);

    if (key < node->key)
        node->left  = insert_long_btree(node->left, key);
    else if (key > node->key)
        node->right = insert_long_btree(node->right, key);
    else // Equal keys are not allowed in BST
        return node;

    /* 2. Update height of this ancestor node */
    node->height = 1 + max_num(long_node_height(node->left),
                               long_node_height(node->right));

    /* 3. Get the balance factor of this ancestor
          node to check whether this node became
          unbalanced */
	short int balance = long_node_balance(node);

    // If this node becomes unbalanced, then
    // there are 4 cases

    // Left Left Case
    if (balance > 1 && key < node->left->key)
        return right_long_rotate(node);

    // Right Right Case
    if (balance < -1 && key > node->right->key)
        return left_long_rotate(node);

    // Left Right Case
    if (balance > 1 && key > node->left->key)
    {
        node->left =  left_long_rotate(node->left);
        return right_long_rotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->key)
    {
        node->right = right_long_rotate(node->right);
        return left_long_rotate(node);
    }

    /* return the (unchanged) node pointer */
    return node;
}
// --------------------------------------------------------------------------------

ulong_btree *insert_ulong_btree(ulong_btree *node, unsigned long int key) {
	/* 1.  Perform the normal BST insertion */
    if (node == NULL)
        return new_ulong_node(key);

    if (key < node->key)
        node->left  = insert_ulong_btree(node->left, key);
    else if (key > node->key)
        node->right = insert_ulong_btree(node->right, key);
    else // Equal keys are not allowed in BST
        return node;

    /* 2. Update height of this ancestor node */
    node->height = 1 + max_num(ulong_node_height(node->left),
                               ulong_node_height(node->right));

    /* 3. Get the balance factor of this ancestor
          node to check whether this node became
          unbalanced */
	short int balance = ulong_node_balance(node);

    // If this node becomes unbalanced, then
    // there are 4 cases

    // Left Left Case
    if (balance > 1 && key < node->left->key)
        return right_ulong_rotate(node);

    // Right Right Case
    if (balance < -1 && key > node->right->key)
        return left_ulong_rotate(node);

    // Left Right Case
    if (balance > 1 && key > node->left->key)
    {
        node->left =  left_ulong_rotate(node->left);
        return right_ulong_rotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->key)
    {
        node->right = right_ulong_rotate(node->right);
        return left_ulong_rotate(node);
    }

    /* return the (unchanged) node pointer */
    return node;
}
// --------------------------------------------------------------------------------

llong_btree *insert_llong_btree(llong_btree *node, long long int key) {
	/* 1.  Perform the normal BST insertion */
    if (node == NULL)
        return new_llong_node(key);

    if (key < node->key)
        node->left  = insert_llong_btree(node->left, key);
    else if (key > node->key)
        node->right = insert_llong_btree(node->right, key);
    else // Equal keys are not allowed in BST
        return node;

    /* 2. Update height of this ancestor node */
    node->height = 1 + max_num(llong_node_height(node->left),
                               llong_node_height(node->right));

    /* 3. Get the balance factor of this ancestor
          node to check whether this node became
          unbalanced */
	short int balance = llong_node_balance(node);

    // If this node becomes unbalanced, then
    // there are 4 cases

    // Left Left Case
    if (balance > 1 && key < node->left->key)
        return right_llong_rotate(node);

    // Right Right Case
    if (balance < -1 && key > node->right->key)
        return left_llong_rotate(node);

    // Left Right Case
    if (balance > 1 && key > node->left->key)
    {
        node->left =  left_llong_rotate(node->left);
        return right_llong_rotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->key)
    {
        node->right = right_llong_rotate(node->right);
        return left_llong_rotate(node);
    }

    /* return the (unchanged) node pointer */
    return node;
}
// --------------------------------------------------------------------------------

ullong_btree *insert_ullong_btree(ullong_btree *node, unsigned long long int key) {
	/* 1.  Perform the normal BST insertion */
    if (node == NULL)
        return new_ullong_node(key);

    if (key < node->key)
        node->left  = insert_ullong_btree(node->left, key);
    else if (key > node->key)
        node->right = insert_ullong_btree(node->right, key);
    else // Equal keys are not allowed in BST
        return node;

    /* 2. Update height of this ancestor node */
    node->height = 1 + max_num(ullong_node_height(node->left),
                               ullong_node_height(node->right));

    /* 3. Get the balance factor of this ancestor
          node to check whether this node became
          unbalanced */
	short int balance = ullong_node_balance(node);

    // If this node becomes unbalanced, then
    // there are 4 cases

    // Left Left Case
    if (balance > 1 && key < node->left->key)
        return right_ullong_rotate(node);

    // Right Right Case
    if (balance < -1 && key > node->right->key)
        return left_ullong_rotate(node);

    // Left Right Case
    if (balance > 1 && key > node->left->key)
    {
        node->left =  left_ullong_rotate(node->left);
        return right_ullong_rotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->key)
    {
        node->right = right_ullong_rotate(node->right);
        return left_ullong_rotate(node);
    }

    /* return the (unchanged) node pointer */
    return node;
}
// --------------------------------------------------------------------------------

float_btree *insert_float_btree(float_btree *node, float key) {
	/* 1.  Perform the normal BST insertion */
    if (node == NULL)
        return new_float_node(key);

    if (key < node->key)
        node->left  = insert_float_btree(node->left, key);
    else if (key > node->key)
        node->right = insert_float_btree(node->right, key);
    else // Equal keys are not allowed in BST
        return node;

    /* 2. Update height of this ancestor node */
    node->height = 1 + max_num(float_node_height(node->left),
                               float_node_height(node->right));

    /* 3. Get the balance factor of this ancestor
          node to check whether this node became
          unbalanced */
	short int balance = float_node_balance(node);

    // If this node becomes unbalanced, then
    // there are 4 cases

    // Left Left Case
    if (balance > 1 && key < node->left->key)
        return right_float_rotate(node);

    // Right Right Case
    if (balance < -1 && key > node->right->key)
        return left_float_rotate(node);

    // Left Right Case
    if (balance > 1 && key > node->left->key)
    {
        node->left =  left_float_rotate(node->left);
        return right_float_rotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->key)
    {
        node->right = right_float_rotate(node->right);
        return left_float_rotate(node);
    }

    /* return the (unchanged) node pointer */
    return node;
}
// --------------------------------------------------------------------------------

double_btree *insert_double_btree(double_btree *node, double key) {
	/* 1.  Perform the normal BST insertion */
    if (node == NULL)
        return new_double_node(key);

    if (key < node->key)
        node->left  = insert_double_btree(node->left, key);
    else if (key > node->key)
        node->right = insert_double_btree(node->right, key);
    else // Equal keys are not allowed in BST
        return node;

    /* 2. Update height of this ancestor node */
    node->height = 1 + max_num(double_node_height(node->left),
                               double_node_height(node->right));

    /* 3. Get the balance factor of this ancestor
          node to check whether this node became
          unbalanced */
	short int balance = double_node_balance(node);

    // If this node becomes unbalanced, then
    // there are 4 cases

    // Left Left Case
    if (balance > 1 && key < node->left->key)
        return right_double_rotate(node);

    // Right Right Case
    if (balance < -1 && key > node->right->key)
        return left_double_rotate(node);

    // Left Right Case
    if (balance > 1 && key > node->left->key)
    {
        node->left =  left_double_rotate(node->left);
        return right_double_rotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->key)
    {
        node->right = right_double_rotate(node->right);
        return left_double_rotate(node);
    }

    /* return the (unchanged) node pointer */
    return node;
}
// --------------------------------------------------------------------------------

ldouble_btree *insert_ldouble_btree(ldouble_btree *node, long double key) {
	/* 1.  Perform the normal BST insertion */
    if (node == NULL)
        return new_ldouble_node(key);
    if (key < node->key) {
        node->left  = insert_ldouble_btree(node->left, key);
	}
    else if (key > node->key)
        node->right = insert_ldouble_btree(node->right, key);
    else // Equal keys are not allowed in BST
        return node;
    /* 2. Update height of this ancestor node */
    node->height = 1 + max_num(ldouble_node_height(node->left),
                               ldouble_node_height(node->right));
    /* 3. Get the balance factor of this ancestor
          node to check whether this node became
          unbalanced */
	short int balance = ldouble_node_balance(node);
    // If this node becomes unbalanced, then
    // there are 4 cases

    // Left Left Case
    if (balance > 1 && key < node->left->key)
        return right_ldouble_rotate(node);

    // Right Right Case
    if (balance < -1 && key > node->right->key)
        return left_ldouble_rotate(node);

    // Left Right Case
    if (balance > 1 && key > node->left->key)
    {
        node->left =  left_ldouble_rotate(node->left);
        return right_ldouble_rotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->key)
    {
        node->right = right_ldouble_rotate(node->right);
        return left_ldouble_rotate(node);
    }

    /* return the (unchanged) node pointer */
    return node;
}
// --------------------------------------------------------------------------------

char_btree *insert_char_btree(char_btree *node, char key) {
	/* 1.  Perform the normal BST insertion */
    if (node == NULL)
        return new_char_node(key);

    if (key < node->key)
        node->left  = insert_char_btree(node->left, key);
    else if (key > node->key)
        node->right = insert_char_btree(node->right, key);
    else // Equal keys are not allowed in BST
        return node;

    /* 2. Update height of this ancestor node */
    node->height = 1 + max_num(char_node_height(node->left),
                               char_node_height(node->right));

    /* 3. Get the balance factor of this ancestor
          node to check whether this node became
          unbalanced */
	short int balance = char_node_balance(node);

    // If this node becomes unbalanced, then
    // there are 4 cases

    // Left Left Case
    if (balance > 1 && key < node->left->key)
        return right_char_rotate(node);

    // Right Right Case
    if (balance < -1 && key > node->right->key)
        return left_char_rotate(node);

    // Left Right Case
    if (balance > 1 && key > node->left->key)
    {
        node->left =  left_char_rotate(node->left);
        return right_char_rotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->key)
    {
        node->right = right_char_rotate(node->right);
        return left_char_rotate(node);
    }

    /* return the (unchanged) node pointer */
    return node;
}
// --------------------------------------------------------------------------------

uchar_btree *insert_uchar_btree(uchar_btree *node, unsigned char key) {
	/* 1.  Perform the normal BST insertion */
    if (node == NULL)
        return new_uchar_node(key);

    if (key < node->key)
        node->left  = insert_uchar_btree(node->left, key);
    else if (key > node->key)
        node->right = insert_uchar_btree(node->right, key);
    else // Equal keys are not allowed in BST
        return node;

    /* 2. Update height of this ancestor node */
    node->height = 1 + max_num(uchar_node_height(node->left),
                               uchar_node_height(node->right));

    /* 3. Get the balance factor of this ancestor
          node to check whether this node became
          unbalanced */
	short int balance = uchar_node_balance(node);

    // If this node becomes unbalanced, then
    // there are 4 cases

    // Left Left Case
    if (balance > 1 && key < node->left->key)
        return right_uchar_rotate(node);

    // Right Right Case
    if (balance < -1 && key > node->right->key)
        return left_uchar_rotate(node);

    // Left Right Case
    if (balance > 1 && key > node->left->key)
    {
        node->left =  left_uchar_rotate(node->left);
        return right_uchar_rotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->key)
    {
        node->right = right_uchar_rotate(node->right);
        return left_uchar_rotate(node);
    }

    /* return the (unchanged) node pointer */
    return node;
}
// --------------------------------------------------------------------------------

string_btree *insert_string_btree(string_btree *node, char *key) {
	/* 1.  Perform the normal BST insertion */
    if (node == NULL)
        return new_string_node(key);

    if (key < node->key)
        node->left  = insert_string_btree(node->left, key);
    else if (key > node->key)
        node->right = insert_string_btree(node->right, key);
    else // Equal keys are not allowed in BST
        return node;
    /* 2. Update height of this ancestor node */
    node->height = 1 + max_num(string_node_height(node->left),
                               string_node_height(node->right));

    /* 3. Get the balance factor of this ancestor
          node to check whether this node became
          unbalanced */
	short int balance = string_node_balance(node);

    // If this node becomes unbalanced, then
    // there are 4 cases
    // Left Left Case
    if (balance > 1 && key < node->left->key)
        return right_string_rotate(node);

    // Right Right Case
    if (balance < -1 && key > node->right->key)
        return left_string_rotate(node);

    // Left Right Case
    if (balance > 1 && key > node->left->key)
    {
        node->left =  left_string_rotate(node->left);
        return right_string_rotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->key)
    {
        node->right = right_string_rotate(node->right);
        return left_string_rotate(node);
    }
    /* return the (unchanged) node pointer */
    return node;
}
// ================================================================================
// ================================================================================
// PUSH_TYPE_BTREE FUNCTIONS

int push_short_btree(ShortBT *btree, short int key) {
	if (btree->status != true) {
		fprintf(stderr, "Binary tree struct not initializex\n");
		return -1;
	}
	if (is_short_btree_data(btree, key) == false) {
		btree->root = insert_short_btree(btree->root, key);
		if (btree->root == NULL) {
			fprintf(stderr, "Malloc failed in file %s on line %d\n", __FILE__, __LINE__);
			return -1;
		}
		btree->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_ushort_btree(UShortBT *btree, unsigned short int key) {
	if (btree->status != true) {
		fprintf(stderr, "Binary tree struct not initializex\n");
		return -1;
	}
	if (is_ushort_btree_data(btree, key) == false) {
		btree->root = insert_ushort_btree(btree->root, key);
		if (btree->root == NULL) {
			fprintf(stderr, "Malloc failed in file %s on line %d\n", __FILE__, __LINE__);
			return -1;
		}
		btree->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_int_btree(IntBT *btree, int key) {
	if (btree->status != true) {
		fprintf(stderr, "Binary tree struct not initializex\n");
		return -1;
	}
	if (is_int_btree_data(btree, key) == false) {
		btree->root = insert_int_btree(btree->root, key);
		if (btree->root == NULL) {
			fprintf(stderr, "Malloc failed in file %s on line %d\n", __FILE__, __LINE__);
			return -1;
		}
		btree->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_uint_btree(UIntBT *btree, unsigned int key) {
	if (btree->status != true) {
		fprintf(stderr, "Binary tree struct not initializex\n");
		return -1;
	}
	if (is_uint_btree_data(btree, key) == false) {
		btree->root = insert_uint_btree(btree->root, key);
		if (btree->root == NULL) {
			fprintf(stderr, "Malloc failed in file %s on line %d\n", __FILE__, __LINE__);
			return -1;
		}
		btree->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_long_btree(LIntBT *btree, long int key) {
	if (btree->status != true) {
		fprintf(stderr, "Binary tree struct not initializex\n");
		return -1;
	}
	if (is_long_btree_data(btree, key) == false) {
		btree->root = insert_long_btree(btree->root, key);
		if (btree->root == NULL) {
			fprintf(stderr, "Malloc failed in file %s on line %d\n", __FILE__, __LINE__);
			return -1;
		}
		btree->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_ulong_btree(ULIntBT *btree, unsigned long int key) {
	if (btree->status != true) {
		fprintf(stderr, "Binary tree struct not initializex\n");
		return -1;
	}
	if (is_ulong_btree_data(btree, key) == false) {
		btree->root = insert_ulong_btree(btree->root, key);
		if (btree->root == NULL) {
			fprintf(stderr, "Malloc failed in file %s on line %d\n", __FILE__, __LINE__);
			return -1;
		}
		btree->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_llong_btree(LLIntBT *btree, long long int key) {
	if (btree->status != true) {
		fprintf(stderr, "Binary tree struct not initializex\n");
		return -1;
	}
	if (is_llong_btree_data(btree, key) == false) {
		btree->root = insert_llong_btree(btree->root, key);
		if (btree->root == NULL) {
			fprintf(stderr, "Malloc failed in file %s on line %d\n", __FILE__, __LINE__);
			return -1;
		}
		btree->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_ullong_btree(ULLIntBT *btree, unsigned long long int key) {
	if (btree->status != true) {
		fprintf(stderr, "Binary tree struct not initializex\n");
		return -1;
	}
	if (is_ullong_btree_data(btree, key) == false) {
		btree->root = insert_ullong_btree(btree->root, key);
		if (btree->root == NULL) {
			fprintf(stderr, "Malloc failed in file %s on line %d\n", __FILE__, __LINE__);
			return -1;
		}
		btree->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_float_btree(FltBT *btree, float key) {
	if (btree->status != true) {
		fprintf(stderr, "Binary tree struct not initializex\n");
		return -1;
	}
	if (is_float_btree_data(btree, key) == false) {
		btree->root = insert_float_btree(btree->root, key);
		if (btree->root == NULL) {
			fprintf(stderr, "Malloc failed in file %s on line %d\n", __FILE__, __LINE__);
			return -1;
		}
		btree->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_double_btree(DbleBT *btree, double key) {
	if (btree->status != true) {
		fprintf(stderr, "Binary tree struct not initializex\n");
		return -1;
	}
	if (is_double_btree_data(btree, key) == false) {
		btree->root = insert_double_btree(btree->root, key);
		if (btree->root == NULL) {
			fprintf(stderr, "Malloc failed in file %s on line %d\n", __FILE__, __LINE__);
			return -1;
		}
		btree->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_ldouble_btree(LDbleBT *btree, long double key) {
	if (btree->status != true) {
		fprintf(stderr, "Binary tree struct not initializex\n");
		return -1;
	}
	if (is_ldouble_btree_data(btree, key) == false) {
		btree->root = insert_ldouble_btree(btree->root, key);
		if (btree->root == NULL) {
			fprintf(stderr, "Malloc failed in file %s on line %d\n", __FILE__, __LINE__);
			return -1;
		}
		btree->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_char_btree(CharBT *btree, char key) {
	if (btree->status != true) {
		fprintf(stderr, "Binary tree struct not initializex\n");
		return -1;
	}
	if (is_char_btree_data(btree, key) == false) {
		btree->root = insert_char_btree(btree->root, key);
		if (btree->root == NULL) {
			fprintf(stderr, "Malloc failed in file %s on line %d\n", __FILE__, __LINE__);
			return -1;
		}
		btree->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_uchar_btree(UCharBT *btree, unsigned char key) {
	if (btree->status != true) {
		fprintf(stderr, "Binary tree struct not initializex\n");
		return -1;
	}
	if (is_uchar_btree_data(btree, key) == false) {
		btree->root = insert_uchar_btree(btree->root, key);
		if (btree->root == NULL) {
			fprintf(stderr, "Malloc failed in file %s on line %d\n", __FILE__, __LINE__);
			return -1;
		}
		btree->active_length += 1;
	}
	return 1;
}
// --------------------------------------------------------------------------------

int push_string_btree(StringBT *btree, char *key) {
	if (btree->status != true) {
		fprintf(stderr, "Binary tree struct not initializex\n");
		return -1;
	}
	if (is_string_btree_data(btree, key) == false) {
		btree->root = insert_string_btree(btree->root, key);
		if (btree->root == NULL) {
			fprintf(stderr, "Malloc failed in file %s on line %d\n", __FILE__, __LINE__);
			return -1;
		}
		btree->active_length += 1;
	}
	return 1;
}
// ================================================================================
// ================================================================================
// FREETYPE_FUNCTIONS (PRIVATE FUNCTIONS)

void freeshort(short_btree *root) {
	if (root == NULL) return;
	freeshort(root->right);
	freeshort(root->left);
	free(root);
}
// --------------------------------------------------------------------------------

void freeushort(ushort_btree *root) {
	if (root == NULL) return;
	freeushort(root->right);
	freeushort(root->left);
	free(root);
}
// --------------------------------------------------------------------------------

void freeint(int_btree *root) {
	if (root == NULL) return;
	freeint(root->right);
	freeint(root->left);
	free(root);
}
// --------------------------------------------------------------------------------

void freeuint(uint_btree *root) {
	if (root == NULL) return;
	freeuint(root->right);
	freeuint(root->left);
	free(root);
}
// --------------------------------------------------------------------------------

void freelong(long_btree *root) {
	if (root == NULL) return;
	freelong(root->right);
	freelong(root->left);
	free(root);
}
// --------------------------------------------------------------------------------

void freeulong(ulong_btree *root) {
	if (root == NULL) return;
	freeulong(root->right);
	freeulong(root->left);
	free(root);
}
// --------------------------------------------------------------------------------

void freellong(llong_btree *root) {
	if (root == NULL) return;
	freellong(root->right);
	freellong(root->left);
	free(root);
}
// --------------------------------------------------------------------------------

void freeullong(ullong_btree *root) {
	if (root == NULL) return;
	freeullong(root->right);
	freeullong(root->left);
	free(root);
}
// --------------------------------------------------------------------------------

void freefloat(float_btree *root) {
	if (root == NULL) return;
	freefloat(root->right);
	freefloat(root->left);
	free(root);
}
// --------------------------------------------------------------------------------

void freedouble(double_btree *root) {
	if (root == NULL) return;
	freedouble(root->right);
	freedouble(root->left);
	free(root);
}
// --------------------------------------------------------------------------------

void freeldouble(ldouble_btree *root) {
	if (root == NULL) return;
	freeldouble(root->right);
	freeldouble(root->left);
	free(root);
}
// --------------------------------------------------------------------------------

void freechar(char_btree *root) {
	if (root == NULL) return;
	freechar(root->right);
	freechar(root->left);
	free(root);
}
// --------------------------------------------------------------------------------

void freeuchar(uchar_btree *root) {
	if (root == NULL) return;
	freeuchar(root->right);
	freeuchar(root->left);
	free(root);
}
// --------------------------------------------------------------------------------

void freestring(string_btree *root) {
	if (root == NULL) return;
	freestring(root->right);
	freestring(root->left);
	free(root);
}
// ================================================================================
// ================================================================================
// FREE_TYPE_BTREE FUNCTIONS

void free_short_btree(ShortBT *btree) {
	if (btree->status != true) {
		fprintf(stderr, "Unitialized binary tree struct cannot be freed\n");
		return;
	}
	freeshort(btree->root);
}
// --------------------------------------------------------------------------------

void free_ushort_btree(UShortBT *btree) {
	if (btree->status != true) {
		fprintf(stderr, "Unitialized binary tree struct cannot be freed\n");
		return;
	}
	freeushort(btree->root);
}
// --------------------------------------------------------------------------------

void free_int_btree(IntBT *btree) {
	if (btree->status != true) {
		fprintf(stderr, "Unitialized binary tree struct cannot be freed\n");
		return;
	}
	freeint(btree->root);
}
// --------------------------------------------------------------------------------

void free_uint_btree(UIntBT *btree) {
	if (btree->status != true) {
		fprintf(stderr, "Unitialized binary tree struct cannot be freed\n");
		return;
	}
	freeuint(btree->root);
}
// --------------------------------------------------------------------------------

void free_long_btree(LIntBT *btree) {
	if (btree->status != true) {
		fprintf(stderr, "Unitialized binary tree struct cannot be freed\n");
		return;
	}
	freelong(btree->root);
}
// --------------------------------------------------------------------------------

void free_ulong_btree(ULIntBT *btree) {
	if (btree->status != true) {
		fprintf(stderr, "Unitialized binary tree struct cannot be freed\n");
		return;
	}
	freeulong(btree->root);
}
// --------------------------------------------------------------------------------

void free_llong_btree(LLIntBT *btree) {
	if (btree->status != true) {
		fprintf(stderr, "Unitialized binary tree struct cannot be freed\n");
		return;
	}
	freellong(btree->root);
}
// --------------------------------------------------------------------------------

void free_ullong_btree(ULLIntBT *btree) {
	if (btree->status != true) {
		fprintf(stderr, "Unitialized binary tree struct cannot be freed\n");
		return;
	}
	freeullong(btree->root);
}
// --------------------------------------------------------------------------------

void free_float_btree(FltBT *btree) {
	if (btree->status != true) {
		fprintf(stderr, "Unitialized binary tree struct cannot be freed\n");
		return;
	}
	freefloat(btree->root);
}
// --------------------------------------------------------------------------------

void free_double_btree(DbleBT *btree) {
	if (btree->status != true) {
		fprintf(stderr, "Unitialized binary tree struct cannot be freed\n");
		return;
	}
	freedouble(btree->root);
}
// --------------------------------------------------------------------------------

void free_ldouble_btree(LDbleBT *btree) {
	if (btree->status != true) {
		fprintf(stderr, "Unitialized binary tree struct cannot be freed\n");
		return;
	}
	freeldouble(btree->root);
}
// --------------------------------------------------------------------------------

void free_char_btree(CharBT *btree) {
	if (btree->status != true) {
		fprintf(stderr, "Unitialized binary tree struct cannot be freed\n");
		return;
	}
	freechar(btree->root);
}
// --------------------------------------------------------------------------------

void free_uchar_btree(UCharBT *btree) {
	if (btree->status != true) {
		fprintf(stderr, "Unitialized binary tree struct cannot be freed\n");
		return;
	}
	freeuchar(btree->root);
}
// --------------------------------------------------------------------------------

void free_string_btree(StringBT *btree) {
	if (btree->status != true) {
		fprintf(stderr, "Unitialized binary tree struct cannot be freed\n");
		return;
	}
	freestring(btree->root);
}
// ================================================================================
// ================================================================================
// eof
