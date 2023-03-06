#include <stdio.h>

void main()
{
    int n;

    printf("Enter row number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // space
        for (int k = 1; k <= n - i; k++)
        {
            printf("_");
        }

        // number
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }

        printf("\n");
    }
}