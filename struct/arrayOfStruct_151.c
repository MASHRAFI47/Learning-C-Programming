#include <stdio.h>

struct Person {
    int age;
    int salary;
};


int main() {
    struct Person person[3];

    for(int i = 0; i < 3; i++) {
        printf("Enter information for person%d: \n", i+1);
        printf("Enter age: ");
        scanf("%d", &person[i].age);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n\nInformation for person%d: \n", i+1);
        printf("Age: %d", person[i].age);
    }
    
}