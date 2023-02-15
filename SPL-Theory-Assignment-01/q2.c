#include <stdio.h>

void main()
{
    int n;

    printf("Enter row number: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= row - 1; space++)
        {
            printf("  ");
        }

        for (int number = n - row + 1; number >= 1; number--)
        {
            if (row == n)
            {
                printf("0");
            }

            else
            {
                printf("%d ", number);
            }
        }

        printf("\n");
    }
}

/*

5 4 3 2 1
  4 3 2 1
    3 2 1
      2 1
        0

*/
