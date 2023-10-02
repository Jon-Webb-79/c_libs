.. _ErrorCodes:

***********
Error Codes
***********
When possible the ``c_libs`` library uses enums to manage error checking.
The following are enums that are used throughout this library.  The
various enums described in this Section are stored in the ``admin.h``
header file.

.. role:: c(code)
   :language: c

ErrorCodes
==========
The ``ErrorCodes`` enum handles generic warnings.

.. code-block:: c

   typedef enum {
      Success,
      MemoryAllocationError,
      NullStrError,
      OutOfBoundsError,
   } ErrorCodes;

Attributes
----------

- :c:`Success`: Succesfull function execution with no errors.
- :c:`MemoryAllocationError`: Memory allocation error during ``malloc``, ``calloc`` or ``realloc`` function call.
- :c:`NullStrError`: The pointer to a string in a ``str`` struct is ``NULL``.
- :c:`OutOfBoundsError`: Pointer to memory that is out of allocated bounds.
