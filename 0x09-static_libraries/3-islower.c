#include "main.h"

/**
 * _islower - determine if c is lower case or otherwise
 * @c: integer to know the asci of the character
 *
 * Return: (1) f lower case
 * otherwise, (0) is returned
 */

int _islower(int c)
{
	int result;

	result = 0;
	if (c >= 97 && c <= 122)
		result = 1;

	return (result);
}
