#include <stdio.h>

int power(int, int);

void main()
{
    int n1, n2;
    printf("Enter two number: ");
    scanf("%d %d", &n1, &n2);

    int ans = power(n1, n2);
    printf("%d", ans);
}

int power(int x, int y)
{
    int sum = 1;

    for (int i = 1; i <= y; i++)
    {
        sum *= x;
    }
    return sum;
}