#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: interger
 *
 * Return: (-1) if n < 0,
 * otherwise - (1) as a base case
 * otherwise - (n * factorial(n - 1))
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
