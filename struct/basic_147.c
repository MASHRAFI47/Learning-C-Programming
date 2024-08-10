#include <stdio.h>

struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person person1, person2;

    person1.age = 40;
    person1.salary = 12000;

    printf("%d\n", person1.age);
    printf("%.2f\n", person1.salary);
}