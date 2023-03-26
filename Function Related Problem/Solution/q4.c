#include <stdio.h>

void pos_neg_zero();

void main()
{
    int val;
    printf("Enter any value: ");
    scanf("%d", &val);
    pos_neg_zero(val);
}

void pos_neg_zero(int n)
{
    if (n > 0)
    {
        printf("Positive");
    }

    else if (n < 0)
    {
        printf("Negative");
    }

    else
    {
        printf("Zero");
    }
}