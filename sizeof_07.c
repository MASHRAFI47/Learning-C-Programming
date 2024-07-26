#include <stdio.h>

int main () {
    int a;
    float b;
    char c;
    double d;

    printf("size of int %d bytes\n", sizeof(a));
    printf("size of float %d bytes\n", sizeof(b));
    printf("Size of char %d bytes\n", sizeof(c));
    printf("Size of double %d bytes\n", sizeof(d));

    return 0;
}