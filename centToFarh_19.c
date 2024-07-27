#include <stdio.h>

int main () {
    float c, f, result;
    
    printf("Please enter your centigrade value: ");
    scanf("%f", &c);

    f = (c * 1.8) + 32;

    printf("Fahrenheit: %.2f", f);

    return 0;
}