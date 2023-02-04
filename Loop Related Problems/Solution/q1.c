#include <stdio.h>

void main()
{
    int n;

    printf("Enter nth term: ");
    scanf("%d", &n);

    for (int i = 1, j = 1; i <= n; i++, j++)
    {
        printf("%d ", j);
    }
}