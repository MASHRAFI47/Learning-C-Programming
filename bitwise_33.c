#include <stdio.h>

int main () {
    int a,b,c,d,e;
    printf("Please enter two value: ");
    scanf("%d %d", &a, &b);

    c = a & b;
    d = a | b;
    e = a ^ b;

    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("e = %d\n", e);

    return 0;
}