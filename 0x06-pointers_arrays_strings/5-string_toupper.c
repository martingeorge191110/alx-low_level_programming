#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @arrOfChars: string to change lowercase
 *
 * Return: (arrOfChars) which is the new vision
 */

char *string_toupper(char *arrOfChars)
{
	int index;

	for (index = 0; arrOfChars[index] != '\0'; index++)
	{
		if (arrOfChars[index] >= 97 && arrOfChars[index] <= 122)
		{
			arrOfChars[index] -= 32;
		}
	}

	return (arrOfChars);
}
