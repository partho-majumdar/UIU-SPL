#include <stdio.h>

void main()
{
    int arr[100][100];
    int input_value, m, n;

    printf("Enter value of matrix size: ");
    scanf("%d", &input_value);

    m = input_value;
    n = input_value;

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

    // print major diagonal
    printf("\nMajor diagonal: ");
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (i - j == 0)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }

    // print minor diagonal
    printf("\nMinor diagonal: ");
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (i + j == n - 1)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }
}