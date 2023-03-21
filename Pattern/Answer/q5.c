#include <stdio.h>

void main()
{
    int n;

    printf("Enter row number: ");
    scanf("%d", &n);

    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = i; j >= 1; j--)
    //     {
    //         printf("* ");
    //     }

    //     printf("\n");
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}