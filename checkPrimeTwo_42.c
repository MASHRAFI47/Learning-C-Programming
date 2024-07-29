#include <stdio.h>
#include <math.h>

int main()
{
    while (1)
    {
        int number, count = 0;
        printf("Enter any number: ");
        scanf("%d", &number);

        if(number<=1) {
            printf("%d is not a prime number", number);
            break;
        }

        for (int i = 2; i <= sqrt(number); i++) //number/2
        {
            if (number % i == 0)
            {
                count++;
                break;
            }
            /* code */
        }

        if (count == 0)
        {
            printf("%d is a prime number\n", number);
        }
        else
        {
            while (1)
            {
                printf("%d is not a prime number\n", number);
                break;
            }
        }
    }
}