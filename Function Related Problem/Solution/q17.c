#include <stdio.h>
#include <stdlib.h>

int *sortArray(int *, int);

void main()
{
    int n;
    printf("Enter total number of element in array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", arr + i);
    }

    int *arr2 = sortArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr2 + i));
    }

    free(arr);
}

int *sortArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int *newArray = (int *)malloc(sizeof(int));

    for (int i = 0; i < n; i++)
    {
        newArray[i] = *(arr + i);
    }

    return newArray;
}