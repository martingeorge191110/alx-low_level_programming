#include <stdio.h>

char *_strcat(char *dest, char *src)
{
	int i, j, counter;

	i = 0;

	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		j++;
	}

	for (counter = 0; counter < j; counter++)
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
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}