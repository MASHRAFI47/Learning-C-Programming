#include <stdio.h>
#include <math.h>

int main () {
    float x, result, result2, result3, result4;
    printf("Please enter a value:");
    scanf("%f", &x);

    result = round(x);
    result2 = trunc(x);
    result3 = ceil(x);
    result4 = floor(x);

    printf("round: %f\n", result);
    printf("trunc: %f\n", result2);
    printf("ceil: %f\n", result3);
    printf("floor: %f\n", result4);

    return 0;
}