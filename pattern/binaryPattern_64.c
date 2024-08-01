/*
    1
    1 0
    1 0 1
    1 0 1 0
*/

#include <stdio.h>

int main()
{
    while (1)
    {
        int n, row, col;
        printf("Please type n: ");
        scanf("%d", &n);

        for (row = 1; row <= n; row++)
        {
            for (col = 1; col <= row; col++)
            {
                printf("%d ", col % 2);
            }
            printf("\n");
        }
    }
}