#include "main.h"

/**
 * _memcpy - that copies memory area.
 * @dest: string which is the distination
 * @src: string which is the source
 * @n: number of bytes
 *
 * Return: (dest) which is new version of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	for (; i < n;)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
