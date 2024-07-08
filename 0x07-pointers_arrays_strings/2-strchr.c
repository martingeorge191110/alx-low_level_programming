#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: source string
 * @c: character to lacate in the string s
 *
 * Return: (s + i) if c locates ,
 * otherwise - null character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
