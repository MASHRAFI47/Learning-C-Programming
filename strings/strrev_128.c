#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Mashrafi Bin Nur";

    printf("str = %s\n", str);

    strrev(str);

    printf("str = %s\n", str);
}