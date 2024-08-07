#include <stdio.h>

int main()
{
    int arr1[5] = {10, 20, 30, 40, 50}, arr2[5];

    for (int i = 0; i < 5; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("Array2: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
}