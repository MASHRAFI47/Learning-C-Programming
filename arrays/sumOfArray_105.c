#include <stdio.h>

int main()
{
    int numbers[5], sum = 0;
    float avg;

    for (int i = 0; i < 5; i++)
    {
        printf("number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        sum = sum + numbers[i];
    }

    printf("Sum of numbers: %d\n", sum);

    avg = (float)sum / 5;
    printf("Average of sum: %.2f", avg);

    return 0;
}