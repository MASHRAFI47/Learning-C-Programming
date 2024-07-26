#include <stdio.h>

int main () {
    int number;
    printf("Please enter a octal value: ");
    scanf("%o", &number);
    printf("Your decimal value is: %d", number);
    return 0;
}