#include <stdio.h>

int main () {
    int number, temp, remainder, sum=0;
    printf("please enter a number: ");
    scanf("%d\n", &number);

    temp = number;

    while(temp != 0) {
        remainder = temp % 10;
        sum = sum + remainder;
        temp = temp / 10;
    }

    printf("Sum of digits: %d\n", temp);

    return 0;
}