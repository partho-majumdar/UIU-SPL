#include <stdio.h>
#include <string.h>

int isPalindrome(char *, int);

void main()
{
    char word[25];
    printf("Enter string: ");
    gets(word);

    char *p = word;
    int len = strlen(word);
    int ans = isPalindrome(p, 0);

    if (ans)
    {
        for (int i = 0; i <= len; i++)
        {
            int val = i <= len / 2 ? i + 1 : (len - i + 1);

            for (int j = 1; j <= val; j++)
            {
                printf("$");
            }

            printf("%c", word[i]);
        }
    }

    else
    {
        printf("Not palindrome\n");
    }
}

int isPalindrome(char *word, int i)
{
    int len = strlen(word) - (i + 1);

    if (word[i] == word[len])
    {
        if (i + 1 == len || i == len)
        {
            return 1;
        }
        isPalindrome(word, i + 1);
    }

    else
    {
        return 0;
    }
}
