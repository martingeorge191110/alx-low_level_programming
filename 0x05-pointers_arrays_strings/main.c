#include <stdio.h>


void reset_to_98(int *n)
{
    *n = 98;
}


int main()
{
    int number = 402;
    reset_to_98(&number);
    printf("%d", number);


    return (0);
}