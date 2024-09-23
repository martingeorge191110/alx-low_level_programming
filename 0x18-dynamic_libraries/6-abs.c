#include "main.h"

/**
 * _abs - Determine the absolute value of n if lower then 0
 * @n: number to determine the absolute value of it
 *
 * Return: (result) Success
*/

int _abs(int n)
{
	int result;

	result = n;
	if (n < 0)
		result = n * -1;

	return (result);
}
