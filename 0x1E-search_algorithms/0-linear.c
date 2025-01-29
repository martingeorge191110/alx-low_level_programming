#include "search_algos.h"

/**
 * linear_search - searches for a value in an array (Linear search algorithm)
 * @array: pointer to the first element of the array
 * @size: size of array
 * @value: desired value to search about
 *
 * Return: (index)
 * otherwise - (-1)
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i, index = -1;

	if (!array)
		return (index);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			index = i;
			break;
		}
	}

	return (index);
}
