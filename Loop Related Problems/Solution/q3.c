#include <stdio.h>

void main()
{
    int n;

    printf("Enter nth term: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", 0);
        }

        else
        {
            printf("%d ", 1);
        }
    }
}