#include "main.h"

int main(void)
{
    char *s;

    s = str_concat("Martin ", "George");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}