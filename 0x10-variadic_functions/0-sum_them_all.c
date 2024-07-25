#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters.
 * @n: number of parameters
 *
 * Return: (sum) sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	int sum;

	if (!n)
		return (0);

	va_start(ptr, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}

	va_end(ptr);

	return (sum);
}
