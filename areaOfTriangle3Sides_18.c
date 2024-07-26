#include <stdio.h>
#include <math.h>

int main () {
    int a, b, c;
    float s, result;

    printf("Enter 3 sides: ");
    scanf("%d %d %d", &a, &b, &c);

    s = (float) (a + b + c) / 2;
    printf("value of semi-perimeter: %f", s);
    
    result = sqrt(s * (s-a) * (s-b) * (s-c));

    printf("the result is: %.2f", result);

    return 0;
}