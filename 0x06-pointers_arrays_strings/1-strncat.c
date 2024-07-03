#include "main.h"

/**
 * _strncat - concatenates two strings taking in consideration n
 * @dest: string 1
 * @src: string 2
 * @n: integer
 *
 * Return: (dest) which is pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, counter;

	for (i = 0; dest[i] != '\0'; i++)
	{};

	for (counter = 0; counter < n && src[counter] != '\0'; counter++)
	{
		dest[i + counter] = src[counter];
	}
	dest[i + counter] = '\0';

	return (dest);
}
