#include <stdio.h>

int main()
{
    char name[30];

    printf("Please enter a name: ");

    fgets(name, sizeof(name), stdin);

    // printf("%s", name);
    puts(name);
}