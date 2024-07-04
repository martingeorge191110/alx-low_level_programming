#include "main.h"

/**
 * checkCharNumber - check if the char from this array
 * @c: character
 *
 * Return: (result) which is character
 */

char checkCharNumber(char c)
{
	int i;
	char result;
	char *characters = "aeotl";
	char *charsInt = "43071";

	result = -1 + '0';
	for (i = 0; i < sizeof(characters) / sizeof(char); i++)
	{
		if (c == characters[i] || c == characters[i] - 32)
		{
			result = charsInt[i];
			break;
		}
	}

	return (result);
}

/**
 * leet - that encodes a string into 1337.
 * @str: string to replace
 *
 * Return: (str) new string version
 */

char *leet(char *str)
{
	int index, checker;

	for (index = 0; str[index] != '\0'; index++)
	{
		checker = checkCharNumber(str[index]);
		str[index] = (checker != -1 + '0' ? checker : str[index]);
	}

	return (str);
}
