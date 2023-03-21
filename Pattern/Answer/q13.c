#include <stdio.h>

void main()
{
    int n;

    printf("Enter row number: ");
    scanf("%d", &n);

    int num = 1;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }
}
