#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: source string
 * @accept: bytes
 *
 * Return: (counter) which is unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, counter;

	counter = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		int checker = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				checker = 1;
				break;
			}
		}
		if (checker == 0)
			break;
	}

	return (counter);
}
