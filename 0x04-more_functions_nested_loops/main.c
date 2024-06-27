#include <stdio.h>


void print_triangle(int size)
{
    char space;
    int i, j, k;

    space = ' ';
    for(i = 0; i < size ; i++)
    {
        for(j = 0; j < size-i-1; j++)
        {
            putchar(space);
        }
        for(k = size - i-1 ; k < size; k++)
        {
            putchar('#');
        }
        putchar('\n');
    }
}

int main () {

print_triangle(10);
    return (0);
}