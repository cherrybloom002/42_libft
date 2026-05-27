*This project has been created as part of the 42 curriculum by ahodor*

# Libft

## Description
Libft is a custom C library developed as part of the 42 curriculum.  
The goal of this project is to recreate a collection of standard C library
functions, as well as additional utility functions that will be reused in
future 42 projects.

This project focuses on:
- Understanding low-level memory management
- Mastering pointers and string manipulation
- Reimplementing standard library behavior
- Writing clean, reusable, and modular C code
- Building a reliable static library

The final result is a static library ('libft.a') containing functions from:
- '<string.h>'
- '<ctype.c>'
- '<stdlib.h>'
- Addictional non-standard extensions
- Linked list functions

> This library serves as a foundation for many later projects in the 42 cursus.

## Instructions
To compile the library: 
```
make
```
> This will generate the static library 'libft.a'

### Using the library
To use the library in a project, the header #include "libft.h" must be included in the C files.
Then, when compiling a project, the library has to be included.  
Example:
```
cc main.c libft.a
```

## Resources
For this project, various resources were used:

- Linux Programmer's Manual
- [tutorialpoint](https://www.tutorialspoint.com/c_standard_library/index.htm)
- [W3School](https://www.w3schools.com/c/index.php)

## AI Usage
AI tools were used as supplementary learning resources during the project.

They were mainly used for:

- Explaining linked list concepts
- Improving documentation writing

All code was written, tested, and debugged manually and with peer-to-peer collaboration.

AI assistance was not used to automatically generate complete project solutions.