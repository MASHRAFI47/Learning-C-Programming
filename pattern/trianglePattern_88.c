/*
    1
   123
  12345
 1234567

*/

#include <stdio.h>

int main()
{
    int n, row, col;

    printf("Enter range: ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }

        for (col = 1; col <= row * 2 - 1; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }
}