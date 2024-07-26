#include <stdio.h>

int main () {
    float base, height, area;
    printf("Please enter the base value: ");
    scanf("%f", &base);
    printf("Please enter the height value: ");
    scanf("%f", &height);

    area = 1/2 * base * height;
    printf("The result is : %.2f", area);

    return 0;
}