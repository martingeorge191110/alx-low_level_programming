#include <stdio.h>


char *cap_string(char *str)
{
    int index;

	for (index = 1; str[index] != '\0'; index++)
	{
		if ((str[index] < 97 || str[index] > 122)
		&&
		(str[index] < 97 - 32 || str[index] > 122 - 32))
		{
			if (str[index + 1] >= 97 && str[index + 1] <= 122)
			{
				str[index + 1] -= 32;
			}
		}
	}

	return (str);
}

int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}