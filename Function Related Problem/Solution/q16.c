#include <stdio.h>
#include <stdlib.h>

int *multiplyArray(int *, int);

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

    int *arr2 = multiplyArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr2 + i));
    }

    free(arr);
    free(arr2);
}

int *multiplyArray(int *arr, int n)
{
    int *newArray = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        newArray[i] = arr[i] * 2;
        // *(newArray + i) = *(arr + i) * 2;
    }

    return newArray;
}