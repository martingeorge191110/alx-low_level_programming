#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: fibonacci sequence whose values do not exceed 4,000,000
 *
 * Return: (0) Success
 */

int main(void)
{
	int i;
	unsigned long prev, curr, sum;

	prev = 1;
	curr = 2;

	sum = prev + curr;
	printf("%lu, %lu, ", prev, curr);
	while (sum < 3524578)
	{
		sum = prev + curr;
		if (sum == 3524578)
			break;
		printf("%lu, ", sum);
		prev = curr;
		curr = sum;
	}
	printf("%lu", sum);
	printf("\n");

	return (0);
}
