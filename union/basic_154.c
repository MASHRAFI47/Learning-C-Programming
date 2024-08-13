#include <stdio.h>

union test
{
    int x, y;
};

int main()
{
    union test t1;

    t1.x = 10;
    printf("%d\n", t1.x);
    printf("%d\n", t1.y);

    t1.y = 20;
    printf("%d\n", t1.x);
    printf("%d\n", t1.y);
}