#include <stdio.h>

void main()
{
    int n;

    printf("Enter row number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            // start
            for (int j = 1; j <= n; j++)
            {
                printf("*");
            }

            printf("\n");
        }

        else
        {
            // star
            for (int j = 1; j <= 1; j++)
            {
                printf("*");
            }

            // space
            for (int k = 1; k <= n - 2; k++)
            {
                printf("_");
            }

            // star
            for (int j = 1; j <= 1; j++)
            {
                printf("*");
            }

            printf("\n");
        }
    }
}