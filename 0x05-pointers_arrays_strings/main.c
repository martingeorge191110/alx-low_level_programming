#include <stdio.h>

void puts_half(char *str)
{
    int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

    for (j = (i / 2); j < i; j++)
    {
        putchar(str[j]);
    }
    putchar('\n');
}

int main()
{
    char *str = "0123456789";

    puts_half(str);

    return (0);
}