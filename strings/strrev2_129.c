#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Mashrafi Bin Nur";
    char revName[50];

    int len = strlen(name);

    for (int i = len - 1, j = 0; i >= 0; i--, j++)
    {
        revName[j] = name[i];
    }

    printf("Reverse Name: %s\n", revName);
    printf("Reverse Name: %d\n", len);
}