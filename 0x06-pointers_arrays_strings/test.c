#include <stdio.h>

int checkCharNumber (char c)
{
    int i, result;
    char characters[] = {'a', 'e', 'o', 't', 'l'};
    char charsInt[] = {4, 3, 0, 7, 1};

    result = -1;
    for (i = 0; i < sizeof(characters) / sizeof(char); i++)
    {
        if (c == characters[i] || c == characters[i] - 32)
        {
            result = charsInt[i];
            break;
        }
    }

    return (result);
}

char *leet(char *str)
{
    int index, checker;

    for (index = 0; str[index] != '\0'; index++)
    {
        checker = checkCharNumber(str[index]);

        if (checker != -1)
        {
            str[index] = checker + '0';
        }
    }

    return (str);
}

int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}