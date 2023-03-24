#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);

    int length = strlen(str);

    // reverse the entire string
    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    // reverse each word
    int j = 0;
    while (str[j] != '\0')
    {
        while (str[j] == ' ' && str[j] != '\0')
        {
            j++;
        }

        int start = j;

        while (str[j] != ' ' && str[j] != '\0')
        {
            j++;
        }

        int end = j - 1;

        while (start < end)
        {
            int temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }

    puts(str);
}
