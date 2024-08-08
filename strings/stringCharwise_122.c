#include <stdio.h>

int main()
{
    char name[] = "Mashrafi";

    int i = 0;

    while (name[i] != '\0')
    {
        printf("%c\n", name[i]);
        i++;
    }
}