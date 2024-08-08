#include <stdio.h>
#include <string.h>

int main()
{
    char name[50] = "Mashrafi Bin Nur ";
    char source[] = "is a coder";

    int len = strlen(name);

    int i = 0;
    while (source[i] != '\0')
    {
        name[len + i] = source[i];
        i++;
    }

    printf("%s", name);
}