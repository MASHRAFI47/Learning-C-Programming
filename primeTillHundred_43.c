#include <stdio.h>
#include <math.h>

int main()
{
    int number, count;

    for (number = 1; number <= 100; number++)
        count = 0;
    {
        if (number <= 1)
        {
            count++;
        }

        for (int i = 2; i <= sqrt(number); i++)
        {
            if (number % i == 0)
            {
                count++;
                break;
            }
        }

        if (count == 0) {
            printf("%d is a prime number\n", number);
        }
    }
}
