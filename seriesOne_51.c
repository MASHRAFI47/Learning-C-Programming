#include <stdio.h>

int main() {
    int number, sum=0;
    printf("Please enter a number for series: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        sum = sum +  i;
    }
    
    printf("1 + 2 + 3+ .... + %d = %d\n", number, sum);

    return 0;
}