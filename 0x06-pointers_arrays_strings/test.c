#include <stdio.h>

char *leet(char *str)
{
	int index, i;
	char characters[] = {'a', 'e', 'o', 't', 'l'};
	int charsInt[] = {4, 3, 0, 7, 1};

	for (index = 0; str[index] != '\0'; index++)
	{
		for (i = 0; i < sizeof(characters) / sizeof(char); i++)
		{
			if (str[index] == characters[i] || str[index] == characters[i] - 32)
			{
				str[index] = charsInt[i] + '0';
			}
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