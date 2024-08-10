#include <stdio.h>

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    int result = fact(num);
    printf("fact of %d is: %d", num, result);
}