#include <stdio.h>
#include <math.h>

int main() {
    int number, temp, remainder, sum=0;

    printf("Please enter any number: ");
    scanf("%d", &number);

    temp = number;

    while(temp != 0) {
        remainder = temp % 10;
        sum = sum + pow(remainder, 3);
        temp = temp / 10;
    }

    if(number == sum) {
        printf("Armstrong number");
    } else {
        printf("Not an armstrong number");
    }
}