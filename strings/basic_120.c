#include <stdio.h>

int main()
{
    char name2[5] = {'M', 'A', 'S', 'H'};
    char name3[] = "Mashrafi Bin Nur";

    char name[5];

    name[0] = 'M';
    name[1] = 'A';
    name[2] = 'S';
    name[3] = 'H';
    name[4] = '\0';

    printf("%s\n", name);
    printf("%s\n", name2);
    printf("%s\n", name3);
}