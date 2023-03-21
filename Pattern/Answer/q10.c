#include <stdio.h>

void main()
{
    int n;

    printf("Enter row number: ");
    scanf("%d", &n);

    for (int row = 1; row <= (2 * n) - 1; row++)
    {
        int totalCol = row > n ? (2 * n) - row : row;

        for (int col = 1; col <= totalCol; col++)
        {
            printf("* ");
        }

        printf("\n");
    }
}
