#include <stdio.h>

void main()
{
    int n;

    printf("Enter nth term: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1, j = 1; i <= n; i++, j++)
    {
        if (i % 2 != 0)
        {
            sum += j;
        }

        else
        {
            sum -= j;
        }
    }

    printf("Result: %d", sum);
}