#include <stdio.h>

int main()
{
    int n, first = 2, second = 1, count = 2, lucas;

    printf("Please type range: ");
    scanf("%d", &n);

    printf("%d %d\t", first, second);

    while (count < n) {

        lucas = first + second;
        first = second;
        second = lucas;

        count++;
        printf("%d ", lucas);
        
    }
}