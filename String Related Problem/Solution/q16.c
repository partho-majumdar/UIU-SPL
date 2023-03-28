#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    printf("Enter string:");
    gets(str);
    int length = strlen(str);

    for (int i = 0; str[i] == ' '; i++)
    {
        for (int j = i; j < length; j++)
        {
            str[j] = str[j + 1];
        }
        i--;
        length--;
    }

    for (int i = 0; i < length; i++)
    {
        if (str[i] == ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
        {
            for (int j = i; j < length; j++)
            {
                str[j] = str[j + 1];
            }
            i--;
            length--;
        }
    }
    puts(str);
}

/*

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "  N  a  i  m  a  ";
    // gets(str);
    int len = strlen(str);
    int i, j;

    // remove spaces from the beginning of the string
    for (i = 0; str[i] == ' '; i++)
    {
        for (j = i; j < len; j++)
        {
            str[j] = str[j + 1];
        }
        i--;   // decrement i to handle consecutive spaces
        len--; // decrement len to reflect the new length of the string
    }

    // remove extra spaces within the string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
        {
            for (j = i + 1; str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }

            str[j - 1] = '\0';
            i--;
        }
    }

    puts(str);
    return 0;
}

*/

// Remove unnecessary space