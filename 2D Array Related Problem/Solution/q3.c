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

    int det = (arr[0][0] * ((arr[1][1] * arr[2][2]) - (arr[1][2] * arr[2][1]))) - (arr[0][1] * ((arr[1][0] * arr[2][2]) - (arr[1][2] * arr[2][0]))) + (arr[0][2] * ((arr[1][0] * arr[2][1]) - (arr[1][1] * arr[2][0])));

    printf("%d", det);
}