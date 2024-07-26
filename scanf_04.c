//Enter two integers and show output;

#include <stdio.h>

int main () {
    int num1, num2, c;
    printf("Enter 2 numbers : ");
    scanf("%d %d", &num1, &num2);
    printf("Two integers are %d\n %d\n", num1, num2);

    ////// if you want char
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("Your entered Character is: %c", c);

    return 0;
}