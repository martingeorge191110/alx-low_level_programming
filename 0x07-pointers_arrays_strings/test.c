#include <stdio.h>

void print_chessboard(char (*a)[8])
{
    int i, j, length;
    
    length = sizeof(a[0]) / sizeof(a[0][0]);
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length; j++)
        {
            putchar(a[i][j]);
        }
        putchar('\n');
    }
}


int main(void)
{
    char board[8][8] = {
        {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
    };

    // printf("%d" , sizeof(board) / sizeof(board[0]));
    print_chessboard(board);
    return (0);
}