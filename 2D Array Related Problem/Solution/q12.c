#include <stdio.h>

void main()
{
    int arr[100][100];
    int m, n;

    printf("Enter row number: ");
    scanf("%d", &m);
    printf("Enter col number: ");
    scanf("%d", &n);

    // take input
    printf("Enter your matrix: \n");
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // swap matrix within itself
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][n - 1 - j];
            arr[i][n - 1 - j] = temp;
        }
    }

    // print ans
    printf("\nMatrix after swap: \n");
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }
}