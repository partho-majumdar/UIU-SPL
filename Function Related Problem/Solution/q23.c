#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int find_substr(char *, char *);
int str_length(char *);

void main()
{
    char *str = (char *)malloc(100 * sizeof(char));
    char *word = (char *)malloc(100 * sizeof(char));

    printf("Enter string: ");
    gets(str);

    printf("Enter word: ");
    gets(word);

    int ans = find_substr(str, word);
    printf("%d ", ans);
}

int find_substr(char *str, char *word)
{
    int length1 = str_length(str);
    int length2 = str_length(word);

    int j = 0;

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
                return 1;
            }
        }
    }

    return -1;
}

int str_length(char *string)
{
    int i = 0;
    while (*(string + i) != '\0')
    {
        i++;
    }

    return i;
}