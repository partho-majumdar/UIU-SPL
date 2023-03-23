#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);

    int length = strlen(str);

    for (int i = 0; i < length - 1; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (str[i] == str[j])
            {
                for (int k = j; k < length; k++)
                {
                    str[k] = str[k + 1];
                }
                j--;
                length--;
            }
        }
    }

    puts(str);
}