#include <stdio.h>

int main () {
    int x = 5;
    float y = 6.44;
    double z = 5.231512512;
    char c = 'a';
    
    printf("This is int %d\n", x);
    //print 2 digits after float;
    printf("This is float %.2f\n", y);
    printf("This is double int %lf\n", z);
    printf("This is a char %c", c);
    return 0;
}