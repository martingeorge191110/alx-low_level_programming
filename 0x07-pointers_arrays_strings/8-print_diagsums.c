#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: array of int
 * @size: length of the array
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size;)
	{
		sum1 = sum1 + a[i];
		sum2 = sum2 + a[size - i - 1];
		i = i + 3 + 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
