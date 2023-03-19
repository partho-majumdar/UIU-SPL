#include <stdio.h>

void main()
{
    int arr1[100], arr2[100];

    int n1, n2;

    printf("Enter total number of element in first array: ");
    scanf("%d", &n1);

    // take first array input
    printf("Enter first array value: \n");
    for (int i = 0; i <= n1 - 1; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter total number of element in second array: ");
    scanf("%d", &n2);

    // take second array input
    printf("\nEnter second array value: \n");
    for (int i = 0; i <= n2 - 1; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr2[i]);
    }

    // set intersection
    int visit[100] = {0};
    int ans[100], k = 0;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j] && visit[j] == 0)
            {
                ans[k] = arr1[i];
                k++;
                visit[j] = 1;
                break;
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