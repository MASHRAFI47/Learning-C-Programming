#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 20; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }

        printf("C programming %d\n", i);

        if (i == 10)
        {
            break;
        }
    }

    return 0;
}