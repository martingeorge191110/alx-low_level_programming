#include <stdio.h>

void rev_string(char *s)
{
   int start, i, counter;
   char *newStr, temp;

	start = 0;
	while (s[start] != '\0')
	{
		start++;
	}

	start -= 1;
	newStr = s;
    

	for (i = 0; i < start; i++)
	{
		for (counter = i + 1; counter >= 0; counter--)
		{
			temp = *(newStr + counter);
			*(newStr + counter) = *(newStr + (counter - 1));
			*(newStr + (counter - 1)) = temp;
		}
	}

}

int main()
{
    char *str = "My School";

    // printf("%s\n", str);
    rev_string(str);
    // printf("%s\n", str);

    return (0);
}