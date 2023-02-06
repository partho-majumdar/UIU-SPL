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
            // space
            for (int j = 1; j <= n - i; j++)
            {
                printf("_");
            }

            // star
            for (int k = 1; k <= 1; k++)
            {
                printf("*");
            }

            // space
            for (int j = 1; j <= n - i; j++)
            {
                printf("_");
            }

            printf("\n");
        }

        else
        {
            // space
            int space_start1 = i < (n + 1) / 2 ? i - 1 : n - i;

            for (int j = 1; j <= space_start1; j++)
            {
                printf("_");
            }

            // star
            for (int k = 1; k <= 1; k++)
            {
                printf("*");
            }

            // space
            int space_start2 = i > (n + 1) / 2 ? 2 * i - n - 2 : n - 2 * i;

            for (int j = 1; j <= space_start2; j++)
            {
                printf("_");
            }

            // star
            for (int k = 1; k <= 1; k++)
            {
                printf("*");
            }

            // space
            int space_start3 = i < (n + 1) / 2 ? i - 1 : n - i;

            for (int j = 1; j <= space_start3; j++)
            {
                printf("_");
            }

            printf("\n");
        }
    }
}