#include <stdio.h>


int _strlen(char *s)
{
   int index;

	for (index = 0; s[index] != '\0'; index++)
	{};

	return (index);
}

int main()
{
   int length = _strlen("martin george");

    printf("%d", length);


    return (0);
}