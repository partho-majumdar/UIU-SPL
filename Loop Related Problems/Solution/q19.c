#include <stdio.h>
#include <math.h>

void main()
{
    int n = 10, x;

    printf("Enter value of x: ");
    scanf("%d", &x);

    float sum = 0.0;
    int sign = -1, fact = 1;
    sum = x;

    for (int i = 3; i <= n; i += 2)
    {
        fact = fact * i * (i - 1);
        sum = sum + (sign * (pow(x, i)) / fact);
        sign = sign * -1;
    }

    printf("Ans: %f", sum);
}
