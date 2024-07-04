#include "main.h"

/**
 * leet - that encodes a string into 1337.
 * @str: string to replace
 *
 * Return: (str) new string version
 */

char *leet(char *str)
{
	unsigned int index, i;
	char characters[] = {'a', 'e', 'o', 't', 'l'};
	int charsInt[] = {4, 3, 0, 7, 1};

	while (*str)
	{
		for (i = 0; i < sizeof(characters) / sizeof(char); i++)
		{
			if (*str == characters[i] || *str == characters[i] - 32)
			{
				*str = charsInt[i] + 48;
			}
		}
		str++;
	}

	return (str);
}
