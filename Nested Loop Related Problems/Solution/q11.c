#include <stdio.h>

void main()
{
    int n;

    printf("Enter row number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            printf("_");
        }

        // star
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }
}