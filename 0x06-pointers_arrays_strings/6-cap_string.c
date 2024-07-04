#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: (str) new str version
 */

char *cap_string(char *str)
{
	int index, index2;
	char charactes[] = {' ', '\t', '\n', ',', '.', ';', '!',
	 '?', '"', '(', ')', '{', '}', '0',
						'1', '2', '3', '4', '5', '6'};

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}

	for (index = 1; str[index] != '\0'; index++)
	{
		if ((str[index] < 'a' || str[index] > 'z')
		&&
		(str[index] < 'A' || str[index] > 'Z'))
		{
			for (index2 = 0; index2 < sizeof(charactes) / sizeof(char); index2++)
			{
				if (str[index] == charactes[index2]
				&&
				(str[index + 1] >= 'a' & str[index + 1] <= 122))
				{
					str[index + 1] -= 32;
					break;
				}
			}
		}
	}

	return (str);
}
