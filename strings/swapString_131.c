#include <stdio.h>
#include <string.h>

int main() {
    char str[15] = "Bangladesh";
    char str2[15] = "India";
    char temp[15];

    strcpy(temp, str);
    strcpy(str, str2);
    strcpy(str2, temp);

    printf("String One: %s\n", str);
    printf("String Two: %s\n", str2);
    printf("String Temp: %s\n", temp);
}