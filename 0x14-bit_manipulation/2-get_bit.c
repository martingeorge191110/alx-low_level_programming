#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to get the desired bit from
 * @index: desired bit index
 *
 * Return: (result)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	if (index > 63)
		return (-1);

	result = (n >> index) & 1;

	return (result);
}
