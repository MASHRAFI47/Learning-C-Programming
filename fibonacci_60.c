#include <stdio.h>

int main()
{
    int n, fibo, count = 0, first = 0, second = 1;
    printf("Please enter range: ");
    scanf("%d", &n);

    for (int i = 0; i < count; i++)
    {
        if (i <= n)
        {
            fibo = i;
        }
        else
        {
            first = second;
            second = fibo;
            fibo = first + second;
        }
    }

    printf("Fibonacci sum = %d\n", fibo);
}