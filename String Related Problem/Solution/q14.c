#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);
    strupr(str);

    int length = strlen(str);
    int count = 0;
    int max_occur = 0;
    char max_occur_char;
    int visit[100] = {0};

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (str[i] == str[j] && visit[j] == 0)
            {
                count++;
                visit[j] = 1;
            }
        }

        if (count >= max_occur)
        {
            max_occur = count;
            max_occur_char = str[i];
        }

        count = 0;
    }

    printf("%c", max_occur_char);
}