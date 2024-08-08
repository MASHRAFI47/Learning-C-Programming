#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "NuN";

    //copy of name
    char nameCopy[50];
    strcpy(nameCopy, name);

    //reversed name
    strrev(name);

    printf("%s\n", name);
    printf("%s\n", nameCopy);

    
    int eq = strcmp(name, nameCopy);

    if(eq == 0) {
        printf("String is a palindrome");
    }
    else {
        printf("String is not a palindrome");
    }
}