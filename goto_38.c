#include <stdio.h>

int main () {
    int i=1;

    mash: 
        printf("C programming %d\t", i);
        i++;
    
    if(i < 5) {
        goto mash;
    }

    return 0;
}