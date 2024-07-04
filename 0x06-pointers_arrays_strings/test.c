#include <stdio.h>


// char *cap_string(char *str)
// {
// 	int index, index2;
//     char charactes[] = {' ', '\t', '\n', ',', '.', ';', '!', '?', '"', '(', ')', '{', '}', '0',
//                         '1', '2', '3', '4', '5', '6'};

//     if (str[0] >= 'a' && str[0] <= 'z')
//     {
//         str[0] -= 32;
//     }

//     for (index = 1; str[index] != '\0'; index++)
//     {
//         if ((str[index] < 'A' || str[index] > 'Z') && (str[index] < 'a' || str[index] > 'z'))
//         {
//             for (index2 = 0; index2 < sizeof(charactes) / sizeof(char); index2++)
//             {
//                 if (str[index] == charactes[index2] && (str[index + 1] >= 'a' && str[index + 1] <= 'z'))
//                 {
//                     str[index + 1] -= 32;
//                     break;
//                 }
//             }
//         }
//     }

//     return str;
// }

char *cap_string(char *str)
{
	int index, index2;
    char charactes[] = {' ', '\t', '\n', ',', '.', ';', '!', '?', '"', '(', ')', '{', '}', '0',
                        '1', '2', '3', '4', '5', '6'};

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}

	for (index = 1; str[index] != '\0'; index++)
	{
		if ((str[index] < 'a' || str[index] > 'z')
		&&
		(str[index] < 'A' || str[index] > 'Z'))
        {
            for (index2 = 0; index2 < sizeof(charactes) / sizeof(char); index2++)
            {
                if (str[index] == charactes[index2] && (str[index + 1] >= 'a' & str[index + 1] <= 122))
                {
                    str[index + 1] -= 32;
					break;
                }
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