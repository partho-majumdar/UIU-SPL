#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    printf("%d", count);
}