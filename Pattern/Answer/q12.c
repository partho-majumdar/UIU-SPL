#include <stdio.h>

void main()
{
    int n;

    printf("Enter row number: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {

        // number
        for (int col = 1; col <= row; col++)
        {
            printf("%d", col);
        }

        // space
        for (int k = 1; k <= (2 * n) - (2 * row); k++)
        {
            printf(" ");
        }

        // number
        for (int col = row; col >= 1; col--)
        {
            printf("%d", col);
        }

        printf("\n");
    }
}
