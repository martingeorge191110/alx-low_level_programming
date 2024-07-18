#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: limit of copy characters
 *
 * Return: (ptr) which is the pointer of new string
 * otherwise - (NULL)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, c, k;


	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{};

	for (j = 0; s2[j] != '\0'; j++)
	{};

	if (n > j)
		c = j;
	else
		c = n;

	c += i;
	ptr = (char *) malloc((c + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		ptr[k] = s1[k];
	}

	for (j = 0; j < c - i && s2[j] != '\0'; j++)
	{
		ptr[k + j] = s2[j];
	}
	ptr[k + j] = '\0';

	return (ptr);
}
