#include <stdio.h>

void main()
{
    int arr[100][100] = {0};
    int size, m, n;

    printf("Enter size of identity matrix: ");
    scanf("%d", &size);

    m = size;
    n = size;

    // set value in array
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (i == j)
            {
                arr[i][j] = 1;
            }

            else
            {
                arr[i][j] = 0;
            }
        }
    }

    // print value
    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }
}