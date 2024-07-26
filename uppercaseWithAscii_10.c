#include <stdio.h>

int main () {
    char ch;
    printf("Please enter Uppercase: ");
    scanf("%c", &ch);
    printf("Lowercase Output: %c", ch+32);
    return 0;
}