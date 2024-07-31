#include <stdio.h>

int main()
{
    int number, temp, remainder, sum = 0;

    printf("Please enter a number: ");
    scanf("%d", &number);

    temp = number;

    while (temp != 0)
    {
        remainder = temp % 10;
        sum = sum * 10 + remainder;
        temp = temp / 10;
    }

    printf("Reverse digits: %d", sum);
}