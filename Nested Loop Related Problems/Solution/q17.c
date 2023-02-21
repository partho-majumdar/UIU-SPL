#include <stdio.h>
int main()
{
    int n;

    printf("Enter row number and row must be odd: ");
    scanf("%d", &n);

    int num1 = n / 2 * 3;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // center horizontal, center vertical, upper left diagonal, bottom left diagonal, upper right diagonal, bottom right diagonal
            if (i == n / 2 || j == n / 2 || i + j == n / 2 || i - j == n / 2 || j - i == n / 2 || i + j == num1)
            {
                printf("*");
            }

            else
            {
                printf("_");
            }
        }

        printf("\n");
    }
    return 0;
}
