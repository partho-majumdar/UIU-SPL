#include <stdio.h>

void main()
{
    int n;
    float num;

    printf("Enter how many number you want to take as input: ");
    scanf("%d", &n);

    float sum = 0;

    for (int i = 1; i <= n; i++)
    {
        printf("Enter number: ");
        scanf("%f", &num);

        sum += num;
    }

    float average = sum / n;
    printf("Average of %d inputs: %f", n, average);
}