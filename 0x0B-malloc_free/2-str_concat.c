#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 *
 * Return: (newStr) which is the new string
 * otherwise - (NULL) if newStr = NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *newStr;
	int s1Len, s2Len, s3Len, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (s1Len = 0; s1[s1Len]; s1Len++)
	{};

	for (s2Len = 0; s2[s2Len]; s2Len++)
	{};

	s3Len = s1Len + s2Len + 1;
	printf("%d \n ", s3Len);
	newStr = malloc(s3Len * (sizeof(char)));

	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < s1Len; i++)
	{
		newStr[i] = s1[i];
	}
	for (j = 0; j < s2Len; j++, i++)
	{
		newStr[i] = s2[j];
	}
	newStr[i] = '\0';

	return (newStr);
}
