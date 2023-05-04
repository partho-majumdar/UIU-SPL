#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char arrWord[][50] = {"aeiouplm", "aeiplm", "aeiouplmnuvw", "aeiplmnqrs"};

    int size = sizeof(arrWord) / sizeof(arrWord[0]);
    int i = 0;
    int vowel = 0;
    int consonant = 0;
    int maxLen = 0;
    char longWord[50] = " ";

    while (i < size)
    {
        char individualWord[50] = " ";
        strcpy(individualWord, arrWord[i]);
        int indLen = strlen(individualWord);

        for (int j = 0; j < indLen; j++)
        {
            char ch = toupper(individualWord[j]);
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                vowel++;
            }

            else
            {
                consonant++;
            }
        }

        if (vowel >= 3 && consonant >= 3 && indLen > maxLen)
        {
            maxLen = indLen;
            strcpy(longWord, individualWord);
        }

        i++;
        vowel = 0;
        consonant = 0;
    }

    printf("The longest word is: %s", longWord);
}
