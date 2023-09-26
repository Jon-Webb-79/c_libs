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
TBD

FREE_BTREE
==========
TBD

POP_BTREE
=========
TBD

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

