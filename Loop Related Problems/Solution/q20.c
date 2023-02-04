#include <stdio.h>

void main()
{
    int n;

    printf("Enter nth term: ");
    scanf("%d", &n);

    int sum = 0, ans = 0;

    for (int i = 1, j = 1; i <= n; i++, j++)
    {
        ans = (ans * 10) + j;
        sum += ans;
    }

    printf("%d", sum);
}