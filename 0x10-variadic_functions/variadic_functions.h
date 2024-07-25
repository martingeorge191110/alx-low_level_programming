#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdarg.h>

/**
 * struct funcType - struct to determine type of function
 * @t: data type
 * @f: pointer to the function
 */

typedef struct funcType
{
	char t;
	void (*f)(char *, va_list);
} funcType;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
