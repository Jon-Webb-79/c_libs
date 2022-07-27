######
c_libs
######
This repository contains libraries for the c programming language.  The library is divided into different
header files that execute different functionality.  This library contains a ``vector.h`` library, and an
``array.h`` library.

************
Contributing
************
Pull requests are welcome.  For major changes, please open an issue first to discuss
what you would like to change.  Please make sure to include and update tests
as well as relevant doc-string and doxygen updates.

*******
License
*******
The License is included in the **c_libs** package

************
Requirements
************
C11 or greater

************
Installation
************
In order to download this repository from github, follow these instructions

1. Ensure you have .git installed on your computer
2. At your desired location create a directory titled ``c_libs``
3. Open a terminal (Bash, zsh, Linux, or DOS) and cd to the ``c_libs`` directory and type
   ``clone https://github.com/Jon-Webb-79/c_libs.git c_libs``

*******
Library
*******
This library contains several header files, each containing functions that enable specific
capabilities.  

`vector.h`_

Contains functions for dynamically allocated array, also called vectors.

.. _vector.h:

********
vector.h
********
The ``vector.h`` file implements several functions that support the creation, manipulation,
and destruction of dynamically allocated arrays.  The entire library is implemented as
a series of macros, and as such will run slightly faster than typical functions, but will
also consume more memory, which may be of relevance for some applications such as embedded
programming.  The following functions are implemented in the ``vector.h`` library.

===========
init_vector
===========
The entire ``header.h`` library is based on the implementation of the ``##`` operator to
expand the naming of function types to include the user defined data type.  If the
user wishes to use a specific data type, the must define this above the main function
in the ``init_vector(type)`` macro function, in the manner shown below for the ``int``
and ``float`` data types.

.. code-block:: c

   #include<stdio.h>

   init_vector(int);
   init_vector(float);

   int main(int arg, const char *argv[]) {
       // implement functions here
       return 0;
   }

================
init_type_vector
================
Once the user enables the ``init_vector(type)`` macro functions for the desired data types,
all reh requisite functions are enabled.  A dynamically allocated array can be instantiated
with the ``typeVector = init_type_vector(size_t num_indices)`` where the ``type`` is equal to the type
set in the ``init_vector(type)`` macro, and ``num_indices`` is a user guess for the number
of indices to be allocated in the vector.  If the number of required indices turns out to
be incorrect, the functions will reallocate memory as necessary.  The function returns a 
``struct`` of the data type set in the macro.  The ``struct`` contains a pointer to the 
vector as well as metadata such as ``num_bytes`` representing the number of bytes
consumed by the data type, ``allocated_length`` which is the total number of allocated
indices, and ``active_length``, which is the mount of indices currently occupied
with data.  All metadata is assigned to a ``size_t`` data type.

.. code-block:: c

   #include<stdio.h>

   init_vector(int);
   init_vector(float);

   int main(int arg, const char *argv[]) {
       intVector vec1 = init_int_vector(5);
       floatVector vec2 = init_float_vector(6);

       printf("%ld\n", vec1.active_length);
       printf("%ld\n", vec2.allocated_length);
       printf("%ld\n", vec2.num_bytes);

       // >> 0
       // >> 6
       // >> 4
       return 0;
   }
