#include <stdio.h>
#include <math.h>

void calculatePower(int b, int e)
{
    int result;
    result = pow(b, e);

    printf("The result is %d", result);
}

int main()
{
    int base, exp;

    printf("Print base and exponential value: ");
    scanf("%d %d", &base, &exp);

    calculatePower(base, exp);
}