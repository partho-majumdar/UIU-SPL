#include <stdio.h>

void main()
{
    int n;

    printf("Enter row number: ");
    scanf("%d", &n);

    // Pattern - 01
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        // star
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("*");
        }

        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        printf("\n");
    }

    // Pattern - 02
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        // star
        for (int k = 0; k < 2 * n - 2 * i - 1; k++)
        {
            printf("*");
        }

        // space
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        printf("\n");
    }
}