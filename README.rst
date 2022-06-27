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
allocated vector that is allocated in heap memory.

.. code-block:: c

   /** This code creates a dynamically allocated integer and float array */
   Vector vec = init_vector(20, INT);
