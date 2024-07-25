#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string sep to be printed
 * @n: number of parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *str;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(ptr);

	printf("\n");
}
