#include "main.h"

/**
 * alloc_grid -  pointer to a 2 dimensional array of integers.
 * @width: length of the 2D array
 * @height: length of the 1D array
 *
 * Return: (ptr) which is the pointer to 2D array
 * otherwise - (NULL) if fails
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j, c;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **) malloc(sizeof(int *) * (height));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (c = i; c >= 0; c--)
			{
				free(ptr[c]);
			}
			free(ptr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
