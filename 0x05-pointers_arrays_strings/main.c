#include <stdio.h>

void puts2(char *str)
{
    int i, j;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    i -= 1;
    for (int j = 0; j < i; j += 2)
    {
        putchar(str[j]);
    }
    putchar('\n');
}

int main()
{
    char *str = "0123456789";

    puts2(str);

    return (0);
}