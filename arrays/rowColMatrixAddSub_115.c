#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int row, col;

    printf("Enter value for rows and columns: ");
    scanf("%d %d", &row, &col);

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("A = ");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
        printf("\t");
    }
    
    
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    printf("\nB = ");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
        printf("\t");
    }
    
    printf("\nC = ");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            C[i][j] = A[i][j] - B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
        printf("\t");
    }
} 