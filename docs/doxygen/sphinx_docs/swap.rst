****
SWAP
****
The ``SWAP`` Macro can be used to swap to variables of the same data type in memory.
This Macro uses a ``_Generic`` operator to determine the data types and the correct
underlying function to use for the operation.  If the user enters to mis-matched data
types, this Macro will fail at compile time.

.. role:: c(code)
   :language: c

.. code-block:: c

   void SWAP(type a, type b)


Parameters
----------

- :c:`a`: The first variable to be swapped in memory
- :c:`b`: The second variable to be swapped in memory

.. code-block:: c

   #include swap.h
   #include print.h

   int a = 5;
   int b = 12;
   PRINT("Before Swap");
   PRINT("a = ", a);
   PRINT("b = ", b);
   SWAP(a, b)
   PRINT("After Swap");
   PRINT("a = ", a);
   PRINT("b = ", b);

.. code-block:: bash

   >> Before Swap
   >> a = 5
   >> b = 12
   >> After Swap
   >> a = 12
   >> b = 5

The following functions can be used in place of the type generic ``SWAP`` Macro.
These functions can be accessed via the ``swap.h`` file.

.. code-block:: c

   void swap_short(short int *a, short int *b)
   void swap_ushort(unsigned short int *a, unsigned short int *b)
   void swap_int(int *a, int *b)
   void swap_uint(unsigned int *a, unsigned int *b)
   void swap_long(long int *a, long int *b)
   void swap_ulong(unsigned long *a, unsigned long *b)
   void swap llong(long long int *a, long long int *b)
   void swap ullong(unsigned long long int *a, unsigned long long int *b)
   void swap float(float *a, float *b)
   void swap double(double *a, double *b)
   void swap_ldouble(long double *a, long double *b)
   void swap_char(char *a, char *b)
   void swap_uchar(unsigned char *a, unsigned char *b)
   void swap_bool(bool *a, bool *b)

.. code-block:: c

   #include swap.h
   #include print.h

   int a = 5;
   int b = 12;
   PRINT("Before Swap");
   PRINT("a = ", a);
   PRINT("b = ", b);
   swap_int(&a, &b)
   PRINT("After Swap");
   PRINT("a = ", a);
   PRINT("b = ", b);

.. code-block:: bash

   >> Before Swap
   >> a = 5
   >> b = 12
   >> After Swap
   >> a = 12
   >> b = 5
