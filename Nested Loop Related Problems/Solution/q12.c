#include <stdio.h>

void main()
{
    int n;

    printf("Enter row number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // space
        int space_start = i > (n + 1) / 2 ? i - (n / 2) - 1 : (n / 2) - i + 1;

        for (int j = 1; j <= space_start; j++)
        {
            printf("_");
        }

        // star
        int star_start = i > (n + 1) / 2 ? 2 * (n - i) + 1 : 2 * i - 1;

        for (int k = 1; k <= star_start; k++)
        {
            printf("*");
        }

        printf("\n");
    }
}