*****
PRINT
*****
The ``PRINT`` Macro can print up to eight arguments of any data type that ships with the ANSI-C
distribution to include ``short int``, ``unsigned short int``, ``int``, ``unsigned int``,
``long int``, ``unsigned long int``, ``long long int``, ``unsigned long long int``, 
``float``, ``double``, ``long double``, ``char``, ``unsigned char``, and
``bool``. In addition, the PRINT Macro can accomodate all data types from
the ``vector.h`` file described in :ref:`vec-data-type`

.. code-block:: c

   void PRINT(...)

.. code-block:: c

   int a = 5;
   float b = 5.318;

   Dble vec;
   INIT_VECTOR(vec, 5);
   double c[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
   INSERT(vec, c, 5, 0); 

   PRINT("This is a float value: ", b);
   PRINT("This is an integer value: ", a);
   PRINT("This is a vector ", vec, "and this is not ", b)

.. code-block:: bash

   >> This is a float valie: 5.310000
   >> This is an integer value: 5
   >> This is a vector [ 1.1000, 2.2000, 3.3000, 4.4000, 5.5000 ] and this is not 5.31000

At present the ``PRINT`` macro does not support formatting.

