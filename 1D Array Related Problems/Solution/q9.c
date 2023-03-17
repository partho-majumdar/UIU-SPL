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
    printf("\nArray A: ");

    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arrA[i]);
    }

    // copy element in reverse order
    for (int j = 0; j <= n - 1; j++)
    {
        arrB[j] = arrA[n - 1 - j];
    }

    // print reverse array
    printf("\nArray B: ");

    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arrB[i]);
    }
}
