#include <stdio.h>

void main()
{
    int arrA[100], arrB[100];

    int n;

    printf("Enter how many number you want to take as input: ");
    scanf("%d", &n);

    // take input
    printf("Enter your array: \n");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arrA[i]);
    }

    // print original Array
    int count1 = 0;

    if (count1 == 0)
    {
        printf("\nArray A: ");
        count1++;
    }

    for (int i = 0; i <= n - 1; i++)
    {
        arrB[i] = arrA[i];
        printf("%d ", arrA[i]);
    }

    // print reverse copy array
    int count2 = 0;

    if (count2 == 0)
    {
        printf("\nArray B: ");
        count2++;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arrB[i]);
    }
}