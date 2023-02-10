#include <stdio.h>

void main()
{
    int arr[100];

    int n;
    printf("Enter how many number you want to take as input: ");
    scanf("%d", &n);

    // take input
    printf("Enter your array: \n");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // print array
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] % 3 == 0)
        {
            arr[i] = -1;
        }

        printf("%d  ", arr[i]);
    }
}