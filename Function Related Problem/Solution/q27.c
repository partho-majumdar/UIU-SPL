#include <stdio.h>
#include <stdlib.h>

int *Get_Number_And_Base();
int *Convert_Number(int *, int *);

void main()
{
    int *arr = (int *)malloc(2 * sizeof(int));

    arr = Get_Number_And_Base();

    int num = arr[0];
    int base = arr[1];

    Convert_Number(&num, &base);
}

int *Convert_Number(int *num, int *base)
{
    int *arr = (int *)malloc(100 * sizeof(int));
    int i = 0;

    while (*num != 0)
    {
        arr[i] = *num % *base;
        *num = *num / *base;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
}

int *Get_Number_And_Base()
{
    int N;
    int B;
    int *arr = (int *)malloc(2 * sizeof(int));

    printf("Enter any number: ");
    scanf("%d", &N);

    printf("Enter base number: ");
    scanf("%d", &B);

    while (B < 2 || B > 16)
    {
        printf("Wrong base number! Enter number between 2 and 16\n");
        printf("Enter base number: ");
        scanf("%d", &B);
    }

    arr[0] = N;
    arr[1] = B;

    return arr;
}