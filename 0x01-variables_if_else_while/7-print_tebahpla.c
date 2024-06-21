#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet by reverse
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char alphabet;

	alphabet = 'z';
	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');

	return (0);
}
