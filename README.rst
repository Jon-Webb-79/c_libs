######
c_libs
######

This library contains C functions and generic operators that enable pre-defined data structures,
generic print statements, random number generators, and file readers.  This library implements
generic operators to simplify the user interface.  Unlike traditional macros, a generic operator
does not consume extra memory, or increase the speed of code execution.  Instead a generic operator
only provides a generic type agnostic interface for all users of the library.

************
Contributing
************
Pull requests are welcome.  For major changes, please open an issue first to discuss
what you would like to change.  Please make sure to include and update tests
as well as relevant doc-string and doxygen updates.

*******
License
*******
This project is implemented with an MIT License

************
Requirements
************
THis library with written and test on PC and Macintosh computers using the clang 14.0.0, and gcc 12.2.1 compilers.
The code is also compiled with C11 standards and Cmake version 3.22.2

************
Installation
************
In order to download this repository from github, follow these instructions

1. Ensure you have .git installed on your computer
2. Ensure you have CMake version 3.22.2 or later versions installed on your computer
3. Ensure have a clang 14.0.0 or gcc 12.2.1 compiler or later version installed on your computer
4. Open a terminal (Bash, zsh, Linux, or DOS) and type ``git clone https://github.com/Jon-Webb-79/c_libs.git``
5. Build code.

   a. If you are using bash change to the following directory within the project ``c_libs/c_libs/scripts/bash``

      - build the code with the following command ``bash build.sh``
      - compile the test code with the following command ``bash compile.sh``
      - Navigate to the following directory ``c_libs/c_libs/build/test``
      - Verify code runs correctly with the following command ``./unit_tests``

   b. If you are using zsh change to the following directory within the project ``c_libs/c_libs/scripts/zsh``

      - build the code with the following command ``zsh build.zsh``
      - compile the test code with the following command ``zsh compile.zsh``
      - Navigate to the following directory ``c_libs/c_libs/build/test``
      - Verify code runs correctly with the following command ``./unit_tests``

6. Install as a library with the command ``xxxx``

****************
Library Elements
****************
This library consists of the following elements, which can be directly accessed by clicking on each
link.  The elements are `Swap`_, `Vector`_, and `Print`_.

****************************
Library Functions and Macros
****************************
A detailed description of all functions and macros can be found at `<docs/doxygen/generated_docs/html/index.html>`_. This 
section will describe the various aspects of the library with a focus on the macros.

====
Swap
====
The ``swap.h`` header file contains functions and a macro that can be used to swap to variables of the same
data type in memory.  Examples are shown below.

.. code-block:: c

   #include <stdio.h>
   #include "swap.h"

   int a = 3;
   int b = 4;
   // Macro below same as swap_int(&a, &b)
   SWAP(a, b);
   printf("%d\n", a);
   printf("%d\n", b);
   // >> 4
   // >> 3

   float c = 4.3;
   float e = 2.2;
   // Macro below same as swap_float(&d, &e)
   SWAP(c, e);
   printf("%f\n", d);
   printf("%f\n", e);
   // >> 2.2
   // >> 4.3

======
Vector
======
The functions used to enable a dynamically allocated vector or statically allocated array can be implemented
from the ``vector.h`` header file.  However, the macros that enable a generic implementation of dynamically
allocated vectors and statically allocated arrays can be accessed from the ``data_structures.h`` header files.
In addition, the functions available in the ``vector.h`` header file are also available from ``data_structures.h``.
The vector library automatically instantiates XXX data types, where each data type represents a pointer to an
array of the base type.  The instantiated data types are listed below.

.. code-block:: c

   Short  // struct data type containing short int data type
   UShort // struct data type containing unsigned short int data type
   Int    // struct data type containing int data type
   UInt   // struct data type containing unsigned int data type
   LInt   // struct data type containing long int data type
   ULint  // struct data type containing unsigned long int data type
   LLInt  // struct data type containing long long int data type
   ULLInt // struct data type containing unsgined long long int data type
   Flt    // struct data type containing float data type
   Dble   // struct data type containing double data type
   LDble  // struct data type containing long double data type
   Char   // struct data type containing char data type
   UChar  // struct data type containing unsigned char data type
   Bool   // struct data type containing bool data type
   String // struct data type containing string data type

Basic Operations
================
The vector library is enable by the basic macros, ``INIT_VECTOR(dtype vec, size_t num)``, ``PUSH(dtype vec, type value, size_t index)``,
and ``FREE(dtype vec)``, where ``dtype`` represents one of the vector data types shown above, ``num`` represents an estimate
for the number of indices to be allocated, ``value`` is hte value being pushed to the array, and ``index`` is the index where the
data is being pushed.  The value of ``index`` can only be between 0 and the number of actively used indices.  The ``INIT_VECTOR``
macro initializes the dynamically allocated vector, ``PUSH``, pushes data to the vector, and ``FREE`` frees all allocated memory.

**NOTE:** The examples below use hte ``PRINT`` macro which is further described in `PRINT`_.

.. code-block:: c

   #include <stdio.h>
   #include "data_structures.h"
   #include "print.h"

   Int vec;
   // Equivalent to init_int_vector(&vec, 20);
   INIT_VECTOR(vec, 20);
   // Equivalent to push_int_vector(&vec, 1, vec.active_length)
   PUSH(vec, 1, vec.active_length);
   PUSH(vec, 2, vec.active_length);
   PUSH(vec, 5, vec.active_length);
   PUSH(vec, 4, 0);
   PRINT(vec);
   // >> [ 4, 1, 2, 5 ]
   FREE(vec);

The individual data points can be accessed via the following notation ``vec.array[index]`` 

.. code-block:: c

   PRINT(vec.array[3]);
   // >> 5

The above notation for ``INIT_VECTOR`` works for all data types except string.  Re-written for strings,
the above exampl is re-written as;

.. code-block:: c

   #include <stdio.h>
   #include "data_structures.h"
   #include "print.h"

   Int vec;
   // Equivalent to init_int_vector(&vec, 20);
   init_string_vector(&vec)
   // Equivalent to push_int_vector(&vec, 1, vec.active_length)
   PUSH(vec, "One", vec.active_length);
   PUSH(vec, "Two", vec.active_length);
   PUSH(vec, "Five", vec.active_length);
   PUSH(vec, "four", 0);
   PRINT(vec);
   // >> [ four, One, Two, Five ]
   FREE(vec);

Insert
======
The ``INSERT(dtype vec, type *array, size_t size, size_t index)`` macro can be used to insert an ``array``,
of length ``size`` to a specific ``index``

.. code-block:: c

   #include <stdio.h>
   #include "data_structures.h"
   #include "print.h"

   Flt vec;
   // Equivalent to init_float_vector(&vec, 20);
   INIT_VECTOR(vec, 20);
   // Equivalent to push_float_vector(&vec, 1, vec.active_length)
   PUSH(vec, 1.1, vec.active_length);
   PUSH(vec, 2.2, vec.active_length);
   PUSH(vec, 5.5, vec.active_length);
   PUSH(vec, 4.4, 0);
   float a[4] = {10.9, 9.8, 8.7, 7.6};
   INSERT(vec, a, 4, 2);
   PRINT(vec);
   // >> [ 4.4, 1.1, 10.9, 9.8, 8.7, 7.6, 2.2, 5.5 ]
   FREE(vec);

Array
=====
The ``INIT_VECTOR`` macro acts as a container for a dynamically allocated vector; however, a developer can
also use the ``void INIT_ARRAY(dtype vec, type arr, size_t allocated_length, size_t active_length)`` macro
to initialize a container to manage a statically allocated array.  The term ``vec`` represents one of
the preinstantiated data types, ``array`` is a pre-instantiated array of type ``type``, which should be
consistent with ``dtype``.  ``allocated_length`` represents the number of allocated indices in the pre
instantiated array, ``active_length`` represents the number of actively populated indices in the array,
when the container is instantiated.  An example is shown below.  This macro does not work for the
``String`` data type.

.. code-block:: c

   #include <stdio.h>
   #include "data_structures.h"
   #include "print.h"

   Flt arr;
   float a[5] = {2.1, 3.4};
   INIT_ARRAY(arr, a, 5, 2);
   PRINT(vec);
   // >> [ 2.1, 3.4 ]

**NOTE:**  Unlike the vector data structure, a statically allocated array does not need to be freed
once it is out of scope, hence their is no need to use the ``FREE`` macro.  The only interface
difference, between the vector and array data structures are the init macros.  Other than the 
``INIT_ARRAY`` versus ``INIT_VECTOR`` macros, the array data structure can use any function
and array in the `Vector`_ section of this document. 

However, if the user tries to allocate more data to an array structure than it was instantiated with, the
function will return with a value of -1 and print an error to standard error.  The example below
shows how this would occur for the ``PUSH`` macro, and the same holds true for the insert macro.

.. code-block:: c

   #include <stdio.h>
   #include "data_structures.h"
   #include "print.h"

   Flt arr;
   float a[5] = {2.1, 3.4, 2.8};
   // Same as init_float_arrat(&arr, a, 5, 3);
   INIT_ARRAY(arr, a, 5, 3);
   // Same as push_float_vector(&vec, 1.1f, arr.active_length);
   PUSH(arr, 1.1f, arr.active_length);
   PUSH(arr, 2.2f, arr.active_length);
   // This push should overload the data structure and cause failure
   PUSH(arr, 3.3f, arr.active_length);
   // >> Cannot extend static array allocation in file xx, on line yy

POP_INDEX
=========
The ``int POP_INDEX(vtype vec, size_t index)`` macro will remove the data at the user defined ``index``
and decriment that ``active_length`` by 1.  If for some reason the function cannot succesfully perform
its objective, it will print an error message to ``stderror`` and return an integer value of -1.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Dble vec;
   // Same as init_double_vector(&vec, 5);
   INIT_VECTOR(vec, 5);
   double a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
   // Same as insert_double_vector(&vec, a, 5, 0);
   INSERT(vec, a, 5, 0);
   // Same as pop_double_vector(&vec, 4);
   POP_INDEX(vec, 4);
   PRINT(vec);
   // Same as free_double_vector(&vec);
   FREE(vec);
   // >> [ 1.1, 2.2, 3.3, 4.4 ]

REPLACE_VALUES
==============
The ``REPLACE_VALUES(vtype vec, type old, type new)`` macro allows a user replace all instances
of a value (i.e. ``old``) with a new value (i.e. ``new``).

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Int vec;
   // Same as init_int_vector(&vec, 20);
   INIT_VECTOR(vec, 20);
   int a[7] = {1, 1, 2, 3, 4, 1, 5};
   // Same as insert_int_vector(&vec, a, 7, 0);
   INSERT(vec, a, 7, 0);
   // Same as replace_int_vector_values(&vec, 1, 3);
   REPLACE_VALUES(vec, 1, 3);
   PRINT(vec);
   // Same as free_int_vector(&vec);
   FREE(vec);
   // >> [ 3, 3, 2, 3, 4, 3, 5 ]

DELETE_DUPLICATES
=================
The ``DELETE_DUPLICATES(vec)`` macro will delete preserve the first instance of a value
in a stack structure and delete all other instances.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Int vec;
   // Same as init_int_vector(&vec. 5);
   INIT_VECTOR(vec, 5);
   int a[6] = {1, 1, 2, 2, 3, 3};
   // Same as insert_int_vector(&vec, a, 6, 0);
   INSERT(vec, a, 6, 0);
   // Same as delete_int_vector_duplicates(&vec);
   DELETE_DUPLICATES(vec)
   PRINT(vec);
   // >> [ 1, 2, 3 ]
   // Same as free_int_vector(&vec);
   FREE(vec);

REVERSE
=======
The ``REVERSE_VEC(dtype vec)`` macro will reverse the order of the data in a stack structure.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Int vec;
   // Same as init_int_vector(&vec, 5_;
   INIT_VECTOR(vec, 5);
   int a[5] = {1, 2, 3, 4, 5};
   // Same as insert_int_vector(&vec, a, 5, 0);
   INSERT(vec, a, 5, 0);
   // Same as reverse_int_vector(&vec);
   REVERSE(vec)
   PRINT(vec);
   // >> [ 5, 4, 3, 2, 1 ]
   FREE(vec);

SORT
====
The ``SORT(dtype vec, sort_order order)`` macro will sort a data structure in forward or reverse order.
The term ``order`` is an enum that can either be ``FORWARD`` for a forward sort or ``REVERSE`` for a reverse sort.
This macro is not implemented for Bool data types.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Flt vec;
   // Same as init_float_vector(&vec, 5);
   INIT_VECTOR(vec, 5);
   float a[5] = {3.3, 1.1, 2.2, 5.5, 4.4};
   // Same as insert_float_vector(&vec, a, 5, 0);
   INSERT(vec, a, 5, 0);
   // Same as insert_float_vector(&vec, FORWARD, 0);
   SORT(vec, FORWARD)
   PRINT(vec);
   // >> [ 1.1, 2.2, 3.3, 4.4, 5.5 ]
   // Same as insert_float_vector(&vec, REVERSE, 0);
   SORT(vec, REVERSE);
   PRINT(vec);
   // >> [ 5.5, 4.4, 3.3, 2.2, 1.1 ]
   FREE(vec);

SUM
===
The ``type sum = SUM(vtype vec)`` macro will return the sum of the values in a data structure
**NOTE:** This macro does not work with the ``Bool`` or ``String`` data types.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Int vec;
   // Same as init_int_vector(&vec, 5);
   INIT_VECTOR(vec, 5);
   int a[5] = {1, 2, 3, 4, 5};
   // Same as insert_int_vector(&vec, a, 5, 0);
   INSERT(vec, a, 5, 0);
   // Same as int b = sum_int_vector(&vec);
   int b = SUM(vec);
   PRINT(b);
   // >> 15
   FREE(vec);

CUMSUM
======
The ``vtype sum_array = CUMSUM(vtype vec)`` macro will return an array containing the cumulative sum of the data structure
**Note:** This macro does not work with the ``Bool`` or ``String`` data type.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Int vec;
   // Same as init_int_vector(&vec, 5);
   INIT_VECTOR(vec, 5);
   int a[5] = {1, 2, 3, 4, 5};
   // Same as insert_int_vector(&vec, a, 5, 0);
   INSERT(vec, a, 5, 0);
   // Same as int b = cumsum_int_vector(&vec);
   int b = CUMSUM(vec);
   PRINT(b);
   // >> [ 1, 3, 6, 10, 15 ]
   FREE(vec);

AVERAGE
=======
The ``type avg= AVERAGE(dtype vec)`` macro will calculate and return the average or mean value of the elements
of a vector data structure. **NOTE:** This macro does not work with the ``Bool`` or ``String`` data types.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Flt vec;
   // Same as init_float_vector(&vec, 5);
   INIT_VECTOR(vec, 5);
   float a[5] = {3.45, 2.18, 8.17, 0.56, 2.28};
   // Same as insert_float_vector(&vec, a, 5, 0);
   INSERT(vec, a, 5, 0);
   // Same as float avg = average_float_vector(&vec);
   float avg = AVERAGE(vec);
   PRINT(avg);
   // 3.328
   FREE(vec);

STDEV
=====
The ``type stdev = STDEV(vtype vec)`` macro will calculate and return the standard deviation of the values in
a vector data structure. **NOTE:** This macro does not work with hte ``Bool`` or ``String`` data types.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Flt vec;
   // Same as init_float_vector(&vec, 5);
   INIT_VECTOR(vec, 5);
   float a[5] = {3.45, 2.18, 8.17, 0.56, 2.28};
   // Same as insert_float_vector(&vec, a, 5, 0);
   INSERT(vec, a, 5, 0);
   // Same as float stdev = stdev_float_vector(&vec);
   float stdev = STDEV(vec);
   PRINT(avg);
   // 3.19682
   FREE(vec);

MAX/MIN
=======
The macros ``type max = MAX(vtype vec)`` and ``type min = MIN(vtype vec)`` will return the minimum and maximum
value in a vector data structure.  This function will fail in compile time if the user tries to enter
``Bool``, or ``String`` data type.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Flt vec;
   INIT_VECTOR(vec, 5);
   float a[5] = {3.45, 2.18, 8.17, 0.56, 2.28};
   INSERT(vec, a, 5, 0);
   float max = MAX(vec);
   PRINT(max);
   // 3.45
   float min = MIN(vec);
   PRINT(min);
   // >> 0.56
   FREE(vec);

RANGE
=====
The ``RANGE(vtype vec, type start, type end, type delta)`` macro will insert an array that begins at
``start`` and approaches ``end`` in increments of ``delta`` to an array or vector container.  This macro
will fail in compile time if the user tries to user a ``Bool``, or ``String`` data type.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Flt vec;
   // Same as init_float_vector(&vec, 15);
   INIT_VECTOR(vec, 15);
   // Same as range_float_vector(&vec, 2.5, 37.5, 2.5);
   RANGE(vec, 2.5, 37.5, 2.5)
   PRINT(vec);
   // >> [ 2.5, 5.0, 7.5, 10.0, 12.5, 15.0, 17.5, 20.0, 22.5, 25.0,
   //      27.5, 30.0, 32.5, 35.0, 37.5 ]
   FREE(vec);

COPY
====
The ``type = COPY(type vec)`` macro will produce a deep copy of a vector data structure.

.. code-block:: c

   #include "data_structures.h"
   #include "print.h"

   Flt vec;
   // Same as init_float_vector(&vec, 15);
   INIT_VECTOR(vec, 15);
   // Same as range_float_vector(&vec, 2.5, 37.5, 2.5);
   RANGE(vec, 2.5, 37.5, 2.5)
   // Same as float new_vec = copy_float_vector(&vec);
   Flt new_vec = COPY(vec);
   PRINT(new_vec);
   // >> [ 2.5, 5.0, 7.5, 10.0, 12.5, 15.0, 17.5, 20.0, 22.5, 25.0,
   //      27.5, 30.0, 32.5, 35.0, 37.5 ]
   FREE(vec);

=====
PRINT
=====
To be described later.

