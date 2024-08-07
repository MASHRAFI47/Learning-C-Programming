#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int search, found, index;
    printf("enter value: ");
    scanf("%d", &search);

    for (int i = 0; i < 5; i++)
    {
        if (search == arr[i])
        {
            found = 1;
            index = i;
            break;
        }
        else
        {
            found = -1;
        }
    }

    if (found == 1)
    {
        printf("Value was found in index %d", index);
    }
    else
    {
        printf("Value was not found");
    }
}