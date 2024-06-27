#include <stdio.h>


void print_line(int n)
{
    int i;

    if (n > 0)
    {
        for (i = 0; i < n ; i++)
        {
            putchar(95);
        }
    }
    putchar('\n');
}



int main () {

print_line(15);
    return (0);
}