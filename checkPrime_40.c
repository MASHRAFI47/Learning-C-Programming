#include <stdio.h>

int main () {
    int number;
    printf("please enter a number : ");
    scanf("%d", &number);

    for (int i = 2; i < number; i++)
    {
        if(number%i==0) {
            printf("This is not a prime number\n");
            break;
        } else {
            printf("This is a prime number\n");
            break;
        }
    }
    
    return 0;
}