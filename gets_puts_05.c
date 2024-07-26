#include <stdio.h>
#include <string.h>

int main () {
    char name[50]; //array of characters
    printf("Please enter your name : ");
    //gets is unsafe because you cant enter the total characters of name
    fgets(name, sizeof(name), stdin);

    //to ignore the last space
    size_t len = strlen(name);
    if(name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    printf("Your name is : ");
    puts(name);
    return 0;
}