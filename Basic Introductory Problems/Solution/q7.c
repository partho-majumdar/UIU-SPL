#include <stdio.h>

void main()
{
    int val1;
    float val2;
    char ch;

    printf("Enter a integer, a floating point number, a character: ");
    scanf("%d %f %c", &val1, &val2, &ch);

    printf("The integer value: %d\n", val1);
    printf("The floating point value: %f\n", val2);
    printf("The character value: %c", ch);
}