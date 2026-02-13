*This project has been created as part of the 42 curriculum by adarmoya.*

# libft

## Description

**libft** is a custom static C library that reimplements a selection of standard C library functions and provides additional utility functions for memory management, string manipulation, file descriptor output, and linked list handling.

The goal of this project is to deepen understanding of fundamental C concepts such as pointers, memory allocation, data structures, and low-level programming. It also serves as a reusable foundation for future 42 projects.

The final output of this project is a static library file:

libft.a

which can be linked to other C programs.

---

## Detailed Description of the Library

The library is divided into three main parts:

### 1. Libc Function Reimplementations

These functions reproduce the behavior of standard C library functions.

**Character checks**
- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint

**String handling**
- ft_strlen
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_strnstr

**Memory manipulation**
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_memchr
- ft_memcmp

**Conversion and allocation**
- ft_atoi
- ft_calloc
- ft_strdup

---

### 2. Additional Utility Functions

These functions extend the standard C library and are useful in everyday C programming.

- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_strmapi
- ft_striteri
- ft_itoa
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

---

### 3. Linked List Functions

The project also includes a singly linked list implementation using the following structure:

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

List management functions include:

- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

This part reinforces understanding of dynamic memory management and data structure implementation.

---

## Instructions

### Compilation

To compile the library:

make

This will generate:

libft.a

### Clean object files

make clean

### Remove object files and library

make fclean

### Recompile everything

make re

---

### Using the Library in Another Project

1. Include the header file in your source code:

#include "libft.h"

---

## Resources

### Documentation & References

- 42 libft subject PDF
- Manual pages (man 3 <function_name>)
- The GNU C Library documentation
- C programming reference materials

### AI Usage

AI (ChatGPT) was used for:
- Clarifying theoretical concepts related to memory management and edge cases
- Improving documentation clarity and structure in this README

All function implementations, logic, debugging, and testing were written independently to ensure full understanding of the project requirements.


