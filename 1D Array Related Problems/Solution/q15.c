#include <stdio.h>

void main()
{
    int arr1[100], arr2[100], n1, n2;

    printf("Enter total number of element in arr1: ");
    scanf("%d", &n1);

    for (int i = 0; i < n1; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter total number of element in arr2: ");
    scanf("%d", &n2);

    for (int i = 0; i < n2; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr2[i]);
    }

    int ans[100];

    int k = 0;

    for (int i = 0; i < n1; i++)
    {
        ans[k] = arr1[i];
        k++;
    }

    for (int j = 0; j < n2; j++)
    {
        int found = 0;

        for (int i = 0; i < n1; i++)
        {
            if (arr2[j] == arr1[i])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            ans[k] = arr2[j];
            k++;
        }
    }

    printf("\nSet union: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", ans[i]);
    }
}

/*

#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int a[] = {1, 2, 3};
    int b[] = {4, 5};
    int output[MAX_SIZE];
    int i, j, k, n, m, found;

    n = sizeof(a) / sizeof(int);
    m = sizeof(b) / sizeof(int);

    k = 0;
    for (i = 0; i < n; i++)
    {
        found = 0;
        for (j = 0; j < k; j++)
        {
            if (a[i] == output[j])
            {
                found = 1;
                break;
            }
        }

        if (!found)
        {
            output[k++] = a[i];
        }
    }

    for (j = 0; j < m; j++)
    {
        found = 0;
        for (i = 0; i < n; i++)
        {
            if (b[j] == a[i])
            {
                found = 1;
                break;
            }
        }

        for (i = 0; i < k; i++)
        {
            if (b[j] == output[i])
            {
                found = 1;
                break;
            }
        }

        if (!found)
        {
            output[k++] = b[j];
        }
    }

    printf("The union of arrays a and b is:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", output[i]);
    }

    return 0;
}

*/