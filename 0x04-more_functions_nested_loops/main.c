#include <stdio.h>

void print_triangle(int size)
{
	char space;
	int i, j, k;

	space = ' ';
	if (size > 0)
	{
		for (i = 0; i < size ; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			putchar(space);
		}
		for (k = size - i - 1; k < size; k++)
		{
			putchar('#');
		}
		putchar('\n');
	}
	} else
	{
		putchar('\n');
	}
}


int main () {

print_triangle(2);
    return (0);
}