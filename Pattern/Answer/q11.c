#include <stdio.h>

void main()
{
    int n;

    printf("Enter row number: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        int start = row % 2 == 0 ? 0 : 1;

        for (int col = 1; col <= row; col++)
        {
            printf("%d ", start);
            start = 1 - start;
        }

        printf("\n");
    }
}
