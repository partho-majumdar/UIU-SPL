#include <stdio.h>

void main()
{
    int arrA[100][100], arrB[100][100], arrC[100][100];
    int m, n;

    printf("Enter row number: ");
    scanf("%d", &m);
    printf("Enter col number: ");
    scanf("%d", &n);

    // take first array
    printf("Enter your first 2d array: \n");
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            printf("arrA[%d][%d]: ", i, j);
            scanf("%d", &arrA[i][j]);
        }
    }

    // take second array
    printf("\nEnter your second 2d array: \n");
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            printf("arrB[%d][%d]: ", i, j);
            scanf("%d", &arrB[i][j]);
        }
    }

    // sum of two matrix
    int sum = 0;
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            sum = arrA[i][j] + arrB[i][j];
            arrC[i][j] = sum;
        }
    }

    // print sum array
    printf("\nSum of two array: \n");
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            printf("%d ", arrC[i][j]);
        }

        printf("\n");
    }
}