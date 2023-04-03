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
4. Open a terminal (Bash, zsh, Linux, or DOS) and type ``close https://github.com/Jon-Webb-79/Project_Name.git project_name``
5. Build code.
   a. If you are using bash ``cd scripts/bash``
      - ``bash build.sh``
      - ``bash compile.sh``
   b. If you are using zsh ``cd scripts/zsh``
      - ``zsh build.zsh``
      - ``zsh compile.zsh``
   c. 
5. Install as a library with the command ``xxxx``

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

=====
PRINT
=====
To be described later.

