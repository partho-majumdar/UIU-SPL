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
    for (int j = n - 1; j >= 0; j--)
    {
        printf("%d ", arr[j]);
    }
}