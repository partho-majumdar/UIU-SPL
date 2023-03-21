#include <stdio.h>

void main()
{
    int n;

    printf("Enter row number: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        int ascii_value = 65;

        for (int col = 1; col <= n - row + 1; col++)
        {
            printf("%c ", ascii_value);
            ascii_value++;
        }

        printf("\n");
    }
}
