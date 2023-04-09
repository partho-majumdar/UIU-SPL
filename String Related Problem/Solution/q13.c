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

/*

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);

    int length = strlen(str);

    char str2[100];
    int i, j = 0;

    for (i = 0; i < length; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            str2[j++] = str[i]; // storing in new array

            while (str[i] == str[i + 1]) // not storing duplicate vowels
            {
                i++; // skipping repetitive vowels
            }
        }

        else
        {
            str2[j++] = str[i]; // for storing consonants
        }
    }
    str2[j] = '\0';
    puts(str2);
    return 0;
}

--> This code remove duplicate vowel

*/