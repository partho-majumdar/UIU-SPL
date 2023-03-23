#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        int convert = toupper(str[i]);
        printf("%c", convert);
    }
}