#include <stdio.h>

int main()
{
    int number, fact = 1;
    printf("Please enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        /* code */
        fact = fact * i;
    }
    printf("Factorial of %d is: %d", number, fact);

    return 0;
}