#include <stdio.h>

void main()
{
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    int sum = 1;

    printf("%d! = ", n);

    for (int i = n; i >= 1; i--)
    {
        sum *= i;

        if (i == 1)
        {
            printf("%d ", i);
        }

        else
        {
            printf("%d * ", i);
        }
    }

    printf(" = %d", sum);
}