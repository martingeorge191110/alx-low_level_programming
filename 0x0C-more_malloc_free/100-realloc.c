#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: old pointer
 * @old_size: old size
 * @new_size: new size
 *
 * Return: (ptr) Success
 * otherwise - (NULL)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		free(ptr);
		ptr = malloc(new_size);
	}

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
