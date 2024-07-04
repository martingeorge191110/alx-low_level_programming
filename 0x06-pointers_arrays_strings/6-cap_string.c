#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: (str) new str version
 */

char *cap_string(char *str)
{
	int index;


	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}

	for (index = 1; str[index] != '\0'; index++)
	{

		if ((str[index - 1] < 'a' || str[index - 1] > 'z') &&
			(str[index - 1] < 'A' || str[index - 1] > 'Z'))
		{
			if (str[index] >= 'a' && str[index] <= 'z')
			{
				str[index] -= 32;
			}
		}
	}

	return (str);
}
