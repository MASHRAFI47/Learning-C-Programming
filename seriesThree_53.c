#include <stdio.h>

int main()
{
    int n, sum = 0, a = 1;
    printf("1 + 3 + 5 + 7 + .... + n= ");
    printf("Please enter n: ");
    scanf("%d", &n);

    while (a <= n) {
        sum = sum + a;
        a+=2;
    }

    printf("1 + 3 + 5 + 7 + .... + %d = %d\n", n, sum);

    return 0;
}