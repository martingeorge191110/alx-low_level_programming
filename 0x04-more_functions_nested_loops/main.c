#include <stdio.h>






void print_square(int size)
{
	int i, j;

	for (i = 0; i < size ; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
	if (size == 0)
	{
		putchar('\n');
	}
}


int main () {

print_square(2);
    return (0);
}