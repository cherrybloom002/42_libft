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

The final result is a static library named **libft.a**, containing functions from:
- <string.h>
- '<ctype.c>
- <stdlib.h>
- Addictional non-standard extensions
- Linked list functions

> This library serves as a foundation for many later projects in the 42 cursus.

### Features
The project includes reimplementations of several standard C library functions, including:
```
ft_strlen
ft_strdup
ft_memset
ft_memcpy
ft_memmove
ft_strncmp
ft_strchr
ft_strrchr
ft_substr
ft_strjoin
ft_split
ft_strtrim
ft_itoa
ft_atoi
ft_calloc
and others
```
### Addictional Utility Functions
Additional utility functions were implemented to simplify future projects and improve code reusability.

Examples include:  

- String iteration and mapping
- Safe memory allocation helpers
- String concatenation utilities
- Character checks and conversions

### Linked List Functions
Linked list functions are now a mandatory part of the project and include:
```
ft_lstnew
ft_lstadd_front
ft_lstadd_back
ft_lstsize
ft_lstlast
ft_lstdelone
ft_lstclear
ft_lstiter
ft_lstmap
```
These functions provide a reusable singly linked list implementation for future projects.

## Instructions
### Available Makefile Rules

To compile the library: 
```
make
```
> This will generate the static library 'libft.a'

Remove object files:
```
make clean
```
Remove object files and library:
```
make fclean
```
Recompile everything:
```
make re
```
### Using the library
To use the library in a project, the header #include "libft.h" must be included in the C files.
```
#include "libft.h"
```
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

- Clarifying C concepts
- Reviewing README structure and documentation wording

All code was written, tested, and debugged manually and with peer-to-peer collaboration.

AI assistance was not used to automatically generate complete project solutions.