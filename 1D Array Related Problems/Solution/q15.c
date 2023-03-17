#include <stdio.h>

void main()
{
    int arr1[100], arr2[200];
    int m, n;

    printf("Enter total number of element in arr1: ");
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter total number of element in arr2: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr2[i]);
    }

    int ans[100];

    int k = 0;

    // Loop through each element in arr1 and add it to ans
    for (int i = 0; i < m; i++)
    {
        ans[k] = arr1[i];
        k++;
    }

    // Loop through each element in arr2
    for (int i = 0; i < n; i++)
    {
        int flag = 1;

        // Loop through each element in arr1
        for (int j = 0; j < m; j++)
        {
            if (arr2[i] == arr1[j])
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            ans[k] = arr2[i];
            k++;
        }
    }

    printf("\nSet union: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", ans[i]);
    }
}