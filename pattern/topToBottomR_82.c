/*
    1234
     123
      12
       1
*/

#include <stdio.h>

int main()
{
    int n, row, col;

    printf("Enter range: ");
    scanf("%d", &n);

    for (row = n; row >= 1; row--)
    {
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }

        for (col = 1; col <= row; col++)
        {
            printf("%d", col);
        }

        printf("\n");
    }
}