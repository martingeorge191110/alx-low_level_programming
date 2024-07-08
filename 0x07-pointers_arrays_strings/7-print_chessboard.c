#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: 2D array
 */

void print_chessboard(char (*a)[8])
{
	int i, j, length;

	length = sizeof(a[0]) / sizeof(a[0][0]);
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
