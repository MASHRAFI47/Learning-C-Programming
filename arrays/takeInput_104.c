#include <stdio.h>

int main()
{
    int numbers[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter number: ");
        scanf("%d", &numbers[i]);
    }
    
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d", numbers[i]);
        printf("\n");
    }

    return 0;
}