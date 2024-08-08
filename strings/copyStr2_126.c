#include <stdio.h>

int main()
{
    char name[] = "Mashrafi Bin Nur";
    char name2[30];

    int i = 0;
    while (name[i] != '\0')
    {
        name2[i] = name[i];
        i++;
    }

    printf("%s", name2);
}