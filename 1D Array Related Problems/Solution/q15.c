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

    // copy arr1's element in ans
    int i, j;
    for (i = 0; i <= n - 1; i++)
    {
        // repeated element is not allowed so we check is any value repeated
        for (j = 0; j <= k - 1; j++)
        {
            if (ans[j] == arr1[i])
            {
                break;
            }
        }

        // if not repeated then store value in set
        if (j == k)
        {
            ans[k] = arr1[i];
            k++;
        }
    }

    // copy arr2's element in ans
    for (i = 0; i <= m - 1; i++)
    {
        // repeated element is not allowed so we check is any value repeated
        for (j = 0; j <= k - 1; j++)
        {
            if (ans[j] == arr2[i])
            {
                break;
            }
        }

        // if not repeated then store value in set
        if (j == k)
        {
            ans[k] = arr2[i];
            k++;
        }
    }

    // print ans
    printf("\nHere is the ans: \n");
    for (int i = 0; i <= k - 1; i++)
    {
        printf("%d  ", ans[i]);
    }
}