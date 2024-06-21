#include <stdio.h>

/**
 * main - Entry point
 *
 * Desciption: pritn alphabet lower and upper case
 *					using while loop and if statement
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char alphabet1 = 'a', alphabet2 = 'z';

	while (alphabet1 <= alphabet2)
	{
		putchar(alphabet1);
		alphabet1++;
		if (alphabet1 == 'z' + 1)
		{
			alphabet1 = 'A';
			alphabet2 = 'Z';
		}
	}
	putchar('\n');

	return (0);
}
