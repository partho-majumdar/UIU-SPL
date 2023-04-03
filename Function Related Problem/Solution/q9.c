#include <stdio.h>

int fact(int);

void main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int result = fact(n);
    printf("%d", result);
}

int fact(int n)
{
    int ans = 1;

    for (int i = n; i > 0; i--)
    {
        ans *= i;
    }

    return ans;
}

// ------------using recursion----------
/*

#include <stdio.h>

int fact(int);

void main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int ans = fact(n);
    printf("%d", ans);
}

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * fact(n - 1);
}

*/