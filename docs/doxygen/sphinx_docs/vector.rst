******
Vector
******
The vector library contains data structures that help manage statically
allocated arrays and dynamically allocated vectors.  In addition, this
library contains functions that act on the data structures to organize
the data and to calculate basic statistical values such as the mean,
average, and standard deviation.

.. _vec-struct:

VECTOR_STRUCT
=============
The ``VECTOR_STRUCT`` Macro is the fundamental element of the vector data structure.
This macro will create a struct of a user defined type that acts as a container
for all array elements and metadata that describes the array.  

.. role:: c(code)
   :language: c

The :c:`VECTOR_STRUCT` macro produces a struct that is specifically designed to track all
attributes necessary for the maintenance of a dynamically, or statically allocated array.

.. code-block:: c

    #define VECTOR_STRUCT(type, dtype) \\
        typedef struct { \\
            type *array; \\
            size_t allocated_length; \\
            size_t active_length; \\
            mem_type dat_type; \\
        } dtype

Parameters
----------

- :c:`type`: The data type that will be assigned to the array pointer.
- :c:`dtype`: The name to be given to the typedef for the struct.

Attributes
----------

- :c:`array`: Pointer to the array.
- :c:`allocated_length`: Number of allocated indices in memory for the array. This value can be dynamically updated
- :c:`active_length`: Number of elements currently stored in the array.
- :c:`dat_type`: Enum representing the type of memory allocation used, DYNAMIC, or STATIC

**WARNING:** The
user should not manually manipulate the attributes of this struct once created.
The functions and Macros in this library will handle the process of updating
variables in the struct.  If the user accidentally modifies a value within these
structs it will cause undefined behavior and possible segmentation faults


.. _vec-data-type:

Vector Data Types
=================
The user does **NOT** need to create an instance of the ``VECTOR_STRUCT`` macro,
as all instances have been predefined.  The folloowing describe the preinstantiated
structs, each representing a vector data type.

.. code-block:: bash

   Short   # A struct container for a short int array
   UShort  # A struct container for an unsigned short int array
   Int     # A struct container for an int array
   UInt    # A struct container for an unsigned int array
   LInt    # A struct container for a long int array
   ULInt   # A struct container for an unsigned long int array
   LLInt   # A struct container for long long int array
   ULLInt  # A struct container for an unsigned long long int array
   Flt     # A struct container for a float array
   Dble    # A struct container for a double array
   LDble   # A struct container for a long double array
   Char    # A struct container for a char array
   UChar   # A struct container for an unsigned char array
   Bool    # A struct container for a boolean array
   String  # A struct container for a string array

**NOTE:** The ``String`` data type was not created from a ``VECTOR_STRUCT`` Macro,
but instead is created from a hardcoded struct which only has attributes of ``array``
and ``active_length``.

INIT_VECTOR
===========
This Macro can be used to initialize a struct containing elements for a dynamically
allocated array.  This is the preferred method of initializing arrays as it is
type-generic and allows for easy swapping of data types.  **NOTE:** This macro
does not work with strings.  If the user wishes to manage an array of strings,
they must instantiate the struct using the functions listed below the macro
in this document.

.. code-block:: c

   INIT_VECTOR(vector_struct T, size_t length);

Parameters
----------

- :c:`T`: The vector struct data type
- :c:`length`: A guess for the number of indices to allocate

Returns
-------

- :c:`val` A value of 1 if struct is instantiated succesfully, -1 otherwise, with a stderr message

.. code-block:: c

   #include data_structures.h
   Int vec
   // Allocate an array with 20 indices
   INIT_VECTOR(vec, 20)

The following functions can be used in place of the type generic ``INIT_VECTOR`` method.
These methods can be accessed via the ``data_structures.h`` or ``vector.h`` files.

.. code-block:: c

    int init_short_vector(Short *vec, size_t length);
    int init_ushort_vector(UShort *vec, size_t length);
    int init_int_vector(Int *vec, size_t length);
    int init_uint_vector(UInt *vec, size_t length);
    int init_long_vector(LInt *vec, size_t length);
    int init_ulong_vector(ULInt *vec, size_t length);
    int init_llong_vector(LLInt *vec, size_t length);
    int init_ullong_vector(ULLInt *vec, size_t length);
    int init_float_vector(Flt *vec, size_t length);
    int init_double_vector(Dble *vec, size_t length);
    int init_ldouble_vector(LDble *vec, size_t length);
    int init_char_vector(Char *vec, size_t length);
    int init_uchar_vector(UChar *vec, size_t length);
    int init_bool_vector(Bool *vec, size_t length);
    int init_string_vector(String *vec, size_t length);

.. code-block:: c

   #include vector.h
   // Or #include data_structures.h

   // Allocate an integer array of length 20
   Int vec;
   init_int_vector(&vec, 20);

FREE
====
The ``FREE`` Macro will free all allocated memory from a dynamically allocated array.

.. code-block:: c

   void FREE(T vec);

Parameters
----------

- :c:`T`: The vector struct data type

.. code-block:: c
     
   float a[4] = {1.1, 2.2, 3.3, 4.4};
   Flt vec;
   INIT_VECTOR(vec, 4);
   INSERT(vec, a, 4, 0);
   PRINT("Active length before FREE: ", vec.active_length);
   FREE(vec);
   PRINT("Active length after FREE: ", vec.active_length);

.. code-block:: bash

   >> Active length before FREE: 4
   >> Active length after FREE: 0

The following functions can be used in place of the type generic ``FREE`` Macro.
These functions can be accessed via the ``data_structures.h`` file.

.. code-block:: c

   void free_short_vector(Short *vec);
   void free_ushort_vector(UShort *vec);
   void free_int_vector(Int *vec);
   void free_uint_vector(UInt *vec);
   void free_long_vector(LInt *vec);
   void free_ulong_vector(ULint *vec);
   void free_llong_vector(LLInt *vec);
   void free_ullong_vector(ULLInt *vec);
   void free_float_vector(Flt *vec);
   void free_double_vector(Dble *vec);
   void free_ldouble_vector(LDble *vec);
   void free_char_vector(Char *vev);
   void free_uchar_vector(UChar *vec);
   void free_bool_vector(Bool *vec);
   void free_string_vector(String *vec);

.. code-block:: c
     
   float a[4] = {1.1, 2.2, 3.3, 4.4};
   Flt vec;
   init_float_vector(&vec, 4);
   insert_float_vector(&vec, &a, 4, 0);
   PRINT("Active length before FREE: ", vec.active_length);
   free_float_vector(&vec);
   PRINT("Active length after FREE: ", vec.active_length);

.. code-block:: bash

   >> Active length before FREE: 4
   >> Active length after FREE: 0

INIT_ARRAY
==========
The ``INIT_ARRAY`` Macro can be used to initialize a container
for a statically allocated array.  This macro can be accessed
via the ``data_structures.h`` or the ``vector.h`` files.

.. code-block:: c

   void INIT_ARRAY(T vec, type array, size_t allocated_length, size_t active_length);

Parameters
----------

- :c:`vec`: The vector struct of type T
- :c:`array`: A pointer to an array for type corresponding to T
- :c:`allocated_length`: The allocated length for the static array
- :c:`active_length`: The number of populated indices in the array

.. code-block:: c

   double a[5] = {1.1, 2.2};
   Dble arr;
   INIT_ARRAY(arr, a, 5, 2);
   PRINT("Index 1: ", arr.array[0], " Index 2: ", arr.array[1]);
   PRINT("Active Length: ", arr.active_length);
   PRINT("Allocated Length: ", arr.allocated_length);

.. code-block:: bash

   >> Index 1: 1.1000 Index 2: 2.2000
   >> Active Length: 2
   >> Allocated Length: 5

The following functions can be used in place of the ``INIT_ARRAY`` macro.

.. code-block:: c

   void init_short_array(Short *vec, short int *arr, size_t allocated_length, size_t active_length);
   void init_ushort_array(UShort *vec, unsigned short *arr, size_t allocated_length, size_t active_length);
   void init_int_array(Int *vec, int *arr, size_t allocated_length, size_t active_length);
   void init_uint_array(UInt *vec, unsigned int *arr, size_t allocated_length, size_t active_length);
   void init_long_array(LInt *vec, long int *arr, size_t allocated_length, size_t active_length);
   void init_ulong_array(ULInt *vec, unsigned long *arr, size_t allocated_length, size_t active_length);
   void init_llong_array(LLInt *vec, long long int *arr, size_t allocated_length, size_t active_length);
   void init_ullong_vector(ULLInt *vec, unsigned long long int *arr, size_t allocated_length, size_t active_length);
   void init_char_array(Char *vec, char *arr, size_t allocated_length, size_t active_length);
   void init_uchar_vector(UChar *vec, unisgned char *arr, size_t allocated_length, size_t active_length);
   void init_bool_array(Bool *vec, bool *arr, size_t allocated_length, size_t active_length);

.. code-block:: c

   double a[5] = {1.1, 2.2};
   Dble arr;
   init_double_array(&arr, &a, 5, 2);
   PRINT("Index 1: ", arr.array[0], " Index 2: ", arr.array[1]);
   PRINT("Active Length: ", arr.active_length);
   PRINT("Allocated Length: ", arr.allocated_length);

.. code-block:: bash

   >> Index 1: 1.1000 Index 2: 2.2000
   >> Active Length: 2
   >> Allocated Length: 5

PUSH
====
The ``PUSH`` macro can be used to insert scalar values into a dynamically allocated
vector or statically allocated array.  This macro will also advance the ``active_length``
by 1, and will also double the allocated memory if the allocated memory is exceeded
and the struct type is ``DYNAMIC``.  The the allocated memory is exceeded and the 
struct type is ``STATIC``, the function will write an error to stderr and return
a value of -1.

.. code-block:: c

   int PUSH(T vec, type value, size_t index);

Parameters
----------

- :c:`vec`: A vector struct of type ``T``
- :c:`value`: The scalar value of ``type`` corresponding to ``T``
- :c:`index`: The index within the array or vector where the scalar will be inserted

Returns
-------

- :c:`val`: 1 if the macro executes succesfully, -1 otherwise with a stderr message.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   String vec;
   init_string_vector(&vec);
   PUSH(vec, "One", vec.active_length);
   PUSH(vec, "Two", vec.active_length);
   PUSH(vec, "Three", vec.active_length);
   PUSH(vec, "Four", 0);
   PRINT(vec);
   // It is important, not to forget to free dynamically allocated memory
   FREE(vec);

.. code-block:: bash

   >> [ Four, One, Two, Three ]

The following functions can also be used in place of the Macro.

.. code-block:: c

   int push_short_vector(Short *vec, short int value, size_t index);
   int push_ushort_vector(UShort *vec, unsigned short int value, size_t index);
   int push_int_vector(Int *vec, int value, size_t index);
   int push_uint_vector(UInt *vec, unsigned int value, size_t index);
   int push_long_vector(LInt *vec, long int value, size_t index);
   int push_ulong_vector(ULInt *vec, unsigned long int value, size_t index);
   int push_llong_vector(LLInt *vec, long long int value, size_t index);
   int push_ullong_vector(ULLInt *vec, unsigned long long int value, size_t index);
   int push_float_vector(Flt *vec, float value, size_t index);
   int push_double_vector(Dble *vec, double value, size_t index);
   int push_ldouble_vector(LDble *vec, long double value, size_t index);
   int push_char_vector(Char *vec, char value, size_t index);
   int push_uchar_vector(UChar *vec, unsigned char value, size_t index);
   int push_bool_vector(Bool *vec, bool value, size_t index);
   int push_string_vector(String *vec, char *value, size_t index);

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   String vec;
   init_string_vector(&vec);
   push_string_vector(vec, "One", vec.active_length);
   push_string_vector(vec, "Two", vec.active_length);
   push_string_vector(vec, "Three", vec.active_length);
   push_string_vector(vec, "Four", 0);
   PRINT(vec);
   // It is important, not to forget to free dynamically allocated memory
   FREE(vec);

.. code-block:: bash

   >> [ Four, One, Two, Three ]

INSERT
======
The ``INSERT`` macro can be used to insert a traditional C array into
a vector struct or array struct.

.. code-block:: c

   int INSERT(T vec, type elements, size_t num_indices, size_t index);

Parameters
----------

- :c:`vec`: A vector struct of type ``T``
- :c:`elements`: An array of ``type`` consistent with ``T``
- :c:`num_indices`: The number of active indices in the array to be inserted
- :c:`index`: The index within the vector where the elements are to be inserted

Returns
-------

- :c:`val`: A 1 if the macro executes sucessfully, -1 otherwise with a stderr message

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Short vec;
   INIT_VECTOR(vec, 6);
   PUSH(vec, 1);
   PUSH(vec, 2);
   PUSH(vec, 3);
   short int a[3] = {5, 6, 7};
   INSERT(vec, a, 3, 1);
   PRINT(vec);
   FREE(vec);

.. code-block:: bash

   >> [ 1, 5, 6, 7, 2, 3 ]

The following functions can be used in place of the ``INSERT`` Macro.

.. code-block:: c

   int insert_short_vector(Short *vec, short int *elements, size_t num_indices, size_t index);
   int insert_ushort_vector(UShort *vec, unsigned short int *elements, size_t num_indices, size_t index);
   int insert_int_vector(Int *vec, int *elements, size_t num_indices, size_t index);
   int insert_uint_vector(UInt *vec, unsigned int *elements, size_t num_indices, size_t index);
   int insert_long_vector(LInt *vec, long int *elements, size_t num_indices, size_t index);
   int insert_ulong_vector(ULInt *vec, unsigned long int *elements, size_t num_indices, size_t index);
   int insert_llong_vector(LLInt *vec, long long int *elements, size_t num_indices, size_t index);
   int insert_ullong_vector(ULLInt *vec, unsigned long long int *elements, size_t num_indices, size_t index);
   int insert_float_vector(Flt *vec, float *elements, size_t num_indices, size_t index);
   int insert_double_vector(Dble *vec, double *elements, size_t num_indices, size_t index);
   int insert_ldouble_vector(LDble *vec, long double *elements, size_t num_indices, size_t index);
   int insert_char_vector(Char *vec, char *elements, size_t num_indices, size_t index);
   int insert_uchar_vector(UChar *vec, unsigned char *elements, size_t num_indices, size_t index);
   int insert_bool_vector(Bool *vec, bool *elements, size_t num_indices, size_t index);
   int insert_string_vector(String *vec, char **elements, size_t num_indices, size_t index);

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Short vec;
   init_short_vector(&vec, 6);
   push_short_vector(&vec, 1);
   push_short_vector(&vec, 2);
   push_short_vector(&vec, 3);
   short int a[3] = {5, 6, 7};
   insert_short_vector(&vec, &a, 3, 1);
   PRINT(vec);
   FREE(vec);

.. code-block:: bash

   >> [ 1, 5, 6, 7, 2, 3 ]

POP_INDEX
=========
The ``POP_INDEX`` Macro can be used to remove a value from a specific index in
a dynamically allocated vector or static array.  Once the value is removed,
all values occupying memory to the right of the index will be shifted to
the right.  In addition, the active length will be decrimented by 1.

.. code-block:: c

   int POP_INDEX(T vec, size_t index);

Parameters
----------

- :c:`vec`: A vector or array struct of type ``T``
- :c:`index`: The index where a value will be removed from the array

Returns
-------

- :c:`val`: 1 if the macro executes succesfully, -1 otherwise and a message is written to stderr

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Short vec;
   INIT_VECTOR(vec, 5);
   short int a[5] = {1, 2, 3, 4, 5};
   INSERT(vec, a, 5, 0);
   POP_INDEX(vec, 0);
   POP_INDEX(vec, vec.active_length)
   PRINT(vec);
   FREE(vec);

.. code-block:: bash

   >> [ 2, 3, 4 ]

The following functions can also be used in place of the ``POP_INDEX`` macro.

.. code-block:: c

   int pop_short_vector_index(Short *vec, size_t index);
   int pop_ushort_vector_index(UShort *vec, size_t index);
   int pop_int_vector_index(Int *vec, size_t index);
   int pop_uint_vector_index(UInt *vec, size_t index);
   int pop_long_vector_index(LInt *vec, size_t index);
   int pop_ulong_vector_index(ULInt *vec, size_t index);
   int pop_llong_vector_index(LLInt *vec, size_t index);
   int pop_ullong_vector_index(ULLInt *vec, size_t index);
   int pop_float_vector_index(Flt *vec, size_t index);
   int pop_double_vector_index(Dble *vec, size_t index);
   int pop_ldouble_vector_index(LDble *vec, size_t index);
   int pop_char_vector_index(Char *vec, size_t index);
   int pop_uchar_vector_index(UChar *vec, size_t index);
   int pop_bool_vector_index(Bool *vec, size_t index);
   int pop_string_vector_index(String *vec, size_t index);

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Short vec;
   init_short_vector($vec, 5);
   short int a[5] = {1, 2, 3, 4, 5};
   insert_short_vector(&vec, &a, 5, 0);
   pop_short_vector_index(&vec, 0);
   pop_short_vector_index(&vec, vec.active_length)
   PRINT(vec);
   FREE(vec);

.. code-block:: bash

   >> [ 2, 3, 4 ]

REPLACE_VALUES
==============
The ``REPLACE_VALUS`` Macro will replace all instances of a value in an array or vector
with a new value.  This Macro is available in the ``data_structures.h`` file.

.. code-block:: c

   void REPLACE_VALUES(T vec, type old_value, type new_value);

Parameters
----------

- :c:`vec`: A vector or array struct of type ``T``
- :c:`old_value`: The value to be replaced of type consistent with ``T``
- :c:`new_value`: The value that will replace ``old_value`` of type consistent with ``T``

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Int arr;
   int a[5] = {1, 2, 1, 4, 1};
   INIT_ARRAY(arr, a, 5, 5);
   REPLACE_VALUES(arr, 1, 2);
   PRINT(arr);
   // Do not need to free statically allocated memory

.. code-block:: bash

   >> [ 2, 2, 2, 4, 2]

Thes functions can also be used in place of the ``REPLACE_VALUES`` macro.

.. code-block:: c

   void replace_short_vector_values(Short *vec, short int old_value, short int new_value);
   void replace_ushort_vector_values(UShort *vec, unsigned short int old_value, unsigned short int new_value);
   void replace_int_vector_values(Int *vec, int old_value, int new_value);
   void replace_uint_vector_values(UInt *vec, unsigned int old_value, unsigned int new_value);
   void replace_long_vector_values(LInt *vec, long int old_value, long int new_value);
   void replace_ulong_vector_values(ULInt *vec, unsigned long int old_value, unsigned long int new_value);
   void replace_llong_vector_values(LLInt *vec, long long int old_value, long long int new_value);
   void replace_ullong_vector_values(ULLInt *vec, unsigned long long int old_value, unsigned long long int new_value);
   void replace_float_vector_values(Flt *vec, float old_value, float new_value);
   void replace_double_vector_values(Dble *vec, double old_value, double new_value);
   void replace_ldouble_vector_values(LDble *vec, long double old_value, long double new_value);
   void replace_char_vector_values(Char *vec, char old_value, char new_value);
   void replace_uchar_vector_values(UChar *vec, unsigned char old_value, unsigned char new_value);
   void replace_bool_vector_values(Bool *vec, bool old_value, bool new_value);
   void replace_string_vector_values(String *vec, char *old_value, char *new_value);

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Int arr;
   int a[5] = {1, 2, 1, 4, 1};
   init_int_array(&arr, &a, 5, 5);
   replace_int_vector_values(&arr, 1, 2);
   PRINT(arr);
   // Do not need to free statically allocated memory

.. code-block:: bash

   >> [ 2, 2, 2, 4, 2]


DELETE_DUPLICATES
=================
The ``DELETE_DUPLICATES`` Macro will search for all duplicate values in an 
array or vector and delete them.  All values in memory slots to the right
of the deleted values will be shifted to the left.  In addition, this
macro will also decriment that ``active_length`` by a value of one
for each duplicate value that is deleted.

.. code-block:: c

   void DELETE_DUPLICATES(T vec);

Parameters
----------

- :c:`vec`: A vector or array struct of type ``T``

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   LInt vec;
   INIT_VECTOR(vec, 6);
   long int a[6] = {1, 1, 2, 2, 3, 3};
   INSERT(vec, a, 6, 0);
   DELETE_DUPLICATES(vec);
   PRINT(vec);
   PRINT(vec.active_length);
   PRINT(vec.allocated_length);
   FREE(vec);

.. code-block:: bash

   >> [ 1, 2, 3]
   >> 3
   >> 6

The following functions can also be used in place of the ``DELETE_DUPLICATES`` Macro.

.. code-block:: c

   void delete_short_vector_duplicates(Short *vec);
   void delete_ushort_vector_duplicates(UShort *vec);
   void delete_int_vector_duplicates(Int *vec);
   void delete_uint_vector_duplicates(UInt *vec);
   void delete_long_vector_duplicates(LInt *vec);
   void delete_ulong_vector_duplicates(ULInt *vec);
   void delete_llong_vector_duplicates(LLInt *vec);
   void delete_ullong_vector_duplicates(ULLInt *vec);
   void delete_float_vector_duplicates(Flt *vec);
   void delete_double_vector_duplicates(Dble *vec);
   void delete_ldouble_vector_duplicates(LDble *vec);
   void delete_char_vector_duplicates(Char *vec);
   void delete_uchar_vector_duplicates(UChar *vec);
   void delete_bool_vector_duplicates(Bool *vec);
   void delete_string_vector_duplicates(String *vec);

.. code-block:: c

   #include "vector.h"
   #include "print.h"

   LInt vec;
   init_long_vector(&vec, 6);
   long int a[6] = {1, 1, 2, 2, 3, 3};
   insert_long_vector(&vec, &a, 6, 0);
   delete_long_vector_duplicates(&vec);
   PRINT(vec);
   PRINT(vec.active_length);
   PRINT(vec.allocated_length);
   free_long_vector(&vec);

.. code-block:: bash

   >> [ 1, 2, 3]
   >> 3
   >> 6

REVERSE
=======
The ``REVERSE`` Macro can be used to reverse the order of elements in an array
or vector data structure.

.. code-block:: c

   void REVERSE(T vec);

Parameters
----------

- :c:`vec`: A vector or array data structure of type ``T``.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Short vec;
   INIT_VECTOR(vec, 3);
   short int a[3] = {1, 2, 3, 4, 5}
   // Vector will re-size to accomodate array
   INSERT(vec, a, 5, 0);
   REVERSE(vec);
   PRINT(vec);
   PRINT(vec.allocated_length);
   FREE(vec);

.. code-block:: bash

   >> [ 5, 4, 3, 2, 1 ]
   >> 6

The following functions can be used in place of the ``REVERSE`` macro.

.. code-block:: c

   void reverse_short_vector(Short *vec);
   void reverse_ushort_vector(UShort *vec);
   void reverse_int_vector(Int *vec);
   void reverse_uint_vector(UInt *vec);
   void reverse_long_vector(LInt *vec);
   void reverse_ulong_vector(ULInt *vec);
   void reverse_llong_vector(LLInt *vec);
   void reverse_ullong_vector(ULLInt *vec);
   void reverse_float_vector(Flt *vec);
   void reverse_double_vector(Dble *vec);
   void reverse_ldouble_vector(LDble *vec);
   void reverse_char_vector(Char *vec);
   void reverse_uchar_vector(UChar *vec);
   void reverse_bool_vector(Bool *vec);
   void reverse_string_vector(String *vec);

.. code-block:: c

   #include "vector.h"
   #include "print.h"

   Short vec;
   init_short_vector(&vec, 3);
   short int a[3] = {1, 2, 3, 4, 5}
   // Vector will re-size to accomodate array
   insert_short_vector(&vec, &a, 5, 0);
   revererse_short_vector(&vec);
   PRINT(vec);
   PRINT(vec.allocated_length);
   FREE(vec);

.. code-block:: bash

   >> [ 5, 4, 3, 2, 1 ]
   >> 6

SORT
====
The ``SORT`` Macro will sort a vector or array data structure in ``FORWARD`` or
``REVERSE`` order.

.. code-block:: c

   void SORT(T vec, sort_order order);

Parameters
----------

- :c:`vec`: A vector or array data structure of type ``T``
- :c:`order`: An enum of type ``sort_order`` that can either be ``FORWARD`` or ``REVERSE``

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Flt vec;
   INIT_VECTOR(vec, 5);
   float a[5] = {3.4, 1.1, 2.2, 5.4, 4.3};
   INSERT(vec, a, 5, 0);
   SORT(vec, FORWARD);
   PRINT(vec);
   SORT(vec, REVERSE);
   PRINT(vec);
   FREE(vec);

.. code-block:: bash

   >> [ 1.1, 2.2, 3.4, 4.3, 5.4 ]
   >> [ 5.4, 4.3, 3.4, 2.2, 1.1 ]

These functions can be used in place of the ``REVERSE`` Macro. The terms ``low``
and ``high`` should correspond to 0 and the maximum length of the array or vector.

.. code-block:: c

   void sort_short_vector(Short *vec, size_t low, size_t high, sort_order order);
   void sort_ushort_vector(UShort *vec, size_t low, size_t high, sort_order order);
   void sort_int_vector(Int *vec, size_t low, size_t high, sort_order order);
   void sort_uint_vector(UInt *vec, size_t low, size_t high, sort_order order);
   void sort_long_vector(LInt *vec, size_t low, size_t high, sort_order order);
   void sort_ulong_vector(ULInt *vec, size_t low, size_t high, sort_order order);
   void sort_llong_vector(LLInt *vec, size_t low, size_t high, sort_order order);
   void sort_ullong_vector(ULLInt *vec, size_t low, size_t high, sort_order order);
   void sort_float_vector(Flt *vec, size_t low, size_t high, sort_order order);
   void sort_double_vector(Dble *vec, size_t low, size_t high, sort_order order);
   void sort_ldouble_vector(LDble *vec, size_t low, size_t high, sort_order order);
   void sort_char_vector(Char *vec, size_t low, size_t high, sort_order order);
   void sort_uchar_vector(UChar *vec, size_t low, size_t high, sort_order order);
   void sort_bool_vector(Bool *vec, size_t low, size_t high, sort_order order);
   void sort_string_vector(String *vec, size_t low, size_t high, sort_order order);

.. code-block:: c

   #include "vector.h"
   #include "print.h"

   Flt vec;
   init_float_vector(&vec, 5);
   float a[5] = {3.4, 1.1, 2.2, 5.4, 4.3};
   insert_float_vector(&vec, &a, 5, 0);
   sort_float_vector(&vec, 0, 5, FORWARD);
   PRINT(vec);
   sort_float_vector(&vec, 0, 5, REVERSE);
   PRINT(vec);
   FREE(vec);

.. code-block:: bash

   >> [ 1.1, 2.2, 3.4, 4.3, 5.4 ]
   >> [ 5.4, 4.3, 3.4, 2.2, 1.1 ]

SUM
===
The ``SUM`` Macro will determine the sum of all values in a vector or array.
This macro will work with all vector data types except the ``String`` data type
and the ``Bool`` data type.


.. code-block:: c

   type SUM(T vec);

Parameters
----------

- :c:`vec`: A vector or array data structure of type ``T``

Returns
-------

- :c:`summation`: The sum of the values in a vector or array data structure. The type ``type`` must be consistent with type ``T``.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Int vec;
   INIT_VECTOR(vec, 4);
   int a[4] = {1, 2, 3, 4};
   INSERT(vec, a, 4, 0);
   int b = SUM(vec);
   PRINT(b);
   FREE(b)

.. code-block:: bash

   >> 10

The following functions can also be used in place of the ``SUM`` Macro.

.. code-block:: c

   short int sum_short_vector(Short *vec);
   unsigned short int sum_ushort_vector(UShort *vec);
   int sum_int_vector(Int *vec);
   unsigned int sum_uint_vector(UInt *vec);
   long int sum_long_vector(LInt *vec);
   unsigned long int sum_ulong_vector(ULInt *vec);
   long long int sum_llong_vector(LLInt *vec);
   unsigned long long int sum_ullong_vector(ULLInt *vec);
   float sum_float_vector(Flt *vec);
   double sum_double_vector(Dble *vec);
   long double sum_ldouble_vector(LDble *vec);
   char sum_char_vector(Char *vec);
   unsigned char sum_uchar_vector(UChar *vec);

.. code-block:: c

   #include "vector.h"
   #include "print.h"

   Int vec;
   init_int_vector(&vec, 4);
   int a[4] = {1, 2, 3, 4};
   insert_int_vector(&vec, &a, 4, 0);
   int b = sum_int_vector(&vec);
   PRINT(b);
   free_int_vector(&b)

.. code-block:: bash

   >> 10


CUMSUM
======
The ``CUMSUM`` Macro will return a dynamically allocated vector data structure
that contains a cumulative summation of the values in the original array
or vector.

.. code-block:: c

   T CUMSUM(T vec);

Parameters
----------

- :c:`vec`: The vector or array data structure containing values to be summed

Returns
-------

- :c:`new_vec`: A dynamically allocated vector with the running summation of the original vector or array.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Short vec;
   INIT_VECTOR(vec, 5);
   short a[5] = {1, 2, 3, 4, 5};
   INSERT(vec, a, 5, 0);
   Short cum_vec = CUMSUM(vec);
   PRINT(cum_vec);
   FREE(vec);
   FREE(cum_vec);

.. code-block:: bash

   << [ 1, 3, 6, 10, 15 ]

The following functions can be used in place of the ``CUMSUM`` Macro.

.. code-block:: c

   Short cumsum_short_vector(Short *vec);
   UShort cumsum_ushort_vector(UShort *vec);
   Int cumsum_int_vector(Int *vec);
   UInt cumsum_uint_vector(UInt *vec);
   LInt cumsum_long_vector(LInt *vec);
   ULInt cumsum_ulong_vector(ULInt *vec);
   LLInt cumsum_llong_vector(LLInt *vec);
   ULLInt cumsum_ullong_vector(ULLInt *vec);
   Flt cumsum_float_vector(Flt *vec);
   Dble cumsum_double_vector(Dble *vec);
   LDble cumsum_ldouble_vector(LDble *vec);
   Char cumsum_char_vector(Char *vec);
   UChar cumsum_uchar_vector(UChar *vec);

.. code-block:: c

   #include "vector.h"
   #include "print.h"

   Short vec;
   init_short_vector(&vec, 5);
   short a[5] = {1, 2, 3, 4, 5};
   insert_short_vector(&vec, &a, 5, 0);
   Short cum_vec = cumsum_short_vector(vec);
   PRINT(cum_vec);
   free_short_vector(&vec);
   free_short_vector(&cum_vec);

.. code-block:: bash

   << [ 1, 3, 6, 10, 15 ]

AVERAGE
=======
The ``AVERAGE`` Macro will return the average of all values in an array or vector data
structure.  This Macro does not work with the ``String`` data type.

.. code-block:: c

   type AVERAGE(T vec);

Parameters
----------

- :c:`vec`: The vector or array data structure containing values to be averaged

Returns
-------

- :c:`avg`: The average of the values in an array or vector data structure.  The returned type
            is consistent with ``T``.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Flt vec;
   INIT_VECTOR(vec, 5);
   float a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
   INSERT(vec, a, 5, 0);
   float avg = AVERAGE(vec);
   PRINT(avg);
   FREE(vec);

.. code-block:: bash

   << 3.30000

The following functions can be used in place of the ``AVERAGE`` Macro.

.. code-block:: c

   char average_char_vector(Char *vec);
   unsigned char average_uchar_vector(UCHar *vec);
   float average_short_vector(Short *vec);
   float average_ushort_vector(UShort *vec);
   float average_int_vector(Int *vec);
   float average_uint_vector(UInt *vec);
   double average_long_vector(LInt *vec);
   double average_ulong_vector(ULInt *vec);
   long double average_llong_vector(LLInt *vec);
   long double average_ullong_vector(ULLInt *vec);
   float average_float_vector(Flt *vec);
   double average_double_vector(Dble *vec);
   long double average_ldouble_vector(LDble *vec);

.. code-block:: c

   #include "vector.h"
   #include "print.h"

   Flt vec;
   init_float_vector(&vec, 5);
   float a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
   insert_float_vector(&vec, &a, 5, 0);
   float avg = average_float_vector(vec);
   PRINT(cum_vec);
   free_float_vector(&vec);

.. code-block:: bash

   << 3.30000


STDEV
=====
The ``STDEV`` Macro will return the standard deviation of the values in an array of vector
data structure.  This macro does not work with the ``String`` data type.

.. code-block:: c

   type STDEV(T vec);

Parameters
----------

- :c:`vec`: The vector or array data structure

Returns
-------

- :c:`stdev`: The standard deviation of the values in an array or vector data structure.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Flt vec;
   INIT_VECTOR(vec, 5);
   float a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
   INSERT(vec, a, 5, 0);
   float stdev = STDEV(vec);
   PRINT(stdev);
   FREE(vec);

.. code-block:: bash

   >> 1.739252

The following functions can be used in place of the ``STDEV`` Macro.

.. code-block:: c

   float stdev_char_vector(Char *vec);
   float stdev_uchar_vector(UChar *vec);
   float stdev_short_vector(Short *vec);
   float stdev_ushort_vector(UShort *vec);
   float stdev_int_vector(Int *vec);
   float stdev_uint_vector(UInt *vec);
   double stdev_long_vectr(Lint *vec);
   double stdev_ulong_vector(ULint *vec);
   long double stdev_llong_vector(LLInt *vec);
   long double stdev_ullong_vector(ULLint *vec);
   float stdev_float_vector(Flt *vec);
   double stdev_double_vector(Dble *vec);
   long double stdev_ldouble_vector(LDble *vec);

.. code-block:: c

   #include "vector.h"
   #include "print.h"

   Flt vec;
   init_float_vector(&vec, 5);
   float a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
   insert_float_vector(&vec, &a, 5, 0);
   float stdev = stdev_float_vector(&vec);
   PRINT(stdev);
   free_float_vector(&vec);

MAX
===
The ``MAX`` Macro will return the maximum value in an array or vector data
structure.

.. code-block:: c

   type MAX(T vec);

Parameters
----------

- :c:`vec`: A vector or array data structure of type ``T``

Returns
-------

- :c:`max_value`: The maximum value in a data structure.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Int vec;
   INIT_VECTOR(vec, 5);
   int a[5] = {1, 2, 3, 4, 5};
   INSERT(vec, a, 5, 0);
   int max = MAX(vec);
   PRINT(max);
   FREE(vec);

.. code-block:: bash

   >> 5

The following functions can be used in place of the ``MAX`` Macro.

.. code-block:: c

   char max_char_vector(Char *vec);
   unsigned char max_uchar_vector(UChar *vec);
   short int max_short_vector(Short *vec);
   unsigned short int max_ushort_vector(UShort *vec);
   int max_int_vector(Int *vec);
   unsigned int max_uint_vector(UInt *vec);
   long int max_long_vector(LInt *vec);
   unsigned long int max_ulong_vector(ULInt *vec);
   long long int max_llong_vector(LLInt *vec);
   unsigned long long int max_ullong_vector(ULLInt *vec);
   float max_float_vector(Flt *vec);
   double max_double_vector(Dble *vec);
   long double max_ldouble_vector(LDble *vec);

.. code-block:: c

   #include "vector.h"
   #include "print.h"

   Int vec;
   init_float_vector(&vec, 5);
   int a[5] = {1, 2, 3, 4, 5};
   insert_float_vector(&vec, &a, 5, 0);
   int max = max_int_vector(&vec);
   PRINT(max);
   free_int_vector(&vec);

.. code-block:: bash

   >> 5

MIN
===
The ``MIN`` Macro will return the minimum value in an array or vector data
structure.

.. code-block:: c

   type MIN(T vec);

Parameters
----------

- :c:`vec`: A vector or array data structure of type ``T``

Returns
-------

- :c:`min_value`: The minimum value in a data structure.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Int vec;
   INIT_VECTOR(vec, 5);
   int a[5] = {1, 2, 3, 4, 5};
   INSERT(vec, a, 5, 0);
   int min = IN(vec);
   PRINT(min);
   FREE(vec);

.. code-block:: bash

   >> 1

The following functions can be used in place of the ``MIN`` Macro.

.. code-block:: c

   char min_char_vector(Char *vec);
   unsigned char min_uchar_vector(UChar *vec);
   short int min_short_vector(Short *vec);
   unsigned short int min_ushort_vector(UShort *vec);
   int min_int_vector(Int *vec);
   unsigned int min_uint_vector(UInt *vec);
   long int min_long_vector(LInt *vec);
   unsigned long int min_ulong_vector(ULInt *vec);
   long long int min_llong_vector(LLInt *vec);
   unsigned long long int min_ullong_vector(ULLInt *vec);
   float min_float_vector(Flt *vec);
   double min_double_vector(Dble *vec);
   long double min_ldouble_vector(LDble *vec);

.. code-block:: c

   #include "vector.h"
   #include "print.h"

   Int vec;
   init_float_vector(&vec, 5);
   int a[5] = {1, 2, 3, 4, 5};
   insert_float_vector(&vec, &a, 5, 0);
   int min = min_int_vector(&vec);
   PRINT(min);
   free_int_vector(&vec);

.. code-block:: bash

   >> 1

RANGE
=====
The ``RANGE`` Macro will return a range of value between the start and end values into a 
data structure.

.. code-block:: c

   RANGE(T vec, type start, type end, type delta);

Parameters
----------

- :c:`vec`: An array of vector data structure of type ``T``.
- :c:`start`: The start value in the vector or array.
- :c:`end`: Te end value in the vector or array.
- :c:`delta`: The intervals between values.

.. code-block:: c
   
   #include "data_structures.h"
   #include "print.h"
   Int vec;
   INIT_VECTOR(vec, 10);
   RANGE(vec, 2, 20, 2);
   PRINT(vec);
   FREE(vec);

.. code-block:: bash

   >> [ 2, 4, 6, 8, 10, 2, 14, 16, 18, 20 ]

The following functions can be used in place of the ``RANGE`` Macro.

.. code-block:: c

   range_char_vector(Char *vec, char start, char end, char delta);
   range_uchar_vector(UChar *vec, unsigned char start, unsigned char end, unsigned char delta);
   range_short_vector(Short *vec, short int start, short int end, short int delta);
   range_ushort_vector(UShort *vec, unsigned short int start, unsigned short int end, unsigned short int delta);
   range_int_vector(Int *vec, int start, int end, int delta);
   range_uint_vector(UInt *vec, unsigned int start, unsigned int end, unsigned int delta);
   range_long_vector(LInt *vec, long int start, long int end, long int delta);
   range_ulong_vector(ULInt *vec, unsigned long int start, unsigned long int end, unsigned long int delta);
   range_llong_vector(LLInt *vec, long long int start, long long int end, long long int delta);
   range_ullong_vector(ULLInt *vec, unsigned long long int start, unsigned long long int end, unsigned long long int delta);
   range_float_vector(Flt *vec, float start, float end, float delta);
   range_double_vector(Dble *vec, double start, double end, double delta);
   range_ldouble_vector(LDble *vec, long double start, long double end, double delta);

.. code-block:: c
 
   #include "vector.h"
   #include "print.h"

   Int vec;
   init_int_vector(&vec, 10);
   range_int_vector(&vec, 2, 20, 2);
   PRINT(vec);
   free_int_vector(&vec);

.. code-block:: bash

   >> [ 2, 4, 6, 8, 10, 2, 14, 16, 18, 20 ]

COPY
====
The ``COPY`` Macro will create a deep copy of a vector or array data structure as a dynamically
allocated array.

.. code-block:: c

   T COPY(T vec);

Parameters
----------

- :c:`vec`: A vector or array data structure of type ``T``

Returns
-------

- :c:`new_vec`: A copy of ``vec``.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Dble vec;
   INIT_VECTOR(vec, 5);
   double a[5] = {1, 2, 3, 4, 5};
   INSERT(vec, a, 5, 0);
   Dble new_vec = COPY(vec);
   PRINT(new_vec);
   FREE(new_vec);
   FREE(vec);

.. code-block:: bash

   >> [ 1, 2, 3, 4, 5 ]

The following functions can be used in place of the ``COPY`` Macro.

.. code-block:: c

   Short copy_short_vector(Short *vec);
   UShort copy_ushort_vector(UShort *vec);
   Int copy_int_vector(Int *vec);
   UInt copy_uint_vector(UInt *vec);
   LInt copy_long_vector(LInt *vec);
   ULInt copy_ulong_vector(ULInt *vec);
   LLInt copy_llong_vector(LLInt *vec);
   ULLInt copy_ullong_vector(ULLInt *vec);
   Flt copy_float_vector(Flt *vec);
   Dble copy_double_vector(Dble *vec);
   LDble copy_ldouble_vector(LDble *vec);
   Char copy_char_vector(Char *vec);
   UChar copy_uchar_vector(UChar *vec);
   Bool copy_bool_vector(Bool *vec);
   String copy_string_vector(String *vec);

.. code-block:: c

   #include "vector.h"
   #include "print.h"

   Dble vec;
   init_double_vector(&vec, 5);
   double a[5] = {1, 2, 3, 4, 5};
   insert_double_vector(&vec, &a, 5, 0);
   Dble new_vec = copy_double_vector(&vec);
   PRINT(new_vec);
   free_double_vector(&new_vec);
   free_double_vector(&vec);

.. code-block:: bash

   >> [ 1, 2, 3, 4, 5 ]

IDATA
=====
The ``IDATA`` macro will return the value of a vector or array data structure at
a user defined index.

.. code-block:: c

   type IDATA(T vec, size_t index);

Parameters
----------

- :c:`vec`: A vector or array data structure of type ``T``
- :c:`index`: The index containing data to be returned

Returns
-------

- :c:`value`: The value at the position index

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   String vec;
   init_string_vector(&vec);
   PUSH(vec, "One");
   PUSH(vec, "Two")
   PUSH(vec, "Three");
   char *a = IDATA(vec, 1);
   PRINT(a);
   FREE(vec);

.. code-block:: bash

   >> Two

The following functions can be used in place of the ``IDATA`` Macro.

.. code-block:: c

   short int short_vector_data(Short *vec, size_t index);
   unsigned short int ushort_vector_data(UShort *vec, size_t index);
   int int_vector_data(Int *vec, size_t index);
   unsigned int uint_vector_data(UInt *vec, size_t index);
   long int long_vector_data(LInt *vec, size_t index);
   unsigned long int ulong_vector_data(ULInt *vec, size_t index);
   long long int llong_vector_data(LLInt *vec, size_t index);
   unsigned long long int ullong_vector_data(ULLInt *vec, size_t index);
   char char_vector_data(Char *vec, size_t index);
   unsigned char uchar_vector_data(UChar *vec, size_t index);
   float float_vector_data(Flt *vec, size_t index);
   bool bool_vector_data(Bool *vec, size_t index);
   char* string_vector_data(String *vec, size_t index);

.. code-block:: c

   #include "vector.h"
   #include "print.h"

   String vec;
   init_string_vector(&vec);
   push_string_vector(&vec, "One");
   push_string_vector(&vec, "Two")
   push_string_vector(&vec, "Three");
   char *a = string_vector_data(&vec, 1);
   PRINT(a);
   free_string_data(&vec);

.. code-block:: bash

   >> Two

REPLACE_INDEX
=============
The ``REPLACE_INDEX`` Macro will replace the value at a user defined index
with another value.

.. code-block:: c

   int REPLACE_INDEX(T vec, type new_value, size_t index);

Paramters
---------

- :c:`vec`: A vector or array data structure of type ``T``.
- :c:`new_value`: The value that will replace the old value.  Must be of a type that is consistent with ``T``.
- :c:`index`: The index where data will be replaced.

Returns
-------

- :c:`error_code`: 1 if the macro executes succesfully, -1 otherwise with a stderr message.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Int vec;
   INIT_VECTOR(vec, 10);
   int a[5] = {1, 2, 3, 4, 5};
   INSERT(vec, a, 5, 0);
   REPLACE_INDEX(vec, 10, 2);
   PRINT(vec);
   FREE(vec);

.. code-block:: bash

   >> [ 1, 2, 10, 4, 5 ]

The following functions can also be used in place of the ``REPLACE_INDEX`` Macro.

.. code-block:: c

   int replace_short_vector_index(Short *vec, short int new_value, size_t index);
   int replace_ushort_vector_index(UShort *vec, unsigned short int new_value, size_t index);
   int replace_int_vector_index(Int *vec, int new_value, size_t index);
   int replace_uint_vector_index(UInt *vec, unsigned int new_value, size_t index);
   int replace_long_vector_index(LInt *vec, long int new_value, size_t index);
   int replace_ulong_vector_index(ULInt *vec, unsigned long int new_value, size_t index);
   int replace_llong_vector_index(LLInt *vec, long long int new_value, size_t index);
   int replace_ullong_vector_index(ULLInt *vec, unsigned long long int new_value, size_t index);
   int replace_float_vector_index(Flt *vec, float new_value, size_t index);
   int replace_double_vector_index(Dble *vec, double new_value, size_t index);
   int replace_ldouble_vector_index(LDble *vec, long double new_value, size_t index);
   int replace_char_vector_index(Char *vec, char new_value, size_t index);
   int replace_uchar_vector_index(UChar *vec, unsigned char new_value, size_t index);
   int replace_bool_vector_index(Bool *vec, bool new_value, size_t index);
   int replace_string_vector_index(String *vec, char *new_value, size_t index);

.. code-block:: c

   #include "vector.h"
   #include "print.h"

   Int vec;
   init_int_vector(&vec, 10);
   int a[5] = {1, 2, 3, 4, 5};
   insert_int_vector(&vec, &a, 5, 0);
   replace_int_vector(&vec, 10, 2);
   PRINT(vec);
   free_int_vector(&vec);

.. code-block:: bash

   >> [ 1, 2, 10, 4, 5 ]

REPEAT
======
The ``REPEAT`` Macro will repeat a value a user designated number of times in
an array or vector data structure.

.. code-block:: c

   int REPEAT(T vec, type value, size_t num);

Parameters
----------

- :c:`vec`: A vector or array data structure of type ``T``.
- :c:`value`: The value to be repeated
- :c:`num`: The number of times the value will be repeated

Returns
-------

- :c:`error_code`: 1 if the Macro executes succesfully, -1 otherwise with a stderr message

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Int vec;
   INIT_VECTOR(vec, 10);
   REPEAT(vec, 10, 5);
   PRINT(vec);
   FREE(vec);

.. code-block:: bash

   >> [ 10, 10, 10, 10, 10 ]

The following functions can be used in place of the ``REPEAT`` Macro.

.. code-block:: c

   int repeat_short_vector(Short *vec, short int value, size_t num);
   int repeat_ushort_vector(UShort *vec, unsigned short int value, size_t num);
   int repeat_int_vector(Int *vec, int value, size_t num);
   int repeat_uint_vector(UInt *vec, unsigned int value, size_t num);
   int repeat_long_vector(LInt *vec, long int value, size_t num);
   int repeat_ulong_vector(ULInt *vec, unsigned long int value, size_t num);
   int repeat_llong_vector(LLInt *vec, long long int value, size_t num);
   int repeat_ullong_vector(ULLInt *vec, unsigned long long int value, size_t num);
   int repeat_char_vector(Char *vec, char value, size_t num);
   int repeat_uchar_vector(UChar *vec, unsigned char value, size_t num);
   int repeat_float_vector(Flt *vec, float value, size_t num);
   int repeat_double_vector(Dble *vec, double value, size_t num);
   int repeat_ldouble_vector(LDble *vec, long double value, size_t num);
   int repeat_bool_vector(Bool *vec, bool value, size_t num);
   int repeat_string_vector(String *vec, char *value, size_t num);

.. code-block:: c

   #include "vector.h"
   #include "print.h"

   Int vec;
   init_int_vector(&vec, 10);
   repeat_int_vector(&vec, 10, 5);
   PRINT(vec);
   free_int_vector(&vec);

.. code-block:: bash

   >> [ 10, 10, 10, 10, 10 ]

TRIM
====
The ``TRIM`` Macro will trim the allocated memory in a dynamically allocated
array to the minimum necessary size.

.. code-block:: c

   void TRIM(T vec);

Parameters
----------

- :c:`vec`: A vector data structure of type ``T``.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Short vec;
   INIT_VECTOR(vec, 40);
   short int a[5] = {1, 2, 3, 4, 5};
   INSERT(vec, a, 5, 0);
   PRINT(Initial Length: "vec.allocated_length);
   TRIM(vec);
   PRINT("Final Length: ", vec.allocated_length);
   FREE(vec);

.. code-block:: bash

   >> Initial Length: 40
   >> Final Length: 5

The following functions can be used in place of the ``TRIM`` Macro

.. code-block:: c

   void trim_short_vector(Short *vec);
   void trim_ushort_vector(UShort *vec);
   void trim_int_vector(Int *vec);
   void trim_uint_vector(UInt *vec);
   void trim_long_vector(LInt *vec);
   void trim_ulong_vector(ULInt *vec);
   void trim_llong_vector(LLInt *vec);
   void trim_ullong_vector(ULLInt *vec);
   void trim_char_vector(Char *vec);
   void trim_uchar_vector(UChar *vec);
   void trim_float_vector(Flt *vec);
   void trim_double_vector(Dble *vec);
   void trim_ldouble_vector(LDble *vec);
   void trim_bool_vector(Bool *vec);

.. code-block:: c

   #include "vector.h"
   #include "print.h"

   Short vec;
   init_short_vector(&vec, 40);
   short int a[5] = {1, 2, 3, 4, 5};
   insert_short_vector(&vec, &a, 5, 0);
   PRINT(Initial Length: "vec.allocated_length);
   trim_short_vector(&vec);
   PRINT("Final Length: ", vec.allocated_length);
   free_short_vector(&vec);

.. code-block:: bash

   >> Initial Length: 40
   >> Final Length: 5
