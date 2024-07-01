#include <stdio.h>

void print_rev(char *s)
{
    int start;

    start = 0;
    while (s[start] != '\0')
    {
        start++;
    }
    while(start-1 >= 0)
    {
        putchar(s[start]);
        start--;
    }
    putchar('\n');
}

int main()
{
    char *strPtr = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(strPtr);

    return (0);
}