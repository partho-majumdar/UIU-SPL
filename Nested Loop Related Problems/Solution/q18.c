#include <stdio.h>

void main()
{
    int n;

    printf("Enter row number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i == (n + 1) / 2)
        {
            for (int k = 1; k <= n; k++)
            {
                printf("H");
            }

            printf("\n");
        }

        else
        {
            // value
            for (int k = 1; k <= 1; k++)
            {
                printf("H");
            }

            // space
            for (int j = 1; j <= n - 2; j++)
            {
                printf(" ");
            }

            // value
            for (int k = 1; k <= 1; k++)
            {
                printf("H");
            }

            printf("\n");
        }
    }
}