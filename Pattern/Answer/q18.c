#include <stdio.h>

void main()
{
    int n;
    printf("Enter row number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'E' - i + 1; ch <= 'E'; ch++)
        {
            printf("%c ", ch);
        }

        printf("\n");
    }
}