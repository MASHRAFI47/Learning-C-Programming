#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Mashrafi Bin Nur";
    char name2[] = "Mashrafi";

    int eq = strcmp(name, name2);

    if (eq == 0)
    {
        printf("String is equal\n");
    }
    else
    {
        printf("String is not equal\n");
    }

    printf("%d\n", eq);
}