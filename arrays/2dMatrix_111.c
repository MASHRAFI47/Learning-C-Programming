#include <stdio.h>

int main()
{
    int matrix[3][2];

    int lengthOfArr = sizeof(matrix) / sizeof(matrix[0]);

    int row, col;

    for (row = 0; row < lengthOfArr; row++)
    {
        for (col = 0; col < 2; col++)
        {
            scanf("%d", &matrix[row][col]);
        }
        printf("\n");
    }

    for (row = 0; row < lengthOfArr; row++)
    {
        for (col = 0; col < 2; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
}