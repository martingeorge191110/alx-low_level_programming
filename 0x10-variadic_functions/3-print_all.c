#include "variadic_functions.h"

/**
 * integer - to print the enteger data with separator
 * @ptr: pointer to parameters list
 */

void integer(va_list ptr)
{
	int i;

	i = va_arg(ptr, int);
	printf("%d", i);
}

/**
 * character - to print the character data with separator
 * @ptr: pointer to parameters list
 */

void character(va_list ptr)
{
	char c;

	c = va_arg(ptr, int);
	printf("%c", c);
}

/**
 * string - to print the srting data with separator
 * @ptr: pointer to parameters list
 */

void string(va_list ptr)
{
	char *str;

	str = va_arg(ptr, char *);
	if (str == NULL)
	{
	printf("(nil)");
	return;
	}
	printf("%s", str);
}

/**
 * floating - to print the float data with separator
 * @ptr: pointer to parameters list
 */

void floating(va_list ptr)
{
	float fl;

	fl = va_arg(ptr, double);
	printf("%f", fl);
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
	func_type arrType[] = {
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
				printf("%s", sep);
				arrType[j].f(ptr);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ptr);
	printf("\n");
}
