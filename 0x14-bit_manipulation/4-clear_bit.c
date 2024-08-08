#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: unsigned long int number
 * @index: desired bit
 *
 * Return: (1) Success
 * otherwise - (-1)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 63)
		return (-1);


	*n = *n & ~(1 << index);
	return (1);
}
