#include <stdio.h>

int main () {
    int num1, num2, sum;
    float avg;

    printf("Enter two digits : ");
    scanf("%d %d", &num1, &num2);
    
    sum = num1 + num2;
    printf("The sum of two digits is : %d\n", sum);

    avg = (float) sum / 2;
    printf("The average of sum is : %.2f\n", avg);

    return 0;
}