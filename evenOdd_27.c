//write a code to see even or odd
#include <stdio.h>

int main () {
    int x;
    printf("Please enter a digit: ");
    scanf("%d", &x);
    
    if(x%2==0) {
        printf("Even");
    } else {
        printf("Odd");
    }

    return 0;
}