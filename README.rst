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
   ``clone https://github.com/Jon-Webb-79/Project_Name.git c_libs``

******
Vector
******
The ``vector.h`` library contains functions that enable to user to create and operate on a dynamically
allocated vector that is allocated in heap memory.  

===========
init_vector
===========
The most basic function in the ``vector.h`` 
library is the ``init_vector(size_t num_bytes, size_t num_indices)`` function, which takes as
arguements ``num_bytes`` which represents the number of bytes consumed by a single indice, and
``num_indices``, which is a user define number of indices that the vector is expected to require.
The ``init_vector`` returns a ``Vector`` data type, which represents a ``struct`` containing
vector parameters.  The following code snippet shows how a user can instantiate an integer
and double vector that may require 20 indices.  An integer data point consumes 4 bytes of
memory and a double type consumes 8 bytes of memory.  The returned variable should
be considered as a vector container, and not just a vector.

.. code-block:: c

   // Integer vector
   Vector int_vec = init_vector(4, 20);

   // Double vector
   Vector double_vec = init_vector(8, 20);

However, it is better to use the ``init_type_vector(dtype data_type, size_t num_indices)`` function
where the user passes an enum value to represent the ``data_type``.  The enum types can be
``INT``, ``FLOAT``, ``DOUBLE``, ``CHAR``, ``STRING``, ``SHORTINT``, ``LONG``, ``LONGLONG``,
and ``NONE``.  The enum types guide the software to automatically determine the number
of bytes consumed by a single vector indices, and does not care about signed versus
unsigned data types.  The ``NONE`` data type is automatically used for the ``init_vector``
function.  The user can use it for the ``init_type_vector`` function; however, it will
be degraded to an ``INT`` data type.  The code example below demonstrates the instantiation
of an integer and double vector with the ``init_type_vector`` function.

.. code-block:: c

   // Integer vector with 20 indices
   Vector int_vec = init_type_vector(INT, 20);

   // Double vector with 20 indices
   Vector double_vec = init_type_type_vector(DOUBLE, 20);

===========
push_vector
===========
Once a vector has been initialized the user can push scalar and array data to the end of a vector as 
shown below with the ``push_vector(Vector *vec, void *elements, size_t size)`` function
where ``vec`` is the dynamically allocated vector container. WARNING: Notice that this
code snippet ends with the function ``free_vector``.  If the user does not use
this function then the memory will remain allocated, which can cause unintended
behavior over prolonged code operation.

.. code-block:: c

   // Initialize a float vector
   Vector float_vec = init_type_vector(FLOAT, 5);

   // Append a scalar
   float a = 1.1;
   push_vector(&float_vec, &a, 1);

   printf("%f\n", ((float *)float_vec)[0]);
   // Prints the value of 1.1

   // Append an array
   float b[4] = {2.2, 3.3, 4.4, 5.5}'
   push_vector(&float_vec, b, 4);

   // Use active_length to print data
   for (size_t = 0; i < float_vec.active_length; i++) {
       printf("%f ,", ((float *)float_vec)[i]);
   }
   // Prints 1.1, 2.2, 3.3, 4.4, 5.5

   // Free memory
   free_vector(float_vec);

If the total number of required indices exceeds the user defined guess when the ``init_type_vector``
was called, then the library will automatically resize the vector to fit the number of indices
required.  If the total number of indices required exceeds the available memory, the function
will return a warning to the user and also return from the function without failing.

=============
insert_vector
=============
A user can also use the ``insert_vector(Vector *vec, void *elements size_t num_indices, size_t indice)`` function
to insert a scalar value or an array of data into an array.  The variables in hte prototype are the same
as that of ``push_vector`` with the exception of ``indice`` which represents the indice where the user
wishes to insert data.  An example is shown below.

.. code-block:: c

   Vector float_vec = init_type_vector(FLOAT, 6);
   float a[3] = {1.1, 2.2, 3.3};
   push_vector(&float_vec, a, 3);

   float b = 1.2;
   insert_vector(&float_vec, &b, 1, 2);
   // Leads to the vector [1.1, 2.2, 1.2, 3.3]

   float c[3] = {10.0, 11.0 ,12.0};
   insert_vector(&float, c, 3, 3);
   // Leads to the vector [1.1, 2.2, 1.2, 10.0, 11.0, 12.0, 3.3]

