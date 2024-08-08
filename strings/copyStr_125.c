#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "C Programming";
    char target[30];

    strcpy(target, source);

    printf("%s", target);
}