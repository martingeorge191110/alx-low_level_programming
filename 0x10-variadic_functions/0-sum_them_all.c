#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters.
 * @n: number of parameters
 *
 * Return: (sum) sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vaList;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(vaList, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(vaList, int);
	}

	va_end(vaList);

	return (sum);
}
