#include <stdio.h>

int main() {
    float n, sum=0, i;
    printf("Series: 1.5 + 2.5 + 3.5 + 4.5 + .... n1\n");
    printf("Please enter n: ");
    scanf("%f", &n);
    
    for (i = 1.5; i <= n; i++)
    {
        sum = sum + i;
    }
    
    printf("The sum of numbers : %f\n", sum);
}