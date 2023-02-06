#include <stdio.h>
#include <math.h>

void main()
{
    int input_value;
    int arr[100][100];

    printf("Enter total how many number you want to take as input in 2D array: ");
    scanf("%d", &input_value);

    int n = sqrt(input_value);
    int m = sqrt(input_value);

    // take input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // print
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d  ", arr[i][j]);
        }

        printf("\n");
    }
}