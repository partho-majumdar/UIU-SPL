#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);

    int length = strlen(str);
    int flag = 1;

    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("Yes! Palindrome");
    }

    else
    {
        printf("Not! Palindrome");
    }
}