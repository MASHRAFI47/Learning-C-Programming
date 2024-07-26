#include <stdio.h>
#include <ctype.h>

int main () {
    char lower, upper;
    printf("Put a lowercase character: ");
    scanf("%c", &lower);
    
    upper = toupper(lower);
    printf("To uppercase character %c", upper);

    return 0;
}