# ft_printf
This is my implementation of the ft_printf project from 42 school.

Description
ft_printf is a function that mimics the behavior of the C library function printf. 
It takes a format string as input and produces output according to the format specifier in the format string. 
The function can handle various data types such as strings, characters, integers, and pointers, 
and can apply various formatting options such as width, precision, and flags.

Installation
To install and use the ft_printf function, follow these steps:

Clone the repository: git clone 
Build the program executable: make
Note: The make command will compile all the .c files in the src directory and create a libftprintf.a file, 
which is the static library that contains the ft_printf function.

Usage
To use the ft_printf function in your project, follow these steps:

Include the ft_printf.h header file in your project: #include "ft_printf.h"
Call the ft_printf function in your project as needed.
Note: The ft_printf function takes a format string as its first argument, 
followed by a variable number of arguments that correspond to the format specifiers in the format string. 
The format specifiers are denoted by the % character and are followed by optional flags, 
width, precision, and conversion specifier characters.

Contents
The ft_printf project includes the following directories and files:

Makefile: The makefile for building the libftprintf.a library.
ft_printf.h: The header file for the ft_printf function.
libftprintf.a: The static library file that is created by running the make command.
