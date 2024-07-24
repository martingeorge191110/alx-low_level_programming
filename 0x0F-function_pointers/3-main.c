#include "3-calc.h"

/**
 * main - Entry point
 * @argv: argument values
 * @argc: argument counter
 *
 * Return: (0) Success
 */

int main(int argc, char *argv[])
{
	int n1, n2;
	int (*ptr)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	operator = argv[2];

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	ptr = get_op_func(operator);
	if ((*operator == '/' || *operator == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", ptr(n1, n2));

	return (0);
}
