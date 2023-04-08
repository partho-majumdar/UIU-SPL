#include <stdio.h>
#include <stdlib.h>

void InputMatrix(int **mat, int, int);
void ShowMatrix(int **mat, int, int);
void ScalarMatrix(int **mat, int, int, int);

void main()
{
    int r, c;
    printf("Enter row: ");
    scanf("%d", &r);

    printf("Enter col: ");
    scanf("%d", &c);

    int **mat = (int **)malloc(r * sizeof(int));
    for (int i = 0; i < r; i++)
    {
        mat[i] = (int *)malloc(c * sizeof(int));
    }

    int scalar;
    printf("Enter scaler value: ");
    scanf("%d", &scalar);

    InputMatrix(mat, r, c);

    printf("Original: \n");
    ShowMatrix(mat, r, c);

    printf("\nMultiplied by %d: \n", scalar);
    ScalarMatrix(mat, r, c, scalar);
    ShowMatrix(mat, r, c);
}

void InputMatrix(int **mat, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Mat[%d][%d]: ", i, j);
            scanf("%d", (*(mat + i) + j));
        }
    }
}

void ShowMatrix(int **mat, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%5d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

void ScalarMatrix(int **mat, int row, int col, int scalar)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            *(*(mat + i) + j) *= scalar;
        }
    }
}
