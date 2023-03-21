#include <stdio.h>

void main()
{
    int n;
    printf("Enter row number: ");
    scanf("%d", &n);

    // upper part
    for (int i = 1; i <= n; i++)
    {
        // space1
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // star
        printf("*");

        // space2
        for (int j = 1; j <= 2 * i - 3; j++)
        {
            printf(" ");
        }

        // star
        if (i > 1)
        {
            printf("*");
        }

        printf("\n");
    }

    // lower part
    for (int i = 1; i <= n - 1; i++)
    {
        // space1
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }

        // star
        printf("*");

        // space2
        for (int j = 1; j <= 2 * (n - 1 - i) - 1; j++)
        {
            printf(" ");
        }

        // star
        if (i < n - 1)
        {
            printf("*");
        }

        printf("\n");
    }
}

/*

    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *

*/