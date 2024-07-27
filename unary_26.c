#include <stdio.h>

int main () {
    int x = 10;
    int y = x++;

    printf("value of x: %d\n", x);
    printf("value of y: %d\n", y);

    return 0;
}