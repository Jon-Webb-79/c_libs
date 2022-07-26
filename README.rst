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
The first header file is the ``vector.h`` which contains
functions that enable dnyamically allocated arrays of all data types to include strings.

`Array`_
The ``array.h`` contains functions that extend the functionality
of statically allocated arrays inherent with the C programming language.

.. _Vector:

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
   free_vector(&vec);

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
   free_vector(&vec);

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
   free_vector(&vec);

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
   free_vector(&vec);

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
   free_vector(&vec);

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
   free_vector(&vec);

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
   free_vector(&vec);

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
   free_vector(&vec);

===============
sort_xxx_vector
===============
This library contains several ``sort_xxx_vector(Vector *vec, order method)`` functions where
``xxx`` represents ``int``, ``float``, ``double``, ``char``, ``short``, ``long``, or ``longlong``.
Each function is set up specifically for the data types described by ``xxx``.  The term ``method``
is an ``enum`` that can be ``FORWARD`` or ``REVERSE``.  If ``FORWARD`` is selected, it will sort the vector in
ascending order.  If ``REVERSE`` is selected it will sort the array in descending order.  In addition,
the user can implement the ``sort_vector(Vector *vec)`` function will will autonomously
determine the correct data type to implement.

.. code-block:: c

   float a[5] = {1.1, 3.3, 2.1, 4.5, 1.8};
   Vector vec = init_type_vector(FLOAT, 5);
   push_vector(&vec, a, 5);
   sort_float_vector(&vec, 0);
   for (size_t i = 0; i < vec.active_length; i++) {
       printf("%f\n", ((float *)vec.vector)[i]);
   }
   // [1.1, 1.8, 2.1, 3.3, 4.5]
   free_vector(&vec);

   float a[5] = {1.1, 3.3, 2.1, 4.5, 1.8};
   Vector vec = init_type_vector(FLOAT, 5);
   push_vector(&vec, a, 5);
   sort_vector(&vec, 1);
   for (size_t i = 0; i < vec.active_length; i++) {
       printf("%f\n", ((float *)vec.vector)[i]);
   }
   // [4.5, 3.3, 2.1, 1.8, 1.1]
   free_vector(&vec);

==================
reverse_xxx_vector
==================
The function ``reverse_xxx_vector(Vector *vec)`` where ``xxx`` represents ``int``, ``float``,
``double``, ``char``, ``short``, ``long``, or ``longlong``.  Each function is set up specifically
for the data types described by ``xxx``. In addition, the user can implement the 
``reverse_vector(Vector *vec)`` function will will autonomously determine the correct data type to implement.

.. code-block:: c

   float a[5] = {1.1, 3.3, 2.1, 4.5, 1.8};
   Vector vec = init_type_vector(FLOAT, 5);
   push_vector(&vec, a, 5);
   reverse_float_vector(&vec);
   for (size_t i = 0; i < vec.active_length; i++) {
       printf("%f\n", ((float *)vec.vector)[i]);
   }
   // [1.8, 4.5, 2.1, 3.3, 1.1]
   free_vector(&vec);

   float a[5] = {1.1, 3.3, 2.1, 4.5, 1.8};
   Vector vec = init_type_vector(FLOAT, 5);
   push_vector(&vec, a, 5);
   reverse_vector(&vec);
   for (size_t i = 0; i < vec.active_length; i++) {
       printf("%f\n", ((float *)vec.vector)[i]);
   }
   // [1.8, 4.5, 2.1, 3.3, 1.1]
   free_vector(&vec);

=================
median_xxx_vector
=================
The function ``median_xxx_vector(Vector *vec)`` where ``xxx`` represents ``int``, ``float``,
``double``, or ``long`` can be used to determine the median value of a vector containing the data
type corresponding to ``xxx``.  If a vector contains an odd number of variables, the function
will return the true median value.  If a vector contains an even number of variables, the
function will return the average of the two median values.  As a result, the returned
value will always be read (i.e. ``float`` or ``double``).

.. code-block:: c

   int a[6] = {1, 2, 3, 4, 5, 6};
   Vector vec = init_type_vector(INT, 6);
   push_vector(&vec, a, 6);
   float median = median_float_vector(&vec);
   printf("%f\n", median);
   // 3.5
   free_vector(&vec);

   long a[5] = {1, 2, 3, 4, 5};
   Vector vec = init_type_vector(LONG, 5);
   push_vector(&vec, a, 5);
   double median = median_long_vector(&vec);
   printf("%ld\n", median);
   // 3.0
   free_vector(&vec);

==============
sum_xxx_vector
==============

The function ``sum_xxx_vector(Vector *vec)`` where ``xxx`` represents ``int``, ``float``,
``double``, ``short``, ``long`` and ``longlong`` can be used to determine the sum of the 
contents of a Vector container.

.. code-block:: c

   int a[5] = {1, 2, 3, 4, 5};
   Vector vec = init_type_vector(INT, 6);
   push_vector(&vec, a, 6);
   int sum = sum_int_vector(&vec);
   printf("%f\n", sum);
   // 15
   free_vector(&vec);

==================
average_xxx_vector
==================
The function ``average_xxx_vector(Vector *vec)`` where ``xxx`` represents ``int``, ``float``,
``double``, and ``long`` can be used to determine the sum of the 
contents of a Vector container and returns the average of the Vector contents.  
The function ``average_int_vector()`` returns a float
value and ``average_long_vector()`` returns a double value.

.. code-block:: c

   float a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
   Vector vec = init_type_vector(FLOAT, 6);
   push_vector(&vec, a, 6);
   float avg = average_float_vector(&vec);
   printf("%f\n", avg);
   // 3.3
   free_vector(&vec);

================
stdev_xxx_vector
================
The function ``stdev_xxx_vector(Vector *vec)`` where ``xxx`` represents ``int``, ``float``,
``double``, and ``long`` can be used to determine the sum of the 
contents of a Vector container.  This function returns the standard deviation of the 
Vector.  The function ``stdev_int_vector()`` returns a float
value and ``stdev_long_vector()`` returns a double value.

.. code-block:: c

   float a[9] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
   Vector vec = init_type_vector(FLOAT, 9);
   push_vector(&vec, a, 9);
   float stdev = stdev_float_vector(&vec);
   printf("%f\n", stdev);
   // 3.012
   free_vector(vec);

================
cumsum_xxx_vector
================
The function ``cumsum_xxx_vector(Vector *vec)`` where ``xxx`` represents ``int``, ``float``,
``double``, ``short``, ``long`` and ``longlong`` can be used to determine the sum of the 
contents of a Vector container.  The function returns a Vector container of the same
type with the cumulative sum of the input vector.

.. code-block:: c

   int a[9] = {1, 2, 3, 4, 5};
   Vector vec = init_type_vector(INT, 5);
   push_vector(&vec, a, 5);
   float csum = cumusm_int_vector(&vec);
   printf("%d\n", ((int *)csum->vector)[i]);
   // 1, 3, 6, 10, 15
   free_vector(&vec);

==================
init_string_vector
==================
The function ``init_string_vector(size_t size)`` is used to initialize a string vector and requires
the user to input ``size`` which represents the number of indices that the user estimates the function
will require.  This functin returns a ``StringVector`` container.

.. code-block:: c

   StringVector vec = init_string_vector(5);

==================
push_string_vector
==================
The function ``push_string_vector(StingVector *vec, char *value, size_t length)`` can be used to push
strings to a string vector container.  The variable ``vec`` represents a String Vector container,
``value`` represents a string and ``length`` represents the length of the string to include
the null terminator.

.. code-block:: c

   char a[6] = "Hello";
   StringVector vec = init_string_vector(6);
   push_string_vector(&vec, a, 6);
   char b[7] = "World!";
   push_string_vector(&vec, b, 7);
   for (size_t i = 0; i < vec.active_length; i++) {
       printf("%s\n", vec.vector[i]);
   }
   // "Hello ", "World "
   free_string_vector(&vec);

====================
insert_string_vector
====================
The function ``insert_string_vector(StringVector *vec, char *value, size_t length, size_t index)``
can be used to insert a string to a string vector container at a specified index.  The variable
``vec`` represents a StringVector container, ``value`` represents a string, ``length`` represents
the length of the string, including the null terminator, ``index`` represents the index where a

.. code-block:: c

   char a[6] = "Hello";
   StringVector vec = init_string_vector(6);
   push_string_vector(&vec, a, 6);
   char b[7] = "World!";
   push_string_vector(&vec, b, 7);
   char c[8] = "Goodbye"
   push_string_vector(&vec, c, 8);
   char d[5] = "Goof";
   insert_string_vector(&vec, d, 5, 1)
   for (size_t i = 0; i < vec.active_length; i++) {
       printf("%s\n", vec.vector[i]);
   }
   // "Hello ", "Goof", "World ", "Goodbye"
   free_string_vector(&vec);

=================
pop_string_vector
=================
The function ``pop_string_vector(StringVector *vec, size_t index)`` can be used to pop
a data point from the container.  The variable ``vec`` represents a StringVector
container, ``index`` represents the index that will be popped from the container.

.. code-block:: c

   char a[6] = "Hello";
   StringVector vec = init_string_vector(6);
   push_string_vector(&vec, a, 6);
   char b[7] = "World!";
   push_string_vector(&vec, b, 7);
   char c[8] = "Goodbye"
   push_string_vector(&vec, c, 8);
   pop_string_vector(&vec, 1)
   for (size_t i = 0; i < vec.active_length; i++) {
       printf("%s\n", vec.vector[i]);
   }
   // "Hello ", "Goodbye"
   free_string_vector(&vec);

.. _Array:

*****
Array
*****
The array library within ``array.h`` builds upon the static array capability inherent with the C language.  This library
adds much of the same capability as the ``vector.h`` header file as applied to static arrays in stack memory.

==========
init_array
==========
The function ``init_array(size_t allocated_length, size_t active_length, void *array, dtype data_type)`` is the most
fundamental function in the ``array.h`` library.  This function is used to instantiate an array container and 
its metadata.  The term ``allocated_length`` represents the total amount of array memory allocated in
stack memory. ``active_length`` represents the total amount of indices that have actively been populated with
data, ``array`` is a pointer to the allocated array, and ``data_type`` is an enum representing the 
data type used in the array.  ``data_type`` can be ``FLOAT``, ``DOUBLE``, ``INT``, ``CHAR``, ``SHORTINT``,
``LONG``, or ``LONGLONG``.

.. code-block:: c

   int a[10] = {1, 2, 3, 4};
   Array arr = init_array(10, 4, a, INT);

==========
push_array
==========
The function ``push_array(Array *arr, void *array, size_t active_indices)`` allows a user to push a scalar
variable or an array of data to the end of the active array within an Array container.  The user must take
caution to ensure that the data pushed to the array container in conjunction with the data already in
the array container does not exceed the allocated length of the array.  If this is the case, the function
will produce a warning and return an integer of 0.  Otherwise the function returns an integer of 1.

.. code-block:: c

   int a[10] = {1, 2, 3, 4};
   Array arr = init_array(10, 4, a, INT);
   int b[6] = {5, 6, 7, 8, 9, 10};
   push_array(&arr, b, 6);
   for (size_t i = 0; i < arr.active_length; i++) {
       printf("%d\n", ((int *)arr.array)[i]);
   }
   // 1, 2, 3, 4, 5, 6, 7, 8, 9, 10

============
insert_array
============
The function ``insert_array(Array *arr, void *array, size_t active_indices, size_t insert_index)`` allows
a user to insert a scalar variable or an array of data into an array at a user specified index.  The
user must take care to ensure that the data inserted does not exceed the allocated length of the 
array within the container or the available memory left. In addition, the user should ensure
that the space between the chosen index and the maximum allocated length is large enough to accomodate
the inserted data.  In either case, the function will warn the user in the event of one of these
scenarios and return an integer of 0.  Otherwise the function will return an integer of 1.


.. code-block:: c

   int a[10] = {1, 2, 3, 4};
   Array arr = init_array(10, 4, a, INT);
   int b[6] = {5, 6, 7, 8, 9, 10};
   insert_array(&arr, b, 6, 2);
   for (size_t i = 0; i < arr.active_length; i++) {
       printf("%d\n", ((int *)arr.array)[i]);
   }
   // 1, 2, 5, 6, 7, 8, 9, 10, 3, 4

=========
pop_array
=========
The function ``pop_array(Array &arr, size_t index)`` allows a user to pop the data from a 
specific index within an array container.

.. code-block:: c

   int a[5] = {1, 2, 3, 4, 5};
   Array arr = init_array(5, 5, a, INT);
   pop_array(&arr, 2);
   for (size_t i = 0; i < arr.active_length; i++) {
       printf("%d\n", ((int *)arr.array)[i]);
   }
   // 1, 2, 4, 5

===================
replace_array_index
===================
The function ``replace_array_index(Array *arr, size_t index, void *value)`` allows a user to replace
a value at a specified index.

.. code-block:: c

   int a[5] = {1, 2, 3, 4, 5};
   Array arr = init_array(5, 5, a, INT);
   int b = 10;
   replace_array_index(&arr, 2, &b);
   for (size_t i = 0; i < arr.active_length; i++) {
       printf("%d\n", a[i]);
   }
   // 1, 2, 10, 4, 5

This function uses a pointer to the original array allocation.  So this function can also be accomplished
with the following syntax

.. code-block:: c

   int a[5] = {1, 2, 3, 4, 5};
   Array arr = init_array(5, 5, a, INT);
   a[2] = 10

====================
replace_array_values
====================
The function ``replace_array_values(Array *arr, void *old_value, void *new_value)`` allows a user to replace
all instances of a variable in an array with another value.

.. code-block:: c

   int a[5] = {1, 2, 1, 4, 5};
   Array arr = init_array(5, 5, a, INT);
   int aa = 1;
   int b = 10;
   replace_array_values(&arr, &aa, &b);
   for (size_t i = 0; i < arr.active_length; i++) {
       printf("%d\n", a[i]);
   }
   // 10, 2, 10, 4, 5
   
=======================
delete_array_duplicates
=======================
The function ``delete_array_duplicates(Array *arr)`` will delete all repeated values in an array

.. code-block:: c

   int a[8] = {1, 2, 1, 3, 4, 5, 5, 4};
   Array arr = init_array(8, 8, a, INT);
   delete_array_duplicates(&arr);
   for (size_t i = 0; i < arr.active_length; i++) {
       printf("%d\n", a[i]);
   }
   // 1, 2, 3, 4, 5

====================
unique_vector_values
====================
The function ``unique_array_values(Array *arr)`` will delete all values, expect for those that have
no duplicates in an array.

.. code-block:: c

   int a[9] = {1, 2, 2, 3, 3, 4, 5, 6, 6};
   Array arr = init_array(9, 9, a, INT);
   unique_array_values(&arr);
   for (size_t i = 0; i < arr.active_length; i++) {
       printf("%d\n", a[i]);
   }
   // 1, 4, 5

==========
sort_array
==========
The function ``sort_array(Array *arr, order method)`` will sort an array using a simple insert method
in ascending or descending order.  The term ``method`` is an enum which can be ``FORWARD`` or ``REVERSE``
representing ascending or descending order.  Since the Array container metadata is not manipulated in
this process, the user can also implement other more advanced sorting methods like the bubble method
or the ``qsort`` method.

.. code-block:: c

   int a[5] = {5, 1, 4, 3, 2};
   Array arr = init_array(5, 5, a, INT);
   sort_array(&arr, FORWARD);
   for (size_t i = 0; i < arr.active_length; i++) {
       printf("%d\n", a[i]);
   }
   // 1, 2, 3, 4, 5

In addition, the user can use the ``sort_xxx__array(Array *arr, order method)`` functions where ``xxx``
represents all applicable data types.

=============
reverse_array
=============
The function ``reverse_array(Array *arr)`` will reverse the order of an array.

.. code-block:: c

   int a[5] = {5, 4, 3, 2, 1};
   Array arr = init_array(5, 5, a, INT);
   reverse_array(&arr);
   for (size_t i = 0; i < arr.active_length; i++) {
       printf("%d\n", a[i]);
   }
   // 1, 2, 3, 4, 5

================
median_xxx_array
================

The function ``median_xxx_array(Array *arr)`` can be used to determine the median value of an array,
where ``xxx`` represents ``int``, ``float``, ``double``, and ``long``, which return ``float``, ``float``,
``double, and ``double`` data types respectively.  If an array contains an odd number of value, this
function will return the middle value.  If the array contains an off number of values, the function
will return the average of the two middle values.

.. code-block:: c

   int a[5] = {5, 4, 3, 2, 1};
   Array arr = init_array(5, 5, a, INT);
   float median = reverse_array(&arr);
    printf("%f\n", median);
   // 3.0
