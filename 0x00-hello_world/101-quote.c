#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print quotes using write function
			and quotes as a char (string instead of array of chars) variable
 *
 * Return: 1 (Not Success)
*/

int main(void)
{
	char *quotes;
	*quotes = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, quotes, 59);
	return (1);
}
