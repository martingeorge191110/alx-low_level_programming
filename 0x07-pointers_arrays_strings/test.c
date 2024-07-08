#include <stdio.h>

unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j, counter;


    counter = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        int checker = 0;
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                counter++;
                checker = 1;
                break;
            } 
        }
        if (checker == 0)
        {
            break;
        }
    }

    return (counter);
}

int main(void)
{
    char *s = "martin, george";
    char *f = "inramt, ";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}