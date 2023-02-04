#include <stdio.h>
int factorial(int n);

void main()
{
    int n, r;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter value of r: ");
    scanf("%d", &r);

    if (n >= r)
    {
        int fact_n = factorial(n);
        int fact_r = factorial(r);
        int fact_n_r = factorial(n - r);

        int ans = (fact_n) / (fact_n_r * fact_r);

        printf("%d", ans);
    }

    else
    {
        printf("Enter valid value of n & r and n>=r.");
    }
}

int factorial(int n)
{
    int sum = 1;

    for (int i = n; i >= 1; i--)
    {
        sum *= i;
    }

    return sum;
}