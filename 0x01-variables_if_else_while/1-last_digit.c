#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Checking for last digit of n
 *					if less than 6 or equall 0 or greater than 5
 *
 * Return: always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lastDigit);
	} else if (lastDigit == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lastDigit);
	} else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %i is %i ", n, lastDigit);
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
