#include <stdio.h>

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int row1, row2, col1, col2, sum = 0;

    printf("Enter the value for first row and column: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter the value for second row and column: ");
    scanf("%d %d", &row2, &col2);

    while (col1 != row2)
    {
        printf("Error!!! First column should be equal to second row\n");

        printf("\nEnter the value for first row and column: ");
        scanf("%d %d", &row1, &col1);

        printf("Enter the value for second row and column: ");
        scanf("%d %d", &row2, &col2);
    }


    //for A matrix
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col1; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    //for B matrix
    for(int i = 0; i < row2; i++) {
        for(int j = 0; j < col2; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }
    
    
    //for result of C
    for(int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for(int k = 0; k < col1; k++) {
                sum = sum + A[i][k] * B[k][j];
            }
            C[i][j] = sum; 
            sum = 0;
        }
    }
    


    //print A matrix
    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col1; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    //print B matrix
    for(int i = 0; i < row2; i++) {
        for(int j = 0; j < col2; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    
    
    for(int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}