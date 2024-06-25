#include "main.h"

/**
 * print_last_digit - Print hte last digit of n
 * @n: is the number to determine the last digit of it
 *
 * Return: The value of the last digit
*/

int print_last_digit(int n)
{
	int result;

	if (n >= 0)
		result = n % 10;
	else
		result = -(n) % 10;

	_putchar(result + '0');
	return (result);
}
