#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: (0) Success
 */

int main(void)
{
	int i;
	unsigned long prev, curr, sum;

	prev = 1;
	curr = 2;

	printf("%lu, %lu, ", prev, curr);
	for (i = 2; i < 48; i++)
	{
		sum = prev + curr;
		printf("%lu, ", sum);
		prev = curr;
		curr = sum;
	}
	sum = prev + curr;
	printf("%lu", sum);
	prev = curr;
	curr = sum;
	printf("\n");

	return (0);
}
