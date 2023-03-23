#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);

    int length = strlen(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = 1; j < length - i; j++)
        {
            if (str[j] < str[j - 1])
            {
                int temp = str[j];
                str[j] = str[j - 1];
                str[j - 1] = temp;
            }
        }
    }

    puts(str);
}