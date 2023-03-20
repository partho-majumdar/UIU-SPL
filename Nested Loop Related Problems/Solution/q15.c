#include <stdio.h>

void main()
{
    int n;

    printf("Enter row number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || i + j == n + 1)
            {
                printf("Z");
            }

            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}
