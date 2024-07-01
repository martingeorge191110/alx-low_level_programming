#include <stdio.h>


void swap_int(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;
    num1 = 10; num2 = 20;
    swap_int(&num1, &num2);

    printf("num1:%d ,, num2:%d",num1, num2);


    return (0);
}