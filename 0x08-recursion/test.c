#include <stdio.h>

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
        putchar('\n');
		return;
    }
	putchar(*s);
	return _puts_recursion(s + 1);
}

int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}