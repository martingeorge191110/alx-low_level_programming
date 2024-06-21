#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print digit numbers form 0 to 9
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%i", i);
		i++;
	}
	putchar('\n');

	return (0);
}
