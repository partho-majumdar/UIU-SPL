#include <stdio.h>

void main()
{
    int n;

    printf("Enter row number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1, k = i; j <= i; j++, k++)
        {
            printf("%d ", k);
        }

        printf("\n");
    }
}