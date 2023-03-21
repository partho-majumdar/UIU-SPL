#include <stdio.h>
#include <math.h>

int minimum_value(int a, int b);

void main()
{
    int n;
    printf("Enter row number: ");
    scanf("%d", &n);

    for (int i = 0; i <= 2 * n - 2; i++)
    {
        for (int j = 0; j <= 2 * n - 2; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 1 - 1) - j;
            int bottom = (2 * n - 1 - 1) - i;

            int min1 = minimum_value(top, bottom);
            int min2 = minimum_value(left, right);

            int ans = n - minimum_value(min1, min2);

            printf("%d ", ans);
        }

        printf("\n");
    }
}

int minimum_value(int a, int b)
{
    int min = a > b ? b : a;
}
