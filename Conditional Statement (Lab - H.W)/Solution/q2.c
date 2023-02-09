#include <stdio.h>
#include <ctype.h>

void main()
{
    char ch;

    printf("Enter any alphabet: ");
    scanf("%c", &ch);

    char upper_ch = toupper(ch);

    if (upper_ch == 'A' || upper_ch == 'E' || upper_ch == 'I' || upper_ch == 'O' || upper_ch == 'U')
    {
        printf("Vowel");
    }

    else
    {
        printf("Consonant");
    }
}