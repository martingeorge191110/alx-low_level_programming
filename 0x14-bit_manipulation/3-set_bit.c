#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: unsigned long in number
 * @index: desired bit
 *
 * Return: (1) Success
 * otherwise - (-1)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 63)
		return (-1);


	*n = *n | (1 << index);

	return (1);
}
