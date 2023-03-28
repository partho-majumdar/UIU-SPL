#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);

    int i = 0, count = 0;

    // remove first space
    while (str[i] == ' ')
    {
        i++;
    }

    // Count words
    for (; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
        {
            count++;
        }
    }

    printf("%d", count + 1);
}
