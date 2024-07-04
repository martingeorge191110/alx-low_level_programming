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

int isCharacter (char charac)
{
    int checker;

    checker = 0;
    if ((charac >= 'a' && charac <= 'z'))
    {
        checker = 1;
    } else if (charac >= 'A' && charac <= 'Z')
    {
        checker = 2;
    }
    
    return (checker);
}

char *cap_string(char *str)
{
	int index, checkPrevChar, checkCurrentChar;


	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}

	for (index = 1; str[index] != '\0'; index++)
	{
        checkPrevChar = isCharacter(str[index - 1]);
        checkCurrentChar = isCharacter(str[index]);
 
		if (checkPrevChar == 0 && checkCurrentChar == 1 && checkCurrentChar != 2 && checkPrevChar != 2)
		{
			str[index] -= 32;
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