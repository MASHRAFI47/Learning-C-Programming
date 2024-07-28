#include <stdio.h>

int a = 10;
int main () {
    printf("Inside the main function %d", a);
    display();
}

void display () {
    printf("Inside the void function %d", a);
}