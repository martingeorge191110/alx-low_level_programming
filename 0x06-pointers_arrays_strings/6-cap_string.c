#include "main.h"

/**
 * isCharacter - check character or not
 * @charac: character to check
 *
 * Return: (checker)
 */

int isCharacter(char charac)
{
	int checker;

	checker = 0;
	if (charac >= 'a' && charac <= 'z')
	{
		checker = 1;
	} else if (charac >= 'A' && charac <= 'Z')
	{
		checker = 2;
	} else if (charac == ' ' || charac == '\n' || charac == '\t' ||
	charac == ',' || charac == '.' || charac == '?' ||
	charac == '(' || charac == ')' || charac == '{' ||
	charac == '}' || charac == '!')
	{
		checker = 3;
	}

	return (checker);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: (str) new str version
 */

char *cap_string(char *str)
{
	int index, checkPrevChar, checkCurrentChar;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}

	for (index = 1; str[index] != '\0'; index++)
	{
		checkPrevChar = isCharacter(str[index - 1]);
		checkCurrentChar = isCharacter(str[index]);

		if (checkPrevChar == 3 &&
		checkCurrentChar == 1 &&
		checkCurrentChar != 2 &&
		checkPrevChar != 2)
		{
			str[index] -= 32;
		}
	}

	return (str);
}
