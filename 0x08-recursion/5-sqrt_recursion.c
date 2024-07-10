#include "main.h"

/**
 * findSquare - find the root square number which give us n
 * @n: source number
 * @result: root
 *
 * Return: (result) if result * result == n
 * otherwise - (findSquare(n, result + 1)) if result * result < n
 * otherwise - (-1)
 */

int findSquare(int n, int result)
{
	if (result * result == n)
	{
		return (result);
	} else if (result * result < n)
	{
		return (findSquare(n, result + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: given integer to know the root number
 *
 * Return: (findSquare(n, 1)) which return the root
 */

int _sqrt_recursion(int n)
{
	return (findSquare(n, 1));
}
