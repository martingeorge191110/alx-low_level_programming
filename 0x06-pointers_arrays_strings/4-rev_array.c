#include "main.h"

/**
 *  reverse_array - reverses the content of an array of integers.
 * @a: array of integers
 * @n: length of the array
 */

void reverse_array(int *a, int n)
{
	int start, end, temp;

	end = n - 1;
	for (start = 0; start < end; start++)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		end--;
	}
}
