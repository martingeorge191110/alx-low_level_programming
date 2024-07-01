#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array of int
 * @n: size of array
 */

void print_array(int *a, int n)
{
	if (n < 0)
		return;
	int i;

	for (i = 0; i < n - 1 ; i++)
	{
		printf("%d, ", a[i]);
	}
		printf("%d", a[n - 1]);
		putchar('\n');
}
