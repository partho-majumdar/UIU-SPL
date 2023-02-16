#include <stdio.h>

void main()
{
    int n;

    printf("Enter row number: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = n - i; j >= 1; j--)
        {
            printf("  ");
        }

        for (int k = i; k >= 1; k--)
        {
            if (i == 1)
            {
                printf("%d ", 0);
            }

            else
            {
                printf("%d ", k);
            }
        }

        printf("\n");
    }
}
