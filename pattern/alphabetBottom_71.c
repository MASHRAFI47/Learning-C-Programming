/*
    A B C D
    A B C
    A B
    A
*/

#include <stdio.h>

int main()
{
    int n, row, col;
    printf("Enter range: ");
    scanf("%d", &n);

    for (row = n; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%c ", col + 64);
        }
        printf("\n");
    }
}