# Libft_extended

The Libft_extended project aims to create a library with useful resources
to make the [42 School](https://42.fr/en/homepage/) cursus a bit simpler,
due to it not only giving you the original Libft project functions, but a
whole set of new functions based on the experience and problems that some
students have faced during this time.

## Table of content
- [Libft_extended](#libft_extended)
- [Table of content](#table-of-content)
- [Original Libft](#1-original-libft)
  - [Some C language basic functions](#11-some-c-language-basic-functions)
  - [Basic malloc functions](#12-basic-malloc-functions)
      - [Malloc and it's use](#121-malloc-and-its-use)
  - [Additional Libft functions](#13-additional-libft-functions)
  - [Bonus_part](#14-bonus-part)
      - [What structures are](#141-what-is-a-structure)
      - [Some linked lists basic functions](#141-some-linked-lists-basic-functions)

//////////////WIP TABLE OF CONTENT /////////////////////

## 1. Original Libft
![Libft final grade](.images/final_grade.png)

Libft is the first 42 school project from the common core. In this project,
you will create your first library in the [C](https://en.wikipedia.org/wiki/C_(programming_language))
programming language.

### 1.1. Some C language basic functions
The first part asks you to recreate a set of basic C functions. 

| [isalpha](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_isalpha.c) | [bzero](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_bzero.c)     | [strchr](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_strchr.c)   |
|---------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------------|
| [isdigit](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_isdigit.c) | [memcpy](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_memcpy.c)   | [strrchr](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_strrchr.c) |
| [isalnum](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_isalnum.c) | [memmove](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_memmove.c) | [strncmp](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_strncmp.c) |
| [isascii](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_isascii.c) | [strlcpy](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_strlcpy.c) | [memchr](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_memchr.c)   |
| [isprint](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_isprint.c) | [strlcat](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_strlcat.c) | [memcmp](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_memcmp.c)   |
| [strlen](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_strlen.c)   | [toupper](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_toupper.c) | [strnstr](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_strnstr.c) |
| [memset](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_memset.c)   | [tolower](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_tolower.c) | [atoi](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_atoi.c)       |

you can check up how any of this functions work using the bash
`man` command, for example, if we type `man isalpha` on the terminal,
it will then open a manual page that displays the following information:

![bash_manual_example](.images/bash_manual_example.png)

As we can see, there are three key concepts on the manual pages:
1. **SYNOPSIS**: This section tells us how we should declare the
function and what parameters it should receive and return.
2. **DESCRIPTION**: A basic description of what the function does.
3. **RETURN VALUES**: The value the function will return, including error control 
and undefined behaviours.

With this on mind, we can start coding the first part of the Libft project until
we reach calloc, where we encounter our first malloc function.

### 1.2. Basic malloc functions
After finishing the first part, now we face two new functions.

| [calloc](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_calloc.c) | [strdup](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_strdup.c) |
|-------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------|

For the purpose of creating this functions, we will now use the `malloc()`
function, wich let us allocate memory for later use.
- ### 1.2.1. Malloc and it's use
C language has not the resources of some modern programming languages where you don't
need to take care of memory allocation, in C, you need to reserve the memory your program
is going to use and free it later. This is where the `malloc` function comes handy,
this function allocates the number of bytes you tell him for your program to use, for example,
if we wanted to create a string with a name on it, and we need to store it for whatever reason,
we could allocate it like this:

```
int main(void)
{
    char *a_name;
    a_name = (char *)malloc(5);
    
    a_name = "Josh";
    return (0);
}
```
As you can see in the code above, we create a pointer to a character, and then we tell it that it's
equal to `(char *)malloc(5)`, meaning that we are telling the computer we need 5 bytes of memory.
We also use the `(char *)` cast to tell the program that the `void *` that malloc returns will be used
in the format of an array of characters. And, Why 5 bytes? Josh it's a 4 letter name. Well, as you probably
know if you have done all the functions from the [Some C language basic functions](#11-some-c-language-basic-functions)
the strings all must finish with a `'\0'` character in order to iterate them without risk of creating an overflow error.
That extra byte is used to store that limit character. But, what if we want to make an array of, for example,
*integers*? Have in mind that a single integer takes 4 bytes of memory, while a character takes only 1 byte.
Well, the most easy way to allocate enough memory for such case would be:
```
int main(void)
{
    int *some_numbers;
    some_numbers = (int *)malloc(sizeof(int) * 5);
    
    some_numbers[0] = 2;
    some_numbers[1] = 22;
    some_numbers[2] = 42;
    some_numbers[3] = 62;
    some_numbers[3] = 82;
    return (0);
}
```
There are two key differences between this array and the one made from characters. The first one is that we
have included `sizeof(int)` inside the malloc arguments, multiplied by 5, and why is that? Well, as an integer takes
4 bytes each, we tell that we need 5 bytes, multiplied by the size of an integer (4) wich takes a total of 20 bytes.
The second difference is that I have allocated size for 5 numbers, and then stored 5 numbers, instead of 4 numbers and
a 0 for limiting, that's because 0 it's a number, so you may have one in the middle of your array. In order to
iterate a number array, you must try to calculate how many loops you want to do.

### 1.3. Additional Libft functions 
The second part asks you to create some functions wich are not mentioned in the bash manual, it gives you a basic
description, the return values, and a bunch of other information necessary to create the functions.

| [substr](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_substr.c)   | [strmapi](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_strmapi.c)       | [putnbr_fd](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_putnbr_fd.c) |
|---------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------|
| [strjoin](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_strjoin.c) | [striteri](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_striteri.c)     |                                                                                                 |
| [strtrim](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_strtrim.c) | [putchar_fd](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_putchar_fd.c) |                                                                                                 |
| [split](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_split.c)     | [putstr_fd](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_putstr_fd.c)   |                                                                                                 |
| [itoa](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_itoa.c)       | [putendl_fd](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_putendl_fd.c) |                                                                                                 |

It also gives you the hint that you can use already existent functions from the first part to complete this one.

### 1.4. Bonus part

The bonus part of the Libft introduces to us two new concepts, structures and linked lists.

![!Bonus_part_structure](.images/bonus_part_structure.png)

- ### 1.4.1. What is a structure

A structure is a type of data in C that works as a container for elements, this way, we can group related data in the
same place. For example.

```
struct  person
{
  char    *name;
  int     age;
  bool    is_married;
  struct  *physical_appearance;
};
```

In this particular case, the subject tells us that we are going to store a `void *content` and a pointer to another
structure that has the same elements than this one (in fact, its the same type of structure).

- ### 1.4.2. Some linked lists basic functions

  The bonus part functions of the project aim to make you understand the basic linked-lists usages and concepts, here is
  a list of all the functions from the bous part.

| [lstnew](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_lstnew.c)             | [lstlast](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_lstlast.c)         | [lstclear](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_lstclear.c) |
|-------------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------|
| [lstadd_front](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_lstadd_front.c) | [lstadd_back](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_lstadd_back.c) | [lstiter](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_lstiter.c)   |
| [lstsize](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_lstsize.c)           | [lstdelone](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_lstdelone.c)     | [lstmap](https://github.com/AingeruAlvarezSanchez/Libft_extended/blob/master/ft_lstmap.c)     |
