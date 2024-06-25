#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: integer to know the width and length of table
 */

void print_times_table(int n)
{

	int counter, index, miniIndex;
	
	if (n > 15 || n < 0)
	{
		return;
	}

	counter = 0;
	for (index = 0; index <= n ; index++)
	{
		_putchar('0');
		for (miniIndex = 1; miniIndex <= n; miniIndex++)
		{
			int result = miniIndex * counter;

			_putchar(',');
			_putchar(' ');
			if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			} else if (result < 100)
			{
			_putchar(' ');
			_putchar(result / 10 + '0');
			_putchar(result % 10 + '0');
			}
			else
			{
			_putchar(result / 100 + '0');
			_putchar((result / 10) % 10 + '0');
			_putchar(result % 10 + '0');
			}
		}
		_putchar('\n');
		counter++;
	}
}
