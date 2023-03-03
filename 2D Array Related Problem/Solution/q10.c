#include <stdio.h>

void main()
{
    int arr[100][100], n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    // take input
    printf("Enter your matrix: \n");
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if ((i == 0 && j <= n / 2) || (i == n / 2) || (i <= n / 2 && j == n - 1) || (i >= n / 2 && j == 0) || (j == n / 2) || (i == n - 1 && j >= n / 2))
            {
                sum += arr[i][j];
            }
        }
    }

    printf("\n%d", sum);
}