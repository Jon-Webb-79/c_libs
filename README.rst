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

`Vector`_
Contains functions for dynamically allocated arrays, also called vectors.

.. _Vector:

******
Vector
******
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
with data.  All metadata is assigned to a ``size_t`` data type. In addition, the 
vector data is assigned to the variable ``vector``.  The ``struct`` is also accompanied
with a ``min`` and ``max`` attribute.

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

================
push_type_vector
================
The ``void = pus_type_vector(typeVector *vec, type *elements, size_t num_indices)`` function
will push a scalar value or an array of data to the end of a dynamically allocated array.
The term ``elements`` is a pointer to the scalar value or the array of data, and ``num_indices``
is the number of indices consumed by the data in ``elements``.  **NOTE:** This function will
handle ``char`` data types, but does not check for null terminators (i.e ``'\0'``). It is
the programmers responsibility to determine if null terminators should be incorporated
in this function.  However, if they are included, the function could append another
character array onto a null terminator, leaving multiple terminators within the string.
This could be advantageous or dis-advantageous depending on the use case.

.. code-block:: c

   #include<stdio.h>

   init_vector(int);

   int main(int arg, const char *argv[]) {
       intVector vec = init_int_vector(5);

       // push an array
       int a[5] = {1, 2, 3, 4, 5};
       push_int_vector(&vec, a, 5);
       for (size_t i = 0; i < vec.active_length; i++) {
           printf("%d\n", vec.vector[i]);
       }
       // >> 1, 2, 3, 4, 5

       // push a scalar
       int c = 6;
       push_int_vector(&vec, &c, 1);
       printf("%d\n", vec.vector[5]);
       // >> 6
       printf("%d\n", vec.max);
       printf("%d\n", vec.min);
       // >> 6
       // >> 1

       free_int_vector(&vec);
       return 0;
   }

Notice that at the end we are using the ``free_type_vector`` function to deallocate all
memory and reset that metadata in the static ``struct``.

==================
insert_type_vector
==================
The ``int = insert_type_vector(typeVector *vec, type *elements, size_t num_indices, size_t index)`` function
will insert a scalar variable, or an array of variables to the user defined index within a vector container.
The variable ``vec`` represents the typed vector container, ``elements`` represents the scalar or array of
data to be inserted, ``num_indices`` represents the number of indices consumed by ``elements``, and ``index``
is the index within the container where the data is to be inserted. **NOTE:** This function will
handle ``char`` data types, but does not check for null terminators (i.e ``'\0'``). It is
the programmers responsibility to determine if null terminators should be incorporated
in this function.  However, if they are included, the function could append another
character array onto a null terminator, leaving multiple terminators within the string.
This could be advantageous or dis-advantageous depending on the use case. 

This function will return an integer value of -1 if the function fails, or 1 if the function
is succesfully executed.

.. code-block:: c

   #include<stdio.h>

   init_vector(int);

   int main(int arg, const char *argv[]) {
       // Insert an array
       intVector vec = init_int_vector(5);
       int a[5] = {1, 2, 3, 4, 5};
       push_int_vector(&vec, a, 5);
       int b[3] = {10, 9, 8};
       insert_int_vector(&vec, b, 3, 2);
       for (size_t i = 0; i < vec.active_length; i++) {
           printf("%d\n", vec.vector[i]);
       }
       // >> 1, 2, 10, 9, 8, 3, 4, 5

       // Insert a scalar
       int c = 6;
       insert_int_vector(&vec, &c, 1, 0);
       printf("%d\n", vec.vector[0]);
       // >> 6

       free_int_vector(&vec);
       return 0;
   }

===============
pop_type_vector
===============
The ``int = pop_type_vector(typeVector *vec, size_t index)`` function will remove a scalar value from
a type vector container.  The variable ``index`` represents the index, where the user wishes to
remove data.

.. code-block:: c

   #include<stdio.h>

   init_vector(int);

   int main(int arg, const char *argv[]) {
       // Insert an array
       intVector vec = init_int_vector(5);
       int a[5] = {1, 2, 3, 4, 5};
       push_int_vector(&vec, a, 5);
       pop_int_vector(&vec, 2);
       for (size_t i = 0; i < vec.active_length; i++) {
           printf("%d\n", vec.vector[i]);
       }
       // >> 1, 2, 4, 5
       free_int_vector(&vec);
       return 0;
   }

=========================
delete_type_vector_values
=========================
The ``void delete_type_vector_values(typeVector *vec, type *value, size_t num_indices)`` function will remove a user
defined scalar variable or an array of variables from an input Vector or Array container.

.. code-block:: c

   #include<stdio.h>

   init_vector(float);

   int main(int arg, const char *argv[]) {
       // Insert an array
       floatVector vec = init_float_vector(6);
       float a[7] = {1.1, 3.8, 2.2, 1.1, 3.6, 4.2, 1.1};
       push_float_vector(&vec, a, 7);
       float b[2] = {1.1, 3.8}
       delete_float_vector_values(&vec, b, 2);
       for (size_t i = 0; i < vec.active_length; i++) {
           printf("%f\n", vec.vector[i]);
       }
       // >> 2.2, 3.6, 4.2
       float c = 2.2;
       delete_float_vector_values(&vec, &c, 1);
       for (size_t i = 0; i < vec.active_length; i++) {
           printf("%f\n", vec.vector[i]);
       }
       // >> 3.6, 4.2
       free_int_vector(&vec);
       return 0;
   }

=========================
replace_type_vector_index
=========================
The ``int replace_type_vector_index(typeVector *vec, size_t index, type replacement_value)`` function will replace
the value within an array at a specified ``index`` with a ``replacement_value``.

.. code-block:: c

   #include<stdio.h>

   init_vector(int);

   int main(int arg, const char *argv[]) {
       // Insert an array
       intVector vec = init_int_vector(5);
       int a[5] = {1, 2, 3, 4, 5};
       push_int_vector(&vec, a, 5);
       replace_int_vector_values(&vec, 2, 5);
       for (size_t i = 0; i < vec.active_length; i++) {
           printf("%d\n", vec.vector[i]);
       }
       // >> 1, 2, 5, 4, 5
       free_int_vector(&vec);
       return 0;
   }

