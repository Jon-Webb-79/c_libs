******
c_libs
******
This repository contains libraries for the c programming language.  The library is divided into different
header files that execute different functionality.  This library contains a ``vector.h`` library, and an
``array.h`` library.

Contributing
############
Pull requests are welcome.  For major changes, please open an issue first to discuss
what you would like to change.  Please make sure to include and update tests
as well as relevant doc-string and doxygen updates.

License
#######
The License is included in the **c_libs** package

Requirements
############
C11 or greater

Installation
############
In order to download this repository from github, follow these instructions

1. Ensure you have .git installed on your computer
2. At your desired location create a directory titled ``c_libs``
3. Open a terminal (Bash, zsh, Linux, or DOS) and cd to the ``c_libs`` directory and type
   ``clone https://github.com/Jon-Webb-79/Project_Name.git c_libs``

Vector
######
The ``vector.h`` library contains functions that enable to user to create and operate on a dynamically
allocated vector that is allocated in heap memory.  The most basic function in the ``vector.h`` 
library is the ``init_vector(size_t num_bytes, size_t num_indices)`` function, which takes as
arguements ``num_bytes`` which represents the number of bytes consumed by a single indice, and
``num_indices``, which is a user define number of indices that the vector is expected to require.
The ``init_vector`` returns a ``Vector`` data type, which represents a ``struct`` containing
vector parameters.  THe following code snippet shows how a user can instantiate an integer
and double vector that may require 20 indices.  An integer data point consumes 4 bytes of
memory and a double type consumes 8 bytes of memory.

.. code-block:: c

   // Integer vector
   Vector int_vec = init_vector(4, 20);

   // Double vector
   Vector double_vec = init_vector(8, 20);
