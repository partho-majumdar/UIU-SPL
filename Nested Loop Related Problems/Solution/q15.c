#include <stdio.h>

void main()
{
    int n;

    printf("Enter row number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            // value
            for (int j = 1; j <= n; j++)
            {
                printf("Z");
            }

            printf("\n");
        }

        else
        {
            int inner_space = i == n - 1 ? 1 : n - i + 1;

            // space
            for (int j = 1; j <= inner_space; j++)
            {
                printf(" ");
            }

            // value
            for (int k = 1; k <= 1; k++)
            {
                printf("Z");
            }

            printf("\n");
        }
    }
}
