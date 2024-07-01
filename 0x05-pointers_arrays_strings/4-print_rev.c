#include "main.h"

/**
 * print_rev - rints a string, in reverse,
 * @s: string to print
 */

void print_rev(char *s)
{
	int start;

	start = 0;
	while (s[start] != '\0')
	{
		start++;
	}
	start -= 1;
	while (start >= 0)
	{
		_putchar(s[start]);
		start--;
	}
	_putchar('\n');
}
