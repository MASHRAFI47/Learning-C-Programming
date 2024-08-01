// series : 1-2+3-4+5-6+....+ n = ?
// basically: (1+3+5+7) - (2+4+6+8)

#include <stdio.h>

int main()
{
    int n, even = 0, odd = 0;
    printf("Series: 1-2+3-4+5-6+....+ n = \n");
    printf("Enter n for the series: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0) {
            even = even + i;
        }
        else {
            odd = odd + i;
        }
    }

    printf("Sum = %d\n", odd - even);
}