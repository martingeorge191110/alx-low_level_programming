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
	void *newPtr;

	newPtr = (void *)malloc(new_size);

	if (newPtr == NULL)
		return (NULL);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (newPtr);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	return (newPtr);
}
