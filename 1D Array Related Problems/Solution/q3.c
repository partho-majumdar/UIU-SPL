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
    int sum = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] % 2 == 0)
        {
            sum += arr[j];
        }
    }

    printf("Ans: %d", sum);
}