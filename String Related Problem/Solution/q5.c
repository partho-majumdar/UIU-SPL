#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);

    int length = strlen(str);

    for (int i = 0; i < length / 2; i++)
    {
        int temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    puts(str);
}