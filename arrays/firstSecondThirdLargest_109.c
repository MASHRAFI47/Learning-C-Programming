//unsorted Array
#include <stdio.h>

int main() {
    int numbers[] = {512, 216, 218, 516, 2211, 999};
    int lengthOfArr = sizeof(numbers) / sizeof(numbers[0]);
    
    if(lengthOfArr < 3) {
        printf("Array doesn't have enough elements");
        return 0;
    }
    
    int first, second, third;
    if(numbers[0] > numbers[1] && numbers[0] > numbers[2]) {
        first = numbers[0];
        if(numbers[1] > numbers[2]) {
            second = numbers[1];
            third = numbers[2]; 
        } 
        else {
            second = numbers[2];
            third = numbers[1];
        }
    }
    
    else if(numbers[1] > numbers[0] && numbers[1] > numbers[2]) {
        first = numbers[1];
        if(numbers[0] > numbers[2]) {
            second = numbers[0];
            third = numbers[2];
        }
        else {
            second = numbers[2];
            third = numbers[0];
        }
    }
    
    else if(numbers[2] > numbers[0] && numbers[2] > numbers[1]) {
        first = numbers[2];
        if(numbers[0] > numbers[1]) {
            second = numbers[0];
            third = numbers[1];
        }
        else {
            second = numbers[1];
            third = numbers[0];
        }
    }
    
    
    for(int i = 3; i < lengthOfArr; i++) {
        if(numbers[i] > first) {
            third = second;
            second = first;
            first = numbers[i];
        }
        else if(numbers[i] > second) {
            third = second;
            second = numbers[i];
        }
        else if(numbers[i] > third) {
            third = numbers[i];
        }
    }
    
    printf("First largest number: %d\n", first);
    printf("Second largest number: %d\n", second);
    printf("Third largest number: %d\n", third);
}

