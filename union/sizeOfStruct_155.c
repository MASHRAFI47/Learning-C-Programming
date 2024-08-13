#include <stdio.h>

union test {
    int x, y;
};

union test2 {
    char ch;
    float x;
};

union test3 {
    char name[20];
    double d;
};

struct Person {
    int age;
    float salary;
    char ch;
};

int main() {
    union test t1;
    union test2 t2;
    union test3 t3;

    struct Person t4;

    printf("Size of test1 %d\n", sizeof(t1));
    printf("Size of test1 %d\n", sizeof(t2));
    printf("Size of test1 %d\n", sizeof(t3));
    printf("Size of test1 %d\n", sizeof(t4));
}