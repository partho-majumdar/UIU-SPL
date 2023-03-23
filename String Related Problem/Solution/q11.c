#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);

    int sum = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            sum += str[i] - '0';
        }
    }

    printf("%d", sum);
}