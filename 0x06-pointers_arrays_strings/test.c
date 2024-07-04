#include <stdio.h>

char *string_toupper(char *arrOfChars)
{
    int index;

    for (index = 0; arrOfChars[index] != '\0'; index++)
    {
        if (arrOfChars[index] >= 97 && arrOfChars[index] <= 122)
        {
            arrOfChars[index] -= 32;
        }
    }

    return (arrOfChars);
}

int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}