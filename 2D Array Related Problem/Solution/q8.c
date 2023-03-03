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
    int max = 0;
    int location_i = 0, location_j = 0;

    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                location_i = i;
                location_j = j;
            }
        }
    }

    printf("Max: %d\n", max);
    printf("Location: [%d][%d]", location_i, location_j);
}