#include <stdio.h>

int main()
{
    int n, sum = 1;
    printf("Series: 1 x 2 x 3 x 4 x .... x n\n");
    printf("Please enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum * i;

        if (i == 1) {
            printf("\n 1 x ");
        }
        else if (i == n) {
            printf("%d ", i);
        } 
        else {
            printf("%d x ", i);
        }
    }

    printf(" = %d", sum);
}