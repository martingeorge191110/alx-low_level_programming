#include <main.h>

/**
 * main - Entry Point
 *
 * Description: print "_putchar" characters
 *
 * Return: (0) Success
*/

int main(void)
{
	char *putChars;

	putChars = "_putchar";

	int index;

	index = 0;
	while (index < sizeof(putChars) / sizeof(putChars[0]))
	{
		_putchar(putChars[index]);
		index++;
	}
	return (0);
}
