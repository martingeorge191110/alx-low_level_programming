#include <stdio.h>

void print_array(int *a, int n)
{
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
    int arr[] = {1,2,3,4,5};

    print_array(arr,5);

    return (0);
}