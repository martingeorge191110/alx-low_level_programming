#include "main.h"

/**
 * _isupper - determine if c is uppercase
 * @c: integer to determine character status
 *
 * Return: (1) if upper case
 * otherwise: (0)
 */

int _isupper(int c)
{
	int result;

	result = 0;
	if (c >= 65 && c <= 90)
	{
		result = 1;
	}

	return (result);
}
