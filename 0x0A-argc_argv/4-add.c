#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument counter
 * @argv: argument value
 *
 * Return: (0) Success,
 * otherwise - (1) Error
 */

int main(int argc, char *argv[])
{
	int i, j;
	int result = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		result += atoi(argv[i]);
	}

	printf("%d\n", result);
	return (0);
}
