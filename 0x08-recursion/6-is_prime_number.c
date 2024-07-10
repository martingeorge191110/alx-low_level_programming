#include "main.h"

/**
 * testPrime - checking function for the number
 * @n: source int
 * @checker: checker int
 *
 * Return: (1) if checker >= n |&& n > 1
 * otherwise - (0) if n % checker == 0 || n <= 1
 * otherwise - (testPrime(n, checker + 1))
 */

int testPrime(int n, int checker)
{
	if (checker >= n && n > 1)
	{
		return (1);
	} else if (n % checker == 0 || n <= 1)
	{
		return (0);
	}
	return (testPrime(n, checker + 1));
}

/**
 * is_prime_number - function to determine the prime number
 * @n: source int
 *
 * Return: (testPrime(n, 2)) which is indirect recursion
 */

int is_prime_number(int n)
{
	return (testPrime(n, 2));
}
