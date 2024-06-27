#include <stdio.h>





void print_diagonal(int n)
{
    int i, j;

    if(n > 0)
    {
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < i; j++)
            {
                putchar(' ');
            }
        putchar(92);
        putchar('\n');
        }
    }
    putchar('\n');
}


int main () {

print_diagonal(-4);
    return (0);
}