#include "main.h"

/**
 * flip_bits - eturns the number of bits
 *					you would need to flip
 *						to get from one number to another.
 *	@n: unsigned long int number
 *	@m: unsigned long int number
 *
 * Return: (counter)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp = n ^ m;
	int counter = 0;

	while (temp)
	{
		if (temp & 1)
			counter++;

		temp = temp >> 1;
	}

	return (counter);
}
