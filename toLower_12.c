#include <stdio.h>
#include <ctype.h>

int main () {
    char lower, upper;
    printf("enter an uppercase character: ");
    scanf("%c", &upper);
    
    lower = tolower(upper);
    printf("Lowercase character is: %c", lower);

    return 0;
}