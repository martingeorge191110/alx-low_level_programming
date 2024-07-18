#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each block
 *
 * Return: (ptr) Success
 * otherwise - (NULL)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr != NULL)
	{
		for (i = 0; i < (nmemb * size) && ptr != NULL; i++)
		{
			ptr[i] = 0;
		}
		return (ptr);
	}
	else
		return (NULL);
}
