#include <stdio.h>

void print_rev(char *s)
{
    int start;

    start = 0;
    while (s[start] != '\0')
    {
        start++;
    }
    while(start >= 0)
    {
        putchar(s[start]);
        start--;
    }
    putchar('\n');
}

int main()
{
    char *strPtr = "martin george";
    print_rev(strPtr);

    return (0);
}