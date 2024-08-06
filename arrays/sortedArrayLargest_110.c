//first and second largest from sorted array

#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};

    int lengthOfArr = sizeof(numbers) / sizeof(numbers[0]);

    int first = numbers[lengthOfArr - 1];
    int second = numbers[lengthOfArr - 2];

    printf("The first largest number is %d\n", first);
    printf("The first largest number is %d\n", second);
}