#include <stdio.h>

double triangleArea(double b, double h)
{
    return 0.5 * b * h;
}

int main()
{
    double base, height;

    printf("Type base and height value: ");
    scanf("%lf %lf", &base, &height);

    printf("The area of triangle is: %.lf", triangleArea(base, height));
}