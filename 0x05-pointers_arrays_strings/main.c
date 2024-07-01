#include <stdio.h>

void print_array(int *a, int n)
{
	if(n < 0)
		return;
	int i;

	for (i = 0; i < n - 1 ; i++)
	{
		printf("%d, ", a[i]);
	}
		printf("%d", a[n - 1]);
		putchar('\n');
}


int main()
{
	int array[5];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	print_array(array, 5);

	return (0);
}