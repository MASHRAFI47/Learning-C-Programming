#include <stdio.h>
#include <math.h>

int main() {
    int i, sum, n;
    printf("please enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + pow(i, 2);
    }
    
    printf("The sum of square numbers: %d\n", sum);
}