#include <stdio.h>

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

int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}