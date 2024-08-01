/*
    0 0 0 0
    1 1 1
    0 0
    1
*/

#include <stdio.h>

int main()
{
    int n, row, col;
    printf("Type Range: ");
    scanf("%d", &n);

    for (int row = n; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", row%2);
        }
        printf("\n");
    }
}