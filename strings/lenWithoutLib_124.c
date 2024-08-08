#include <stdio.h>

int main()
{
    char name[] = "Mashrafi Bin Nur";
    int count = 0;

    int i = 0;
    while (name[i] != '\0')
    {
        count++;
        i++;
    }

    printf("%d", count);
}