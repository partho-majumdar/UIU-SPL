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

    // replace all duplicate integers with -1
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            for (int k = 0; k <= m - 1; k++)
            {
                for (int l = 0; l <= n - 1; l++)
                {
                    if ((i != k || j != l) && arr[i][j] == arr[k][l])
                    {
                        arr[k][l] = -1;
                    }
                }
            }
        }
    }

    // print ans
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            printf("%2d  ", arr[i][j]);
        }

        printf("\n");
    }
}
