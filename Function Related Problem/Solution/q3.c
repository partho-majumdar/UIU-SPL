#include <stdio.h>

void oddEven(int);

void main()
{
    int val;
    printf("Enter any value: ");
    scanf("%d", &val);
    oddEven(val);
}

void oddEven(int n)
{
    if (n % 2 == 0)
    {
        printf("Even");
    }

    else
    {
        printf("Odd");
    }
}