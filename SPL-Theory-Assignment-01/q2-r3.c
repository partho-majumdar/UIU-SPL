#include <stdio.h>

void main()
{
    int n = 5;

    for (int i = n; i >= 1; i--)
    {
        for (int j = n - i; j >= 1; j--)
        {
            printf("  ");
        }

        for (int k = i; k >= 1; k--)
        {
            if (i == 1)
            {
                printf("%d ", 0);
            }

            else
            {
                printf("%d ", k);
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