#include <stdio.h>
#include <math.h>

int square(int num)
{
    return pow(num, 2);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The square of %d is: %d", num, square(num));
}