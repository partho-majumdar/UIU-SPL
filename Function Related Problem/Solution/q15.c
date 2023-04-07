#include <stdio.h>
#include <stdlib.h>

int findMin(int *, int);

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

    int ans = findMin(arr, n);
    printf("Minimum value: %d ", ans);

    free(arr);
}

int findMin(int *arr, int n)
{
    int min = *arr;

    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) < min)
        {
            min = *(arr + i);
        }
    }
    
    return min;
}