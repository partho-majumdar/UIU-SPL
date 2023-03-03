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
    printf("Enter your 2d array: \n");
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // print row
    printf("Row-wise: ");
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }

    // print col
    printf("\nCol-wise: ");
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            printf("%d ", arr[j][i]);
        }
    }
}
