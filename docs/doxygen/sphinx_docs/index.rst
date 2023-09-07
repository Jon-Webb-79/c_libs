.. Core Utilities documentation master file, created by
   sphinx-quickstart
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

Welcome to c_libs Library
=========================

The c_libs library contains a large assortment of typed and type-generic functionas
and macros for various data structures and utilities such as file readers and the PRINT statement.
The user of this library can select from the use of type specific functions, or they
can choose to use a type-generic MACRO based interface, which will work with all
data types that ship with ANSI standard C. This libraries relies upon the use
of the ``_Generic`` operator to enable Macros such that the Macros do not consume extra memory.


.. toctree::
   :maxdepth: 1
   :caption: Contents:

   Swap <swap>
   Print <print>
   Vectors and Arrays <vector>
   Linked List <linked_list>
   Binary Tree <btree>


Indices and tables
==================

* :ref:`genindex`
* :ref:`modindex`
* :ref:`search`

Installation
============

This library can be installed from `GitHub <https://github.com/Jon-Webb-79/c_libs>`_.
in the following manner

#. Ensure that you have clang or gcc installed.  This library was tested on gcc 12.2.1 and clang 14.0.0
#. Ensure that you have git installed on your local machine
#. Clone the ``c_libs`` repository with the command 
   
   - ``git clone https://github.com/Jon-Webb-79/c_libs.git``

If you wish to contribute to the development of this library you will need to install
the Python virtual environments that are needed to support the Sphinx documentation tool.

#. Ensure a valid Python distribution is installed on your computer with version 3.8
   or greater.
#. In the uppermost ``c_libs`` directory install a viertual environment

   - ``python -m venv .venv``
#. Activate the virtual environment with the following command;

.. table:: Activation Commands for Virtual Environments

   +----------------------+------------------+-------------------------------------------+
   | Platform             | Shell            | Command to activate virtual environment   |
   +======================+==================+===========================================+
   | POSIX                | bash/zsh         | ``$ source <venv>/bin/activate``          |
   +                      +------------------+-------------------------------------------+
   |                      | fish             | ``$ source <venv>/bin/activate.fish``     |
   +                      +------------------+-------------------------------------------+
   |                      | csh/tcsh         | ``$ source <venv>/bin/activate.csh``      |
   +                      +------------------+-------------------------------------------+
   |                      | Powershell       | ``$ <venv>/bin/Activate.ps1``             |
   +----------------------+------------------+-------------------------------------------+
   | Windows              | cmd.exe          | ``C:\> <venv>\\Scripts\\activate.bat``    |
   +                      +------------------+-------------------------------------------+
   |                      | PowerShell       | ``PS C:\\> <venv>\\Scripts\\Activate.ps1``|
   +----------------------+------------------+-------------------------------------------+

#. Install packages to virtual environments from ``requirements.txt`` file

    - ``pip install -r requirements.txt``
#. Ensure that `cmocka <https://cmocka.org/>`_ is installed locally to suuport unit testing.
