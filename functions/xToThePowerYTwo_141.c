#include <stdio.h>
#include <math.h>

void calculatePower(int b, int e)
{
    int result = 1;

    for (int i = 1; i <= e; i++)
    {
        result = result * b;
    }

    printf("%d\n", result);
}

int main()
{
    int base, exp;
    printf("Please enter base and exponent value: ");
    scanf("%d %d", &base, &exp);

    calculatePower(base, exp);
}