#include <stdio.h>

char *_strstr(char *haystack, char *needle)
{
    int i, j;

    for (i = 0; haystack[i] != '\0'; i++)
    {
        for (j = 0; needle[j] != '\0'; j++)
        {
            if (haystack[i + j] != needle[j])
                break;
        }
        if (needle[j] == '\0')
        {
            return (haystack + (i));
        }
    }
    
    return ('\0');
}


int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}