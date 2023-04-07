#include <stdio.h>
#include <stdlib.h>

void onlyEven(int *, int);

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

    onlyEven(arr, n);
    free(arr);
}

void onlyEven(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            printf("%d ", *(arr + i));
        }
    }
}