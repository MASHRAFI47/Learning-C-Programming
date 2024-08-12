#include <stdio.h>

struct Person
{
    char name[50];
    int age;
    int salary;
};

int main()
{
    struct Person person[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter information for person%d: \n", i + 1);
        printf("Enter Name: ");
        // fgets( person[i].name, sizeof(person[i].name), stdin);
        scanf(" %49[^\n]", &person[i].name);
        printf("Enter age: ");
        scanf("%d", &person[i].age);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n\nInformation for person%d: \n", i + 1);
        printf("Name: ");
        puts(person[i].name);
        printf("Age: %d", person[i].age);
    }
}