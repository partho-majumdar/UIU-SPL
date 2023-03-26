#include <stdio.h>

void input_char(char);

void main()
{
    char value;
    printf("Enter any value: ");
    scanf("%c", &value);
    input_char(value);
}

void input_char(char ch)
{
    printf("Value received from main: %c", ch);
}