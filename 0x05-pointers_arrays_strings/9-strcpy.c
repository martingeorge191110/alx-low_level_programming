#include "main.h"

/**
 * _strcpy - copies the string to another
 * @dest: string
 * @src: string
 *
 * Return: (dest)
 */

char *_strcpy(char *dest, char *src)
{
	int start, index;

	start = 0;
	while (src[start] != '\0')
	{
		start++;
	}
	start -= 1;

	for (index = 0; index <= start; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}
