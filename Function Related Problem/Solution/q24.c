#include <stdio.h>

void gcd_lcm(int *, int *);

void main()
{
    int n1, n2;
    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);

    gcd_lcm(&n1, &n2);
}

void gcd_lcm(int *n1, int *n2)
{
    int temp1 = *n1;
    int temp2 = *n2;

    while (*n2 != 0)
    {
        int rem = *n1 % *n2;
        *n1 = *n2;
        *n2 = rem;
    }

    int gcd = *n1;
    int lcm = (temp1 * temp2) / gcd;

    printf("GCD: %d\nLCM: %d", gcd, lcm);
}