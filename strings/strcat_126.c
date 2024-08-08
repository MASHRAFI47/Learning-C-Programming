#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "C Programming ";
    char source2[] = "but C++ is cool";

    strcat(source, source2);

    printf("%s", source);
}