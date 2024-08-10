#include <stdio.h>

int getMax(int len, int arr[])
{
    int max;

    max = arr[0];

    for (int i = 0; i < len; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int num[] = {10, 20, 30, 66, 40, 50};
    int arrLen = sizeof(num) / sizeof(num[0]);

    int maximum = getMax(arrLen, num);

    printf("%d", maximum);
}