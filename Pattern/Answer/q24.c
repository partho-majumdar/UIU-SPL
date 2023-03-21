#include <stdio.h>

void main()
{
    int n;
    printf("Enter row number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // space1
        for (int j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }

        // star
        printf("*");

        // space2
        for (int j = 1; j <= 2 * (n - i) - 1; j++)
        {
            printf(" ");
        }

        // star
        if (i < n)
        {
            printf("*");
        }

        printf("\n");
    }
}

/*

*       *
 *     *
  *   *
   * *
    *

*/