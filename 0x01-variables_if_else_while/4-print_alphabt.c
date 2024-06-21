#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet using while loop
 *					if alphabet = q or e conitnue
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		if (alphabet == 'q' || alphabet == 'e')
		{
			continue;
		}
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
