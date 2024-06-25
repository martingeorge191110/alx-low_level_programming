#include "main.h"

/**
 *  _isalpha - determine if the integer is an asci of a alpha
 * @c: integer to determine the character of the asci value
 *
 * Return: (0) if the value is an alpha
 * otherwise, (1)
 */

int _isalpha(int c)
{
	int result;

	result = 0;
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		result = 1;

	return (result);
}
