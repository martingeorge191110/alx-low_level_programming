#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base 16
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int start, end;

	start = 0;
	end = 9;
	while (start <= end)
	{
		if (end == 9)
		{
			putchar(start + '0');
		}
		if (start == 9)
		{
			start = 'a';
			end = 'f';
		}
		putchar(start);
		start++;
	}
	putchar('\n');

	return (0);
}
