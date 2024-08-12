#include <stdio.h>

struct Person {
    int age;
    float salary;
};

int main() {
    struct Person person1, person2, person3;

    // printf("Enter age and salary for person1: ");
    // scanf("%d %f", &person1.age, &person1.salary);

    person2.age = 25;
    person2.salary = 50.5;

    person2 = person3;

    if(person2.age == person3.age && person2.salary == person3.salary) {
        printf("person2 is equal to person3");
    }
    else {
        printf("they are not equal");
    }
}