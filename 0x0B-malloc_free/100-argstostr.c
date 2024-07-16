#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument counter
 * @av: argument value
 *
 * Return: (ptr) which is pointer
 * otherwise - (NULL)
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, len, j;

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len = len + 1;
		}
		len = len + 1;
	}
	len = len + 1;
	ptr = (char *) malloc(sizeof(char) * len);

	if (ptr == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[len] = av[i][j];
			len++;
		}
		ptr[len] = '\n';
		len++;
	}
	ptr[len] = '\0';

	return (ptr);
}
