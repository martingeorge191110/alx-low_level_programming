#include "main.h"

/**
 * main - Entry Point
 *
 * Description: print "_putchar" characters
 *
 * Return: (0) Success
*/

int main(void)
{
	int asciValues[] = {95, 112, 117, 116, 99, 104, 97, 114};

	int index;

	index = 0;
	while (index < 8)
	{
		_putchar(asciValues[index]);
		index++;
	}
	_putchar('\n');
	return (0);
}
