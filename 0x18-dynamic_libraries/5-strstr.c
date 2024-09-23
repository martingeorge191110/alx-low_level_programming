#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to implement operations
 * @needle: source string
 *
 * Return: (haystack + i) which is new string version
 * otherwise - null character
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}

	return ('\0');
}
