#include <stdio.h>

void main()
{
    int n;

    printf("Enter nth term: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1, j = 1, k = 2; i <= n; i++, j++, k++)
    {
        sum += ((j * j) * k);
    }

    printf("Result: %d", sum);
}