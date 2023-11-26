######
c_libs
######

**NOTE:** This library is in the process of being ported to the CSalt library 
and will be discontinuous at some point in the near future.  The CSalt library 
can be found at `CSalt <https://github.com/Jon-Webb-79/csalt>`_ 

This library contains C functions and generic operators that enable pre-defined data structures,
generic print statements, random number generators, and file readers.  This library implements
generic operators to simplify the user interface.  Unlike traditional macros, a generic operator
does not consume extra memory, or increase the speed of code execution.  Instead a generic operator
only provides a generic type agnostic interface for all users of the library.

************
Contributing
************
Pull requests are welcome.  For major changes, please open an issue first to discuss
what you would like to change.  Please make sure to include and update tests
as well as relevant doc-string and doxygen updates.

*******
License
*******
This project is implemented with an MIT License

************
Requirements
************
THis library with written and test on PC and Macintosh computers using the clang 14.0.0, and gcc 12.2.1 compilers.
The code is also compiled with C11 standards and Cmake version 3.22.2

************
Installation
************
In order to download this repository from github, follow these instructions

1. Ensure you have .git installed on your computer
2. Ensure you have CMake version 3.22.2 or later versions installed on your computer
3. Ensure have a clang 14.0.0 or gcc 12.2.1 compiler or later version installed on your computer
4. Open a terminal (Bash, zsh, Linux, or DOS) and type ``git clone https://github.com/Jon-Webb-79/c_libs.git``
5. Build code.

   a. If you are using bash change to the following directory within the project ``c_libs/scripts/bash``

      - build the code with the following command ``bash build.sh``
      - compile the test code with the following command ``bash compile.sh``
      - Navigate to the following directory ``c_libs/c_libs/build/test``
      - Verify code runs correctly with the following command ``./unit_tests``

   b. If you are using zsh change to the following directory within the project ``c_libs/scripts/zsh``

      - build the code with the following command ``zsh build.zsh``
      - compile the test code with the following command ``zsh compile.zsh``
      - Navigate to the following directory ``c_libs/c_libs/build/test``
      - Verify code runs correctly with the following command ``./unit_tests``

6. Install as a library with the command ``xxxx``

Documentation
#############
Documentation for this module can be found from the `ReadtheDocs <https://c-libs.readthedocs.io/en/latest/>`_ website.
