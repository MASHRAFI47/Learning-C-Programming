#include <stdio.h>
#include <math.h>

int main () {
    float x, result, result2, result3, result4;
    printf("please enter value: ");
    scanf("%f", &x);

    result = log(x);
    result2 = log10(x);
    result3 = sin(x);
    result4 = exp(x);

    printf("log: %f\n", result);
    printf("log10: %f\n", result2);
    printf("sin: %f\n", result3);
    printf("exponential: %f\n", result4);

    return 0;
}