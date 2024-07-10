#include "main.h"

/**
 * getLastIndex - getting last index of the string
 * @s: source string
 *
 * Return: (-1) if *s == '\0'
 * otherwise - 1 + (getLastIndex(s + 1))
 */

int getLastIndex(char *s)
{
	if (*s == '\0')
	{
		return (-1);
	}
	return (1 + (getLastIndex(s + 1)));
}

/**
 * testIsPalindrome - testing if the string is Palindrome
 * @s: source string
 * @i: index1 int
 * @j: index2 int
 *
 * Return: (1) if palindrome
 * otherwise - (testIsPalindrome(s, i + 1, j - 1)) if s[i] == s[j]
 * otherwise - (0)
 */

int testIsPalindrome(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}
	if (s[i] == s[j])
		return (testIsPalindrome(s, i + 1, j - 1));
	else
		return (0);
}

/**
 * is_palindrome - checking for palindrome string
 * @s: source string
 *
 * Return: (1) if string is empty
 * otherwise - (testIsPalindrome(s, 0, getLastIndex(s)))
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (testIsPalindrome(s, 0, getLastIndex(s)));
}
