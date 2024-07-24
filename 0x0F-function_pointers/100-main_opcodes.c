#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument value
 *
 * Return: (0) Success
 */

int main(int argc, char *argv[])
{
	char *op = (char *)main;
	int ind, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ind = 0;
	while (ind < bytes)
	{
		if (ind == bytes - 1)
		{
			printf("%02hhx", op[ind]);
			break;
		}
		printf("%02hhx ", op[ind]);
		ind++;
	}
	printf("\n");

	return (0);
}
