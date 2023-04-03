#include <stdio.h>

void swap(int *, int *);

void main()
{
    int n1, n2;
    printf("Enter two value: ");
    scanf("%d %d", &n1, &n2);

    swap(&n1, &n2);
    printf("Value in main: %d %d", n1, n2);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    printf("Value in function: %d %d\n", *a, *b);
}