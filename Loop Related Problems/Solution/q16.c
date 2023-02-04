#include <stdio.h>

void main()
{
    int val1, val2;

    printf("Enter first value: ");
    scanf("%d", &val1);

    printf("Enter second value: ");
    scanf("%d", &val2);

    int temp1 = val1, temp2 = val2;

    while (val2 != 0)
    {
        int rem = val1 % val2;
        val1 = val2;
        val2 = rem;
    }

    int gcd = val1;
    int lcm = (temp1 * temp2) / gcd;

    printf("GCD: %d\n", gcd);
    printf("LCM: %d", lcm);
}