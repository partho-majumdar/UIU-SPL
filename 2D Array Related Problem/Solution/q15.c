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

    // print ans
    printf("\nSum of all integer: ");
    int sum = 0;
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            sum += arr[i][j];
        }
    }

    printf("%d", sum);
}