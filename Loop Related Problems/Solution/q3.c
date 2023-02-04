#include <stdio.h>

void main()
{
    int n;

    printf("Enter nth term: ");
    scanf("%d", &n);

    int j = 1;
    int k = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", k);
        }

        else
        {
            printf("%d ", j);
        }
    }
}