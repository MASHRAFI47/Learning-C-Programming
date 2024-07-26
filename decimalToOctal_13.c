#include <stdio.h>

int main () {
    int number;
    printf("Enter your decimal value : ");
    scanf("%d", &number);

    printf("Your output in octal: %o", number);
    return 0;
}