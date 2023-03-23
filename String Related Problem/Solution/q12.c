#include <stdio.h>
#include <string.h>

void main()
{
    char str[100], word[100];
    printf("Enter string: ");
    gets(str);

    printf("Enter word: ");
    gets(word);

    int length1 = strlen(str);
    int length2 = strlen(word);

    int count = 0;
    int j;

    for (int i = 0; i < length1; i++)
    {
        if (str[i] == word[0])
        {
            for (j = 1; j < length2; j++)
            {
                if (str[i + j] != word[j])
                {
                    break;
                }
            }

            if (j == length2)
            {
                count++; // found
            }
        }
    }

    printf("%d", count);
}