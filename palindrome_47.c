#include <stdio.h>

int main () {
    int number, remainder, temp, sum=0;

    printf("Please enter a number: ");
    scanf("%d", &number);

    temp = number;

    while(temp != 0) {
        remainder = temp % 10;
        sum = sum * 10 + remainder;
        temp = temp / 10;
    }

    if(number == sum) {
        printf("%d is a palindrome", number);
    } else {
        printf("%d is not a palindrome", number);
    }
}