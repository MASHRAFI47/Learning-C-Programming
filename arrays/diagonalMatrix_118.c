#include <stdio.h>

int main()
{
    int A[10][10], row, col, sum = 0;

    printf("Enter amount for rows and columns:");
    scanf("%d %d", &row, &col);

    // take inputs
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // print matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // for diagonal sum
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum = sum + A[i][j];
            }
        }
    }

    printf("Diagonal sum: %d", sum);
}