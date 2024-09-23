#include "main.h"

/**
 * _strncpy -  copies a string
 * @dest: main string
 * @src: string would be copied
 * @n: bytes
 *
 * Return: (dest) which is a pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
