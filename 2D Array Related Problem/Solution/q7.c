#include <stdio.h>
#define SIZE 100

void main()
{
    int arr1[SIZE][SIZE], arr2[SIZE][SIZE], arr3[SIZE][SIZE];

    int r1, r2, c1, c2;

    printf("Enter first matrix row number: ");
    scanf("%d", &r1);
    printf("Enter first matrix col number: ");
    scanf("%d", &c1);
    printf("Enter second matrix row number: ");
    scanf("%d", &r2);
    printf("Enter second matrix col number: ");
    scanf("%d", &c2);

    while (r2 != c1)
    {
        printf("Error! Enter valid matrix and first matrix col equal to second matrix row\n");

        printf("Enter first matrix row number: ");
        scanf("%d", &r1);
        printf("Enter first matrix col number: ");
        scanf("%d", &c1);
        printf("Enter second matrix row number: ");
        scanf("%d", &r2);
        printf("Enter second matrix col number: ");
        scanf("%d", &c2);
    }

    // take first matrix
    printf("Enter your first matrix: \n");
    for (int i = 0; i <= r1 - 1; i++)
    {
        for (int j = 0; j <= c1 - 1; j++)
        {
            printf("arr1[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // take second matrix
    printf("\nEnter your second matrix: \n");
    for (int i = 0; i <= r2 - 1; i++)
    {
        for (int j = 0; j <= c2 - 1; j++)
        {
            printf("arr2[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // multiplication of two matrix
    int sum = 0;
    for (int i = 0; i <= r1 - 1; i++)
    {
        for (int j = 0; j <= c2 - 1; j++)
        {
            for (int k = 0; k <= c1 - 1; k++)
            {
                sum += arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = sum;
            sum = 0;
        }
    }

    // print ans
    printf("\nMultiplication of two matrix is: \n");
    for (int i = 0; i <= r1 - 1; i++)
    {
        for (int j = 0; j <= c2 - 1; j++)
        {
            printf("%5d ", arr3[i][j]);
        }

        printf("\n");
    }
}

/*

2 * 3
3 * 2

2 * 2
3 * 2

1st col == 2nd row
ans --> 1st row * 2nd col 

*/