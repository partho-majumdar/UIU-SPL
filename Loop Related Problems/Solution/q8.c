#include <stdio.h>

void main()
{
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    int sum = 0;

    while (n != 0)
    {
        int last_digit = n % 10;
        sum = (sum * 10) + last_digit;
        n /= 10;
    }

    printf("%d", sum);
}