#include <stdio.h>

int main()
{
    float i, n, sum = 0, a = 1;
    printf("series: 1 + 1/2 + 1/3 + .... 1/n\n");
    printf("Please enter n: ");
    scanf("%f", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + (1 / i);
        

        if (i == 1)
        {
            printf("\n 1 + ");
        }
        else if (i == n)
        {
            printf("(1/%.2f)", i);
        }
        else
        {
            printf("(1/%.2f) + ", i);
        }
    }

    printf(" = %.2f\n", sum);
}