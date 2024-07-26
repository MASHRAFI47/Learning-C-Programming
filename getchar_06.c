#include <stdio.h>

int main () {
    char character;
    printf("Please enter a character: ");
    character = getchar();
    printf("Your output is: ");
    putchar(character);
    
    return 0;
}