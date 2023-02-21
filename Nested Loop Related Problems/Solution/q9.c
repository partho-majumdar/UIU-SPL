#include <stdio.h>

void main()
{
    int n;

    printf("Enter row number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int start = i % 2 == 0 ? 0 : 1;

        for (int j = 1; j <= n; j++)
        {
            printf("%d ", start);
            start = 1 - start;
        }

        printf("\n");
    }
}