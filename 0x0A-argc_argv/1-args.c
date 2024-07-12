#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument counter
 * @argv: argument value
 *
 * Return: (0) Success
 */

int main(int argc, char __attribute__((__unused__))  *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
