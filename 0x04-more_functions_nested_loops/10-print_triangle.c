#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: to determine number of lines and #
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	char space;
	int i, j, k;

	space = ' ';
	for (i = 0; i < size ; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			_putchar(space);
		}
		for (k = size - i - 1; k < size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
