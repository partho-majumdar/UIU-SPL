#include <stdio.h>

int sum_func(int);

void main()
{
    int input;
    printf("Enter how many input you want to take: ");
    scanf("%d", &input);
    int ans = sum_func(input);
    printf("Sum in Main: %d", ans);
}

int sum_func(int n)
{
    int num;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &num);

        sum += num;
    }

    printf("Sum in function: %d\n", sum);

    return sum;
}