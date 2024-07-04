#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 */

char *cap_string(char *str)
{
	int index;

	for (index = 1; str[index] != '\0'; index++)
	{
		if ((str[index] < 97 || str[index] > 122)
		&&
		(str[index] < 97 - 32 || str[index] > 122 - 32))
		{
			if (str[index + 1] >= 97 && str[index + 1] <= 122)
			{
				str[index + 1] -= 32;
			}
		}
	}

	return (str);
}
