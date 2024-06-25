#include "_putchar.c"

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
	int index;

	putChars = "_putchar";
	index = 0;
	while (index < sizeof(putChars) / sizeof(putChars[0]))
	{
		_putchar(putChars[index]);
		index++;
	}
	_putchar('\n');
	return (0);
}
