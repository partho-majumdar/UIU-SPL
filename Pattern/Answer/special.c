#include <stdio.h>

void main()
{
    int n = 10;

    // upper part
    for (int i = 1; i <= 3; i++)
    {
        // space1
        for (int j = 1; j <= 3 - i; j++)
        {
            printf(" ");
        }

        // star1
        for (int k = 1; k <= 2 * i + 3; k++)
        {
            printf("*");
        }

        // space2
        for (int j = 1; j <= n - 2 * i - 3; j++)
        {
            printf(" ");
        }

        // star2
        for (int k = 1; k <= 2 * i + 3; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    // lower part
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }

        // star
        for (int k = 1; k <= 2 * (n - i) + 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }
}

/*

Special pattern for special someone 🥀🌹

  ****     ****
 ******   ******
******** ********
*****************
 ***************
  *************
   ***********
    *********
     *******
      *****
       ***
        *

*/