#include <stdio.h>

void main()
{
    int arr[100];

    int n;
    printf("Enter how many number you want to take as input: ");
    scanf("%d", &n);

    // take input
    printf("Enter your array: \n");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // remove duplicate
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k <= n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                n--;
                j--;
            }
        }
    }

    // print array
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
}

/*

#include <stdio.h>

void main()
{
    int arr[5] = {1, 1, 1, 1, 2};
    int ans[100];

    int n = 5, k = 0;

    for (int i = 0; i < n; i++)
    {
        int flag = 1;

        for (int j = 0; j < k; j++)
        {
            if (arr[i] == ans[j])
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            ans[k] = arr[i];
            k++;
        }
    }

    for (int i = 0; i < k; i++)
    {
        printf("%d ", ans[i]);
    }
}

*/