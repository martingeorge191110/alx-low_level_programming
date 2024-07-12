#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: argument counter
 * @argv: argument value
 *
 * Return: (0) Success,
 * otherwise - (1) Error
 */

int main(int argc, char *argv[])
{
	int coins, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	coins = 0;
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents - 25 >= 0)
			cents -= 25;
		else if (cents - 10 >= 0)
			cents -= 10;
		else if (cents - 5 >= 0)
			cents -= 5;
		else if (cents - 2 >= 0)
			cents -= 2;
		else
			cents--;

		coins++;
	}
	printf("%d\n", coins);

	return (0);
}
