#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: sum of all the multiples of 3 or 5 below 1024
 *
 * Return: (0) Success
 */

int main(void)
{
	int i, result;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			result += i;
	}
	printf("%d\n", result);

	return (0);
}
