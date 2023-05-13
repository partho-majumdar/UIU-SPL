#include <stdio.h>
#include <stdlib.h>

void InputMatrix(int (*mat)[5], int, int);
void ShowMatrix(int (*mat)[5], int, int);
void ScalarMatrix(int (*mat)[5], int, int, int);

void main()
{
    int r = 3, c = 5;
    int mat[3][5];

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

void InputMatrix(int (*mat)[5], int row, int col)
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

void ShowMatrix(int (*mat)[5], int row, int col)
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

void ScalarMatrix(int (*mat)[5], int row, int col, int scalar)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            *(*(mat + i) + j) *= scalar;
        }
    }
}

/*
----------- without pointer -----------

#include <stdio.h>

void InputMatrix(int mat[][5], int, int);
void ShowMatrix(int mat[][5], int, int);
void ScalarMatrix(int mat[][5], int, int, int);

void main()
{
    int r = 3, c = 5;
    int mat[3][5];

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

void InputMatrix(int mat[][5], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void ShowMatrix(int mat[][5], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%5d ", mat[i][j]);
        }
        printf("\n");
    }
}

void ScalarMatrix(int mat[][5], int row, int col, int scalar)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mat[i][j] *= scalar;
        }
    }
}

*/
