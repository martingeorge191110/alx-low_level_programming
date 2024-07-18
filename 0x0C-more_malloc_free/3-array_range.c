#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: min range
 * @max: max range
 *
 * Return: (ptr)
 * otherwise - (NULL)
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);


	ptr = (int *)malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}

	return (ptr);
}
