#include <stdio.h>

void display(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }
}

int main()
{
    char str[] = "Programming";

    display(str);
}