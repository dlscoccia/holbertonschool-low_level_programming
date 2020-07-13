## 0x0D. C - Preprocessor

The C preprocessor modifies a source code file before handing it over to the
compiler. You're most likely used to using the preprocessor to include files
directly into other files, or #define constants, but the preprocessor can also
be used to create "inlined" code using macros expanded at compile time and to
prevent code from being compiled twice.

### Learning Objectives

###### What are macros and how to use them

```bash
A macro is a name given to a block of C statements as a
pre-processor directive.
Being a pre-processor,  the block of code is communicated to the compiler
before entering into the actual coding (main () function).
```
###### What are the most common predefined macros

[Predifened Macros in C]
(https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Standard-Predefined-Macros.html#Standard-Predefined-Macros)

###### How to include guard your header files
```bash
#ifndef MY_HEADER_FILE_H
#define MY_HEADER_FILE_H

// Code body for header file

#endif
```
### Programs or Functions

```python
0-object_like_macro.h
Header file that defines a macro named SIZE as an
abbreviation for the token 1024.

1-pi.h
Header file that defines a macro named PI as an abbreviation
for the token 3.14159265359.

2-main.c
Program that prints the name of the file it was compiled from,
followed by a new line.

3-function_like_macro.h
Function-like macro ABS(x) that computes the absolute value
of a number x

4-sum.h
Function-like macro SUM(x, y) that computes the sum of
the numbers x and y.
```

#### Low Level Programming Repository