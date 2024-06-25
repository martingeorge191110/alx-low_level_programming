#include "main.h"

/**
 * print_sign - Prints the sign of the number
 * @n: number to determine its sign
 *
 * Return: 1 if n > 0, 0 if n = 0, -1 if n < 0
 */

int print_sign(int n)
{
	int result, display;

	result = -1;
	display = '-';
	if (n > 0)
	{
		result = 1;
		display = '+';
	}
	else if (n == 0)
	{
		result = 0;
		display = '0';
	}

	_putchar(display);
	return (result);
}
