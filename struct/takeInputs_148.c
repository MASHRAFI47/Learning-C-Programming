#include <stdio.h>

struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person person1, person2;

    printf("Enter age for person1: ");
    scanf("%d", &person1.age);
    printf("Enter salary for person1: ");
    scanf("%f", &person1.salary);
    printf("Enter age for person2: ");
    scanf("%d", &person2.age);
    printf("Enter salary for person1: ");
    scanf("%f", &person2.salary);

    printf("%d\n", person1.age);
    printf("%.2f\n", person1.salary);
    printf("%d\n", person2.age);
    printf("%.2f\n", person2.salary);
}