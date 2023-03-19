#include <stdio.h>

void main()
{
    int arr1[100], arr2[100];
    int m, n;

    printf("Enter how many element you want to take in arr1: ");
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter how many element you want to take in arr2: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr2[i]);
    }

    int ans[100], k = 0;

    // calculate A - B
    for (int i = 0; i < m; i++)
    {
        int flag = 1;
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            ans[k] = arr1[i];
            k++;
        }
    }

    printf("\nSet operation of A-B: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", ans[i]);
    }

    int ans1[100], l = 0;

    // calculate B-A
    for (int i = 0; i < n; i++)
    {
        int flag = 1;

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
            ans1[l] = arr2[i];
            l++;
        }
    }

    printf("\nSet operation of B-A: ");
    for (int i = 0; i < l; i++)
    {
        printf("%d ", ans1[i]);
    }
}

/*

A = {1, 2, 3}
B = {2, 3, 4}

A - B = {1} --> B er moddhe ja thakbe A theke ta bad
            --> A er value ans er moddhe pathabo

*/