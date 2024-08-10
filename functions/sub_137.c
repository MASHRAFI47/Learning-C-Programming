#include <stdio.h>

int sub(int a, int b)
{
    return a - b;
}

int main()
{
    int num1, num2;

    printf("Please enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Sub of two digits: %d\n", sub(num1, num2));
}