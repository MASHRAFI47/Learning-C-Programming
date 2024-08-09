#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int vowels, consonant, digits, words, others;

    printf("Enter characters: ");
    fgets(str, sizeof(str), stdin);

    vowels = consonant = digits = words = others = 0;

    int i = 0;
    while ((ch = str[i]) != '\0')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowels++;
        }

        else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        {
            consonant++;
        }

        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }

        else if (ch == ' ') {
            words++;
        }

        else {
            others++;
        }

        i++;
    }
    words++;

    printf("Vowels: %d\n", vowels);
    printf("Vowels: %d\n", consonant);
    printf("Vowels: %d\n", digits);
    printf("Vowels: %d\n", words);
    printf("Vowels: %d\n", others - 1); // -1?
}