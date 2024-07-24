#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to a function
 *
 * Return: (i) which is the index in case of Success,
 * otherwise - (-1)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
