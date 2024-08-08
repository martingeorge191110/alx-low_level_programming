#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of binary numbers
 *
 * Return: (number)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int index = 0;

	if (!b)
		return (0);

	while (b[index])
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		number = number << 1;
		number += b[index] - '0';
		index++;
	}

	return (number);
}
