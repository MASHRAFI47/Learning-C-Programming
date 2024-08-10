#include <stdio.h>

int getMin(int arrSize, int arr[])
{
    int min;
    min = arr[0];

    for (int i = 0; i < arrSize; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{
    int num[] = {4, -2, -1, 10, 20, 30, 40, 50};
    int arrSize = sizeof(num) / sizeof(num[0]);

    int minValue = getMin(arrSize, num);

    printf("%d", minValue);
}