#include <stdio.h>

int _strcmp(char *s1, char *s2)
{
    int i, j, result;

    for (i = 0; s1[i] != '\0'; i++)
    {};

    for(j = 0; j < i; j++)
    {
        result = s1[j] - s2[j];
        if(s1[j] != s2[j])
        {
            break;
        }
    }

    return (result);
}

int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}