#include <stdio.h>

void main()
{
    int i, j, n;

    printf("Enter nth term: ");
    scanf("%d", &n);

    int sum = 0;

    if (n % 2 == 0)
    {
        for (i = n, j = n - 1; i >= 2, j >= 1; i -= 2, j -= 2)
        {
            sum += (i * (j * j));

            printf("%d.%d^2 + ", i, j);
        }
        printf("= %d", sum);
    }

    else
    {
        int init_val = n * n;

        printf("%d^2 + ", n);

        for (i = n - 1, j = n - 2; i >= 2, j >= 1; i -= 2, j -= 2)
        {
            sum += (i * (j * j));

            printf("%d.%d^2 + ", i, j);
        }

        printf("= %d", sum + init_val);
    }
}