#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array of int
 * @n: size of array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}
		putchar('\n');
}
