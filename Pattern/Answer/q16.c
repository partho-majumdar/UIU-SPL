#include <stdio.h>

void main()
{
    int n;
    printf("Enter row number: ");
    scanf("%d", &n);

    int init_value = 65;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", init_value);
        }

        printf("\n");
        init_value++;
    }
}