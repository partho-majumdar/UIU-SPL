#include <stdio.h>

void main()
{
    int arr1[100], arr2[100], ans[100];

    int n, m, k = 0;

    printf("Enter total number of element in first array: ");
    scanf("%d", &n);

    // take first array input
    printf("Enter first array value: \n");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter total number of element in second array: ");
    scanf("%d", &m);

    // take second array input
    printf("\nEnter second array value: \n");
    for (int i = 0; i <= m - 1; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr2[i]);
    }

    // set intersection
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            if (arr1[i] == arr2[j])
            {
                ans[k] = arr1[i];
                k++;
            }
        }
    }

    if (k == 0)
    {
        printf("Empty set");
    }

    else
    {
        for (int i = 0; i <= k - 1; i++)
        {
            printf("%d  ", ans[i]);
        }
    }
}