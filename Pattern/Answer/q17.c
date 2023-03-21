#include <stdio.h>

void main()
{
    int n;
    printf("Enter row number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // char
        char ch = 'A';
        int break_point = i;

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("%c", ch);

            if (k <= break_point)
            {
                ch++;
            }

            else
            {
                ch--;
            }
        }

        printf("\n");
    }
}