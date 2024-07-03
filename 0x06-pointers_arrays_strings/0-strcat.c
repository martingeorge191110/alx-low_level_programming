#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 *
 * Return: (dest) which is a pointer
 */

char *_strcat(char *dest, char *src)
{
	int i, j, count;

	i = 0;

	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		j++;
	}

	for (count = 0; count < j; count++)
	{
		dest[i + count] = src[count];
	}
	dest[i + count] = '\0';

	return (dest);
}
