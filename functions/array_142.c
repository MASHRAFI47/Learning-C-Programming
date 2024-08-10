#include <stdio.h>

void display(int value[])
{

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", value[i]);
    }
}

int main()
{
    int num[] = {10, 20, 30, 40, 50};

    display(num);
}