#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of three digits
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int first;

	first = 0;
	while (first < 10)
	{
		int second;

		second = 1;
		while (second < 10)
		{
			int third;

			third = 2;
			while (third < 10)
			{
				if (first < second && second < third && first < third)
				{
					putchar(first + '0');
					putchar(second + '0');
					putchar(third + '0');
					if (first + second + third != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				third++;
			}
			second++;
		}
		first++;
	}
	putchar('\n');

	return (0);
}
