#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of two digits
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
			if (first < second)
			{
				putchar(first + '0');
				putchar(second + '0');
				if (first + second != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			second++;
		}
		first++;
	}
	putchar('\n');

	return (0);
}
