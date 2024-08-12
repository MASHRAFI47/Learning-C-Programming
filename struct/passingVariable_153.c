#include <stdio.h>
#include <string.h>

//struct
struct Person {
    char name[50];
    int age;
    float salary;
};

//function
void display(struct Person p) {
    printf("%s\n", p.name);
    printf("%d\n", p.age);
    printf("%f\n", p.salary);
}


int main() {
    struct Person person1;

    strcpy(person1.name, "Mashrafi Bin Nur");
    person1.age = 21;
    person1.salary = 1200.45;

    display(person1);
}