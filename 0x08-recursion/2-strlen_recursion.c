#include "main.h"

/**
 * _strlen_recursion - that returns the length of a string.
 * @s: source string to print its length
 *
 * Return: (0) base case ,
 * otherwise - (1 + recurision(s + 1))
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
