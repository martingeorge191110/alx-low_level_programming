#include <stdio.h>

void rev_string(char *s)
{
   int start, i, counter, length;

	start = 0;
	while (s[start] != '\0')
	{
		start++;
	}
	length = start;
	char newStr[length];

	start -= 1;
	counter = start;

	for (i = 0; i <= start; i++)
	{
		newStr[i] = s[counter];
		counter--;
	}
	printf("%s", newStr);

}

int main()
{
    char *str = "My School";

    // printf("%s\n", str);
    rev_string(str);
    // printf("%s\n", str);

    return (0);
}