#include <stdio.h>

void main()
{
    int n;

    printf("Enter nth term: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("%d", n);
    }

    else if (n > 1)
    {
        int first = 1, second = 1;

        printf("%d %d ", first, second);

        int sum = 0;

        for (int i = 1; i <= n - 2; i++)
        {
            sum = first + second;
            printf("%d ", sum);

            first = second;
            second = sum;
        }
    }
}