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
	unsigned long prev, curr, sum, evSum = 0;

	prev = 1;
	curr = 2;

	sum = prev + curr;

	while (sum < 4000000)
	{
		sum = prev + curr;
		if (sum > 4000000)
			break;
		if (sum % 2 == 0)
			evSum += sum;
		prev = curr;
		curr = sum;
	}
	evSum += 2;
	printf("%lu", evSum);
	printf("\n");

	return (0);
}
