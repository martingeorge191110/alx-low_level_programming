#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers from 0 to 9 just using putchar
 *
 * Return: 0 (Success)*
*/

int main(void)
{
	int number;

	number = 0;
	while (number < 10)
	{
		putchar(number + '0');
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');

	return (0);
}
