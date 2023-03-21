#include <stdio.h>

void main()
{
    int n;
    printf("Enter nth number: ");
    scanf("%d", &n);

    int temp_n = n;

    for (int i = 1; i <= n; i++)
    {
        // number
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%d", j);
        }

        // star
        for (int k = 1; k <= 2 * (i - 1); k++)
        {
            printf("*");
        }

        // number
        for (int l = n - i + 1; l >= 1; l--)
        {
            printf("%d", l);
        }

        printf("\n");
    }
}

/*

1234554321
1234**4321
123****321
12******21
1********1

*/