#include <stdio.h>

int main() {
    int number, sum=0;
    printf("1 + 3 + 5 + 7 + .... + n= ");
    printf("Please enter n: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i+=2)
    {
        sum = sum + i;
    }
    
    printf("1 + 3 + 5 + 7 + .... + %d = %d\n", number, sum);

    return 0;
}