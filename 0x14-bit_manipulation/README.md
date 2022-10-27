# 0x14. C - Bit manipulation

## Requirements


### General

> - The only C standard library functions allowed are malloc, free and exit. Any use of     functions like printf, puts, calloc, realloc etc… is forbidde
>
> - The prototypes of all your functions and the prototype of the function _putchar     should be included inyour header file called main.h
>
> - All your header files should be include guarded



## Tasks

### mandatory

### 0. 0

> Write a function that converts a binary number to an unsigned int. 

> - Prototype: unsigned int binary_to_uint(const char *b);
> - where b is pointing to a string of 0 and 1 chars
> - Return: the converted number, or 0 if
>> - there is one or more chars in the string b that is not 0 or 1
>> - b is NULL

### 1. 1

> Write a function that prints the binary representation of a number.

> - Prototype: void print_binary(unsigned long int n);
> - Format: see example
> - You are not allowed to use arrays
> - You are not allowed to use malloc
> - You are not allowed to use the % or / operators

### 2. 10

> Write a function that returns the value of a bit at a given index.

> - Prototype: int get_bit(unsigned long int n, unsigned int index);
> - where index is the index, starting from 0 of the bit you want to get
> - Returns: the value of the bit at index index or -1 if an error occured

### Resources

[Google](https://www.google.com/webhp?q=bit+manipulation+C)

[Youtube](https://www.youtube.com/results?search_query=bitwise+operators+in+c)
