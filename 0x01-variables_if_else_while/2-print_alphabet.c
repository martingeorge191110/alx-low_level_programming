#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: Using While loop
 *                  to print alphabet in lowercase
 *
 * Return: 0 (Success)
*/

int main(void)
{

	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
