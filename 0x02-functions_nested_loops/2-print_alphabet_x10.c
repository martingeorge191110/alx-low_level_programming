#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lower case 10 times.
*/

void print_alphabet_x10(void)
{
	for (int i = 0 ; i < 10 ; i++)
	{
		for (int j = 97 ; j < 123 ; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
