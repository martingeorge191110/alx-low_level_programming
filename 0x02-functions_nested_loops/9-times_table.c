#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int counter, index, miniIndex;

	counter = 0;
	for (index = 0; index < 10 ; index++)
	{
		_putchar('0');
		for (miniIndex = 1; miniIndex < 10; miniIndex++)
		{
			int result = miniIndex * counter;

			_putchar(',');
			_putchar(' ');
			if (result < 10)
			{
				_putchar(' ');
				_putchar(result + '0');
			} else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
		}
		_putchar('\n');
		counter++;
	}
}
