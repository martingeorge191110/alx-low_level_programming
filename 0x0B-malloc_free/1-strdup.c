#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to copy
 *
 * Return: (newStr) which is new string copied
 * otherwise - (NULL) if str = NULL  or newStr = NULL
 */

char *_strdup(char *str)
{
	char *newStr;
	int i, length;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length]; length++)
	{};

	length += 1;

	newStr = malloc((length) * sizeof(char));

	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		newStr[i] = str[i];
	}
	newStr[length] = '\0';

	return (newStr);
}
