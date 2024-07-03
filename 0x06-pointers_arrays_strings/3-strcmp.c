#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: (result) which is the difference
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, result;

	for (i = 0; s1[i] != '\0'; i++)
	{};

	for (j = 0; j < i; j++)
	{
		result = s1[j] - s2[j];
		if (s1[j] != s2[j])
		{
			break;
		}
	}

	return (result);
}
