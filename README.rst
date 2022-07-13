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
   insert_vector(&float_vec, c, 3, 3);
   // Leads to the vector [1.1, 2.2, 1.2, 10.0, 11.0, 12.0, 3.3]

==========
pop_vector
==========
A user can delete a vector element using the ``pop_vector(Vector *vec, size_t indice)`` function, where
``indice`` represents the indice to be deleted.  An example is provided below.

.. code-block:: c

   Vector int_vec = init_type_vector(INT, 4);
   int a[4] = {1, 2, 3, 4}
   push_vector(&int_vec, a, 4);
   pop_vector(&int_vec, 2);
   // [1, 2, 4]

==================
find_vector_indice
==================
This function can be used to determine every indice where a user defined value exist.  The function has
the form ``find_vector_indices(Vector *vec, void *value)`` where value is the data to be compared 
at each index.  The function returns another vector container of integer values.

.. code-block:: c

   Vector int_vec = init_type_vector(INT, 6);
   int a[6] = {1, 2, 1, 3, 4, 1);
   push_vector(&int_vec, a, 6);
   Vector indice_vec = find_vector_indices(&int_vec, 1);
   for (size_t i = 0; i <  indice_vec.active_length; i++) {
       printf("%d, ", ((int *)indice_vec.vector)[0]);
   }
   // [0, 2, 5]

====================
delete_vector_values
====================
The function ``delete_vector_values(Vector *vec, void *value)`` can be used to delete all occurances
of a value from a vector container.

.. code-block:: c

   Vector int_vec = init_type_vector(INT, 6);
   int a[6] = {1, 2, 1, 3, 4, 1);
   push_vector(&int_vec, a, 6);
   // deletes all instances of 1 from the vector.
   // This works for any data type
   delete_vector_values(&int_vec, 1);
   // [2, 3, 4]

=====================
replace_vector_indice
=====================
The function ``replace_vector_indice(Vector *vec, size_t index, void *replacement_value)`` function allows a user to pass
the function an index containing data that should be replaced with ``replacement_value``.

.. code-block:: c

   Vector double_vec = init_type_vector(DOUBLE, 3);
   double a[3] = {1.1, 2.2, 3.3};
   double b = 4.4;
   push_vector(&double_vec, a, 3);
   replace_vector_indice(&double_vec, 1, &b);
   // [1.1, 4.4, 3.3]

=====================
replace_vector_values
=====================
The function ``replace_vector_values(Vector *vec, void *old_value, void *new_value)``
allows a user to enter an ``old_value``.  The function will search the vector container.
If the value exists at one or multiple places in the vector it will be replaced
with ``new_value``.

.. code-block:: c

   Vector double_vec = init_type_vector(DOUBLE, 3);
   double a[3] = {1.1, 2.2, 3.3};
   double b = 3.3;
   double c = 6.6;
   push_vector(&double_vec, a, 3);
   replace_vector_values(&double_vec, &b, &c);
   // [1.1, 2.2, 6.6]

========================
delete_vector_duplicates
========================
The function ``delete_vector_duplicates(Vector *vec)`` will delete all duplicate values
in a vector container

.. code-block:: c

   float a[7] = {1.1, 2.2, 1.1, 4.5, 1.1, 2.3, 2.2};
   Vector vec = init_type_vector(FLOAT, 7);
   push_vector(&vec, a, 7);
   delete_vector_duplicates(&vec);
   // [1.1, 2.2, 4.5, 2.3]

====================
unique_vector_values
====================
The function ``unique_vector_values(Vector *vec)`` will delete all non unique values
in a vector container.

.. code-block:: c

   float a[7] = {1.1, 2.2, 1.1, 4.5, 1.1, 2.3, 2.2};
   Vector vec = init_type_vector(FLOAT, 7);
   push_vector(&vec, a, 7);
   unique_vector_values(&vec);
   // [4.5, 2.3]

===============
sort_xxx_vector
===============
This library contains several ``sort_xxx_vector(Vector *vec, uint8_t method)`` functions where
``xxx`` represents ``int``, ``float``, ``double``, ``char``, ``short``, ``long``, or ``longlong``.
Each function is set up specifically for the data types described by ``xxx``.  The term ``method``
is an unsigned short integer that can be 0 or 1.  If 0 is selected, it will sort the vector in
ascending order.  If 1 is selected it will sort the array in descending order.

.. code-block:: c

   float a[5] = {1.1, 3.3, 2.1, 4.5, 1.8};
   Vector vec = init_type_vector(FLOAT, 5);
   push_vector(&vec, a, 5);
   sort_float_vector(&vec, 0);
   for (size_t i = 0; i < vec.active_length; i++) {
       printf("%f\n", ((float *)vec.vector)[i]);
   }
   // [1.1, 1.8, 2.1, 3.3, 4.5]

   float a[5] = {1.1, 3.3, 2.1, 4.5, 1.8};
   Vector vec = init_type_vector(FLOAT, 5);
   push_vector(&vec, a, 5);
   sort_vector(&vec, 1);
   for (size_t i = 0; i < vec.active_length; i++) {
       printf("%f\n", ((float *)vec.vector)[i]);
   }
   // [4.5, 3.3, 2.1, 1.8, 1.1]

==================
reverse_xxx_vector
==================
The function ``reverse_xxx_vector(Vector *vec)`` function where ``xxx`` represents ``int``, ``float``,
``double``, ``char``, ``short``, ``long``, or ``longlong``.  Each function is set up specifically
for the data types described by ``xxx``.

.. code-block:: c

   float a[5] = {1.1, 3.3, 2.1, 4.5, 1.8};
   Vector vec = init_type_vector(FLOAT, 5);
   push_vector(&vec, a, 5);
   reverse_float_vector(&vec, 0);
   for (size_t i = 0; i < vec.active_length; i++) {
       printf("%f\n", ((float *)vec.vector)[i]);
   }
   // [1.8, 4.5, 2.1, 3.3, 1.1]

   float a[5] = {1.1, 3.3, 2.1, 4.5, 1.8};
   Vector vec = init_type_vector(FLOAT, 5);
   push_vector(&vec, a, 5);
   reverse_vector(&vec, 1);
   for (size_t i = 0; i < vec.active_length; i++) {
       printf("%f\n", ((float *)vec.vector)[i]);
   }
   // [1.8, 4.5, 2.1, 3.3, 1.1]
