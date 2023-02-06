#include <stdio.h>

void main()
{
    int n;
    int arr[100];

    printf("Enter how many number you want to take as input: ");
    scanf("%d", &n);

    // take input
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // print
    int max = arr[0];
    int min = arr[0];

    int max_index = 0;
    int min_index = 0;

    for (int j = 0; j < n; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
            max_index = j;
        }

        else if (arr[j] < min)
        {
            min = arr[j];
            min_index = j;
        }
    }

    printf("Max: %d, Index: %d\n", max, max_index);
    printf("Min: %d, Index: %d", min, min_index);
}