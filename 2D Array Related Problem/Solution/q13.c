#include <stdio.h>

void main()
{
    int arr1[100][100], arr2[100][100];
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    // take input
    printf("Enter your matrix: \n");
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // transpose matrix
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            arr2[i][j] = arr1[j][i];
        }
    }

    int count = 0;

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                count++;
                break;
            }
        }
    }

    if (count == 0)
    {
        printf("Yes! Symmetric");
    }

    else
    {
        printf("No! Not Symmetric");
    }
}

/*

Symmetric matrix --> A == A^T (original == transpose)

B(i,j) == A(j,i)

*/