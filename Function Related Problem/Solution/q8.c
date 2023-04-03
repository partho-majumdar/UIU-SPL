#include <stdio.h>

void rev_arr(int[], int);

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

    rev_arr(arr, n);
}

void rev_arr(int arr[], int n)
{

    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

// -----------using Pointer------------

/*

#include <stdio.h>

void rev_arr(int *, int);

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

    rev_arr(arr, n);
}

void rev_arr(int *arr, int n)
{
    int *ptr1 = arr;         // address of first index
    int *ptr2 = arr + n - 1; // address of last index

    while (ptr1 < ptr2)
    {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
}

*/