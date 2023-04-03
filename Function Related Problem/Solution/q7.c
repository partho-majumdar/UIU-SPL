#include <stdio.h>

int calc_sum(int[], int);

void main()
{
    int n;
    printf("Enter total element: ");
    scanf("%d", &n);
    int arr[100];

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int ans = calc_sum(arr, n);
    printf("Sum in main: %d\n", ans);
}

int calc_sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("Sum in function: %d\n", sum);
    return sum;
}

// ----------Using Pointer-----------
/*

#include <stdio.h>

int calc_sum(int *, int);

void main()
{
    int n;
    printf("Enter total element: ");
    scanf("%d", &n);
    int arr[100];

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", arr + i);
    }

    int *ptr_arr = arr;
    int ans = calc_sum(ptr_arr, n);
    printf("Sum in main: %d", ans);
}

int calc_sum(int *arr, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += *(arr + i);
    }

    printf("Sum in function: %d\n", sum);
    return sum;
}

*/