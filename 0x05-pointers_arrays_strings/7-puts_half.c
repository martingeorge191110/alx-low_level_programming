#include "main.h"

/**
 * puts_half - print the secodn half
 * @str: string
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	for (j = (i % 2 == 0? i / 2 : (i / 2) + 1); j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
