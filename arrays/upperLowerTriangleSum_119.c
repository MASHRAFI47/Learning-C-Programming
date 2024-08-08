// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int A[10][10];
    int row, col, upperSum = 0, lowerSum = 0;

    printf("Enter row and col amount: ");
    scanf("%d %d", &row, &col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i < j)
            {
                upperSum = upperSum + A[i][j];
            }
            else if (i > j)
            {
                lowerSum = lowerSum + A[i][j];
            }
        }
        printf("\n");
    }

    printf("Upper Triangle Sum: %d\n", upperSum);
    printf("Lower Triangle Sum: %d\n", lowerSum);
}