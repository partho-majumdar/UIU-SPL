#include <stdio.h>

void main()
{
    int n;
    printf("Enter how many row(odd) you want to print: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j || j + i == n + 1)
            {
                printf("*");
            }

            else
            {
                printf("_");
            }
        }

        printf("\n");
    }
}