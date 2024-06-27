#include <stdio.h>


void print_line(int n)
{
    int i;

    if (n > 0)
    {
        for (i = 0; i < n + 1 ; i++)
        {
            putchar('_');
        }
    }
    putchar('\n');
}



int main () {

print_line(15);
    return (0);
}