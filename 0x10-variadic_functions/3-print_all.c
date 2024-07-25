#include "variadic_functions.h"

/**
 * integer - to print the enteger data with separator
 * @sep: separator to be printed
 * @ptr: pointer to parameters list
 */

void integer(char *sep, va_list ptr)
{
	printf("%s%d", sep, va_arg(ptr, int));
}

/**
 * character - to print the character data with separator
 * @sep: separator to be printed
 * @ptr: pointer to parameters list
 */

void character(char *sep, va_list ptr)
{
	char c;

	c = va_arg(ptr, int);
	printf("%s%c", sep, (char)c);
}

/**
 * string - to print the srting data with separator
 * @sep: separator to be printed
 * @ptr: pointer to parameters list
 */

void string(char *sep, va_list ptr)
{
	char *str;

	str = va_arg(ptr, char *);
	if (!str)
	{
		str = "(nil)";
		return;
	}

	printf("%s%s", str);
}

/**
 * floating - to print the float data with separator
 * @sep: separator to be printed
 * @ptr: pointer to parameters list
 */

void floating(char *sep, va_list ptr)
{
	printf("%s%f", sep, va_arg(ptr, double));
}

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	char *sep;
	int i, j;
	funcType arrType[] = {
		{.t = 'c', .f = character},
		{.t = 'i', .f = integer},
		{.t = 'f', .f = floating},
		{.t = 's', .f = string},
		{.t = '\0', .f = NULL}
	};

	va_start(ptr, format);

	i = 0;
	sep = "";
	while (format && format[i])
	{
		j = 0;
		while (arrType[j].t != '\0')
		{
			if (arrType[j].t == format[i])
			{
				arrType[j].f(sep, ptr);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ptr);
	printf("\n");
}
