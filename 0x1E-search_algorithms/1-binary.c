#include "search_algos.h"

/**
 * print_arr - Function that print array in specific format
 * @arr: arr to be printed
 * @i: start index
 * @j: end index
 */

void print_arr(int *arr, size_t i, size_t j)
{
	size_t index;

	for (index = i; index < j + 1; index++)
	{
		if (index == i)
			printf("Searching in array: %d", arr[i]);
		else
			printf(", %d", arr[index]);
	}

	putchar('\n');

}

/**
 * binary_search - Function that searching for value in arr with binary search
 * @array: pointer to the first element of the array
 * @size: size of array
 * @value: desired value to search about
 *
 * Return: (mid number)
 * otherwise - (-1)
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	int mid;

	if (!array)
		return (-1);

	mid = (low + high) / 2;
	while (low <= high)
	{
		print_arr(array, low, high);

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;

		mid = (low + high) / 2;
	}

	return (-1);
}
