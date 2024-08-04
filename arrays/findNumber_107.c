#include <stdio.h>

int main() {
    int numbers[] = {40, 42, 12, 25, -2, 61};
    int match, found, arrIndex;
    
    printf("Enter number: ");
    scanf("%d", &match);
    
    for(int i = 0; i < 6; i++) {
        if(match == numbers[i]) {
            found = numbers[i];
            arrIndex = i;
            break;
        } else {
            found = -1;
        }
    }
    
    if(found == -1) {
        printf("Number not found");
    } else {
        printf("%d was found in %d index", found, arrIndex);
    }
    
}