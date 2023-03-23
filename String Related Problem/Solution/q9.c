#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char str[100], ch;
    printf("Enter string: ");
    gets(str);
    strlwr(str);

    printf("Enter target character: ");
    scanf("%c", &ch);
    char ch_lower = tolower(ch);

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch_lower)
        {
            count++;
        }
    }

    printf("%d", count);
}