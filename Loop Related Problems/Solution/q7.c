#include <stdio.h>
#include <stdbool.h>

void main()
{
    char ch;

    int count = 1;

    while (true)
    {
        printf("Enter any inputs: ");
        scanf(" %c", &ch);

        if (ch == 'A')
        {
            break;
        }

        else
        {
            printf("Input %d: %c\n", count, ch);
            count++;
        }
    }
}