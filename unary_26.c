#include <stdio.h>

int main () {
    int x = 10;
    int y = x++; //postfix increment
    
    int a = 20;
    int b = ++a; //prefix increment

    printf("value of x: %d\n", x);
    printf("value of y: %d\n", y);
    printf("value of a: %d\n", a);
    printf("value of b: %d\n", b);

    return 0;
}