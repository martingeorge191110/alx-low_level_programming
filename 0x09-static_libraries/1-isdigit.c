#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: integer to determine the output
 *
 * Return: (1) if c is a digit
 * ,otherwise (0)
 */

int _isdigit(int c)
{
	int result;

	result = 0;
	if (c >= 48 && c <= 57)
	{
		result = 1;
	}

	return (result);
}
