/*
    1 
    2 4 
    3 6 9 
    4 8 12 16 
*/

#include <stdio.h>

int main()
{
    int n, row, col;

    printf("Enter range: ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d ", col * row);
        }
        printf("\n");
    }
}