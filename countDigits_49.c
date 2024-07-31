#include <stdio.h>

int main()
{
    int number, count=0;

    printf("Enter any number: ");
    scanf("%d", &number);

    while (number != 0) {
        number = number / 10;
        count++;
    }

    printf("Total digits are: %d\n", count);
}