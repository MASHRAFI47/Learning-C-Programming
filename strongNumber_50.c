#include <stdio.h>

int main()
{
    int number, temp, remainder, fact, sum = 0;

    printf("Please enter a number: ");
    scanf("%d", &number);

    temp = number;

    while (temp != 0) {
        remainder = temp % 10;
        
        fact=1;
        for (int i = 1; i <= remainder; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if(number == sum) {
        printf("%d is a strong number\n", number);
    } else {
        printf("%d is not a strong number\n", number);
    }
}