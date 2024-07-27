#include <stdio.h>

int main () {
    int num1 = 10;
    int num2 = 5;
    int temp;

    temp = num1; //num1 = empty;
    num1 = num2; //num1 = 5;
    num2 = temp; //num2 = 10;

    printf("num1 = %d \n", num1);
    printf("num2 = %d \n", num2);

    return 0;
}