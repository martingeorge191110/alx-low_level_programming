#include <stdio.h>

char *_strncat(char *dest, char *src, int n)
{
    int i, counter;

    for (i = 0; dest[i] != '\0'; i++)
    {};

    for(counter = 0; counter < n && src[counter] != '\0'; counter++)
    {
        dest[i + counter] = src[counter];
    }
    dest[i + counter] = '\0';

    return (dest);
}

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}