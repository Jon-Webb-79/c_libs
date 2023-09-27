***********
Binary Tree
***********
This btree library contains data structures that help manage a binary search tree
of various data types.  In addition this library contains functions that act 
upon the binary tree data structure to extract and or add data to the tree.
This library uses the rules of an AVL tree to ensure balanced leaves
across the tree, and also does not allow duplicate values in the tree.

BTREE_STRUCT
============
The ``BTREE_STRUCT`` Macro is the fundamental element of the binary search tree data
structure.  This macro will create a struct of a user defined type that stores
data of a user defined type as well as the location in memory of the left and right
tree nodes.

.. role:: c(code)
   :language: c

The ``BTREE_STRUCT`` is shown below.

.. code-block:: c

   #define BTREE_STRUCT(type, dtype) \\
       typedef struct dtype { \\
           type key; \\
           struct dtype *left; \\
           struct dtype *right; \\
           short int height; \\
        };

Parameters
----------

- :c:`type`: The data type that will be assigned to the array pointer
- :c:`dtype`: The name to be given to the typedef for the struct

Attributes
----------

- :c:`key`: The value inserted into the binary tree
- :c:`left`: A pointer to the leaf on the left of the node
- :c:`right`: A pointer to the leaf on the right of the node
- :c:`height`: The heaight of the node from the base of the tree

**WARNING:** The user should not manually manipulate the attributes of this struct once created.
The functions and Macros in this library will handle the process of updating
variables in the struct.  If the user accidentally modifies a value within these
structs it will cause undefined behavior and possible segmentation faults

BTREE_DAT_STRUCT
================
The ``BTREE_DAT_STRUCT`` is a data structure that the user interfaces with to track
the location of the root and number of allocated structrs.

.. code-block:: c

   #define BTREE_DAT_STRUCT(type, dtype) \\
       typedef struct { \\
           size_t active_length; \\
           struct dtype *root; \\
           bool status; \\
        } type;

Parameters
----------

- :c:`type`: The data type that will be assigned to the array pointer
- :c:`dtype`: The name to be given to the typedef for the struct

Attributes
----------

- :c:`active_length`: The number of data points in the binary tree
- :c:`root`: A pointer to the root of the binary tree
- :c:`status`: true if the struct is instantiated, false otherwise.

Binary Tree Data Types
----------------------
The user does **NOT** need to create an instance of the ``BTREE_DAT_STRUCT`` Macro,
as all instances have been predefined.  The following describe the pre-instantiated
structs, each representing a vector data type.

.. code-block:: bash

   ShortBT   # A struct container for a short int binary tree
   UShortBT  # A struct container for an unsigned short int binary tree
   IntBT     # A struct container for an int binary tree
   UIntBT    # A struct container for an unsigned int binary tree
   LIntBT    # A struct container for a long int binary tree
   ULIntBT   # A struct container for an unsigned long int binary tree
   LLIntBT   # A struct container for long long int binary tree
   ULLIntBT  # A struct container for an unsigned long long int binary tree
   FltBT     # A struct container for a float binary tree
   DbleBT    # A struct container for a double binary tree
   LDbleBT   # A struct container for a long double binary tree
   CharBT    # A struct container for a char binary tree
   UCharBT   # A struct container for an unsigned char binary tree
   BoolBT    # A struct container for a boolean binary tree
   StringBT  # A struct container for a string binary tree

INIT_BTREE
==========
This Macro can be used to initialize a struct containing elements for a binary search
tree.  This is the preferred method of initializing arrays as it is
type-generic and allows for easy swapping of data types.

.. code-block:: c

   INIT_BTREE(T tree);

Parameters
----------

- :c:`tree`: The linked list struct data type ``T``

.. code-block:: c

   #include btree.h
   IntBT tree
   // Instnatiate a Linked List data structure for storing integers
   INIT_BTREE(list)

The following functions can be used in place of the type generic ``INIT_BTREE`` method.

.. code-block:: c

    int init_short_btree(ShortBT *tree);
    int init_ushort_btree(UShortBT *tree);
    int init_int_btree(IntBT *tree);
    int init_uint_btree(UIntBT *tree);
    int init_long_btree(LIntBT *tree);
    int init_ulong_btree(ULIntBT *tree);
    int init_llong_btree(LLIntBT *tree);
    int init_ullong_btree(ULLIntBT *tree);
    int init_float_btree(FltBT *tree);
    int init_double_btree(DbleBT *tree);
    int init_ldouble_btree(LDbleBT *tree);
    int init_char_btree(CharBT *tree);
    int init_uchar_btree(UCharBT *tree);
    int init_bool_btree(BoolBT *tree);
    int init_string_btree(StringBT *tree);

.. code-block:: c

   #include btree.h
   // Allocate an integer array of length 20
   IntBT tree;
   init_int_btree(&btree);

PUSH_BTREE
==========
The ``PUSH_BTREE`` Macro is used to add a variable to the binary tree data structure.

.. code-block:: c

   int PUSH_BTREE(T tree, type key);

Parameters
----------

- :c:`tree`: A Binary Tree data structure of type ``T``.
- :c:`key`: A value to be added to the binary tree data structure of type consistent with ``T``.

Returns
-------

- :c:`error_code`: 1 if the function exectues succesfully, -1 otherwise with a stderror message.

.. code-block:: c
   
   #include btree.h
   // Can also use data_structures.h

   ShortBT tree;
   PUSH_BTREE(tree, 10);
   PUSH_BTREE(tree, 20);
   PUSH_BTREE(tree, 30);
   PUSH_BTREE(tree, 40);
   PUSH_BTREE(tree, 50);
   PUSH_BTREE(tree, 25);
   PRINT(tree);
   FREE_BTREE(tree);

.. code-block:: c

   >> < 30, 20, 10, 25, 40, 50 >

The following functions can also be used in place of the ``PUSH_BTREE`` Macro.

.. code-block:: c

   int push_short_btree(ShortBT *tree, short int key);
   int push_ushort_btree(UShortBT *tree, unsigned short int key);
   int push_int_btree(IntBT *tree, int key);
   int push_uint_btree(UIntBT *tree, unsigned int key);
   int push_long_btree(LIntBT *tree, long int key);
   int push_ulong_btree(ULIntBT *tree, unsigned long int key);
   int push_llong_btree(LLIntBT *tree, long long int key);
   int push_ullong_btree(ULLIntBT *tree, unsigned long long int key);
   int push_float_btree(FltBT *tree, float key);
   int push_double_btree(DbleBT *tree, double key);
   int push_ldouble_btree(LDbleBT *tree, long double key);
   int push_char_btree(CharBT *tree, char key);
   int push_uchar_btree(UCharBT *tree, unsigned char key);
   int push_string_btree(StringBT *tree, char *key);

.. code-block:: c

   #include btree.h
   // Can also use data_structures.h
   ShortBT tree;
   push_short_btree(&tree, 10);
   push_short_btree(&tree, 20);
   push_short_btree(&tree, 30);
   push_short_btree(&tree, 40);
   push_short_btree(&tree, 50);
   push_short_btree(&tree, 25);
   PRINT(tree);
   free_short_btree(&tree);

.. code-block:: c

   >> < 30, 20, 10, 25, 40, 50 >


FREE_BTREE
==========
The ``FREE_BTREE`` Macro can be used to free all memory allocations in a Binary Tree 
data structure.

.. code-block:: c

   void FREE_BTREE(T tree);

Parameters
----------

- :c:`tree`: A Binary tree data structure of type ``T``.

.. code-block:: c

   #include btree.h
   // Can also use data_structures.h
   ShortBT tree;
   PUSH_BTREE(tree, 10);
   PUSH_BTREE(tree, 20);
   PUSH_BTREE(tree, 30);
   PUSH_BTREE(tree, 40);
   PUSH_BTREE(tree, 50);
   PUSH_BTREE(tree, 25);
   PRINT(tree);
   FREE_BTREE(tree);

.. code-block:: c

   >> < 30, 20, 10, 25, 40, 50 >

The following functions can also be used in place of the ``PUSH_BTREE`` Macro.

.. code-block:: c

   void free_short_btree(ShortBT *btree);
   void free_ushort_btree(UShortBT *btree);
   void free_int_btree(IntBT *btree);
   void free_uint_btree(UIntBT *btree);
   void free_long_btree(LIntBT *btree);
   void free_ulong_btree(ULIntBT *btree);
   void free_llong_btree(LLIntBT *btree);
   void free_ullong_btree(ULLIntBT *btree);
   void free_float_btree(FltBT *btree);
   void free_double_btree(DbleBT *btree);
   void free_ldouble_btree(LDbleBT *btree);
   void free_char_btree(CharBT *btree);
   void free_uchar_btree(UCharBT *btree);
   void free_string_btree(StringBT *btree); 

.. code-block:: c

   #include btree.h
   // Can also use data_structures.h
   ShortBT tree;
   push_short_btree(&tree, 10);
   push_short_btree(&tree, 20);
   push_short_btree(&tree, 30);
   push_short_btree(&tree, 40);
   push_short_btree(&tree, 50);
   push_short_btree(&tree, 25);
   PRINT(tree);
   free_short_btree(&tree);

.. code-block:: c

   >> < 30, 20, 10, 25, 40, 5 >


POP_BTREE
=========
The ``POP_BTREE`` Macro will remove an element from a binary tree based
on a user defined key.  If the user attempts to pop a value that does not
exist, the program will print an error to standard error and continue
operations.

.. code-block:: c

   void POP_BTREE(T tree, type key);

Parameters
----------

- :c:`tree`: A Binary Tree data structure of type ``T``
- :c:`key`: The key value in the leaf to be removed from the data structure.

.. code-block:: c

	DbleBT tree;
	INIT_BTREE(tree);
	PUSH_BTREE(tree, 9.);
	PUSH_BTREE(tree, 5.);
	PUSH_BTREE(tree, 10.);
	PUSH_BTREE(tree, 0.);
	PUSH_BTREE(tree, 6.);
	PUSH_BTREE(tree, 11.);
	PUSH_BTREE(tree, 1.);
	PUSH_BTREE(tree, 2.);
	PUSH_BTREE(tree, 10.);
	POP_BTREE(tree, 95.);
	POP_BTREE(tree, 11.);
    PRINT(tree);
    FREE(tree);

.. code-block:: c

   >> , 9.0000, 5.0000, 1.0000, 0.0000, 2.0000, 6.0000, 10.0000, 110000 >
   >> < 5.0000, 1.0000, 0.0000, 2.0000, 9.0000, 6.0000, 10.0000 > 

The following functions can be used in place of the ``POP_BTREE`` Macro.

.. code-block:: c

   void pop_short_btree(ShortBT *btree, short int key);
   void pop_ushort_btree(UShortBT *btree, unsigned short int key);
   void pop_int_btree(IntBT *btree, int key);
   void pop_uint_btree(UIntBT *btree, unsigned int key);
   void pop_long_btree(LIntBT *btree, long int key);
   void pop_ulong_btree(ULIntBT *btree, unsigned long int key);
   void pop_llong_btree(LLIntBT *btree, long long int key);
   void pop_ullong_btree(ULLIntBT *btree, unsigned long long int key);
   void pop_float_btree(FltBT *btree, float key);
   void pop_double_btree(DbleBT *btree, double key);
   void pop_ldouble_btree(LDbleBT *btree, long double key);
   void pop_char_btree(CharBT *btree, char key);
   void pop_uchar_btree(UCharBT *btree, unsigned char key);
   void pop_string_btree(StringBT *btree, char *key);

.. code-block:: c

	DbleBT tree;
	init_double_btree(&tree);
	push_double_btree(&tree, 9.);
	push_double_btree(&tree, 5.);
	push_double_btree(&tree, 10.);
	push_double_btree(&tree, 0.);
	push_double_btree(&tree, 6.);
	push_double_btree(&tree, 11.);
	push_double_btree(&tree, 1.);
	push_double_btree(&tree, 2.);
	push_double_btree(&tree, 10.);
	pop_double_btree(&tree, 95.);
	pop_double_btree(&tree, 11.);
    PRINT(tree);
    free_double_btree(&tree);

.. code-block:: c

   >> , 9.0000, 5.0000, 1.0000, 0.0000, 2.0000, 6.0000, 10.0000, 110000 >
   >> < 5.0000, 1.0000, 0.0000, 2.0000, 9.0000, 6.0000, 10.0000 > 


MIN_BTREE
=========
TBD

MAX_BTREE
=========
TBD

BTREE_TO_VECTOR
===============
TBD

BTREE_TO_LIST
=============
TBD

BTREE_ABOVE_VALUE
=================
TBD

BTREE_BELOW_VALUE
=================
TBD

BTREE_BETWEEN_VALUES
====================
TBD

