#include <stdio.h>

void main()
{
    int n;

    printf("Enter row number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n + i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
}