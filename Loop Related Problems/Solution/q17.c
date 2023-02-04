#include <stdio.h>

void main()
{
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    int count = 0;

    if (n == 0 || n == 1)
    {
        printf("Not prime");
    }

    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }

        if (count > 0)
        {
            printf("Not prime");
        }

        else
        {
            printf("Prime");
        }
    }
}