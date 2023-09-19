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
