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

    // reverse array
    for (int k = 0; k < n / 2; k++)
    {
        int temp = arr[k];
        arr[k] = arr[n - 1 - k];
        arr[n - 1 - k] = temp;
    }

    // print
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
}