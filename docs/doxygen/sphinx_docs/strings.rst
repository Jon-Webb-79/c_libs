******
String
******
The ``string.h`` library contained in the standard library that ships with the C
programming language is known to have issues stemming from the fact that the
strings are statically allocated, which can cause segmentation faults if strings
are re-assigned within their lifecycle.

The string library contained in the ``str.h`` file was developed to help solve many
of the issues that are systemic in the ``string.h``.  This library will create
static and dynamically allocated strings, and allows users to manipulate the strings
and extract information. Currently, this library only allows for the implementation
of ASCII based characters.

In addition, the strings are written with a modern UI 
that abstracts away pointer references, and allows for overloading and type
generic operations.  The following sections describe the functionality of the ``str``
library.  This library can also be compiled with C++ code without the need
for any ``extern`` statements.  Finally the ``str.h`` file employs guards to
ensure the user is implementing the gcc or clang compilers, and that they
are using C11 or a later standard of the C language.


.. role:: c(code)
   :language: c

Structure
=========
The ``str`` library relies on the following struct to contain information

.. code-block:: c

   typedef struct
   {
       char *ptr;
       size_t len;
   } str;


Attributes
----------

- :c:`ptr`: A Pointer to the string
- :c:`len`: The length of the string in number of bytes

Initialize Static Strings
=========================
This ``str.h`` library can instantiate statically allocated strings with the ``str_lit``
function, which stands for string literal.  The memory instantiate with the ``str_lit``
function does not need to be manually freed.  The attributes of this Macro are
shown below

.. code-block:: c

   str str_lit(char *string);

Parameters
----------

- :c:`string`: A string literal

Returns
-------

- :c:`str`: A struct of type ``str``

.. code-block:: c

   #include "str.h"
   #include "print.h"

   str a = str_lit("Hello World!");
   PRINT(a)

.. code-block:: bash

   >> Hello World!

Initialize Dynamic Strings
==========================
The ``str.h`` library can instantiate dynamically allocated strings with the ``STR_NULL``
Macro.  These strings must be manually de-allocated once they are no longer needed.
This Macro only acts as a text replacement function to set up the instantiator.

.. code-block:: c

   void STR_NULL(var);

Parameters
----------

- :c:`var`: The name of the variable that will be assigned to the struct containing the dynamically allocated string

.. code-block:: c

   #include "str.h"
   #include "print.h"

   str STR_NULL(test_string);
   append_string(test_string, "One");
   append_string(test_string, " Two");
   PRINT(test_string):
   free_str(test_string);

.. code-block:: bash

   >> One Two

Dynamic Strings with Garbage Collection
=======================================
The ``str.h`` library does enable garbage collection and cleanup through the ``CLEANUP_STR`` Macro
which can be used in place of the ``STR_NULL`` instantiator.  When the ``CLEANUP_STR`` Macro
is invoked it calls the ``__atribute__((cleanup(free_function)))`` compiler flag
which keeps track of all structs enabled under the Macro, and then automatically frees
the memory associated with those structs when the struct goes out of scope.  This
macro simplifies the use of dynamically allocated strings; however, the user should be
aware that this will increase memory overhead and may also have an effect on execution speed.

.. code-block:: c

   void CLEANUP_STR(var);

Parameters
----------

- :c:`var`: The name of the variable that will be assigned to the struct containing the dynamically allocated string

.. code-block:: c

   #include "str.h"
   #include "print.h"

   str CLEANUP_STR(test_string);
   append_string(test_string, "One");
   append_string(test_string, " Two");
   PRINT(test_string):

.. code-block:: bash

   >> One Two

Append Strings
==============
The ``append_strings`` Macro is used with a ``_Generic`` operator to select from the
appropriate function based on the type of data being inserted into the string.  This
Macro allows overloading and can accept string literals (i.e. ``char*``) or ``str`` data
types.

.. code-block:: c

   bool append_string(str container, char*||str string);

Parameters
----------

- :c:`container`: A struct of type ``str``.
- :c:`string`: A string that can be passed as a string literal (i.e. ``char*``) or a string contained in a ``str`` struct.

Returns
-------

- :c:`error_code`: ``true`` of the function executes succesfully, ``false`` otherwise with a ``stderr`` message.

.. code-block:: c

   #include "str.h"
   #include "print.h"

   str STR_NULL(string);
   append_string(string, "This is a string literal, ");
   append_string(string, str_lit("and this is not!\n");

   str STR_NULL(new_string);
   append_string(new_string, "And this is a dynamic string!);
   append_string(string, new_string);
   PRINT(string);
   free_str(string);
   free_str(new_string);

.. code-block:: c

   >> This is a string literal, and this is not.
      And this is a dynamic string

The following functions can be used in place of the ``append_string`` macro.

.. code-block::

   bool join_cstr(str *str_struct, const char *cstr);
   bool join_str_struct(str str_struct1, str str_struct2);

.. code-block:: c

   #include "str.h"
   #include "print.h"

   str STR_NULL(string);
   join_cstr(&string, "This is a string literal, ");
   join_str_struct(&string, str_lit("and this is not!\n");

   str STR_NULL(new_string);
   join_cstr(&new_string, "And this is a dynamic string!);
   join_str_struct(&string, new_string);
   PRINT(string);
   free_string(&string);
   free_string(&new_string);

.. code-block:: c

   >> This is a string literal, and this is not.
      And this is a dynamic string

Replace Strings
===============
The ``replace_string`` Macro allows a user to replace a string with another string.
This will result in a dynamically allocated string, even if it was not dynamically
allocated in the first place.  This Macro allows for overloading and accepts string literals
(i.e., ``char*``) as well as ``str`` data types.  This Macro uses the ``_Generic`` operator
to allow function overloading.

.. code-block:: c

   bool replace_string(str str_struct, str || char* value);

Parameters
----------

- :c:`str_struct`: A struct of type ``str``.
- :c:`value`: A sruct of type ``str`` or a string literal of type ``str``.

Returns
-------

- :c:`error_code`: ``true`` if the function executes succesfully, ``false`` otherwise with a ``stderr`` message.

.. code-block:: c

   #include "str.h"
   #include "print.h"

   str STR_NULL(string);
   append_string(string, "Initial String");
   PRINT("The first string is: ", string);
   replace_string(string, "String Literal");
   PRINT("After replacment with literal: ", string);
   replace_string(string, str_lit("str Data"));
   PRINT("After replacement with str: ", string);
   free_str(string);

.. code-block:: bash

   >> The first string is: Initial String
   >> After replacement with literal: String Literal
   >> After replacement with str: str Data

The following functions can also be used in place of the ``replace_string`` Macro.

.. code-block:: c

   bool replace_str_with_cstr(str *str_struct, const char* cstr);
   bool replace_str_with_str(str *str_struct, str str_struct);

.. code-block:: c

   #include "str.h"
   #include "print.h"

   str STR_NULL(string);
   joint_cstr(&string, "Initial String");
   PRINT("The first string is: ", string);
   replace_str_with_cstr(&string, "String Literal");
   PRINT("After replacment with literal: ", string);
   replace_str_with_str(&string, str_lit("str Data"));
   PRINT("After replacement with str: ", string);
   free_string(&string);

.. code-block:: bash

   >> The first string is: Initial String
   >> After replacement with literal: String Literal
   >> After replacement with str: str Data

Compare Strings
===============
The ``compare_strings`` function can be used to compare two ``str`` structures
in much the same way the ``strcmp`` function does for string literals in the
``string.h`` library.

.. code-block:: c

   int compare_strings(const str struct_1, const str struct_2);

Parameters
----------

- :c:`struct_1`: A struct of type ``str``.
- :c:`struct_2`: A struct of type ``str``.

Returns
-------

- :c:`cmp`: 0 if strings are equal, >0 if the first non matching character in ``struct_1`` is greater than that of ``struct_2``, <0 otherwise.

.. code-block:: c

   #include "str.h"
   #include "print.h"

   int a = compare_strings(str_lit("One"), str_list("One"));
   int b = compare_strings(str_lit("bbb"), str_lit("bba"));
   int c = compare_strings(str_lit("bbb"), str_list("bbc"));

   PRINT("Comparison one:   ", a);
   PRINT("Comparison two:   ", b);
   PRINT("Comparison three: ", c);

.. code-block:: bash

   >> Comparison one:   0
   >> Comparison two:   1
   >> Comparison three: -1

Copy Memory
====================
The ``copy_mem`` Macro will copy ``n`` bytes of memory from one struct of type ``str`` to another
in much the same way ``memmcpy`` works in the ``string.h`` library.  This Macro
uses the ``_Generic`` operator as a wrapper around a single function to abstract away
the pointer references.  The underlying function does not allow a user to copy
more byts than are available in the string in order to prevent a segmentation fault.

.. code-block:: c

   bool copy_mem(str *dest, const str *src, size_t n);

Parameters
----------

- :c:`dest`: The destination struct of type ``str``.
- :c:`src`: The source struct of type ``str``.
- :c:`n`: The number of bytest to be copied.  Will not allow more bytes than exist in ``src`` string.

Returns
-------

- :c:`bool`: ``true`` if the function executes succesfully, ``false`` otherwise with a ``stderr`` message

.. code-block::

   #include "str.h"
   #include "print.h"

   str STR_NULL(string1);
   str STR_NULL(string2);
   append_string(string1, "This is a long string for demonstration.");
   size_t n = 12;
   copy_mem(string2, string1, n);
   PRINT(string2);
   free_str(string1);
   free_str(string2);

.. code-block:: bash

   >> This is a lo

Move an entire struct to another.

.. code-block::

   #include "str.h"
   #include "print.h"

   str STR_NULL(string1);
   str STR_NULL(string2);
   append_string(string1, "This is a long string for demonstration.");
   copy_mem(string2, string1, string1.len);
   PRINT(string2);
   free_str(string1);
   free_str(string2);

.. code-block:: bash

   >> This is a long string for demonstration.

function fails if the user tries to pass more bytes than are available in the struct

.. code-block:: c

   #include "str.h"
   #include "print.h"

   str STR_NULL(string1);
   str STR_NULL(string2);
   append_string(string1, "Message");
   size_t n = 12;
   bool a = move_mem(string2, string1, n);
   if ( !a ) {
       PRINT("Exited append_string, tried to copy to much memory, stderr message released")
   }
   free_str(string1);
   // No dynamic memory allocated to string2, but function catches this without failure of execution 
   free_str(string2);

.. code-block:: bash

   >> Exited append_string, tried to copy to much memory, stderr message released

Move Memory
===========
The ``move_mem`` Macro will move ``n`` bytes of memory from one struct of type ``str`` to another
in much the same way ``memmove`` works in the ``string.h`` library.  This Macro
uses the ``_Generic`` operator as a wrapper around a single function to abstract away
the pointer references.  The underlying function does not allow a user to copy
more byts than are available in the string in order to prevent a segmentation fault.
This is a safer algorithm to use than the ``copy_memory`` funciton when their may be
overlapping memory.

.. code-block:: c

   bool move_mem(str *dest, const str *src, size_t n);

Parameters
----------

- :c:`dest`: The destination struct of type ``str``.
- :c:`src`: The source struct of type ``str``.
- :c:`n`: The number of bytest to be copied.  Will not allow more bytes than exist in ``src`` string.

Returns
-------

- :c:`bool`: ``true`` if the function executes succesfully, ``false`` otherwise with a ``stderr`` message

.. code-block:: c

   #include "str.h"
   #include "print.h"

   str STR_NULL(string1);
   str STR_NULL(string2);
   append_string(string1, "This is another string for demonstration.");
   size_t n = 20;
   move_mem(&string2, &string1, n);
   PRINT(string2);
   free_str(string1);
   free_str(string2);

.. code-block:: bash

   >> This is another stri

String Length
=============
The length of strings encapsulated in a ``str`` data types is contained in the ``len`` attribute;
however, the length of a string literal must be determined by iterating through the string
with a counter.  The ``literal_strlen`` function can be used to determine the length
of a string literal and is modeled after the the ``strlen`` function in the ``string.h``
library.

.. code-block:: c

   size_t literal_strlen(const char* str);

Parameters
----------

- :c:`str`: A string literal of type ``const char*``.

Returns
-------

- :c:`len`: The length of the string literal

.. code-block:: c

   #include "str.h"
   #include "print.h"

   const char* one[] = "Hello";
   str two = str_lit("Hello");
   size_t b = literal_strlen(&one);
   PRINT("Literal Length: ", b);
   PRINT("String Length:  ", two.len);

.. code-block:: c

   >> Literal Length: 5
   >> String Length:  5

literal_memcpy
==============
The ``literal_memcpy`` function copies ``n`` bytes of memory from one location to another.
This function is a version of the ``memcpy`` function in the ``string.h`` library.
This function may be used to help move memory in large arrays, as a result the
``__attribute__((hot))`` attribute to optimize the function at compilation time is used.

.. code-block:: c

   void* literal_memcpy(void* dest, const void* src, size_t n);

Parameters
----------

- :c:`dest`: A pointer to the location in memory where data is being copied.
- :c:`src`: A pointer to the location in memory where data is being copied from.
- :c:`n`: The number of bytes being copied from ``src`` to ``dest``.

.. code-block:: c

   #include "str.h"
   #include "print.h"

   const char src[50] = "https://www.tutorialspoint.com";
   char dest[50];
   const char dest[50] = "Heloooo!!"; 
   PRINT("Before memcpy dest = ", dest);
   memcpy(dest, src, strlen(src)+1);
   PRINT("After memcpy dest = ", dest); 

.. code-block:: bash

   Before memcpy dest = Heloooo!!
   After memcpy dest = https://www.tutorialspoint.com

literal_memmove
===============
The ``literal_memmove`` function moves ``n`` bytes of memory from one location to another.
This function is a version of the ``memmove`` function in the ``string.h`` library.
This function may be used to help move memory in large arrays, as a result the
``__attribute__((hot))`` attribute to optimize the function at compilation time is used.

.. code-block:: c

   void* literal_memmove(void* dest, const void* src, size_t n);

Parameters
----------

- :c:`dest`: A pointer to the location in memory where data is being copied.
- :c:`src`: A pointer to the location in memory where data is being copied from.
- :c:`n`: The number of bytes being copied from ``src`` to ``dest``.

.. code-block:: c

   #include "str.h"
   #include "print.h"

   char string[] = "memmove can be very useful......";
   literal_memmove(string+20, string+15, 11); 
   PRINT(string)

.. code-block:: bash

   memove can be very very useful.

