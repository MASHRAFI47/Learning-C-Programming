#include <stdio.h>

int main()
{
    int numbers[] = {72, 12, 242, 10};

    int lengthOfArr = sizeof(numbers) / sizeof(numbers[0]);

    if (lengthOfArr < 2)
    {
        printf("Array doesn't have enough elements");
        return 0;
    }

    int first, second;
    if (numbers[0] > numbers[1])
    {
        first = numbers[0];
        second = numbers[1];
    }
    else if (numbers[1] > numbers[0])
    {
        first = numbers[1];
        second = numbers[0];
    }

    for (int i = 2; i < lengthOfArr; i++)
    {
        if (numbers[i] > first)
        {
            second = first;
            first = numbers[i];
        }
        else if (numbers[i] > second)
        {
            second = numbers[i];
        }
    }

    printf("First largest number: %d", first);
    printf("Second largest number: %d", second);
}