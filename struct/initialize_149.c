#include <stdio.h>

struct Person {
    int age;
    float salary;
};

int main() {
    struct Person person1 = {12, 12000};

    printf("%d\n", person1.age);
    printf("%.2f\n", person1.salary);
}