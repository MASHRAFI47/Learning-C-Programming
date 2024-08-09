#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int capital, small, digits;

    printf("Enter words: ");
    fgets(str, sizeof(str), stdin);

    capital = small = digits = 0;

    int i = 0;
    while ((ch = str[i]) != '\0')
    {
        if (ch >= 65 && ch <= 90)
        {
            capital++;
        }

        else if (ch >= 97 && ch <= 122)
        {
            small++;
        }

        else if (ch >= 48 && ch <= 57)
        {
            digits++;
        }
        i++;
    }

    printf("%d\n", capital);
    printf("%d\n", small);
    printf("%d\n", digits);
}