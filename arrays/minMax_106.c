#include <stdio.h>

int main() {
    int max, min;
    int numbers[] = {20, 40, -4, 100, 98};
    
    max = numbers[0];
    min = numbers[0];
    
    for(int i = 1; i < 5; i++) {
        if(max < numbers[i]) {
            max = numbers[i];
        }
        
        if(min > numbers[i]) {
            min = numbers[i];
        }
    }
    
    printf("Max number is: %d\n", max);
    printf("Min number is: %d\n", min);
}