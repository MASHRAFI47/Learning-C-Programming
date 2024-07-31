#include <stdio.h>

int main() {
    int i, n, sum=0, a=1;
    printf("series: 1 + 1/2 + 1/3 + .... 1/n\n");
    printf("Please enter n: ");
    scanf("%d", &n);

    for (i = 1; i <=n ; i++)
    {
        sum = sum + (1 / i);
    }
    
    printf("The sum of series: %f", sum);
}