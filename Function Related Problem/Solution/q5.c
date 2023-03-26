#include <stdio.h>

void greater_or_less(int n1, int n2);

void main()
{
    int val1, val2;
    printf("Enter two number: ");
    scanf("%d %d", &val1, &val2);
    greater_or_less(val1, val2);
}

void greater_or_less(int n1, int n2)
{
    if (n1 > n2)
    {
        printf("%d is greater than %d", n1, n2);
    }

    else if (n1 < n2)
    {
        printf("%d is less than %d", n1, n2);
    }

    else
    {
        printf("%d is equal to %d", n1, n2);
    }
}