#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: pointer to the first character of string
 *
 * Return: (num * sign) which is the integer after convert it
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	while (*s)
	{
		if (*s == '-')
		{
			sign = sign * -1;
		} else if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
		} else if (num > 0)
		{
			break;
		}
		s++;
	}
	return (num * sign);
}
