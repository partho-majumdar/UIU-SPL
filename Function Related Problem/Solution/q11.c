#include <stdio.h>
#include <string.h>

int str_len(char[]);

void main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);
    int ans = str_len(str);
    printf("%d ", ans);
}

int str_len(char str[])
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

// -----------using Pointer--------

/*

#include <stdio.h>

int str_len(char *);

void main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);

    char *ptr_str = str;
    str_len(ptr_str);
}

int str_len(char *str)
{
    int count = 0;

    for (int i = 0; *(str + i) != '\0'; i++)
    {
        count++;
    }

    printf("%d", count);
}

*/