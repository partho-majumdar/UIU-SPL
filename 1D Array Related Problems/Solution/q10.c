#include <stdio.h>

void main()
{
    int arrA[100], arrB[100], temp[100];

    int n1, n2;

    printf("Enter total element number of first array: ");
    scanf("%d", &n1);

    // take input of first array
    printf("Enter first array element: \n");
    for (int i = 0; i <= n1 - 1; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arrA[i]);
    }

    printf("\nEnter total element number of second array: ");
    scanf("%d", &n2);

    // take input of second array
    printf("Enter second array element: \n");
    for (int i = 0; i <= n2 - 1; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arrB[i]);
    }

    // copy all element from A to temp
    for (int i = 0; i <= n1 - 1; i++)
    {
        temp[i] = arrA[i];
    }

    // copy all element from B to A
    for (int i = 0; i <= n2 - 1; i++)
    {
        arrA[i] = arrB[i];
    }

    // copy all element from temp to B
    for (int i = 0; i <= n1 - 1; i++)
    {
        arrB[i] = temp[i];
    }

    printf("\n");

    printf("Array A: ");

    for (int i = 0; i <= n2 - 1; i++)
    {
        printf("%d ", arrA[i]);
    }

    printf("\n");

    printf("Array B: ");

    for (int i = 0; i <= n1 - 1; i++)
    {
        printf("%d ", arrB[i]);
    }
}
