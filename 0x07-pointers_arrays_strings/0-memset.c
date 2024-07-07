#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: main string
 * @b: character to replace with s
 * @n: bytes of memory
 *
 * Return: (s) new string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
