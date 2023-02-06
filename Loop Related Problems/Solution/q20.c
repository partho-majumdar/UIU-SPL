#include <stdio.h>

void main()
{
    int n;

    printf("Enter nth term: ");
    scanf("%d", &n);

    int sum = 0, ans = 0;

    for (int i = 1; i <= n; i++)
    {
        ans = (ans * 10) + i;
        sum += ans;
    }

    printf("%d", sum);
}