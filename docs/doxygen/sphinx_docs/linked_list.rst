***********
Linked List
***********
The llist library contains data structures that help manage doubly linked lists
of various data types.  In addition, this library contains functions that act on
the data structures to organize the data and calculate basic statistical values
such as hte mean, averae, and standard deviation.

**NOTE:** A Singly Likned List can save time in the act of inserting data
into a linked list, and does not need to move all subsequent memory locations,
such as is necessary with an array.  However, the time gained be changing pointers
to the data is consumed by the time necessary to iterate through the unindexed
data to find the insertion or deletion location in the data structure.  For
this reason, this library only implements a double linked list, which allows
the data structure to iterate in the forward and reverse direction, which
can reduce the search time by half.

LIST_STRUCT
===========
The ``LIST_STRUCT`` Macro is the fundamental element of the llist data structure.
This macro will create a struct of a user defined type that stores data of
a user defined type as well as the location
in memory for the previous and future data structures.

.. role:: c(code)
   :language: c

The `LIST_STRUCT` macro produces a struct that tracks the location in memory
of all data structure.

.. code-block:: c

    #define LIST_STRUCT(type, dtype) \\
        typedef struct { \\
            type *data; \\
            struct dtype *next; \\
            struct dtype *previous; \\
        } dtype

Parameters
----------

- :c:`type`: The data type that will be assigned to the array pointer.
- :c:`dtype`: The name to be given to the typedef for the struct.

Attributes
----------

- :c:`data`: Pointer to the data in the struct.
- :c:`next`: The location in memory for the next linked list struct
- :c:`previous`: The location in memory for the previous linked list struct

**WARNING:** The user should not manually manipulate the attributes of this struct once created.
The functions and Macros in this library will handle the process of updating
variables in the struct.  If the user accidentally modifies a value within these
structs it will cause undefined behavior and possible segmentation faults

LIST_DAT_STRUCT
===============
The ``LIST_DAT_STRUCT`` Macro integrates all necessary memory that allows a user to iterate
over a linked list.  This Macro creates a struct that describes the active length as well
as the memory location for the first and last ``LIST_STRUCT`` allocated in the linked list.

.. code-block:: c

    #define LIST_DAT_STRUCT(type, dtype) \\
        typedef struct { \\
            size_t active_length; \\
            struct dtype *head; \\
            struct dtype *tail; \\
            bool init_status; \\
        } dtype

Parameters
----------

- :c:`type`: The data type that will be assigned to the array pointer.
- :c:`dtype`: The name to be given to the typedef for the struct.

Attributes
----------

- :c:`active_length`: The number of data points in the struct
- :c:`head`: The location in memory for the first allocated struct
- :c:`tail`: The location in memory for the last allocated struct
- :c:`init_status`: true if the struct has been instantiated, false otherwise.

**WARNING:** The
user should not manually manipulate the attributes of this struct once created.
The functions and Macros in this library will handle the process of updating
variables in the struct.  If the user accidentally modifies a value within these
structs it will cause undefined behavior and possible segmentation faults


.. _list-data-type:

Linked List Data Types
======================
The user does **NOT** need to create an instance of the ``LIST_DAT_STRUCT`` macro,
as all instances have been predefined.  The following describe the preinstantiated
structs, each representing a vector data type.

.. code-block:: bash

   ShortLL   # A struct container for a short int linked list
   UShortLL  # A struct container for an unsigned short int linked list
   IntLL     # A struct container for an int linked list
   UIntLL    # A struct container for an unsigned int linked list
   LIntLL    # A struct container for a long int linked list
   ULIntLL   # A struct container for an unsigned long int linked list
   LLIntLL   # A struct container for long long int linked list
   ULLIntLL  # A struct container for an unsigned long long int linked list
   FltLL     # A struct container for a float linked list
   DbleLL    # A struct container for a double linked list
   LDbleLL   # A struct container for a long double linked list
   CharLL    # A struct container for a char linked list
   UCharLL   # A struct container for an unsigned char linked list
   BoolLL    # A struct container for a boolean linked list
   StringLL  # A struct container for a string linked list

INIT_LIST
=========
This Macro can be used to initialize a struct containing elements for a dynamically
allocated linked list.  This is the preferred method of initializing arrays as it is
type-generic and allows for easy swapping of data types.

.. code-block:: c

   INIT_LIST(T list_struct);

Parameters
----------

- :c:`list_struct`: The linked list struct data type ``T``

.. code-block:: c

   #include data_structures.h
   IntLL list
   // Instnatiate a Linked List data structure for storing integers
   INIT_List(list)

The following functions can be used in place of the type generic ``INIT_VECTOR`` method.
These methods can be accessed via the ``data_structures.h`` or ``llist.h`` files.

.. code-block:: c

    int init_short_list(ShortLL *list);
    int init_ushort_list(UShortLL *list);
    int init_int_list(IntLL *list);
    int init_uint_list(UIntLL *list);
    int init_long_list(LIntLL *list);
    int init_ulong_list(ULIntLL *list);
    int init_llong_list(LLIntLL *list);
    int init_ullong_list(ULLIntLL *list);
    int init_float_list(FltLL *list);
    int init_double_list(DbleLL *list);
    int init_ldouble_list(LDbleLL *list);
    int init_char_list(CharLL *list);
    int init_uchar_list(UCharLL *list);
    int init_bool_list(BoolLL *list);
    int init_string_list(StringLL *list);

.. code-block:: c

   #include llist.h
   // Or #include data_structures.h

   // Allocate an integer array of length 20
   IntLL list;
   init_int_list(&list);

FREE
====
The ``FREE`` Macro will free all allocated memory from a dynamically allocated linked list

.. code-block:: c

   void FREE(T list);

Parameters
----------

- :c:`list`: The linked list struct of data type ``T``

.. code-block:: c
     
   float a[4] = {1.1, 2.2, 3.3, 4.4};
   FltLL list;
   INIT_LIST(list);
   INSERT(list, a, 4, 0);
   PRINT("Active length before FREE: ", list.active_length);
   FREE(list);
   PRINT("Active length after FREE: ", list.active_length);

.. code-block:: bash

   >> Active length before FREE: 4
   >> Active length after FREE: 0

The following functions can be used in place of the type generic ``FREE`` Macro.
These functions can be accessed via the ``data_structures.h`` file.

.. code-block:: c

   void free_short_list(ShortLL *list);
   void free_ushort_list(UShortLL *list);
   void free_int_list(IntLL *list);
   void free_uint_list(UIntLL *list);
   void free_long_list(LIntLL *list);
   void free_ulong_list(ULintLL *list);
   void free_llong_list(LLIntLL *list);
   void free_ullong_list(ULLIntLL *list);
   void free_float_list(FltLL *list);
   void free_double_list(DbleLL *list);
   void free_ldouble_list(LDbleLL *list);
   void free_char_list(CharLL *list);
   void free_uchar_list(UCharLL *list);
   void free_bool_list(BoolLL *list);
   void free_string_list(StringLL *list);

.. code-block:: c
     
   float a[4] = {1.1, 2.2, 3.3, 4.4};
   FltLL list;
   init_float_list(&list);
   insert_float_list(&list, &a, 4, 0);
   PRINT("Active length before FREE: ", list.active_length);
   free_float_list(&list);
   PRINT("Active length after FREE: ", list.active_length);

.. code-block:: bash

   >> Active length before FREE: 4
   >> Active length after FREE: 0

PUSH
====
The ``PUSH`` Macro will push a scalar value to a user defined quasi index.  A linked list is
not truly indexed; however, in this instance the term index is meant to identify a location
in the linked list where data will exist.

.. code-block:: c

   int PUSH(T list, type data, size_t index);

Parameters
----------

- :c:`list`: The linked list struct of data type ``T``.
- :c:`data`: The scalar valuable of a ``type`` that must be consistent with ``T``.
- :c:`index`: The index where the value will be inserted.

Returns
-------

- :c:`error_code`: 1 if the function executes succesfully, -1 if the function fails with an standard error message.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   StringLL list;
   INIT_LIST(list);
   PUSH(list, "One", vec.active_length);
   PUSH(list, "Two", vec.active_length);
   PUSH(list, "Three", vec.active_length);
   PUSH(list, "Four", 0);
   PRINT(list);
   // It is important, not to forget to free dynamically allocated memory
   FREE(list);

.. code-block:: bash

   >> ( Four, One, Two, Three )

The following functions can also be used in place of the Macro.

.. code-block:: c

   int push_short_list(ShortLL *list, short int value, size_t index);
   int push_ushort_list(UShortLL *list, unsigned short int value, size_t index);
   int push_int_list(IntLL *list, int value, size_t index);
   int push_uint_list(UIntLL *list, unsigned int value, size_t index);
   int push_long_list(LIntLL *list, long int value, size_t index);
   int push_ulong_list(ULIntLL *list, unsigned long int value, size_t index);
   int push_llong_list(LLIntLL *list, long long int value, size_t index);
   int push_ullong_list(ULLIntLL *list, unsigned long long int value, size_t index);
   int push_float_list(FltLL *list, float value, size_t index);
   int push_double_list(DbleLL *list, double value, size_t index);
   int push_ldouble_list(LDbleLL *list, long double value, size_t index);
   int push_char_list(CharLL *list, char value, size_t index);
   int push_uchar_list(UCharLL *list, unsigned char value, size_t index);
   int push_bool_list(BoolLL *list, bool value, size_t index);
   int push_string_list(StringLL *list, char *value, size_t index);

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   StringLL list;
   init_string_list(&vec);
   push_string_list(list, "One", list.active_length);
   push_string_list(list, "Two", list.active_length);
   push_string_list(list, "Three", list.active_length);
   push_string_list(list, "Four", 0);
   PRINT(list);
   // It is important, not to forget to free dynamically allocated memory
   FREE(list);

.. code-block:: bash

   >> ( Four, One, Two, Three )

INSERT
======
The ``INSERT`` Macro will push an array of values to a user defined quasi index.  A linked list is
not truly indexed; however, in this instance the term index is meant to identify a location
in the linked list where data will exist. **NOTE:** This macro does not work with the ``StringLL``
data type.

.. code-block:: c

   int INSERT(T list, type array, size_t length, size_t index);

Parameters
----------

- :c:`list`: The linked list struct of data type ``T``.
- :c:`array`: The array a ``type`` that must be consistent with ``T``.
- :c:`length`: The length of the array to be inserted
- :c:`index`: The index where the value will be inserted.

Returns
-------

- :c:`error_code`: 1 if the function executes succesfully, -1 if the function fails with an standard error message.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   ShortLL list;
   INIT_LIST(list);
   PUSH(list, 1, list.active_length);
   PUSH(list, 2, list.active_length);
   PUSH(list, 3, list.active_length);
   short int a[3] = {5, 6, 7};
   INSERT(list, a, 3, 1);
   PRINT(list);
   FREE(list);

.. code-block:: bash

   >> ( 1, 5, 6, 7, 2, 3 )

The following functions can be used in place of the ``INSERT`` Macro.

.. code-block:: c

   int insert_short_list(ShortLL *list, short int *elements, size_t num_indices, size_t index);
   int insert_ushort_list(UShortLL *list, unsigned short int *elements, size_t num_indices, size_t index);
   int insert_int_list(IntLL *list, int *elements, size_t num_indices, size_t index);
   int insert_uint_list(UIntLL *list, unsigned int *elements, size_t num_indices, size_t index);
   int insert_long_list(LIntLL *list, long int *elements, size_t num_indices, size_t index);
   int insert_ulong_list(ULIntLL *list, unsigned long int *elements, size_t num_indices, size_t index);
   int insert_llong_list(LLIntLL *list, long long int *elements, size_t num_indices, size_t index);
   int insert_ullong_list(ULLIntLL *list, unsigned long long int *elements, size_t num_indices, size_t index);
   int insert_float_list(FltLL *list, float *elements, size_t num_indices, size_t index);
   int insert_double_list(DbleLL *list, double *elements, size_t num_indices, size_t index);
   int insert_ldouble_list(LDbleLL *list, long double *elements, size_t num_indices, size_t index);
   int insert_char_list(CharLL *list, char *elements, size_t num_indices, size_t index);
   int insert_uchar_list(UCharLL *list, unsigned char *elements, size_t num_indices, size_t index);
   int insert_bool_list(BoolLL *list, bool *elements, size_t num_indices, size_t index);
   int insert_string_list(StringLL *list, char **elements, size_t num_indices, size_t index);

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   ShortLL list;
   init_short_list(&list);
   push_short_list(&list, 1, list.active_length);
   push_short_list(&list, 2, list.active_length);
   push_short_list(&list, 3, list.active_length);
   short int a[3] = {5, 6, 7};
   insert_short_vector(&list, &a, 3, 1);
   PRINT(list);
   FREE(list);

.. code-block:: bash

   >> ( 1, 5, 6, 7, 2, 3 )

IDATA
=====
A linked list is not indexed like an array, so data can not be accesed by its position ``i`` in the
array.  The ``IDATA`` Macro can be used to retrieve data from a position in the linked list
based on its position.

.. code-block:: c

   type IDATA(T list, size_t index);

Parameters
----------

- :c:`list`: The linked list data structure of type ``T``.
- :c:`index`: The location in the linked list where data will be retireved

Returns
-------

- :c:`data`: The data to be retrieved of type consistent with ``T``.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   ShortLL list;
   INIT_LIST(list);
   PUSH(list, 1, list.active_length);
   PUSH(list, 2, list.active_length);
   PUSH(list, 3, list.active_length);
   PRINT(IDATA(list, 1));
   FREE(list);

.. code-block:: bash

   >> 2

The ``IDATA`` Macro can be replaced with the following functions.

.. code-block:: c

    short int short_list_data(ShortLL *list, size_t index);
    unsigned short int ushort_list_data(UShortLL *list, size_t index);
    int int_list_data(IntLL *list, size_t index);
    unsigned int uint_list_data(UIntLL *list, size_t index);
    long int long_list_data(LIntLL *list, size_t index);
    unsigned long int ulong_list_data(ULIntLL *list, size_t index);
    long long int llong_list_data(LLIntLL *list, size_t index);
    unsigned long long int ullong_list_data(ULLIntLL *list, size_t index);
    float float_list_data(FltLL *list, size_t index);
    double double_list_data(DbleLL *list, size_t index);
    long double ldouble_list_data(LDbleLL *list, size_t index);
    char char_list_data(CharLL *list, size_t index);
    unsigned uchar_list_data(UCharLL *list, size_t index);
    bool bool_list_data(BoolLL *list, size_t index);
    char* string_list_data(StringLL *list, size_t index);

.. code-block:: c

   #include "llist.h"
   #include "print.h"

   ShortLL list;
   init_short_list(&list);
   push_short_list(&list, 1, list.active_length);
   push_short_list(&list, 2, list.active_length);
   push_short_list(&list, 3, list.active_length);
   PRINT(IDATA(list, 1));
   free_short_list(&list);

.. code-block:: bash

   >> 2

POP_INDEX
=========
The ``POP_INDEX`` Macro can be used to removed a value from the linked list at a user
defined pseudo-index.  While this macro can remove a value from any index, only
values removed from the first are last index can be executed at order ``O(0)``.
The execution time for the removal of data from other indices will be proportional
to the number of indices that the method has to iterate through to find the
pseudo-index.

.. code-block:: c

   int POP_INDEX(T list, size_t index);

Parameters
----------

- :c:`list`: A linked list data structure of type ``T``.
- :c:`index`: The pseudo-index containing data to be poped from the data structure.

Returns
-------

- :c:`error_code`: 1 if the function executes succesfully, -1 otherwise with a message printed to standard error.


.. code-block:: c

   IntLL list;
   INIT_LIST(list);
   PUSH(list, 1, list.active_length);
   PUSH(list, 2, list.active_length);
   PUSH(list, 3, list.active_length);
   PUSH(list, 4, list.active_length);
   POP_INDEX(list, 1);
   PRINT(list)
   FREE(list);

.. code-block:: bash

   >> ( 1, 3, 4 )

The following functions can be used in place of the ``POP_INDEX`` Macro.

.. code-block:: c

   int pop_short_index(ShortLL list, size_t index);
   int pop_ushort_index(UShortLL list, size_t index);
   int pop_int_index(IntLL list, size_t index);
   int pop_uint_index(UIntLL list, size_t index);
   int pop_long_index(LIntLL list, size_t index);
   int pop_ulong_index(ULIntLL list, size_t index);
   int pop_llong_index(LLIntLL list, size_t index);
   int pop_ullong_index(ULLIntLL list, size_t index);
   int pop_float_index(FltLL list, size_t index);
   int pop_double_index(DbleLL list, size_t index);
   int pop_ldouble_index(LDbleLL list, size_t index);
   int pop_char_index(CharLL list, size_t index);
   int pop_uchar_index(UCharLL list, size_t index);
   int pop_bool_index(BoolLL list, size_t index);
   int pop_string_index(StringLL list, size_t index);

.. code-block:: c

   IntLL list;
   init_int_list(&list);
   push_int_list(&list, 1, list.active_length);
   push_int_list(&list, 2, list.active_length);
   push_int_list(&list, 3, list.active_length);
   push_int_list(&list, 4, list.active_length);
   pop_int_list_index(&list, 1);
   PRINT(list)
   free_int_list(&list);

.. code-block:: bash

   >> ( 1, 3, 4 )

REPLACE_INDEX
=============
The ``REPLACE_INDEX`` Macro can be used to replace a value in a linked list
at a pseudo-index location.

.. code-block:: c

   int REPLACE_INDEX(T list, type new_value, size_t index);

Parameters
----------

- :c:`list`: A linked list data structure of type ``T``.
- :c:`new_value`: The value of type consistent with ``T`` that will replace the old value at ``index``.
- :c:`index`: The pseudo index where a value will be replaced with another.

Returns
-------

- :c:`error_code`: 1 if the macro executes succesfully, -1 otherwise with a stderr message.

.. code-block:: c

   FltLL list;
   INIT_LIST(list);
   float a[5] = {1.1, 2.2, 3.3, 4.4};
   INSERT(list, a, 5, 0);
   REPLACE_INDEX(list, 2, 27.3f);
   PRINT(list);
   FREE(list);

.. code-block:: c

   >> ( 1.1, 2.2, 27.3, 4.4 )

The following functions can be used in place of the ``REPLACE_INDEX`` Macro.

.. code-block:: c

   int replace_short_list_index(ShortLL list, short int new_value, size_t index);
   int replace_ushort_list_index(UShortLL list, unsigned short int new_value, size_t index);
   int replace_int_list_index(IntLL list, int new_value, size_t index);
   int replace_uint_list_index(UIntLL list, unsigned int new_value, size_t index);
   int replace_long_list_index(LIntLL list, long int new_value, size_t index);
   int replace_ulong_list_index(ULIntLL list, unsigned long int new_value, size_t index);
   int replace_llong_list_index(LLIntLL list, long long int new_value, size_t index);
   int replace_ullong_list_index(ULLIntLL list, unsigned long long int new_value, size_t index);
   int replace_char_list_index(CharLL list, char new_value, size_t index);
   int replace_uchar_list_index(UCharLL list, unsigned char new_value, size_t index);
   int replace_float_list_index(FltLL list, float new_value, size_t index);
   int replace_double_list_index(DbleLL list, double new_value, size_t index);
   int replace_ldouble_list_index(LDbleLL list, long double new_value, size_t index);
   int replace_bool_list_index(BoolLL list, bool new_value, size_t index);
   int replace_string_list_index(StringLL list, char *new_value, size_t index);

.. code-block:: c

   FltLL list;
   init_float_list(&list);
   float a[5] = {1.1, 2.2, 3.3, 4.4};
   insert_float_list(&list, a, 5, 0);
   replace_float_list_index(&list, 2, 27.3f);
   PRINT(list);
   free_float_list(&list);

