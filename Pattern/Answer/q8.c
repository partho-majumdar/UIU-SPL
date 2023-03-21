#include <stdio.h>

void main()
{
    int n;

    printf("Enter row number: ");
    scanf("%d", &n);

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

        printf("\n");
    }
}