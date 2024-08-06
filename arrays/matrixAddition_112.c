#include <stdio.h>

int main()
{
    int A[3][2], B[3][2], C[3][2];

    int ALengthOfArr = sizeof(A) / sizeof(A[0]);
    int BLengthOfArr = sizeof(B) / sizeof(B[0]);

    int row, col;

    // FOR A
    for (row = 0; row < ALengthOfArr; row++)
    {
        for (col = 0; col < 2; col++)
        {
            printf("A[%d][%d]: ", row, col);
            scanf("%d", &A[row][col]);
        }
        printf("\n");
    }

    for (row = 0; row < ALengthOfArr; row++)
    {
        for (col = 0; col < 2; col++)
        {
            printf("%d ", A[row][col]);
        }
        printf("\n");
    }

    // FOR B
    for (row = 0; row < ALengthOfArr; row++)
    {
        for (col = 0; col < 2; col++)
        {
            printf("B[%d][%d]: ", row, col);
            scanf("%d", &B[row][col]);
        }
        printf("\n");
    }

    for (row = 0; row < ALengthOfArr; row++)
    {
        for (col = 0; col < 2; col++)
        {
            printf("%d ", B[row][col]);
        }
        printf("\n");
    }


    //FOR C
    printf("C = ");
    for (row = 0; row < ALengthOfArr; row++)
    {
        for (col = 0; col < 2; col++)
        {
            C[row][col] = A[row][col] + B[row][col];
            printf("%d", C[row][col]);
        }
        printf("\n");
    }
}