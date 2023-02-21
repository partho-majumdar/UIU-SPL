#include <stdio.h>

void main()
{
    int x, y;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    if (x < y)
    {
        for (int i = x; i <= y; i++)
        {
            if (i < y)
            {
                printf("%d, ", i * i);
            }

            else if (i == y)
            {
                printf("Reached!");
            }
        }
    }

    else if (x > y)
    {
        for (int i = x; i >= y; i--)
        {
            if (i > y)
            {
                printf("%d, ", i * i);
            }

            else if (i == y)
            {
                printf("Reached!");
            }
        }
    }

    else
    {
        printf("Reached!");
    }
}