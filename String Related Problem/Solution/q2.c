#include <stdio.h>
#include <string.h>

void main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    int i, j;

    // Find the end of str1
    for (i = 0; str1[i] != '\0'; i++);

    // Copy str2 to the end of str1
    for (j = 0; str2[j] != '\0'; j++)
    {
        str1[i] = str2[j];
        i++;
    }

    // Add the null terminator to the end of the concatenated string
    str1[i] = '\0';

    printf("Concatenated string: %s\n", str1);
}


// ------------ R - 02 -------------

/*

#include <stdio.h>
#include <string.h>

void main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        printf("%c", str1[i]);
    }

    for (int j = 0; str2[j] != '\0'; j++)
    {
        printf("%c", str2[j]);
    }
}


*/
