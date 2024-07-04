#include "main.h"

/**
 * leet - that encodes a string into 1337.
 * @str: string to replace
 *
 * Return: (str) new string version
 */

char *leet(char *str)
{
	int index, i;
	char characters[] = {'a', 'e', 'o', 't', 'l'};
	char charsInt[] = {4, 3, 0, 7, 1};

	for (index = 0; str[index] != '\0'; index++)
	{
		for (i = 0; i < sizeof(characters) / sizeof(char); i++)
		{
			if (str[index] == characters[i] || str[index] == characters[i] - 32)
			{
				str[index] = charsInt[i] + '0';
			}
		}
	}

	return (str);
}
