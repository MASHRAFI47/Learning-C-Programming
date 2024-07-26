#include <stdio.h>

int main () {
    char character;
    printf("Please enter a lowercase: ");
    scanf("%c", &character);
    printf("Uppercase character is: %c", character-32);
    return 0;
}